/**
 * \file
 *
 * \brief Component description for SPI
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

#ifndef _SAMB11_SPI_COMPONENT_
#define _SAMB11_SPI_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SPI */
/* ========================================================================== */
/** \addtogroup SAMB11_SPI SPI Master/Slave Controller */
/*@{*/

#define SPI_S1234
#define REV_SPI                          0x100

/* -------- SPI_TRANSMIT_DATA : (SPI Offset: 0x00) (/W  8) Writes one byte to SPI Transmit Data FIFO.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TX_BYTE:8;                 /*!< bit:   0..7  Writes data in transmit FIFO.            */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} SPI_TRANSMIT_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_TRANSMIT_DATA_OFFSET              0x00           /**<  \brief (SPI_TRANSMIT_DATA offset) Writes one byte to SPI Transmit Data FIFO.  */
#define SPI_TRANSMIT_DATA_RESETVALUE          0x00ul         /**<  \brief (SPI_TRANSMIT_DATA reset_value) Writes one byte to SPI Transmit Data FIFO.  */

#define SPI_TRANSMIT_DATA_TX_BYTE_Pos         0  /**< \brief (SPI_TRANSMIT_DATA) Writes data in transmit FIFO.            */
#define SPI_TRANSMIT_DATA_TX_BYTE_Msk         (0xFFul << SPI_TRANSMIT_DATA_TX_BYTE_Pos)
#define SPI_TRANSMIT_DATA_TX_BYTE(value)      (SPI_TRANSMIT_DATA_TX_BYTE_Msk & ((value) << SPI_TRANSMIT_DATA_TX_BYTE_Pos))  
#define SPI_TRANSMIT_DATA_MASK                0xFFul    /**< \brief (SPI_TRANSMIT_DATA) Register MASK */

/* -------- SPI_RECEIVE_DATA : (SPI Offset: 0x04) (R/  8) Read one byte from SPI Receive Data FIFO.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  RX_BYTE:8;                 /*!< bit:   0..7  Oldest data in receive FIFO.             */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} SPI_RECEIVE_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_RECEIVE_DATA_OFFSET               0x04           /**<  \brief (SPI_RECEIVE_DATA offset) Read one byte from SPI Receive Data FIFO.  */
#define SPI_RECEIVE_DATA_RESETVALUE           0x00ul         /**<  \brief (SPI_RECEIVE_DATA reset_value) Read one byte from SPI Receive Data FIFO.  */

#define SPI_RECEIVE_DATA_RX_BYTE_Pos          0  /**< \brief (SPI_RECEIVE_DATA) Oldest data in receive FIFO.              */
#define SPI_RECEIVE_DATA_RX_BYTE_Msk          (0xFFul << SPI_RECEIVE_DATA_RX_BYTE_Pos)
#define SPI_RECEIVE_DATA_RX_BYTE(value)       (SPI_RECEIVE_DATA_RX_BYTE_Msk & ((value) << SPI_RECEIVE_DATA_RX_BYTE_Pos))  
#define SPI_RECEIVE_DATA_MASK                 0xFFul    /**< \brief (SPI_RECEIVE_DATA) Register MASK */

/* -------- SPI_TRANSMIT_STATUS : (SPI Offset: 0x08) (R/  8) Status of the SPI transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TX_FIFO_NOT_FULL:1;        /*!< bit:      0  Active High indication when Tx FIFO can still accepts at least one more character. */
    uint8_t  TX_FIFO_0P25_EMPTY:1;      /*!< bit:      1  Active High indication when Tx FIFO is at least quarter empty. Reset when more.  */
    uint8_t  TX_FIFO_0P5_EMPTY:1;       /*!< bit:      2  Active High indication when Tx FIFO is at least half empty. Reset when more.  */
    uint8_t  TX_FIFO_0P75_EMPTY:1;      /*!< bit:      3  Active High indication when Tx FIFO is at least three quarters empty. Reset when more.  */
    uint8_t  TX_FIFO_EMPTY:1;           /*!< bit:      4  Active High indication when Tx FIFO is Empty and has no more character to transmit  */
    uint8_t  :3;                        /*!< bit:   5..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} SPI_TRANSMIT_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_TRANSMIT_STATUS_OFFSET            0x08           /**<  \brief (SPI_TRANSMIT_STATUS offset) Status of the SPI transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  */
#define SPI_TRANSMIT_STATUS_RESETVALUE        0x00ul         /**<  \brief (SPI_TRANSMIT_STATUS reset_value) Status of the SPI transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  */

#define SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Pos 0  /**< \brief (SPI_TRANSMIT_STATUS) Active High indication when Tx FIFO can still accepts at least one more character. */
#define SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Msk (0x1ul << SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Pos)
#define SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL(value) (SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Msk & ((value) << SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Pos))  
#define   SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_0_Val        0X0ul  /**< \brief (SPI_TRANSMIT_STATUS) TX FIFO Full  */
#define   SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_1_Val        0X1ul  /**< \brief (SPI_TRANSMIT_STATUS) TX FIFO not Full  */
#define SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_0    (SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_0_Val << SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Pos)
#define SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_1    (SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_1_Val << SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Pos)
#define SPI_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY_Pos 1  /**< \brief (SPI_TRANSMIT_STATUS) Active High indication when Tx FIFO is at least quarter empty. Reset when more.  */
#define SPI_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY (0x1ul << SPI_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY_Pos)  
#define SPI_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY_Pos 2  /**< \brief (SPI_TRANSMIT_STATUS) Active High indication when Tx FIFO is at least half empty. Reset when more.  */
#define SPI_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY (0x1ul << SPI_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY_Pos)  
#define SPI_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY_Pos 3  /**< \brief (SPI_TRANSMIT_STATUS) Active High indication when Tx FIFO is at least three quarters empty. Reset when more.  */
#define SPI_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY (0x1ul << SPI_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY_Pos)  
#define SPI_TRANSMIT_STATUS_TX_FIFO_EMPTY_Pos 4  /**< \brief (SPI_TRANSMIT_STATUS) Active High indication when Tx FIFO is Empty and has no more character to transmit  */
#define SPI_TRANSMIT_STATUS_TX_FIFO_EMPTY     (0x1ul << SPI_TRANSMIT_STATUS_TX_FIFO_EMPTY_Pos)  
#define SPI_TRANSMIT_STATUS_MASK              0x1Ful    /**< \brief (SPI_TRANSMIT_STATUS) Register MASK */

