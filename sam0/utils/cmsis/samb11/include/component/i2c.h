/**
 * \file
 *
 * \brief Component description for I2C
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

#ifndef _SAMB11_I2C_COMPONENT_
#define _SAMB11_I2C_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR I2C */
/* ========================================================================== */
/** \addtogroup SAMB11_I2C I2C Master/Slave Controller */
/*@{*/

#define I2C_I1234
#define REV_I2C                          0x100

/* -------- I2C_TRANSMIT_DATA : (I2C Offset: 0x00) (/W  16) Writes one byte to I2C Transmit Data FIFO.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t TX_DATA:8;                 /*!< bit:   0..7  Represents either Tx Data, or Address and Direction if address flag is set.  */
    uint16_t ADDRESS_FLAG:1;            /*!< bit:      8  Specifies that tx_data field is used for address and direction. */
    uint16_t :7;                        /*!< bit:  9..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} I2C_TRANSMIT_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define I2C_TRANSMIT_DATA_OFFSET              0x00           /**<  \brief (I2C_TRANSMIT_DATA offset) Writes one byte to I2C Transmit Data FIFO.  */
#define I2C_TRANSMIT_DATA_RESETVALUE          0x00ul         /**<  \brief (I2C_TRANSMIT_DATA reset_value) Writes one byte to I2C Transmit Data FIFO.  */

#define I2C_TRANSMIT_DATA_TX_DATA_Pos         0  /**< \brief (I2C_TRANSMIT_DATA) Represents either Tx Data, or Address and Direction if address flag is set.  */
#define I2C_TRANSMIT_DATA_TX_DATA_Msk         (0xFFul << I2C_TRANSMIT_DATA_TX_DATA_Pos)
#define I2C_TRANSMIT_DATA_TX_DATA(value)      (I2C_TRANSMIT_DATA_TX_DATA_Msk & ((value) << I2C_TRANSMIT_DATA_TX_DATA_Pos))  
#define I2C_TRANSMIT_DATA_ADDRESS_FLAG_Pos    8  /**< \brief (I2C_TRANSMIT_DATA) Specifies that tx_data field is used for address and direction. */
#define I2C_TRANSMIT_DATA_ADDRESS_FLAG_Msk    (0x1ul << I2C_TRANSMIT_DATA_ADDRESS_FLAG_Pos)
#define I2C_TRANSMIT_DATA_ADDRESS_FLAG(value) (I2C_TRANSMIT_DATA_ADDRESS_FLAG_Msk & ((value) << I2C_TRANSMIT_DATA_ADDRESS_FLAG_Pos))  
#define   I2C_TRANSMIT_DATA_ADDRESS_FLAG_0_Val        0X0ul  /**< \brief (I2C_TRANSMIT_DATA) tx_data field bits 7:0 are Transmit Data  */
#define   I2C_TRANSMIT_DATA_ADDRESS_FLAG_1_Val        0X1ul  /**< \brief (I2C_TRANSMIT_DATA) tx_data field bit 0 is direction (0: write to slave, 1: read from slave), and bits 7:1 are the Address to transmit.  */
#define I2C_TRANSMIT_DATA_ADDRESS_FLAG_0      (I2C_TRANSMIT_DATA_ADDRESS_FLAG_0_Val << I2C_TRANSMIT_DATA_ADDRESS_FLAG_Pos)
#define I2C_TRANSMIT_DATA_ADDRESS_FLAG_1      (I2C_TRANSMIT_DATA_ADDRESS_FLAG_1_Val << I2C_TRANSMIT_DATA_ADDRESS_FLAG_Pos)
#define I2C_TRANSMIT_DATA_MASK                0x1FFul    /**< \brief (I2C_TRANSMIT_DATA) Register MASK */

/* -------- I2C_RECEIVE_DATA : (I2C Offset: 0x04) (R/  8) Read one byte from I2C Receive Data FIFO.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  RX_BYTE:8;                 /*!< bit:   0..7  Oldest data in receive FIFO.             */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} I2C_RECEIVE_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define I2C_RECEIVE_DATA_OFFSET               0x04           /**<  \brief (I2C_RECEIVE_DATA offset) Read one byte from I2C Receive Data FIFO.  */
#define I2C_RECEIVE_DATA_RESETVALUE           0x00ul         /**<  \brief (I2C_RECEIVE_DATA reset_value) Read one byte from I2C Receive Data FIFO.  */

