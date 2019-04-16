/**
 * \file
 *
 * \brief Instance description for SPI0
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

#ifndef _SAMB11_SPI0_INSTANCE_
#define _SAMB11_SPI0_INSTANCE_

/* ========== Register definition for SPI0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_SPI0_TRANSMIT_DATA       (0x40006000U) /**< \brief (SPI0) Writes one byte to SPI Transmit Data FIFO.  */
#define REG_SPI0_RECEIVE_DATA        (0x40006004U) /**< \brief (SPI0) Read one byte from SPI Receive Data FIFO.  */
#define REG_SPI0_TRANSMIT_STATUS     (0x40006008U) /**< \brief (SPI0) Status of the SPI transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  */
#define REG_SPI0_RECEIVE_STATUS      (0x4000600cU) /**< \brief (SPI0) Status of the SPI receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  */
#define REG_SPI0_CLOCK_SOURCE_SELECT (0x40006010U) /**< \brief (SPI0) Clock Source Select */
#define REG_SPI0_SPI_CLK_DIVIDER     (0x40006014U) /**< \brief (SPI0) Register sets the divide ratio used to generate the sck clock from the module's input clock.  */
#define REG_SPI0_SPI_MODULE_ENABLE   (0x40006018U) /**< \brief (SPI0) SPI Enable */
#define REG_SPI0_SPI_MASTER_MODE     (0x4000601cU) /**< \brief (SPI0) SPI Master/Slave Mode. When clear, SPI is in Slave Mode.  */
#define REG_SPI0_SPI_FAULT_ENABLE    (0x40006020U) /**< \brief (SPI0) SPI Fault Detection Mode. If set, SPI bus contention will be detected, and the fault  bit in the rx_status register will be set, forcing the SPI Module into idle state.  When a fault is detected, the current SPI transaction is abandoned and the interface switches  to slave mode in the wait state.   */
#define REG_SPI0_SPI_CONFIGURATION   (0x40006024U) /**< \brief (SPI0) SPI Operation Configuration Register. This register should not be modified while SPI bus is active,  otherwise the SPI Module state shall not be guaranteed.  */
#define REG_SPI0_SPI_BUS_STATUS      (0x40006028U) /**< \brief (SPI0) Status of SPI bus.  */
#define REG_SPI0_TX_INTERRUPT_MASK   (0x4000602cU) /**< \brief (SPI0) Enable or Disable the generation of interrupts by the tx_status register.  */
#define REG_SPI0_RX_INTERRUPT_MASK   (0x40006030U) /**< \brief (SPI0) Enable or Disable the generation of interrupts by the rx_status register.  */
#else
#define REG_SPI0_TRANSMIT_DATA       (*(WoReg8 *)0x40006000U) /**< \brief (SPI0) Writes one byte to SPI Transmit Data FIFO.  */
#define REG_SPI0_RECEIVE_DATA        (*(RoReg8 *)0x40006004U) /**< \brief (SPI0) Read one byte from SPI Receive Data FIFO.  */
#define REG_SPI0_TRANSMIT_STATUS     (*(RoReg8 *)0x40006008U) /**< \brief (SPI0) Status of the SPI transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  */
#define REG_SPI0_RECEIVE_STATUS      (*(RoReg8 *)0x4000600cU) /**< \brief (SPI0) Status of the SPI receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  */
#define REG_SPI0_CLOCK_SOURCE_SELECT (*(RwReg8 *)0x40006010U) /**< \brief (SPI0) Clock Source Select */
#define REG_SPI0_SPI_CLK_DIVIDER     (*(RwReg16*)0x40006014U) /**< \brief (SPI0) Register sets the divide ratio used to generate the sck clock from the module's input clock.  */
#define REG_SPI0_SPI_MODULE_ENABLE   (*(RwReg8 *)0x40006018U) /**< \brief (SPI0) SPI Enable */
#define REG_SPI0_SPI_MASTER_MODE     (*(RwReg8 *)0x4000601cU) /**< \brief (SPI0) SPI Master/Slave Mode. When clear, SPI is in Slave Mode.  */
#define REG_SPI0_SPI_FAULT_ENABLE    (*(RwReg8 *)0x40006020U) /**< \brief (SPI0) SPI Fault Detection Mode. If set, SPI bus contention will be detected, and the fault  bit in the rx_status register will be set, forcing the SPI Module into idle state.  When a fault is detected, the current SPI transaction is abandoned and the interface switches  to slave mode in the wait state.   */
#define REG_SPI0_SPI_CONFIGURATION   (*(RwReg8 *)0x40006024U) /**< \brief (SPI0) SPI Operation Configuration Register. This register should not be modified while SPI bus is active,  otherwise the SPI Module state shall not be guaranteed.  */
#define REG_SPI0_SPI_BUS_STATUS      (*(RoReg8 *)0x40006028U) /**< \brief (SPI0) Status of SPI bus.  */
#define REG_SPI0_TX_INTERRUPT_MASK   (*(RwReg8 *)0x4000602cU) /**< \brief (SPI0) Enable or Disable the generation of interrupts by the tx_status register.  */
#define REG_SPI0_RX_INTERRUPT_MASK   (*(RwReg8 *)0x40006030U) /**< \brief (SPI0) Enable or Disable the generation of interrupts by the rx_status register.  */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMB11_SPI0_INSTANCE_ */