/* -------- SPI_RECEIVE_STATUS : (SPI Offset: 0x0c) (R/  8) Status of the SPI receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  RX_FIFO_NOT_EMPTY:1;       /*!< bit:      0  Active High indication when data is available in Rx FIFO */
    uint8_t  RX_FIFO_0P25_FULL:1;       /*!< bit:      1  Active High indication when FIFO is at least quarter full. Reset when less.  */
    uint8_t  RX_FIFO_0P5_FULL:1;        /*!< bit:      2  Active High indication when FIFO is at least half full. Reset when less.  */
    uint8_t  RX_FIFO_0P75_FULL:1;       /*!< bit:      3  Active High indication when FIFO is at least three quarters full. Reset when less.  */
    uint8_t  FAULT:1;                   /*!< bit:      4  Active High indication when two masters attempt to access the SPI bus at the same time. The SPI interface will put itself in slave mode in this case. This bit is reset when the status register is read.   */
    uint8_t  FIFO_OVERRUN:1;            /*!< bit:      5  Active High indication when character is received but FIFO is full. Reset by reading  the status register.  */
    uint8_t  :2;                        /*!< bit:   6..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} SPI_RECEIVE_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_RECEIVE_STATUS_OFFSET             0x0C           /**<  \brief (SPI_RECEIVE_STATUS offset) Status of the SPI receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  */
#define SPI_RECEIVE_STATUS_RESETVALUE         0x00ul         /**<  \brief (SPI_RECEIVE_STATUS reset_value) Status of the SPI receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  */

#define SPI_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_Pos 0  /**< \brief (SPI_RECEIVE_STATUS) Active High indication when data is available in Rx FIFO */
#define SPI_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY  (0x1ul << SPI_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_Pos)  
#define SPI_RECEIVE_STATUS_RX_FIFO_0P25_FULL_Pos 1  /**< \brief (SPI_RECEIVE_STATUS) Active High indication when FIFO is at least quarter full. Reset when less.  */
#define SPI_RECEIVE_STATUS_RX_FIFO_0P25_FULL  (0x1ul << SPI_RECEIVE_STATUS_RX_FIFO_0P25_FULL_Pos)  
#define SPI_RECEIVE_STATUS_RX_FIFO_0P5_FULL_Pos 2  /**< \brief (SPI_RECEIVE_STATUS) Active High indication when FIFO is at least half full. Reset when less.  */
#define SPI_RECEIVE_STATUS_RX_FIFO_0P5_FULL   (0x1ul << SPI_RECEIVE_STATUS_RX_FIFO_0P5_FULL_Pos)  
#define SPI_RECEIVE_STATUS_RX_FIFO_0P75_FULL_Pos 3  /**< \brief (SPI_RECEIVE_STATUS) Active High indication when FIFO is at least three quarters full. Reset when less.  */
#define SPI_RECEIVE_STATUS_RX_FIFO_0P75_FULL  (0x1ul << SPI_RECEIVE_STATUS_RX_FIFO_0P75_FULL_Pos)  
#define SPI_RECEIVE_STATUS_FAULT_Pos          4  /**< \brief (SPI_RECEIVE_STATUS) Active High indication when two masters attempt to access the SPI bus at the same time. The SPI interface will put itself in slave mode in this case. This bit is reset when the status register is read.   */
#define SPI_RECEIVE_STATUS_FAULT              (0x1ul << SPI_RECEIVE_STATUS_FAULT_Pos)  
#define SPI_RECEIVE_STATUS_FIFO_OVERRUN_Pos   5  /**< \brief (SPI_RECEIVE_STATUS) Active High indication when character is received but FIFO is full. Reset by reading  the status register.  */
#define SPI_RECEIVE_STATUS_FIFO_OVERRUN       (0x1ul << SPI_RECEIVE_STATUS_FIFO_OVERRUN_Pos)  
#define SPI_RECEIVE_STATUS_MASK               0x3Ful    /**< \brief (SPI_RECEIVE_STATUS) Register MASK */

/* -------- SPI_CLOCK_SOURCE_SELECT : (SPI Offset: 0x10) (R/W  8) Clock Source Select -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CLOCK:2;                   /*!< bit:   0..1  Clock Used to Generate Divided Clock     */
    uint8_t  :6;                        /*!< bit:   2..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} SPI_CLOCK_SOURCE_SELECT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_CLOCK_SOURCE_SELECT_OFFSET        0x10           /**<  \brief (SPI_CLOCK_SOURCE_SELECT offset) Clock Source Select */
#define SPI_CLOCK_SOURCE_SELECT_RESETVALUE    0x00ul         /**<  \brief (SPI_CLOCK_SOURCE_SELECT reset_value) Clock Source Select */