#define I2C_RECEIVE_DATA_RX_BYTE_Pos          0  /**< \brief (I2C_RECEIVE_DATA) Oldest data in receive FIFO.              */
#define I2C_RECEIVE_DATA_RX_BYTE_Msk          (0xFFul << I2C_RECEIVE_DATA_RX_BYTE_Pos)
#define I2C_RECEIVE_DATA_RX_BYTE(value)       (I2C_RECEIVE_DATA_RX_BYTE_Msk & ((value) << I2C_RECEIVE_DATA_RX_BYTE_Pos))  
#define I2C_RECEIVE_DATA_MASK                 0xFFul    /**< \brief (I2C_RECEIVE_DATA) Register MASK */

/* -------- I2C_TRANSMIT_STATUS : (I2C Offset: 0x08) (R/  8) Status of the I2C transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  -------- */
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
} I2C_TRANSMIT_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define I2C_TRANSMIT_STATUS_OFFSET            0x08           /**<  \brief (I2C_TRANSMIT_STATUS offset) Status of the I2C transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  */
#define I2C_TRANSMIT_STATUS_RESETVALUE        0x00ul         /**<  \brief (I2C_TRANSMIT_STATUS reset_value) Status of the I2C transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  */

#define I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Pos 0  /**< \brief (I2C_TRANSMIT_STATUS) Active High indication when Tx FIFO can still accepts at least one more character. */
#define I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Msk (0x1ul << I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Pos)
#define I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL(value) (I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Msk & ((value) << I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Pos))  
#define   I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_0_Val        0X0ul  /**< \brief (I2C_TRANSMIT_STATUS) TX FIFO Full  */
#define   I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_1_Val        0X1ul  /**< \brief (I2C_TRANSMIT_STATUS) TX FIFO not Full  */
#define I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_0    (I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_0_Val << I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Pos)
#define I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_1    (I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_1_Val << I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Pos)
#define I2C_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY_Pos 1  /**< \brief (I2C_TRANSMIT_STATUS) Active High indication when Tx FIFO is at least quarter empty. Reset when more.  */
#define I2C_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY (0x1ul << I2C_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY_Pos)  
#define I2C_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY_Pos 2  /**< \brief (I2C_TRANSMIT_STATUS) Active High indication when Tx FIFO is at least half empty. Reset when more.  */
#define I2C_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY (0x1ul << I2C_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY_Pos)  
#define I2C_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY_Pos 3  /**< \brief (I2C_TRANSMIT_STATUS) Active High indication when Tx FIFO is at least three quarters empty. Reset when more.  */
#define I2C_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY (0x1ul << I2C_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY_Pos)  
#define I2C_TRANSMIT_STATUS_TX_FIFO_EMPTY_Pos 4  /**< \brief (I2C_TRANSMIT_STATUS) Active High indication when Tx FIFO is Empty and has no more character to transmit  */
#define I2C_TRANSMIT_STATUS_TX_FIFO_EMPTY     (0x1ul << I2C_TRANSMIT_STATUS_TX_FIFO_EMPTY_Pos)  
#define I2C_TRANSMIT_STATUS_MASK              0x1Ful    /**< \brief (I2C_TRANSMIT_STATUS) Register MASK */

/* -------- I2C_RECEIVE_STATUS : (I2C Offset: 0x0c) (R/  8) Status of the I2C receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  RX_FIFO_NOT_EMPTY:1;       /*!< bit:      0  Active High indication when data is available in Rx FIFO */
    uint8_t  RX_FIFO_0P25_FULL:1;       /*!< bit:      1  Active High indication when FIFO is at least quarter full. Reset when less.  */
    uint8_t  RX_FIFO_0P5_FULL:1;        /*!< bit:      2  Active High indication when FIFO is at least half full. Reset when less.  */
    uint8_t  RX_FIFO_0P75_FULL:1;       /*!< bit:      3  Active High indication when FIFO is at least three quarters full. Reset when less.  */
    uint8_t  FIFO_OVERRUN:1;            /*!< bit:      4  Active High indication when character is received but FIFO is full. Reset by reading  the status register.  */
    uint8_t  NAK:1;                     /*!< bit:      5  Active High indication when NAK is received. The I2C module will retry transmission  unless transaction aborted by the flush register.  */
    uint8_t  :2;                        /*!< bit:   6..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} I2C_RECEIVE_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define I2C_RECEIVE_STATUS_OFFSET             0x0C           /**<  \brief (I2C_RECEIVE_STATUS offset) Status of the I2C receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  */
