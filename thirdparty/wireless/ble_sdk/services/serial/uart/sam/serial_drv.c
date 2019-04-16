/**
 * \file serial_drv.c
 *
 * \brief Handles Serial driver functionalities
 *
 * Copyright (c) 2013-2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 */

/* === INCLUDES ============================================================ */

#include "asf.h"
#include "serial_drv.h"
#include "conf_serialdrv.h"
#include "serial_fifo.h"

/* === GLOBALS ========================================================== */
volatile bool ble_usart_tx_cmpl = true;

ser_fifo_desc_t ble_usart_tx_fifo;
uint8_t ble_usart_tx_buf[BLE_MAX_TX_PAYLOAD_SIZE];

ser_fifo_desc_t ble_usart_rx_fifo;
uint8_t ble_usart_rx_buf[BLE_MAX_TX_PAYLOAD_SIZE];

extern void platform_process_rxdata(uint32_t t_rx_data);

/* === TYPES =============================================================== */

/* === MACROS ============================================================== */

/**
 * \brief Set peripheral mode for one single IOPORT pin.
 * It will configure port mode and disable pin mode (but enable peripheral).
 * \param pin IOPORT pin to configure
 * \param mode Mode masks to configure for the specified pin (\ref ioport_modes)
 */
#define ioport_set_pin_peripheral_mode(pin, mode) \
	do {\
		ioport_set_pin_mode(pin, mode);\
		ioport_disable_pin(pin);\
	} while (0)
	
/* === PROTOTYPES ========================================================== */

/* === GLOBALS ========================================================== */

/* === IMPLEMENTATION ====================================================== */

uint8_t configure_serial_drv(void)
{
	/* Usart async mode 8 bits transfer test */
	sam_usart_opt_t usart_settings = {
		.baudrate     = CONF_UART_BAUDRATE,
		.char_length  = US_MR_CHRL_8_BIT,
		.parity_type  = US_MR_PAR_NO,
		.stop_bits    = US_MR_NBSTOP_1_BIT,
		.channel_mode = US_MR_CHMODE_NORMAL,
		/* This field is only used in IrDA mode. */
		.irda_filter  = 0
	};

	/* Enable the peripheral and set USART mode. */
	flexcom_enable(BLE_USART_FLEXCOM);
	flexcom_set_opmode(BLE_USART_FLEXCOM, FLEXCOM_USART);

	/* Configure USART */
	usart_init_rs232(BLE_UART, &usart_settings,
	sysclk_get_peripheral_hz());
	
	/* Enable the receiver and transmitter. */
	usart_enable_tx(BLE_UART);
	usart_enable_rx(BLE_UART);

	/* Enable UART IRQ */
	usart_enable_interrupt(BLE_UART, US_IER_RXRDY);
	
	ser_fifo_init(&ble_usart_rx_fifo, ble_usart_rx_buf, BLE_MAX_RX_PAYLOAD_SIZE);
	ser_fifo_init(&ble_usart_tx_fifo, ble_usart_tx_buf, BLE_MAX_TX_PAYLOAD_SIZE);

	/* Enable UART interrupt */
	NVIC_EnableIRQ(BLE_UART_IRQn);

	return STATUS_OK;
}

void BLE_UART_Handler(void)
{
	if (usart_is_rx_ready(BLE_UART))
	{
		uint32_t rx_data = 0;
		if (usart_read(BLE_UART, &rx_data) == 0)
		{
			platform_process_rxdata(rx_data);
		}
	}
	
	if ((usart_is_tx_empty(BLE_UART))  && (!ble_usart_tx_cmpl))
	{
		uint8_t txdata;
		if(ser_fifo_pull_uint8(&ble_usart_tx_fifo, &txdata) == SER_FIFO_OK)
		{
			usart_putchar(BLE_UART, txdata);
		}
		else
		{
			usart_disable_interrupt(BLE_UART, US_IER_TXEMPTY);
			ble_usart_tx_cmpl  = true;
		}
	}
}

uint16_t serial_drv_send(uint8_t* data, uint16_t len)
{
  uint16_t i;
  uint8_t txdata;
  
  while(ble_usart_tx_cmpl == false);
  for (i =0; i < len; i++)
  {
	  ser_fifo_push_uint8(&ble_usart_tx_fifo, data[i]);
  }
  
  //Set Tx Data write complete to false
  ble_usart_tx_cmpl = false;
  

  if(ser_fifo_pull_uint8(&ble_usart_tx_fifo, &txdata) == SER_FIFO_OK)
  {
	  usart_putchar(BLE_UART, txdata);
	  //Enable the USART Empty Interrupt
	  usart_enable_interrupt(BLE_UART, US_IER_TXEMPTY);
	  //Wait for Tx Data write complete
	  while(ble_usart_tx_cmpl == false);
  }
  
  if(ble_usart_tx_cmpl)
  {
	  #if SERIAL_DRV_TX_CB_ENABLE
		  SERIAL_DRV_TX_CB();
	  #endif		 
  }
  
  return STATUS_OK;
}

uint8_t serial_read_data(uint8_t* data, uint16_t max_len)
{
	uint32_t i;
	uint16_t uart_rx_data;
	for (i = 0; i < max_len; ++i)
	{
		if(serial_read_byte(&uart_rx_data) == STATUS_OK)
		{
			data[i] = (uint8_t)uart_rx_data;
		}
		else
		{
			return i;
		}
	}
	return max_len;
}

uint8_t serial_read_byte(uint16_t* data)
{
   uint32_t temp;
   if (usart_read(BLE_UART, &temp) == 0)
   {
	   *data = (uint8_t)temp;
	   return STATUS_OK;
   }
   else
   {
	   return STATUS_ERR_BUSY;
   }
}


/* EOF */