#define SPI_CLOCK_SOURCE_SELECT_CLOCK_Pos     0  /**< \brief (SPI_CLOCK_SOURCE_SELECT) Clock Used to Generate Divided Clock */
#define SPI_CLOCK_SOURCE_SELECT_CLOCK_Msk     (0x3ul << SPI_CLOCK_SOURCE_SELECT_CLOCK_Pos)
#define SPI_CLOCK_SOURCE_SELECT_CLOCK(value)  (SPI_CLOCK_SOURCE_SELECT_CLOCK_Msk & ((value) << SPI_CLOCK_SOURCE_SELECT_CLOCK_Pos))  
#define   SPI_CLOCK_SOURCE_SELECT_CLOCK_0_Val        0X0ul  /**< \brief (SPI_CLOCK_SOURCE_SELECT) 26 MHz Clock  */
#define   SPI_CLOCK_SOURCE_SELECT_CLOCK_1_Val        0X1ul  /**< \brief (SPI_CLOCK_SOURCE_SELECT) 13 MHz Clock  */
#define   SPI_CLOCK_SOURCE_SELECT_CLOCK_2_Val        0X2ul  /**< \brief (SPI_CLOCK_SOURCE_SELECT) 6.5 MHz Clock  */
#define   SPI_CLOCK_SOURCE_SELECT_CLOCK_3_Val        0X3ul  /**< \brief (SPI_CLOCK_SOURCE_SELECT) 3.25 MHz Clock  */
#define SPI_CLOCK_SOURCE_SELECT_CLOCK_0       (SPI_CLOCK_SOURCE_SELECT_CLOCK_0_Val << SPI_CLOCK_SOURCE_SELECT_CLOCK_Pos)
#define SPI_CLOCK_SOURCE_SELECT_CLOCK_1       (SPI_CLOCK_SOURCE_SELECT_CLOCK_1_Val << SPI_CLOCK_SOURCE_SELECT_CLOCK_Pos)
#define SPI_CLOCK_SOURCE_SELECT_CLOCK_2       (SPI_CLOCK_SOURCE_SELECT_CLOCK_2_Val << SPI_CLOCK_SOURCE_SELECT_CLOCK_Pos)
#define SPI_CLOCK_SOURCE_SELECT_CLOCK_3       (SPI_CLOCK_SOURCE_SELECT_CLOCK_3_Val << SPI_CLOCK_SOURCE_SELECT_CLOCK_Pos)
#define SPI_CLOCK_SOURCE_SELECT_MASK          0x03ul    /**< \brief (SPI_CLOCK_SOURCE_SELECT) Register MASK */

/* -------- SPI_SPI_CLK_DIVIDER : (SPI Offset: 0x14) (R/W  16) Register sets the divide ratio used to generate the sck clock from the module's input clock.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t SPI_DIVIDE_RATIO:16;       /*!< bit:  0..15  Clock Divide Ratio. The input clock signal is divided by (n+1) where n is the value set in  this field.  The minimum division is by 2; a value of 0 is illegal.  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} SPI_SPI_CLK_DIVIDER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_SPI_CLK_DIVIDER_OFFSET            0x14           /**<  \brief (SPI_SPI_CLK_DIVIDER offset) Register sets the divide ratio used to generate the sck clock from the module's input clock.  */
#define SPI_SPI_CLK_DIVIDER_RESETVALUE        0x00ul         /**<  \brief (SPI_SPI_CLK_DIVIDER reset_value) Register sets the divide ratio used to generate the sck clock from the module's input clock.  */

#define SPI_SPI_CLK_DIVIDER_SPI_DIVIDE_RATIO_Pos 0  /**< \brief (SPI_SPI_CLK_DIVIDER) Clock Divide Ratio. The input clock signal is divided by (n+1) where n is the value set in  this field.  The minimum division is by 2; a value of 0 is illegal.  */
#define SPI_SPI_CLK_DIVIDER_SPI_DIVIDE_RATIO_Msk (0xFFFFul << SPI_SPI_CLK_DIVIDER_SPI_DIVIDE_RATIO_Pos)
#define SPI_SPI_CLK_DIVIDER_SPI_DIVIDE_RATIO(value) (SPI_SPI_CLK_DIVIDER_SPI_DIVIDE_RATIO_Msk & ((value) << SPI_SPI_CLK_DIVIDER_SPI_DIVIDE_RATIO_Pos))  
#define SPI_SPI_CLK_DIVIDER_MASK              0xFFFFul    /**< \brief (SPI_SPI_CLK_DIVIDER) Register MASK */

/* -------- SPI_SPI_MODULE_ENABLE : (SPI Offset: 0x18) (R/W  8) SPI Enable -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ENABLE:1;                  /*!< bit:      0  Enables SPI operation                    */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} SPI_SPI_MODULE_ENABLE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_SPI_MODULE_ENABLE_OFFSET          0x18           /**<  \brief (SPI_SPI_MODULE_ENABLE offset) SPI Enable */
#define SPI_SPI_MODULE_ENABLE_RESETVALUE      0x00ul         /**<  \brief (SPI_SPI_MODULE_ENABLE reset_value) SPI Enable */

#define SPI_SPI_MODULE_ENABLE_ENABLE_Pos      0  /**< \brief (SPI_SPI_MODULE_ENABLE) Enables SPI operation                */
#define SPI_SPI_MODULE_ENABLE_ENABLE          (0x1ul << SPI_SPI_MODULE_ENABLE_ENABLE_Pos)  
#define SPI_SPI_MODULE_ENABLE_MASK            0x01ul    /**< \brief (SPI_SPI_MODULE_ENABLE) Register MASK */

/* -------- SPI_SPI_MASTER_MODE : (SPI Offset: 0x1c) (R/W  8) SPI Master/Slave Mode. When clear, SPI is in Slave Mode.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  MASTER_ENABLE:1;           /*!< bit:      0  Active High SPI Master Mode Enable       */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} SPI_SPI_MASTER_MODE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_SPI_MASTER_MODE_OFFSET            0x1C           /**<  \brief (SPI_SPI_MASTER_MODE offset) SPI Master/Slave Mode. When clear, SPI is in Slave Mode.  */
#define SPI_SPI_MASTER_MODE_RESETVALUE        0x00ul         /**<  \brief (SPI_SPI_MASTER_MODE reset_value) SPI Master/Slave Mode. When clear, SPI is in Slave Mode.  */