#define I2C_RECEIVE_STATUS_RESETVALUE         0x00ul         /**<  \brief (I2C_RECEIVE_STATUS reset_value) Status of the I2C receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  */

#define I2C_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_Pos 0  /**< \brief (I2C_RECEIVE_STATUS) Active High indication when data is available in Rx FIFO */
#define I2C_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY  (0x1ul << I2C_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_Pos)  
#define I2C_RECEIVE_STATUS_RX_FIFO_0P25_FULL_Pos 1  /**< \brief (I2C_RECEIVE_STATUS) Active High indication when FIFO is at least quarter full. Reset when less.  */
#define I2C_RECEIVE_STATUS_RX_FIFO_0P25_FULL  (0x1ul << I2C_RECEIVE_STATUS_RX_FIFO_0P25_FULL_Pos)  
#define I2C_RECEIVE_STATUS_RX_FIFO_0P5_FULL_Pos 2  /**< \brief (I2C_RECEIVE_STATUS) Active High indication when FIFO is at least half full. Reset when less.  */
#define I2C_RECEIVE_STATUS_RX_FIFO_0P5_FULL   (0x1ul << I2C_RECEIVE_STATUS_RX_FIFO_0P5_FULL_Pos)  
#define I2C_RECEIVE_STATUS_RX_FIFO_0P75_FULL_Pos 3  /**< \brief (I2C_RECEIVE_STATUS) Active High indication when FIFO is at least three quarters full. Reset when less.  */
#define I2C_RECEIVE_STATUS_RX_FIFO_0P75_FULL  (0x1ul << I2C_RECEIVE_STATUS_RX_FIFO_0P75_FULL_Pos)  
#define I2C_RECEIVE_STATUS_FIFO_OVERRUN_Pos   4  /**< \brief (I2C_RECEIVE_STATUS) Active High indication when character is received but FIFO is full. Reset by reading  the status register.  */
#define I2C_RECEIVE_STATUS_FIFO_OVERRUN       (0x1ul << I2C_RECEIVE_STATUS_FIFO_OVERRUN_Pos)  
#define I2C_RECEIVE_STATUS_NAK_Pos            5  /**< \brief (I2C_RECEIVE_STATUS) Active High indication when NAK is received. The I2C module will retry transmission  unless transaction aborted by the flush register.  */
#define I2C_RECEIVE_STATUS_NAK                (0x1ul << I2C_RECEIVE_STATUS_NAK_Pos)  
#define I2C_RECEIVE_STATUS_MASK               0x3Ful    /**< \brief (I2C_RECEIVE_STATUS) Register MASK */

/* -------- I2C_CLOCK_SOURCE_SELECT : (I2C Offset: 0x10) (R/W  8) Clock Source Select -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CLOCK:2;                   /*!< bit:   0..1  Clock Used to Generate Divided Clock     */
    uint8_t  :6;                        /*!< bit:   2..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} I2C_CLOCK_SOURCE_SELECT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define I2C_CLOCK_SOURCE_SELECT_OFFSET        0x10           /**<  \brief (I2C_CLOCK_SOURCE_SELECT offset) Clock Source Select */
#define I2C_CLOCK_SOURCE_SELECT_RESETVALUE    0x00ul         /**<  \brief (I2C_CLOCK_SOURCE_SELECT reset_value) Clock Source Select */

