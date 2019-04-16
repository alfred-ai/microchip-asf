/**
 * \file
 *
 * \brief Instance description for UART0
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
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
 *
 */

#ifndef _SAMB11_UART0_INSTANCE_
#define _SAMB11_UART0_INSTANCE_

/* ========== Register definition for UART0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_UART0_TRANSMIT_DATA       (0x40004000U) /**< \brief (UART0) Writes one byte to UART Transmit Data FIFO.  */
#define REG_UART0_TRANSMIT_STATUS     (0x40004004U) /**< \brief (UART0) Status of the UART transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  */
#define REG_UART0_TX_INTERRUPT_MASK   (0x40004008U) /**< \brief (UART0) Enable or Disable the generation of interrupts by the tx_status register.  */
#define REG_UART0_RECEIVE_DATA        (0x40004010U) /**< \brief (UART0) Read one byte from UART Receive Data FIFO.  */
#define REG_UART0_RECEIVE_STATUS      (0x40004014U) /**< \brief (UART0) Status of the UART receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  */
#define REG_UART0_RX_INTERRUPT_MASK   (0x40004018U) /**< \brief (UART0) Enable or Disable the generation of interrupts by the rx_status register.  */
#define REG_UART0_RECEIVE_TIMEOUT     (0x4000401cU) /**< \brief (UART0) Timeout counter configuration.  */
#define REG_UART0_UART_CONFIGURATION  (0x40004020U) /**< \brief (UART0) UART Operation Configuration Register, for both Rx and Tx.  */
#define REG_UART0_UART_BAUD_RATE      (0x40004024U) /**< \brief (UART0) Baud Rate Control Register. Bits 15:3 specify the integral division of the clock (divide by n),  and bit 2:0 specify the fractional division.  */
#define REG_UART0_UART_CLOCK_SOURCE   (0x40004028U) /**< \brief (UART0) Selects Source of UART Clock  */
#else
#define REG_UART0_TRANSMIT_DATA       (*(WoReg8 *)0x40004000U) /**< \brief (UART0) Writes one byte to UART Transmit Data FIFO.  */
#define REG_UART0_TRANSMIT_STATUS     (*(RoReg8 *)0x40004004U) /**< \brief (UART0) Status of the UART transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  */
#define REG_UART0_TX_INTERRUPT_MASK   (*(RwReg8 *)0x40004008U) /**< \brief (UART0) Enable or Disable the generation of interrupts by the tx_status register.  */
#define REG_UART0_RECEIVE_DATA        (*(RoReg8 *)0x40004010U) /**< \brief (UART0) Read one byte from UART Receive Data FIFO.  */
#define REG_UART0_RECEIVE_STATUS      (*(RoReg8 *)0x40004014U) /**< \brief (UART0) Status of the UART receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  */
#define REG_UART0_RX_INTERRUPT_MASK   (*(RwReg8 *)0x40004018U) /**< \brief (UART0) Enable or Disable the generation of interrupts by the rx_status register.  */
#define REG_UART0_RECEIVE_TIMEOUT     (*(RwReg8 *)0x4000401cU) /**< \brief (UART0) Timeout counter configuration.  */
#define REG_UART0_UART_CONFIGURATION  (*(RwReg8 *)0x40004020U) /**< \brief (UART0) UART Operation Configuration Register, for both Rx and Tx.  */
#define REG_UART0_UART_BAUD_RATE      (*(RwReg16*)0x40004024U) /**< \brief (UART0) Baud Rate Control Register. Bits 15:3 specify the integral division of the clock (divide by n),  and bit 2:0 specify the fractional division.  */
#define REG_UART0_UART_CLOCK_SOURCE   (*(RwReg8 *)0x40004028U) /**< \brief (UART0) Selects Source of UART Clock  */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMB11_UART0_INSTANCE_ */