#define SPI_SPI_MASTER_MODE_MASTER_ENABLE_Pos 0  /**< \brief (SPI_SPI_MASTER_MODE) Active High SPI Master Mode Enable     */
#define SPI_SPI_MASTER_MODE_MASTER_ENABLE_Msk (0x1ul << SPI_SPI_MASTER_MODE_MASTER_ENABLE_Pos)
#define SPI_SPI_MASTER_MODE_MASTER_ENABLE(value) (SPI_SPI_MASTER_MODE_MASTER_ENABLE_Msk & ((value) << SPI_SPI_MASTER_MODE_MASTER_ENABLE_Pos))  
#define   SPI_SPI_MASTER_MODE_MASTER_ENABLE_0_Val        0X0ul  /**< \brief (SPI_SPI_MASTER_MODE) SPI Slave  */
#define   SPI_SPI_MASTER_MODE_MASTER_ENABLE_1_Val        0X1ul  /**< \brief (SPI_SPI_MASTER_MODE) SPI Master  */
#define SPI_SPI_MASTER_MODE_MASTER_ENABLE_0    (SPI_SPI_MASTER_MODE_MASTER_ENABLE_0_Val << SPI_SPI_MASTER_MODE_MASTER_ENABLE_Pos)
#define SPI_SPI_MASTER_MODE_MASTER_ENABLE_1    (SPI_SPI_MASTER_MODE_MASTER_ENABLE_1_Val << SPI_SPI_MASTER_MODE_MASTER_ENABLE_Pos)
#define SPI_SPI_MASTER_MODE_MASK              0x01ul    /**< \brief (SPI_SPI_MASTER_MODE) Register MASK */

/* -------- SPI_SPI_FAULT_ENABLE : (SPI Offset: 0x20) (R/W  8) SPI Fault Detection Mode. If set, SPI bus contention will be detected, and the fault  bit in the rx_status register will be set, forcing the SPI Module into idle state.  When a fault is detected, the current SPI transaction is abandoned and the interface switches  to slave mode in the wait state.   -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  FAULT_ENABLE:1;            /*!< bit:      0  Active High SPI Fault Detect Enable      */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} SPI_SPI_FAULT_ENABLE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_SPI_FAULT_ENABLE_OFFSET           0x20           /**<  \brief (SPI_SPI_FAULT_ENABLE offset) SPI Fault Detection Mode. If set, SPI bus contention will be detected, and the fault  bit in the rx_status register will be set, forcing the SPI Module into idle state.  When a fault is detected, the current SPI transaction is abandoned and the interface switches  to slave mode in the wait state.   */
#define SPI_SPI_FAULT_ENABLE_RESETVALUE       0x00ul         /**<  \brief (SPI_SPI_FAULT_ENABLE reset_value) SPI Fault Detection Mode. If set, SPI bus contention will be detected, and the fault  bit in the rx_status register will be set, forcing the SPI Module into idle state.  When a fault is detected, the current SPI transaction is abandoned and the interface switches  to slave mode in the wait state.   */

#define SPI_SPI_FAULT_ENABLE_FAULT_ENABLE_Pos 0  /**< \brief (SPI_SPI_FAULT_ENABLE) Active High SPI Fault Detect Enable   */
#define SPI_SPI_FAULT_ENABLE_FAULT_ENABLE_Msk (0x1ul << SPI_SPI_FAULT_ENABLE_FAULT_ENABLE_Pos)
#define SPI_SPI_FAULT_ENABLE_FAULT_ENABLE(value) (SPI_SPI_FAULT_ENABLE_FAULT_ENABLE_Msk & ((value) << SPI_SPI_FAULT_ENABLE_FAULT_ENABLE_Pos))  
#define   SPI_SPI_FAULT_ENABLE_FAULT_ENABLE_0_Val        0X0ul  /**< \brief (SPI_SPI_FAULT_ENABLE) Faults ignored on SPI bus  */
#define   SPI_SPI_FAULT_ENABLE_FAULT_ENABLE_1_Val        0X1ul  /**< \brief (SPI_SPI_FAULT_ENABLE) Faults detected on SPI bus  */
#define SPI_SPI_FAULT_ENABLE_FAULT_ENABLE_0    (SPI_SPI_FAULT_ENABLE_FAULT_ENABLE_0_Val << SPI_SPI_FAULT_ENABLE_FAULT_ENABLE_Pos)
#define SPI_SPI_FAULT_ENABLE_FAULT_ENABLE_1    (SPI_SPI_FAULT_ENABLE_FAULT_ENABLE_1_Val << SPI_SPI_FAULT_ENABLE_FAULT_ENABLE_Pos)
#define SPI_SPI_FAULT_ENABLE_MASK             0x01ul    /**< \brief (SPI_SPI_FAULT_ENABLE) Register MASK */