#define I2C_CLOCK_SOURCE_SELECT_CLOCK_Pos     0  /**< \brief (I2C_CLOCK_SOURCE_SELECT) Clock Used to Generate Divided Clock */
#define I2C_CLOCK_SOURCE_SELECT_CLOCK_Msk     (0x3ul << I2C_CLOCK_SOURCE_SELECT_CLOCK_Pos)
#define I2C_CLOCK_SOURCE_SELECT_CLOCK(value)  (I2C_CLOCK_SOURCE_SELECT_CLOCK_Msk & ((value) << I2C_CLOCK_SOURCE_SELECT_CLOCK_Pos))  
#define   I2C_CLOCK_SOURCE_SELECT_CLOCK_0_Val        0X0ul  /**< \brief (I2C_CLOCK_SOURCE_SELECT) 26 MHz Clock  */
#define   I2C_CLOCK_SOURCE_SELECT_CLOCK_1_Val        0X1ul  /**< \brief (I2C_CLOCK_SOURCE_SELECT) 13 MHz Clock  */
#define   I2C_CLOCK_SOURCE_SELECT_CLOCK_2_Val        0X2ul  /**< \brief (I2C_CLOCK_SOURCE_SELECT) 6.5 MHz Clock  */
#define   I2C_CLOCK_SOURCE_SELECT_CLOCK_3_Val        0X3ul  /**< \brief (I2C_CLOCK_SOURCE_SELECT) 3.25 MHz Clock  */
#define I2C_CLOCK_SOURCE_SELECT_CLOCK_0       (I2C_CLOCK_SOURCE_SELECT_CLOCK_0_Val << I2C_CLOCK_SOURCE_SELECT_CLOCK_Pos)
#define I2C_CLOCK_SOURCE_SELECT_CLOCK_1       (I2C_CLOCK_SOURCE_SELECT_CLOCK_1_Val << I2C_CLOCK_SOURCE_SELECT_CLOCK_Pos)
#define I2C_CLOCK_SOURCE_SELECT_CLOCK_2       (I2C_CLOCK_SOURCE_SELECT_CLOCK_2_Val << I2C_CLOCK_SOURCE_SELECT_CLOCK_Pos)
#define I2C_CLOCK_SOURCE_SELECT_CLOCK_3       (I2C_CLOCK_SOURCE_SELECT_CLOCK_3_Val << I2C_CLOCK_SOURCE_SELECT_CLOCK_Pos)
#define I2C_CLOCK_SOURCE_SELECT_MASK          0x03ul    /**< \brief (I2C_CLOCK_SOURCE_SELECT) Register MASK */

/* -------- I2C_I2C_MODULE_ENABLE : (I2C Offset: 0x14) (R/W  8) I2C Enable -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ENABLE:1;                  /*!< bit:      0  Enables I2C Operation                    */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} I2C_I2C_MODULE_ENABLE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define I2C_I2C_MODULE_ENABLE_OFFSET          0x14           /**<  \brief (I2C_I2C_MODULE_ENABLE offset) I2C Enable */
#define I2C_I2C_MODULE_ENABLE_RESETVALUE      0x00ul         /**<  \brief (I2C_I2C_MODULE_ENABLE reset_value) I2C Enable */

#define I2C_I2C_MODULE_ENABLE_ENABLE_Pos      0  /**< \brief (I2C_I2C_MODULE_ENABLE) Enables I2C Operation                */
#define I2C_I2C_MODULE_ENABLE_ENABLE          (0x1ul << I2C_I2C_MODULE_ENABLE_ENABLE_Pos)  
#define I2C_I2C_MODULE_ENABLE_MASK            0x01ul    /**< \brief (I2C_I2C_MODULE_ENABLE) Register MASK */

/* -------- I2C_I2C_CLK_DIVIDER : (I2C Offset: 0x18) (R/W  16) Register sets the divide ratio used to generate the sck clock from the module's input clock.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t I2C_DIVIDE_RATIO:16;       /*!< bit:  0..15  Clock Divide Ratio. The input clock signal is divided by (n+1) where n is the value set in  this field.  The minimum division is by 2; a value of 0 is illegal.  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} I2C_I2C_CLK_DIVIDER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define I2C_I2C_CLK_DIVIDER_OFFSET            0x18           /**<  \brief (I2C_I2C_CLK_DIVIDER offset) Register sets the divide ratio used to generate the sck clock from the module's input clock.  */
#define I2C_I2C_CLK_DIVIDER_RESETVALUE        0x00ul         /**<  \brief (I2C_I2C_CLK_DIVIDER reset_value) Register sets the divide ratio used to generate the sck clock from the module's input clock.  */

#define I2C_I2C_CLK_DIVIDER_I2C_DIVIDE_RATIO_Pos 0  /**< \brief (I2C_I2C_CLK_DIVIDER) Clock Divide Ratio. The input clock signal is divided by (n+1) where n is the value set in  this field.  The minimum division is by 2; a value of 0 is illegal.  */
#define I2C_I2C_CLK_DIVIDER_I2C_DIVIDE_RATIO_Msk (0xFFFFul << I2C_I2C_CLK_DIVIDER_I2C_DIVIDE_RATIO_Pos)
#define I2C_I2C_CLK_DIVIDER_I2C_DIVIDE_RATIO(value) (I2C_I2C_CLK_DIVIDER_I2C_DIVIDE_RATIO_Msk & ((value) << I2C_I2C_CLK_DIVIDER_I2C_DIVIDE_RATIO_Pos))  
#define I2C_I2C_CLK_DIVIDER_MASK              0xFFFFul    /**< \brief (I2C_I2C_CLK_DIVIDER) Register MASK */

