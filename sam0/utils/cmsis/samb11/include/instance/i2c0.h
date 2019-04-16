/**
 * \file
 *
 * \brief Instance description for I2C0
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

#ifndef _SAMB11_I2C0_INSTANCE_
#define _SAMB11_I2C0_INSTANCE_

/* ========== Register definition for I2C0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_I2C0_TRANSMIT_DATA       (0x40003000U) /**< \brief (I2C0) Writes one byte to I2C Transmit Data FIFO.  */
#define REG_I2C0_RECEIVE_DATA        (0x40003004U) /**< \brief (I2C0) Read one byte from I2C Receive Data FIFO.  */
#define REG_I2C0_TRANSMIT_STATUS     (0x40003008U) /**< \brief (I2C0) Status of the I2C transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  */
#define REG_I2C0_RECEIVE_STATUS      (0x4000300cU) /**< \brief (I2C0) Status of the I2C receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  */
#define REG_I2C0_CLOCK_SOURCE_SELECT (0x40003010U) /**< \brief (I2C0) Clock Source Select */
#define REG_I2C0_I2C_MODULE_ENABLE   (0x40003014U) /**< \brief (I2C0) I2C Enable */
#define REG_I2C0_I2C_CLK_DIVIDER     (0x40003018U) /**< \brief (I2C0) Register sets the divide ratio used to generate the sck clock from the module's input clock.  */
#define REG_I2C0_I2C_MASTER_MODE     (0x4000301cU) /**< \brief (I2C0) Selects I2C Master or Slave Mode.  */
#define REG_I2C0_I2C_ONBUS           (0x40003020U) /**< \brief (I2C0) Enable/Disable transactions when in Master Mode.  */
#define REG_I2C0_I2C_SLAVE_ADDRESS   (0x40003024U) /**< \brief (I2C0) Configures the I2C slave Address.  */
#define REG_I2C0_I2C_STATUS          (0x40003028U) /**< \brief (I2C0) Status of I2C Module.  */
#define REG_I2C0_TX_INTERRUPT_MASK   (0x4000302cU) /**< \brief (I2C0) Enable or Disable the generation of interrupts by the tx_status register.  */
#define REG_I2C0_RX_INTERRUPT_MASK   (0x40003030U) /**< \brief (I2C0) Enable or Disable the generation of interrupts by the rx_status register.  */
#define REG_I2C0_I2C_FLUSH           (0x40003034U) /**< \brief (I2C0) Writing to this address  flushes the contents of both the Tx and Rx FIFOs. The value written has no effect. Flushing the Tx FIFO will abort ongoing transactions when the current byte has been transmitted.  */
#else
#define REG_I2C0_TRANSMIT_DATA       (*(WoReg16*)0x40003000U) /**< \brief (I2C0) Writes one byte to I2C Transmit Data FIFO.  */
#define REG_I2C0_RECEIVE_DATA        (*(RoReg8 *)0x40003004U) /**< \brief (I2C0) Read one byte from I2C Receive Data FIFO.  */
#define REG_I2C0_TRANSMIT_STATUS     (*(RoReg8 *)0x40003008U) /**< \brief (I2C0) Status of the I2C transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  */
#define REG_I2C0_RECEIVE_STATUS      (*(RoReg8 *)0x4000300cU) /**< \brief (I2C0) Status of the I2C receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  */
#define REG_I2C0_CLOCK_SOURCE_SELECT (*(RwReg8 *)0x40003010U) /**< \brief (I2C0) Clock Source Select */
#define REG_I2C0_I2C_MODULE_ENABLE   (*(RwReg8 *)0x40003014U) /**< \brief (I2C0) I2C Enable */
#define REG_I2C0_I2C_CLK_DIVIDER     (*(RwReg16*)0x40003018U) /**< \brief (I2C0) Register sets the divide ratio used to generate the sck clock from the module's input clock.  */
#define REG_I2C0_I2C_MASTER_MODE     (*(RwReg8 *)0x4000301cU) /**< \brief (I2C0) Selects I2C Master or Slave Mode.  */
#define REG_I2C0_I2C_ONBUS           (*(RwReg8 *)0x40003020U) /**< \brief (I2C0) Enable/Disable transactions when in Master Mode.  */
#define REG_I2C0_I2C_SLAVE_ADDRESS   (*(RwReg8 *)0x40003024U) /**< \brief (I2C0) Configures the I2C slave Address.  */
#define REG_I2C0_I2C_STATUS          (*(RoReg8 *)0x40003028U) /**< \brief (I2C0) Status of I2C Module.  */
#define REG_I2C0_TX_INTERRUPT_MASK   (*(RwReg8 *)0x4000302cU) /**< \brief (I2C0) Enable or Disable the generation of interrupts by the tx_status register.  */
#define REG_I2C0_RX_INTERRUPT_MASK   (*(RwReg8 *)0x40003030U) /**< \brief (I2C0) Enable or Disable the generation of interrupts by the rx_status register.  */
#define REG_I2C0_I2C_FLUSH           (*(WoReg8 *)0x40003034U) /**< \brief (I2C0) Writing to this address  flushes the contents of both the Tx and Rx FIFOs. The value written has no effect. Flushing the Tx FIFO will abort ongoing transactions when the current byte has been transmitted.  */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMB11_I2C0_INSTANCE_ */