/* -------- SPI_SPI_CONFIGURATION : (SPI Offset: 0x24) (R/W  8) SPI Operation Configuration Register. This register should not be modified while SPI bus is active,  otherwise the SPI Module state shall not be guaranteed.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  SCK_POLARITY:1;            /*!< bit:      0  Selects the level of sck in Idle State   */
    uint8_t  SCK_PHASE:1;               /*!< bit:      1  Selects clock edge used for data sampling and launching */
    uint8_t  LSB_FIRST_ENABLE:1;        /*!< bit:      2  Selects LSB bits to be transmitted first */
    uint8_t  BIDIRECTIONAL_ENABLE:1;    /*!< bit:      3  Enable Bidirectional mode of operation   */
    uint8_t  OUTPUT_ENABLE:1;           /*!< bit:      4  Active High Output Enable when in Bidirectional Mode */
    uint8_t  SSN_SHIFT_ENABLE:1;        /*!< bit:      5  Active High Shift Enable when SSN signal is asserted */
    uint8_t  SSN_SYNC_ENABLE:1;         /*!< bit:      6  Active High SSN Signal Synchronisation Enable */
    uint8_t  RX_DONE_SYNC_ENABLE:1;     /*!< bit:      7  Active High rx_done Signal Synchronisation Enable */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} SPI_SPI_CONFIGURATION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_SPI_CONFIGURATION_OFFSET          0x24           /**<  \brief (SPI_SPI_CONFIGURATION offset) SPI Operation Configuration Register. This register should not be modified while SPI bus is active,  otherwise the SPI Module state shall not be guaranteed.  */
#define SPI_SPI_CONFIGURATION_RESETVALUE      0xE0ul         /**<  \brief (SPI_SPI_CONFIGURATION reset_value) SPI Operation Configuration Register. This register should not be modified while SPI bus is active,  otherwise the SPI Module state shall not be guaranteed.  */