/* -------- I2C_I2C_MASTER_MODE : (I2C Offset: 0x1c) (R/W  8) Selects I2C Master or Slave Mode.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  MASTER_ENABLE:1;           /*!< bit:      0  Active High I2C Master Mode Enable       */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} I2C_I2C_MASTER_MODE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define I2C_I2C_MASTER_MODE_OFFSET            0x1C           /**<  \brief (I2C_I2C_MASTER_MODE offset) Selects I2C Master or Slave Mode.  */
#define I2C_I2C_MASTER_MODE_RESETVALUE        0x00ul         /**<  \brief (I2C_I2C_MASTER_MODE reset_value) Selects I2C Master or Slave Mode.  */

#define I2C_I2C_MASTER_MODE_MASTER_ENABLE_Pos 0  /**< \brief (I2C_I2C_MASTER_MODE) Active High I2C Master Mode Enable     */
#define I2C_I2C_MASTER_MODE_MASTER_ENABLE_Msk (0x1ul << I2C_I2C_MASTER_MODE_MASTER_ENABLE_Pos)
#define I2C_I2C_MASTER_MODE_MASTER_ENABLE(value) (I2C_I2C_MASTER_MODE_MASTER_ENABLE_Msk & ((value) << I2C_I2C_MASTER_MODE_MASTER_ENABLE_Pos))  
#define   I2C_I2C_MASTER_MODE_MASTER_ENABLE_0_Val        0X0ul  /**< \brief (I2C_I2C_MASTER_MODE) I2C Slave  */
#define   I2C_I2C_MASTER_MODE_MASTER_ENABLE_1_Val        0X1ul  /**< \brief (I2C_I2C_MASTER_MODE) I2C Master  */
#define I2C_I2C_MASTER_MODE_MASTER_ENABLE_0    (I2C_I2C_MASTER_MODE_MASTER_ENABLE_0_Val << I2C_I2C_MASTER_MODE_MASTER_ENABLE_Pos)
#define I2C_I2C_MASTER_MODE_MASTER_ENABLE_1    (I2C_I2C_MASTER_MODE_MASTER_ENABLE_1_Val << I2C_I2C_MASTER_MODE_MASTER_ENABLE_Pos)
#define I2C_I2C_MASTER_MODE_MASK              0x01ul    /**< \brief (I2C_I2C_MASTER_MODE) Register MASK */

/* -------- I2C_I2C_ONBUS : (I2C Offset: 0x20) (R/W  8) Enable/Disable transactions when in Master Mode.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ONBUS_ENABLE:1;            /*!< bit:      0  Active High Enable to initiate transactions when in Master Mode. */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} I2C_I2C_ONBUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define I2C_I2C_ONBUS_OFFSET                  0x20           /**<  \brief (I2C_I2C_ONBUS offset) Enable/Disable transactions when in Master Mode.  */
#define I2C_I2C_ONBUS_RESETVALUE              0x00ul         /**<  \brief (I2C_I2C_ONBUS reset_value) Enable/Disable transactions when in Master Mode.  */

#define I2C_I2C_ONBUS_ONBUS_ENABLE_Pos        0  /**< \brief (I2C_I2C_ONBUS) Active High Enable to initiate transactions when in Master Mode. */
#define I2C_I2C_ONBUS_ONBUS_ENABLE_Msk        (0x1ul << I2C_I2C_ONBUS_ONBUS_ENABLE_Pos)
#define I2C_I2C_ONBUS_ONBUS_ENABLE(value)     (I2C_I2C_ONBUS_ONBUS_ENABLE_Msk & ((value) << I2C_I2C_ONBUS_ONBUS_ENABLE_Pos))  
#define   I2C_I2C_ONBUS_ONBUS_ENABLE_0_Val        0X0ul  /**< \brief (I2C_I2C_ONBUS) Master completes current byte and generates stop condition on bus.  */
#define   I2C_I2C_ONBUS_ONBUS_ENABLE_1_Val        0X1ul  /**< \brief (I2C_I2C_ONBUS) Master tranmits contents of FIFO until empty.  */
#define I2C_I2C_ONBUS_ONBUS_ENABLE_0          (I2C_I2C_ONBUS_ONBUS_ENABLE_0_Val << I2C_I2C_ONBUS_ONBUS_ENABLE_Pos)
#define I2C_I2C_ONBUS_ONBUS_ENABLE_1          (I2C_I2C_ONBUS_ONBUS_ENABLE_1_Val << I2C_I2C_ONBUS_ONBUS_ENABLE_Pos)
#define I2C_I2C_ONBUS_MASK                    0x01ul    /**< \brief (I2C_I2C_ONBUS) Register MASK */