#define SPI_SPI_CONFIGURATION_SCK_POLARITY_Pos 0  /**< \brief (SPI_SPI_CONFIGURATION) Selects the level of sck in Idle State */
#define SPI_SPI_CONFIGURATION_SCK_POLARITY_Msk (0x1ul << SPI_SPI_CONFIGURATION_SCK_POLARITY_Pos)
#define SPI_SPI_CONFIGURATION_SCK_POLARITY(value) (SPI_SPI_CONFIGURATION_SCK_POLARITY_Msk & ((value) << SPI_SPI_CONFIGURATION_SCK_POLARITY_Pos))  
#define   SPI_SPI_CONFIGURATION_SCK_POLARITY_0_Val        0X0ul  /**< \brief (SPI_SPI_CONFIGURATION) SCK is Low  */
#define   SPI_SPI_CONFIGURATION_SCK_POLARITY_1_Val        0X1ul  /**< \brief (SPI_SPI_CONFIGURATION) SCK is High  */
#define SPI_SPI_CONFIGURATION_SCK_POLARITY_0    (SPI_SPI_CONFIGURATION_SCK_POLARITY_0_Val << SPI_SPI_CONFIGURATION_SCK_POLARITY_Pos)
#define SPI_SPI_CONFIGURATION_SCK_POLARITY_1    (SPI_SPI_CONFIGURATION_SCK_POLARITY_1_Val << SPI_SPI_CONFIGURATION_SCK_POLARITY_Pos)
#define SPI_SPI_CONFIGURATION_SCK_PHASE_Pos   1  /**< \brief (SPI_SPI_CONFIGURATION) Selects clock edge used for data sampling and launching */
#define SPI_SPI_CONFIGURATION_SCK_PHASE_Msk   (0x1ul << SPI_SPI_CONFIGURATION_SCK_PHASE_Pos)
#define SPI_SPI_CONFIGURATION_SCK_PHASE(value) (SPI_SPI_CONFIGURATION_SCK_PHASE_Msk & ((value) << SPI_SPI_CONFIGURATION_SCK_PHASE_Pos))  
#define   SPI_SPI_CONFIGURATION_SCK_PHASE_0_Val        0X0ul  /**< \brief (SPI_SPI_CONFIGURATION) Bits are sampled on the first edge and the following bit is output on the next edge  */
#define   SPI_SPI_CONFIGURATION_SCK_PHASE_1_Val        0X1ul  /**< \brief (SPI_SPI_CONFIGURATION) Bits are output on the first edge and are sampled on the following edge  */
#define SPI_SPI_CONFIGURATION_SCK_PHASE_0     (SPI_SPI_CONFIGURATION_SCK_PHASE_0_Val << SPI_SPI_CONFIGURATION_SCK_PHASE_Pos)
#define SPI_SPI_CONFIGURATION_SCK_PHASE_1     (SPI_SPI_CONFIGURATION_SCK_PHASE_1_Val << SPI_SPI_CONFIGURATION_SCK_PHASE_Pos)
#define SPI_SPI_CONFIGURATION_LSB_FIRST_ENABLE_Pos 2  /**< \brief (SPI_SPI_CONFIGURATION) Selects LSB bits to be transmitted first */
#define SPI_SPI_CONFIGURATION_LSB_FIRST_ENABLE_Msk (0x1ul << SPI_SPI_CONFIGURATION_LSB_FIRST_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_LSB_FIRST_ENABLE(value) (SPI_SPI_CONFIGURATION_LSB_FIRST_ENABLE_Msk & ((value) << SPI_SPI_CONFIGURATION_LSB_FIRST_ENABLE_Pos))  
#define   SPI_SPI_CONFIGURATION_LSB_FIRST_ENABLE_0_Val        0X0ul  /**< \brief (SPI_SPI_CONFIGURATION) Data transmitted MSB first  */
#define   SPI_SPI_CONFIGURATION_LSB_FIRST_ENABLE_1_Val        0X1ul  /**< \brief (SPI_SPI_CONFIGURATION) Data transmitted LSB first  */
#define SPI_SPI_CONFIGURATION_LSB_FIRST_ENABLE_0    (SPI_SPI_CONFIGURATION_LSB_FIRST_ENABLE_0_Val << SPI_SPI_CONFIGURATION_LSB_FIRST_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_LSB_FIRST_ENABLE_1    (SPI_SPI_CONFIGURATION_LSB_FIRST_ENABLE_1_Val << SPI_SPI_CONFIGURATION_LSB_FIRST_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE_Pos 3  /**< \brief (SPI_SPI_CONFIGURATION) Enable Bidirectional mode of operation */
#define SPI_SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE_Msk (0x1ul << SPI_SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE(value) (SPI_SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE_Msk & ((value) << SPI_SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE_Pos))  
#define   SPI_SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE_0_Val        0X0ul  /**< \brief (SPI_SPI_CONFIGURATION) SPI is unidirectional, Tx and Rx each has dedicated one port  */
#define   SPI_SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE_1_Val        0X1ul  /**< \brief (SPI_SPI_CONFIGURATION) SPI is bidirectional, Tx and Rx share one input/output port (MOSI if Master, MISO if Slave)  */
#define SPI_SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE_0    (SPI_SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE_0_Val << SPI_SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE_1    (SPI_SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE_1_Val << SPI_SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_OUTPUT_ENABLE_Pos 4  /**< \brief (SPI_SPI_CONFIGURATION) Active High Output Enable when in Bidirectional Mode */
#define SPI_SPI_CONFIGURATION_OUTPUT_ENABLE_Msk (0x1ul << SPI_SPI_CONFIGURATION_OUTPUT_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_OUTPUT_ENABLE(value) (SPI_SPI_CONFIGURATION_OUTPUT_ENABLE_Msk & ((value) << SPI_SPI_CONFIGURATION_OUTPUT_ENABLE_Pos))  
#define   SPI_SPI_CONFIGURATION_OUTPUT_ENABLE_0_Val        0X0ul  /**< \brief (SPI_SPI_CONFIGURATION) MISO is an input if in Slave mode. MOSI is an input if in Master mode  */
#define   SPI_SPI_CONFIGURATION_OUTPUT_ENABLE_1_Val        0X1ul  /**< \brief (SPI_SPI_CONFIGURATION) MISO is an output if in Slave mode. MOSI is an output if in Master mode  */
#define SPI_SPI_CONFIGURATION_OUTPUT_ENABLE_0    (SPI_SPI_CONFIGURATION_OUTPUT_ENABLE_0_Val << SPI_SPI_CONFIGURATION_OUTPUT_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_OUTPUT_ENABLE_1    (SPI_SPI_CONFIGURATION_OUTPUT_ENABLE_1_Val << SPI_SPI_CONFIGURATION_OUTPUT_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_SSN_SHIFT_ENABLE_Pos 5  /**< \brief (SPI_SPI_CONFIGURATION) Active High Shift Enable when SSN signal is asserted */
#define SPI_SPI_CONFIGURATION_SSN_SHIFT_ENABLE_Msk (0x1ul << SPI_SPI_CONFIGURATION_SSN_SHIFT_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_SSN_SHIFT_ENABLE(value) (SPI_SPI_CONFIGURATION_SSN_SHIFT_ENABLE_Msk & ((value) << SPI_SPI_CONFIGURATION_SSN_SHIFT_ENABLE_Pos))  
#define   SPI_SPI_CONFIGURATION_SSN_SHIFT_ENABLE_0_Val        0X0ul  /**< \brief (SPI_SPI_CONFIGURATION) Shift counter is enabled only when ssn is asserted  */
#define   SPI_SPI_CONFIGURATION_SSN_SHIFT_ENABLE_1_Val        0X1ul  /**< \brief (SPI_SPI_CONFIGURATION) Shift counter is always enabled  */
#define SPI_SPI_CONFIGURATION_SSN_SHIFT_ENABLE_0    (SPI_SPI_CONFIGURATION_SSN_SHIFT_ENABLE_0_Val << SPI_SPI_CONFIGURATION_SSN_SHIFT_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_SSN_SHIFT_ENABLE_1    (SPI_SPI_CONFIGURATION_SSN_SHIFT_ENABLE_1_Val << SPI_SPI_CONFIGURATION_SSN_SHIFT_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_SSN_SYNC_ENABLE_Pos 6  /**< \brief (SPI_SPI_CONFIGURATION) Active High SSN Signal Synchronisation Enable */
#define SPI_SPI_CONFIGURATION_SSN_SYNC_ENABLE_Msk (0x1ul << SPI_SPI_CONFIGURATION_SSN_SYNC_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_SSN_SYNC_ENABLE(value) (SPI_SPI_CONFIGURATION_SSN_SYNC_ENABLE_Msk & ((value) << SPI_SPI_CONFIGURATION_SSN_SYNC_ENABLE_Pos))  
#define   SPI_SPI_CONFIGURATION_SSN_SYNC_ENABLE_0_Val        0X0ul  /**< \brief (SPI_SPI_CONFIGURATION) SSN internal synchronisation is bypassed  */
#define   SPI_SPI_CONFIGURATION_SSN_SYNC_ENABLE_1_Val        0X1ul  /**< \brief (SPI_SPI_CONFIGURATION) SSN is internally synchronised before being used  */
#define SPI_SPI_CONFIGURATION_SSN_SYNC_ENABLE_0    (SPI_SPI_CONFIGURATION_SSN_SYNC_ENABLE_0_Val << SPI_SPI_CONFIGURATION_SSN_SYNC_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_SSN_SYNC_ENABLE_1    (SPI_SPI_CONFIGURATION_SSN_SYNC_ENABLE_1_Val << SPI_SPI_CONFIGURATION_SSN_SYNC_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE_Pos 7  /**< \brief (SPI_SPI_CONFIGURATION) Active High rx_done Signal Synchronisation Enable */
#define SPI_SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE_Msk (0x1ul << SPI_SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE(value) (SPI_SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE_Msk & ((value) << SPI_SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE_Pos))  
#define   SPI_SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE_0_Val        0X0ul  /**< \brief (SPI_SPI_CONFIGURATION) rx_done internal synchronisation is bypassed  */
#define   SPI_SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE_1_Val        0X1ul  /**< \brief (SPI_SPI_CONFIGURATION) rx_done is internally synchronised before being used  */
#define SPI_SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE_0    (SPI_SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE_0_Val << SPI_SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE_1    (SPI_SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE_1_Val << SPI_SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE_Pos)
#define SPI_SPI_CONFIGURATION_MASK            0xFFul    /**< \brief (SPI_SPI_CONFIGURATION) Register MASK */

/* -------- SPI_SPI_BUS_STATUS : (SPI Offset: 0x28) (R/  8) Status of SPI bus.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  SPI_ACTIVE:1;              /*!< bit:      0  Active High indicatation that the SPI Module is active. While set, SPI configuration should not be modified.  */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} SPI_SPI_BUS_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_SPI_BUS_STATUS_OFFSET             0x28           /**<  \brief (SPI_SPI_BUS_STATUS offset) Status of SPI bus.  */
#define SPI_SPI_BUS_STATUS_RESETVALUE         0x00ul         /**<  \brief (SPI_SPI_BUS_STATUS reset_value) Status of SPI bus.  */

#define SPI_SPI_BUS_STATUS_SPI_ACTIVE_Pos     0  /**< \brief (SPI_SPI_BUS_STATUS) Active High indicatation that the SPI Module is active. While set, SPI configuration should not be modified.  */
#define SPI_SPI_BUS_STATUS_SPI_ACTIVE         (0x1ul << SPI_SPI_BUS_STATUS_SPI_ACTIVE_Pos)  
#define SPI_SPI_BUS_STATUS_MASK               0x01ul    /**< \brief (SPI_SPI_BUS_STATUS) Register MASK */

/* -------- SPI_TX_INTERRUPT_MASK : (SPI Offset: 0x2c) (R/W  8) Enable or Disable the generation of interrupts by the tx_status register.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TX_FIFO_NOT_FULL_MASK:1;   /*!< bit:      0  Active High Enable of tx_fifo_not_full interrupt  */
    uint8_t  TX_FIFO_0P25_EMPTY_MASK:1;  /*!< bit:      1  Active High Enable of tx_fifo_0p25_empty interrupt  */
    uint8_t  TX_FIFO_0P5_EMPTY_MASK:1;  /*!< bit:      2  Active High Enable of tx_fifo_0p5_empty interrupt  */
    uint8_t  TX_FIFO_0P75_EMPTY_MASK:1;  /*!< bit:      3  Active High Enable of tx_fifo_0p75_empty interrupt  */
    uint8_t  TX_FIFO_EMPTY_MASK:1;      /*!< bit:      4  Active High Enable of tx_fifo_empty interrupt  */
    uint8_t  :3;                        /*!< bit:   5..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} SPI_TX_INTERRUPT_MASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_TX_INTERRUPT_MASK_OFFSET          0x2C           /**<  \brief (SPI_TX_INTERRUPT_MASK offset) Enable or Disable the generation of interrupts by the tx_status register.  */
#define SPI_TX_INTERRUPT_MASK_RESETVALUE      0x00ul         /**<  \brief (SPI_TX_INTERRUPT_MASK reset_value) Enable or Disable the generation of interrupts by the tx_status register.  */

#define SPI_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Pos 0  /**< \brief (SPI_TX_INTERRUPT_MASK) Active High Enable of tx_fifo_not_full interrupt  */
#define SPI_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK (0x1ul << SPI_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Pos)  
#define SPI_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Pos 1  /**< \brief (SPI_TX_INTERRUPT_MASK) Active High Enable of tx_fifo_0p25_empty interrupt  */
#define SPI_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK (0x1ul << SPI_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Pos)  
#define SPI_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Pos 2  /**< \brief (SPI_TX_INTERRUPT_MASK) Active High Enable of tx_fifo_0p5_empty interrupt  */
#define SPI_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK (0x1ul << SPI_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Pos)  
#define SPI_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Pos 3  /**< \brief (SPI_TX_INTERRUPT_MASK) Active High Enable of tx_fifo_0p75_empty interrupt  */
#define SPI_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK (0x1ul << SPI_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Pos)  
#define SPI_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Pos 4  /**< \brief (SPI_TX_INTERRUPT_MASK) Active High Enable of tx_fifo_empty interrupt  */
#define SPI_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK (0x1ul << SPI_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Pos)  
#define SPI_TX_INTERRUPT_MASK_MASK            0x1Ful    /**< \brief (SPI_TX_INTERRUPT_MASK) Register MASK */

/* -------- SPI_RX_INTERRUPT_MASK : (SPI Offset: 0x30) (R/W  8) Enable or Disable the generation of interrupts by the rx_status register.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  RX_FIFO_NOT_EMPTY_MASK:1;  /*!< bit:      0  Active High Enable of rx_fifo_not_empty interrupt  */
    uint8_t  RX_FIFO_0P25_FULL_MASK:1;  /*!< bit:      1  Active High Enable of rx_fifo_0p25_full interrupt  */
    uint8_t  RX_FIFO_0P5_FULL_MASK:1;   /*!< bit:      2  Active High Enable of rx_fifo_0p5_full interrupt  */
    uint8_t  RX_FIFO_0P75_FULL_MASK:1;  /*!< bit:      3  Active High Enable of rx_fifo_0p75_full interrupt  */
    uint8_t  FAULT_DETECT_MASK:1;       /*!< bit:      4  Active High Enable of fault detection interrupt  */
    uint8_t  FIFO_OVERRUN_MASK:1;       /*!< bit:      5  Active High Enable of FIFO overrun interrupt  */
    uint8_t  :2;                        /*!< bit:   6..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} SPI_RX_INTERRUPT_MASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_RX_INTERRUPT_MASK_OFFSET          0x30           /**<  \brief (SPI_RX_INTERRUPT_MASK offset) Enable or Disable the generation of interrupts by the rx_status register.  */