/* -------- I2C_I2C_SLAVE_ADDRESS : (I2C Offset: 0x24) (R/W  8) Configures the I2C slave Address.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ADDRESS:7;                 /*!< bit:   0..6  I2C Slave Address                        */
    uint8_t  :1;                        /*!< bit:      7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} I2C_I2C_SLAVE_ADDRESS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define I2C_I2C_SLAVE_ADDRESS_OFFSET          0x24           /**<  \brief (I2C_I2C_SLAVE_ADDRESS offset) Configures the I2C slave Address.  */
#define I2C_I2C_SLAVE_ADDRESS_RESETVALUE      0x00ul         /**<  \brief (I2C_I2C_SLAVE_ADDRESS reset_value) Configures the I2C slave Address.  */

#define I2C_I2C_SLAVE_ADDRESS_ADDRESS_Pos     0  /**< \brief (I2C_I2C_SLAVE_ADDRESS) I2C Slave Address                    */
#define I2C_I2C_SLAVE_ADDRESS_ADDRESS_Msk     (0x7Ful << I2C_I2C_SLAVE_ADDRESS_ADDRESS_Pos)
#define I2C_I2C_SLAVE_ADDRESS_ADDRESS(value)  (I2C_I2C_SLAVE_ADDRESS_ADDRESS_Msk & ((value) << I2C_I2C_SLAVE_ADDRESS_ADDRESS_Pos))  
#define I2C_I2C_SLAVE_ADDRESS_MASK            0x7Ful    /**< \brief (I2C_I2C_SLAVE_ADDRESS) Register MASK */

/* -------- I2C_I2C_STATUS : (I2C Offset: 0x28) (R/  8) Status of I2C Module.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  I2C_ACTIVE:1;              /*!< bit:      0  Active High indicatation that the I2C Module is active. While set, I2C configuration  should not be modified.  */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} I2C_I2C_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define I2C_I2C_STATUS_OFFSET                 0x28           /**<  \brief (I2C_I2C_STATUS offset) Status of I2C Module.  */
#define I2C_I2C_STATUS_RESETVALUE             0x00ul         /**<  \brief (I2C_I2C_STATUS reset_value) Status of I2C Module.  */

#define I2C_I2C_STATUS_I2C_ACTIVE_Pos         0  /**< \brief (I2C_I2C_STATUS) Active High indicatation that the I2C Module is active. While set, I2C configuration  should not be modified.  */
#define I2C_I2C_STATUS_I2C_ACTIVE             (0x1ul << I2C_I2C_STATUS_I2C_ACTIVE_Pos)  
#define I2C_I2C_STATUS_MASK                   0x01ul    /**< \brief (I2C_I2C_STATUS) Register MASK */

/* -------- I2C_TX_INTERRUPT_MASK : (I2C Offset: 0x2c) (R/W  8) Enable or Disable the generation of interrupts by the tx_status register.  -------- */
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
} I2C_TX_INTERRUPT_MASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define I2C_TX_INTERRUPT_MASK_OFFSET          0x2C           /**<  \brief (I2C_TX_INTERRUPT_MASK offset) Enable or Disable the generation of interrupts by the tx_status register.  */
#define I2C_TX_INTERRUPT_MASK_RESETVALUE      0x00ul         /**<  \brief (I2C_TX_INTERRUPT_MASK reset_value) Enable or Disable the generation of interrupts by the tx_status register.  */

#define I2C_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Pos 0  /**< \brief (I2C_TX_INTERRUPT_MASK) Active High Enable of tx_fifo_not_full interrupt  */
#define I2C_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK (0x1ul << I2C_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Pos)  
#define I2C_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Pos 1  /**< \brief (I2C_TX_INTERRUPT_MASK) Active High Enable of tx_fifo_0p25_empty interrupt  */
#define I2C_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK (0x1ul << I2C_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Pos)  
#define I2C_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Pos 2  /**< \brief (I2C_TX_INTERRUPT_MASK) Active High Enable of tx_fifo_0p5_empty interrupt  */
#define I2C_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK (0x1ul << I2C_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Pos)  
#define I2C_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Pos 3  /**< \brief (I2C_TX_INTERRUPT_MASK) Active High Enable of tx_fifo_0p75_empty interrupt  */
#define I2C_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK (0x1ul << I2C_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Pos)  
#define I2C_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Pos 4  /**< \brief (I2C_TX_INTERRUPT_MASK) Active High Enable of tx_fifo_empty interrupt  */
#define I2C_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK (0x1ul << I2C_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Pos)  
#define I2C_TX_INTERRUPT_MASK_MASK            0x1Ful    /**< \brief (I2C_TX_INTERRUPT_MASK) Register MASK */