#define SPI_RX_INTERRUPT_MASK_RESETVALUE      0x00ul         /**<  \brief (SPI_RX_INTERRUPT_MASK reset_value) Enable or Disable the generation of interrupts by the rx_status register.  */

#define SPI_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Pos 0  /**< \brief (SPI_RX_INTERRUPT_MASK) Active High Enable of rx_fifo_not_empty interrupt  */
#define SPI_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK (0x1ul << SPI_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Pos)  
#define SPI_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Pos 1  /**< \brief (SPI_RX_INTERRUPT_MASK) Active High Enable of rx_fifo_0p25_full interrupt  */
#define SPI_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK (0x1ul << SPI_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Pos)  
#define SPI_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Pos 2  /**< \brief (SPI_RX_INTERRUPT_MASK) Active High Enable of rx_fifo_0p5_full interrupt  */
#define SPI_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK (0x1ul << SPI_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Pos)  
#define SPI_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Pos 3  /**< \brief (SPI_RX_INTERRUPT_MASK) Active High Enable of rx_fifo_0p75_full interrupt  */
#define SPI_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK (0x1ul << SPI_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Pos)  
#define SPI_RX_INTERRUPT_MASK_FAULT_DETECT_MASK_Pos 4  /**< \brief (SPI_RX_INTERRUPT_MASK) Active High Enable of fault detection interrupt  */
#define SPI_RX_INTERRUPT_MASK_FAULT_DETECT_MASK (0x1ul << SPI_RX_INTERRUPT_MASK_FAULT_DETECT_MASK_Pos)  
#define SPI_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Pos 5  /**< \brief (SPI_RX_INTERRUPT_MASK) Active High Enable of FIFO overrun interrupt  */
#define SPI_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK (0x1ul << SPI_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Pos)  
#define SPI_RX_INTERRUPT_MASK_MASK            0x3Ful    /**< \brief (SPI_RX_INTERRUPT_MASK) Register MASK */

/** \brief SPI hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* SPI Master/Slave Controller */
  __O  SPI_TRANSMIT_DATA_Type         TRANSMIT_DATA;  /**< \brief Offset: 0x00 ( /W   8) Writes one byte to SPI Transmit Data FIFO.  */
       RoReg8                         Reserved1[0x3];
  __I  SPI_RECEIVE_DATA_Type          RECEIVE_DATA;   /**< \brief Offset: 0x04 (R/    8) Read one byte from SPI Receive Data FIFO.  */
       RoReg8                         Reserved2[0x3];
  __I  SPI_TRANSMIT_STATUS_Type       TRANSMIT_STATUS; /**< \brief Offset: 0x08 (R/    8) Status of the SPI transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  */
       RoReg8                         Reserved3[0x3];
  __I  SPI_RECEIVE_STATUS_Type        RECEIVE_STATUS; /**< \brief Offset: 0x0C (R/    8) Status of the SPI receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  */
       RoReg8                         Reserved4[0x3];
  __IO SPI_CLOCK_SOURCE_SELECT_Type   CLOCK_SOURCE_SELECT; /**< \brief Offset: 0x10 (R/W   8) Clock Source Select */
       RoReg8                         Reserved5[0x3];
  __IO SPI_SPI_CLK_DIVIDER_Type       SPI_CLK_DIVIDER; /**< \brief Offset: 0x14 (R/W  16) Register sets the divide ratio used to generate the sck clock from the module's input clock.  */
       RoReg8                         Reserved6[0x2];
  __IO SPI_SPI_MODULE_ENABLE_Type     SPI_MODULE_ENABLE; /**< \brief Offset: 0x18 (R/W   8) SPI Enable */
       RoReg8                         Reserved7[0x3];
  __IO SPI_SPI_MASTER_MODE_Type       SPI_MASTER_MODE; /**< \brief Offset: 0x1C (R/W   8) SPI Master/Slave Mode. When clear, SPI is in Slave Mode.  */
       RoReg8                         Reserved8[0x3];
  __IO SPI_SPI_FAULT_ENABLE_Type      SPI_FAULT_ENABLE; /**< \brief Offset: 0x20 (R/W   8) SPI Fault Detection Mode. If set, SPI bus contention will be detected, and the fault  bit in the rx_status register will be set, forcing the SPI Module into idle state.  When a fault is detected, the current SPI transaction is abandoned and the interface switches  to slave mode in the wait state.   */
       RoReg8                         Reserved9[0x3];
  __IO SPI_SPI_CONFIGURATION_Type     SPI_CONFIGURATION; /**< \brief Offset: 0x24 (R/W   8) SPI Operation Configuration Register. This register should not be modified while SPI bus is active,  otherwise the SPI Module state shall not be guaranteed.  */
       RoReg8                         Reserved10[0x3];
  __I  SPI_SPI_BUS_STATUS_Type        SPI_BUS_STATUS; /**< \brief Offset: 0x28 (R/    8) Status of SPI bus.  */
       RoReg8                         Reserved11[0x3];
  __IO SPI_TX_INTERRUPT_MASK_Type     TX_INTERRUPT_MASK; /**< \brief Offset: 0x2C (R/W   8) Enable or Disable the generation of interrupts by the tx_status register.  */
       RoReg8                         Reserved12[0x3];
  __IO SPI_RX_INTERRUPT_MASK_Type     RX_INTERRUPT_MASK; /**< \brief Offset: 0x30 (R/W   8) Enable or Disable the generation of interrupts by the rx_status register.  */
} Spi;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_SPI_COMPONENT_ */