/* -------- I2C_RX_INTERRUPT_MASK : (I2C Offset: 0x30) (R/W  8) Enable or Disable the generation of interrupts by the rx_status register.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  RX_FIFO_NOT_EMPTY_MASK:1;  /*!< bit:      0  Active High Enable of rx_fifo_not_empty interrupt  */
    uint8_t  RX_FIFO_0P25_FULL_MASK:1;  /*!< bit:      1  Active High Enable of rx_fifo_0p25_full interrupt  */
    uint8_t  RX_FIFO_0P5_FULL_MASK:1;   /*!< bit:      2  Active High Enable of rx_fifo_0p5_full interrupt  */
    uint8_t  RX_FIFO_0P75_FULL_MASK:1;  /*!< bit:      3  Active High Enable of rx_fifo_0p75_full interrupt  */
    uint8_t  FIFO_OVERRUN_MASK:1;       /*!< bit:      4  Active High Enable of FIFO overrun interrupt  */
    uint8_t  NAK_MASK:1;                /*!< bit:      5  Active High Enable NAK interrupt         */
    uint8_t  :2;                        /*!< bit:   6..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} I2C_RX_INTERRUPT_MASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define I2C_RX_INTERRUPT_MASK_OFFSET          0x30           /**<  \brief (I2C_RX_INTERRUPT_MASK offset) Enable or Disable the generation of interrupts by the rx_status register.  */
#define I2C_RX_INTERRUPT_MASK_RESETVALUE      0x00ul         /**<  \brief (I2C_RX_INTERRUPT_MASK reset_value) Enable or Disable the generation of interrupts by the rx_status register.  */

#define I2C_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Pos 0  /**< \brief (I2C_RX_INTERRUPT_MASK) Active High Enable of rx_fifo_not_empty interrupt  */
#define I2C_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK (0x1ul << I2C_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Pos)  
#define I2C_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Pos 1  /**< \brief (I2C_RX_INTERRUPT_MASK) Active High Enable of rx_fifo_0p25_full interrupt  */
#define I2C_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK (0x1ul << I2C_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Pos)  
#define I2C_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Pos 2  /**< \brief (I2C_RX_INTERRUPT_MASK) Active High Enable of rx_fifo_0p5_full interrupt  */
#define I2C_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK (0x1ul << I2C_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Pos)  
#define I2C_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Pos 3  /**< \brief (I2C_RX_INTERRUPT_MASK) Active High Enable of rx_fifo_0p75_full interrupt  */
#define I2C_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK (0x1ul << I2C_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Pos)  
#define I2C_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Pos 4  /**< \brief (I2C_RX_INTERRUPT_MASK) Active High Enable of FIFO overrun interrupt  */
#define I2C_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK (0x1ul << I2C_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Pos)  
#define I2C_RX_INTERRUPT_MASK_NAK_MASK_Pos    5  /**< \brief (I2C_RX_INTERRUPT_MASK) Active High Enable NAK interrupt     */
#define I2C_RX_INTERRUPT_MASK_NAK_MASK        (0x1ul << I2C_RX_INTERRUPT_MASK_NAK_MASK_Pos)  
#define I2C_RX_INTERRUPT_MASK_MASK            0x3Ful    /**< \brief (I2C_RX_INTERRUPT_MASK) Register MASK */

/* -------- I2C_I2C_FLUSH : (I2C Offset: 0x34) (/W  8) Writing to this address  flushes the contents of both the Tx and Rx FIFOs. The value written has no effect. Flushing the Tx FIFO will abort ongoing transactions when the current byte has been transmitted.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  I2C_FLUSH:1;               /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} I2C_I2C_FLUSH_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define I2C_I2C_FLUSH_OFFSET                  0x34           /**<  \brief (I2C_I2C_FLUSH offset) Writing to this address  flushes the contents of both the Tx and Rx FIFOs. The value written has no effect. Flushing the Tx FIFO will abort ongoing transactions when the current byte has been transmitted.  */
#define I2C_I2C_FLUSH_RESETVALUE              0x00ul         /**<  \brief (I2C_I2C_FLUSH reset_value) Writing to this address  flushes the contents of both the Tx and Rx FIFOs. The value written has no effect. Flushing the Tx FIFO will abort ongoing transactions when the current byte has been transmitted.  */

#define I2C_I2C_FLUSH_I2C_FLUSH_Pos           0  /**< \brief (I2C_I2C_FLUSH)                                              */
#define I2C_I2C_FLUSH_I2C_FLUSH               (0x1ul << I2C_I2C_FLUSH_I2C_FLUSH_Pos)  
#define I2C_I2C_FLUSH_MASK                    0x01ul    /**< \brief (I2C_I2C_FLUSH) Register MASK */

/** \brief I2C hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* I2C Master/Slave Controller */
  __O  I2C_TRANSMIT_DATA_Type         TRANSMIT_DATA;  /**< \brief Offset: 0x00 ( /W  16) Writes one byte to I2C Transmit Data FIFO.  */
       RoReg8                         Reserved1[0x2];
  __I  I2C_RECEIVE_DATA_Type          RECEIVE_DATA;   /**< \brief Offset: 0x04 (R/    8) Read one byte from I2C Receive Data FIFO.  */
       RoReg8                         Reserved2[0x3];
  __I  I2C_TRANSMIT_STATUS_Type       TRANSMIT_STATUS; /**< \brief Offset: 0x08 (R/    8) Status of the I2C transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  */
       RoReg8                         Reserved3[0x3];
  __I  I2C_RECEIVE_STATUS_Type        RECEIVE_STATUS; /**< \brief Offset: 0x0C (R/    8) Status of the I2C receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  */
       RoReg8                         Reserved4[0x3];
  __IO I2C_CLOCK_SOURCE_SELECT_Type   CLOCK_SOURCE_SELECT; /**< \brief Offset: 0x10 (R/W   8) Clock Source Select */
       RoReg8                         Reserved5[0x3];
  __IO I2C_I2C_MODULE_ENABLE_Type     I2C_MODULE_ENABLE; /**< \brief Offset: 0x14 (R/W   8) I2C Enable */
       RoReg8                         Reserved6[0x3];
  __IO I2C_I2C_CLK_DIVIDER_Type       I2C_CLK_DIVIDER; /**< \brief Offset: 0x18 (R/W  16) Register sets the divide ratio used to generate the sck clock from the module's input clock.  */
       RoReg8                         Reserved7[0x2];
  __IO I2C_I2C_MASTER_MODE_Type       I2C_MASTER_MODE; /**< \brief Offset: 0x1C (R/W   8) Selects I2C Master or Slave Mode.  */
       RoReg8                         Reserved8[0x3];
  __IO I2C_I2C_ONBUS_Type             I2C_ONBUS;      /**< \brief Offset: 0x20 (R/W   8) Enable/Disable transactions when in Master Mode.  */
       RoReg8                         Reserved9[0x3];
  __IO I2C_I2C_SLAVE_ADDRESS_Type     I2C_SLAVE_ADDRESS; /**< \brief Offset: 0x24 (R/W   8) Configures the I2C slave Address.  */
       RoReg8                         Reserved10[0x3];
  __I  I2C_I2C_STATUS_Type            I2C_STATUS;     /**< \brief Offset: 0x28 (R/    8) Status of I2C Module.  */
       RoReg8                         Reserved11[0x3];
  __IO I2C_TX_INTERRUPT_MASK_Type     TX_INTERRUPT_MASK; /**< \brief Offset: 0x2C (R/W   8) Enable or Disable the generation of interrupts by the tx_status register.  */
       RoReg8                         Reserved12[0x3];
  __IO I2C_RX_INTERRUPT_MASK_Type     RX_INTERRUPT_MASK; /**< \brief Offset: 0x30 (R/W   8) Enable or Disable the generation of interrupts by the rx_status register.  */
       RoReg8                         Reserved13[0x3];
  __O  I2C_I2C_FLUSH_Type             I2C_FLUSH;      /**< \brief Offset: 0x34 ( /W   8) Writing to this address  flushes the contents of both the Tx and Rx FIFOs. The value written has no effect. Flushing the Tx FIFO will abort ongoing transactions when the current byte has been transmitted.  */
} I2C;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_I2C_COMPONENT_ */
