/**
 * \file
 *
 * \brief Component description for UART
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

#ifndef _SAMB11_UART_COMPONENT_
#define _SAMB11_UART_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR UART */
/* ========================================================================== */
/** \addtogroup SAMB11_UART UART Controller */
/*@{*/

#define UART_U1234
#define REV_UART                         0x100

/* -------- UART_TRANSMIT_DATA : (UART Offset: 0x00) (/W  8) Writes one byte to UART Transmit Data FIFO.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TX_BYTE:8;                 /*!< bit:   0..7  Writes data in transmit FIFO. If byte length is set to 7, the MSB should be set to 0.  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} UART_TRANSMIT_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_TRANSMIT_DATA_OFFSET             0x00           /**<  \brief (UART_TRANSMIT_DATA offset) Writes one byte to UART Transmit Data FIFO.  */
#define UART_TRANSMIT_DATA_RESETVALUE         0x00ul         /**<  \brief (UART_TRANSMIT_DATA reset_value) Writes one byte to UART Transmit Data FIFO.  */

#define UART_TRANSMIT_DATA_TX_BYTE_Pos        0  /**< \brief (UART_TRANSMIT_DATA) Writes data in transmit FIFO. If byte length is set to 7, the MSB should be set to 0.  */
#define UART_TRANSMIT_DATA_TX_BYTE_Msk        (0xFFul << UART_TRANSMIT_DATA_TX_BYTE_Pos)
#define UART_TRANSMIT_DATA_TX_BYTE(value)     (UART_TRANSMIT_DATA_TX_BYTE_Msk & ((value) << UART_TRANSMIT_DATA_TX_BYTE_Pos))  
#define UART_TRANSMIT_DATA_MASK               0xFFul    /**< \brief (UART_TRANSMIT_DATA) Register MASK */

/* -------- UART_TRANSMIT_STATUS : (UART Offset: 0x04) (R/  8) Status of the UART transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TX_FIFO_NOT_FULL:1;        /*!< bit:      0  Active High indication when Tx FIFO can still accepts at least one more character. 0: TX FIFO Full. 1: TX FIFO not Full.  */
    uint8_t  TX_FIFO_0P25_EMPTY:1;      /*!< bit:      1  Active High indication when Tx FIFO is at least quarter empty. Reset when more.  */
    uint8_t  TX_FIFO_0P5_EMPTY:1;       /*!< bit:      2  Active High indication when Tx FIFO is at least half empty. Reset when more.  */
    uint8_t  TX_FIFO_0P75_EMPTY:1;      /*!< bit:      3  Active High indication when Tx FIFO is at least three quarters empty. Reset when more.  */
    uint8_t  TX_FIFO_EMPTY:1;           /*!< bit:      4  Active High indication when Tx FIFO is Empty and has no more character to transmit  */
    uint8_t  CTS_ACTIVE:1;              /*!< bit:      5  Active High indication when flow control signal "cts" is active. Unaffected by cts  enable bit in config register.  */
    uint8_t  :2;                        /*!< bit:   6..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} UART_TRANSMIT_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_TRANSMIT_STATUS_OFFSET           0x04           /**<  \brief (UART_TRANSMIT_STATUS offset) Status of the UART transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  */
#define UART_TRANSMIT_STATUS_RESETVALUE       0x00ul         /**<  \brief (UART_TRANSMIT_STATUS reset_value) Status of the UART transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  */

#define UART_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Pos 0  /**< \brief (UART_TRANSMIT_STATUS) Active High indication when Tx FIFO can still accepts at least one more character. 0: TX FIFO Full. 1: TX FIFO not Full.  */
#define UART_TRANSMIT_STATUS_TX_FIFO_NOT_FULL (0x1ul << UART_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Pos)  
#define UART_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY_Pos 1  /**< \brief (UART_TRANSMIT_STATUS) Active High indication when Tx FIFO is at least quarter empty. Reset when more.  */
#define UART_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY (0x1ul << UART_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY_Pos)  
#define UART_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY_Pos 2  /**< \brief (UART_TRANSMIT_STATUS) Active High indication when Tx FIFO is at least half empty. Reset when more.  */
#define UART_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY (0x1ul << UART_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY_Pos)  
#define UART_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY_Pos 3  /**< \brief (UART_TRANSMIT_STATUS) Active High indication when Tx FIFO is at least three quarters empty. Reset when more.  */
#define UART_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY (0x1ul << UART_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY_Pos)  
#define UART_TRANSMIT_STATUS_TX_FIFO_EMPTY_Pos 4  /**< \brief (UART_TRANSMIT_STATUS) Active High indication when Tx FIFO is Empty and has no more character to transmit  */
#define UART_TRANSMIT_STATUS_TX_FIFO_EMPTY    (0x1ul << UART_TRANSMIT_STATUS_TX_FIFO_EMPTY_Pos)  
#define UART_TRANSMIT_STATUS_CTS_ACTIVE_Pos   5  /**< \brief (UART_TRANSMIT_STATUS) Active High indication when flow control signal "cts" is active. Unaffected by cts  enable bit in config register.  */
#define UART_TRANSMIT_STATUS_CTS_ACTIVE       (0x1ul << UART_TRANSMIT_STATUS_CTS_ACTIVE_Pos)  
#define UART_TRANSMIT_STATUS_MASK             0x3Ful    /**< \brief (UART_TRANSMIT_STATUS) Register MASK */

/* -------- UART_TX_INTERRUPT_MASK : (UART Offset: 0x08) (R/W  8) Enable or Disable the generation of interrupts by the tx_status register.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TX_FIFO_NOT_FULL_MASK:1;   /*!< bit:      0  Active High Enable of tx_fifo_not_full interrupt  */
    uint8_t  TX_FIFO_0P25_EMPTY_MASK:1;  /*!< bit:      1  Active High Enable of tx_fifo_0p25_empty interrupt  */
    uint8_t  TX_FIFO_0P5_EMPTY_MASK:1;  /*!< bit:      2  Active High Enable of tx_fifo_0p5_empty interrupt  */
    uint8_t  TX_FIFO_0P75_EMPTY_MASK:1;  /*!< bit:      3  Active High Enable of tx_fifo_0p75_empty interrupt  */
    uint8_t  TX_FIFO_EMPTY_MASK:1;      /*!< bit:      4  Active High Enable of tx_fifo_empty interrupt  */
    uint8_t  CTS_ACTIVE_MASK:1;         /*!< bit:      5  Active High Enable of cts_active interrupt  */
    uint8_t  :2;                        /*!< bit:   6..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} UART_TX_INTERRUPT_MASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_TX_INTERRUPT_MASK_OFFSET         0x08           /**<  \brief (UART_TX_INTERRUPT_MASK offset) Enable or Disable the generation of interrupts by the tx_status register.  */
#define UART_TX_INTERRUPT_MASK_RESETVALUE     0x00ul         /**<  \brief (UART_TX_INTERRUPT_MASK reset_value) Enable or Disable the generation of interrupts by the tx_status register.  */

#define UART_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Pos 0  /**< \brief (UART_TX_INTERRUPT_MASK) Active High Enable of tx_fifo_not_full interrupt  */
#define UART_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK (0x1ul << UART_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Pos)  
#define UART_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Pos 1  /**< \brief (UART_TX_INTERRUPT_MASK) Active High Enable of tx_fifo_0p25_empty interrupt  */
#define UART_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK (0x1ul << UART_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Pos)  
#define UART_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Pos 2  /**< \brief (UART_TX_INTERRUPT_MASK) Active High Enable of tx_fifo_0p5_empty interrupt  */
#define UART_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK (0x1ul << UART_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Pos)  
#define UART_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Pos 3  /**< \brief (UART_TX_INTERRUPT_MASK) Active High Enable of tx_fifo_0p75_empty interrupt  */
#define UART_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK (0x1ul << UART_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Pos)  
#define UART_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Pos 4  /**< \brief (UART_TX_INTERRUPT_MASK) Active High Enable of tx_fifo_empty interrupt  */
#define UART_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK (0x1ul << UART_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Pos)  
#define UART_TX_INTERRUPT_MASK_CTS_ACTIVE_MASK_Pos 5  /**< \brief (UART_TX_INTERRUPT_MASK) Active High Enable of cts_active interrupt  */
#define UART_TX_INTERRUPT_MASK_CTS_ACTIVE_MASK (0x1ul << UART_TX_INTERRUPT_MASK_CTS_ACTIVE_MASK_Pos)  
#define UART_TX_INTERRUPT_MASK_MASK           0x3Ful    /**< \brief (UART_TX_INTERRUPT_MASK) Register MASK */

/* -------- UART_RECEIVE_DATA : (UART Offset: 0x10) (R/  8) Read one byte from UART Receive Data FIFO.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  RX_BYTE:8;                 /*!< bit:   0..7  Oldest data in receive FIFO. If byte length is set to 7, the MSB is set to 0.  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} UART_RECEIVE_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_RECEIVE_DATA_OFFSET              0x10           /**<  \brief (UART_RECEIVE_DATA offset) Read one byte from UART Receive Data FIFO.  */
#define UART_RECEIVE_DATA_RESETVALUE          0x00ul         /**<  \brief (UART_RECEIVE_DATA reset_value) Read one byte from UART Receive Data FIFO.  */

#define UART_RECEIVE_DATA_RX_BYTE_Pos         0  /**< \brief (UART_RECEIVE_DATA) Oldest data in receive FIFO. If byte length is set to 7, the MSB is set to 0.  */
#define UART_RECEIVE_DATA_RX_BYTE_Msk         (0xFFul << UART_RECEIVE_DATA_RX_BYTE_Pos)
#define UART_RECEIVE_DATA_RX_BYTE(value)      (UART_RECEIVE_DATA_RX_BYTE_Msk & ((value) << UART_RECEIVE_DATA_RX_BYTE_Pos))  
#define UART_RECEIVE_DATA_MASK                0xFFul    /**< \brief (UART_RECEIVE_DATA) Register MASK */

/* -------- UART_RECEIVE_STATUS : (UART Offset: 0x14) (R/  8) Status of the UART receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  RX_FIFO_NOT_EMPTY:1;       /*!< bit:      0  Active High indication when data is available in Rx FIFO. 0: RX FIFO Empty. 1: RX FIFO contains at least one byte of data.  */
    uint8_t  RX_FIFO_0P25_FULL:1;       /*!< bit:      1  Active High indication when FIFO is at least quarter full. Reset when less.  */
    uint8_t  RX_FIFO_0P5_FULL:1;        /*!< bit:      2  Active High indication when FIFO is at least half full. Reset when less.  */
    uint8_t  RX_FIFO_0P75_FULL:1;       /*!< bit:      3  Active High indication when FIFO is at least three quarters full. Reset when less.  */
    uint8_t  TIMEOUT:1;                 /*!< bit:      4  Active High indication when the timeout set in the rx_timeout register has elapsed since  the last interaction with the receiver. Reset by reading the status register.   */
    uint8_t  PARITY_ERROR:1;            /*!< bit:      5  Active High indication when a receive parity error is detected. Reset by reading the status register.  */
    uint8_t  FIFO_OVERRUN:1;            /*!< bit:      6  Active High indication when character is received but FIFO is full. Reset by reading the status register.  */
    uint8_t  FRAMING_ERROR:1;           /*!< bit:      7  Active High indication when no stop bit is detected. Reset by reading the status register.  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} UART_RECEIVE_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_RECEIVE_STATUS_OFFSET            0x14           /**<  \brief (UART_RECEIVE_STATUS offset) Status of the UART receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  */
#define UART_RECEIVE_STATUS_RESETVALUE        0x00ul         /**<  \brief (UART_RECEIVE_STATUS reset_value) Status of the UART receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  */

#define UART_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_Pos 0  /**< \brief (UART_RECEIVE_STATUS) Active High indication when data is available in Rx FIFO. 0: RX FIFO Empty. 1: RX FIFO contains at least one byte of data.  */
#define UART_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY (0x1ul << UART_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_Pos)  
#define UART_RECEIVE_STATUS_RX_FIFO_0P25_FULL_Pos 1  /**< \brief (UART_RECEIVE_STATUS) Active High indication when FIFO is at least quarter full. Reset when less.  */
#define UART_RECEIVE_STATUS_RX_FIFO_0P25_FULL (0x1ul << UART_RECEIVE_STATUS_RX_FIFO_0P25_FULL_Pos)  
#define UART_RECEIVE_STATUS_RX_FIFO_0P5_FULL_Pos 2  /**< \brief (UART_RECEIVE_STATUS) Active High indication when FIFO is at least half full. Reset when less.  */
#define UART_RECEIVE_STATUS_RX_FIFO_0P5_FULL  (0x1ul << UART_RECEIVE_STATUS_RX_FIFO_0P5_FULL_Pos)  
#define UART_RECEIVE_STATUS_RX_FIFO_0P75_FULL_Pos 3  /**< \brief (UART_RECEIVE_STATUS) Active High indication when FIFO is at least three quarters full. Reset when less.  */
#define UART_RECEIVE_STATUS_RX_FIFO_0P75_FULL (0x1ul << UART_RECEIVE_STATUS_RX_FIFO_0P75_FULL_Pos)  
#define UART_RECEIVE_STATUS_TIMEOUT_Pos       4  /**< \brief (UART_RECEIVE_STATUS) Active High indication when the timeout set in the rx_timeout register has elapsed since  the last interaction with the receiver. Reset by reading the status register.   */
#define UART_RECEIVE_STATUS_TIMEOUT           (0x1ul << UART_RECEIVE_STATUS_TIMEOUT_Pos)  
#define UART_RECEIVE_STATUS_PARITY_ERROR_Pos  5  /**< \brief (UART_RECEIVE_STATUS) Active High indication when a receive parity error is detected. Reset by reading the status register.  */
#define UART_RECEIVE_STATUS_PARITY_ERROR      (0x1ul << UART_RECEIVE_STATUS_PARITY_ERROR_Pos)  
#define UART_RECEIVE_STATUS_FIFO_OVERRUN_Pos  6  /**< \brief (UART_RECEIVE_STATUS) Active High indication when character is received but FIFO is full. Reset by reading the status register.  */
#define UART_RECEIVE_STATUS_FIFO_OVERRUN      (0x1ul << UART_RECEIVE_STATUS_FIFO_OVERRUN_Pos)  
#define UART_RECEIVE_STATUS_FRAMING_ERROR_Pos 7  /**< \brief (UART_RECEIVE_STATUS) Active High indication when no stop bit is detected. Reset by reading the status register.  */
#define UART_RECEIVE_STATUS_FRAMING_ERROR     (0x1ul << UART_RECEIVE_STATUS_FRAMING_ERROR_Pos)  
#define UART_RECEIVE_STATUS_MASK              0xFFul    /**< \brief (UART_RECEIVE_STATUS) Register MASK */

/* -------- UART_RX_INTERRUPT_MASK : (UART Offset: 0x18) (R/W  8) Enable or Disable the generation of interrupts by the rx_status register.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  RX_FIFO_NOT_EMPTY_MASK:1;  /*!< bit:      0  Active High Enable of rx_fifo_not_empty interrupt  */
    uint8_t  RX_FIFO_0P25_FULL_MASK:1;  /*!< bit:      1  Active High Enable of rx_fifo_0p25_full interrupt  */
    uint8_t  RX_FIFO_0P5_FULL_MASK:1;   /*!< bit:      2  Active High Enable of rx_fifo_0p5_full interrupt  */
    uint8_t  RX_FIFO_0P75_FULL_MASK:1;  /*!< bit:      3  Active High Enable of rx_fifo_0p75_full interrupt  */
    uint8_t  TIMEOUT_MASK:1;            /*!< bit:      4  Active High Enable of timeout interrupt  */
    uint8_t  PARITY_ERROR_MASK:1;       /*!< bit:      5  Active High Enable of parity error interrupt  */
    uint8_t  FIFO_OVERRUN_MASK:1;       /*!< bit:      6  Active High Enable of FIFO overrun interrupt  */
    uint8_t  FRAMING_ERROR_MASK:1;      /*!< bit:      7  Active High Enable of framing error interrupt  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} UART_RX_INTERRUPT_MASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_RX_INTERRUPT_MASK_OFFSET         0x18           /**<  \brief (UART_RX_INTERRUPT_MASK offset) Enable or Disable the generation of interrupts by the rx_status register.  */
#define UART_RX_INTERRUPT_MASK_RESETVALUE     0x00ul         /**<  \brief (UART_RX_INTERRUPT_MASK reset_value) Enable or Disable the generation of interrupts by the rx_status register.  */

#define UART_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Pos 0  /**< \brief (UART_RX_INTERRUPT_MASK) Active High Enable of rx_fifo_not_empty interrupt  */
#define UART_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK (0x1ul << UART_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Pos)  
#define UART_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Pos 1  /**< \brief (UART_RX_INTERRUPT_MASK) Active High Enable of rx_fifo_0p25_full interrupt  */
#define UART_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK (0x1ul << UART_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Pos)  
#define UART_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Pos 2  /**< \brief (UART_RX_INTERRUPT_MASK) Active High Enable of rx_fifo_0p5_full interrupt  */
#define UART_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK (0x1ul << UART_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Pos)  
#define UART_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Pos 3  /**< \brief (UART_RX_INTERRUPT_MASK) Active High Enable of rx_fifo_0p75_full interrupt  */
#define UART_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK (0x1ul << UART_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Pos)  
#define UART_RX_INTERRUPT_MASK_TIMEOUT_MASK_Pos 4  /**< \brief (UART_RX_INTERRUPT_MASK) Active High Enable of timeout interrupt  */
#define UART_RX_INTERRUPT_MASK_TIMEOUT_MASK   (0x1ul << UART_RX_INTERRUPT_MASK_TIMEOUT_MASK_Pos)  
#define UART_RX_INTERRUPT_MASK_PARITY_ERROR_MASK_Pos 5  /**< \brief (UART_RX_INTERRUPT_MASK) Active High Enable of parity error interrupt  */
#define UART_RX_INTERRUPT_MASK_PARITY_ERROR_MASK (0x1ul << UART_RX_INTERRUPT_MASK_PARITY_ERROR_MASK_Pos)  
#define UART_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Pos 6  /**< \brief (UART_RX_INTERRUPT_MASK) Active High Enable of FIFO overrun interrupt  */
#define UART_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK (0x1ul << UART_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Pos)  
#define UART_RX_INTERRUPT_MASK_FRAMING_ERROR_MASK_Pos 7  /**< \brief (UART_RX_INTERRUPT_MASK) Active High Enable of framing error interrupt  */
#define UART_RX_INTERRUPT_MASK_FRAMING_ERROR_MASK (0x1ul << UART_RX_INTERRUPT_MASK_FRAMING_ERROR_MASK_Pos)  
#define UART_RX_INTERRUPT_MASK_MASK           0xFFul    /**< \brief (UART_RX_INTERRUPT_MASK) Register MASK */

/* -------- UART_RECEIVE_TIMEOUT : (UART Offset: 0x1c) (R/W  8) Timeout counter configuration.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TIMEOUT_VALUE:8;           /*!< bit:   0..7  Timeout counter reload value, after status register is read or character received.  Counter decrements at baud rate clock.  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} UART_RECEIVE_TIMEOUT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_RECEIVE_TIMEOUT_OFFSET           0x1C           /**<  \brief (UART_RECEIVE_TIMEOUT offset) Timeout counter configuration.  */
#define UART_RECEIVE_TIMEOUT_RESETVALUE       0x00ul         /**<  \brief (UART_RECEIVE_TIMEOUT reset_value) Timeout counter configuration.  */

#define UART_RECEIVE_TIMEOUT_TIMEOUT_VALUE_Pos 0  /**< \brief (UART_RECEIVE_TIMEOUT) Timeout counter reload value, after status register is read or character received.  Counter decrements at baud rate clock.  */
#define UART_RECEIVE_TIMEOUT_TIMEOUT_VALUE_Msk (0xFFul << UART_RECEIVE_TIMEOUT_TIMEOUT_VALUE_Pos)
#define UART_RECEIVE_TIMEOUT_TIMEOUT_VALUE(value) (UART_RECEIVE_TIMEOUT_TIMEOUT_VALUE_Msk & ((value) << UART_RECEIVE_TIMEOUT_TIMEOUT_VALUE_Pos))  
#define UART_RECEIVE_TIMEOUT_MASK             0xFFul    /**< \brief (UART_RECEIVE_TIMEOUT) Register MASK */

/* -------- UART_UART_CONFIGURATION : (UART Offset: 0x20) (R/W  8) UART Operation Configuration Register, for both Rx and Tx.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  NUMBER_OF_BITS:1;          /*!< bit:      0  Number of bits per character, not including parity */
    uint8_t  PARITY_ENABLE:1;           /*!< bit:      1  Active High parity checking and generation enable */
    uint8_t  PARITY_MODE:2;             /*!< bit:   2..3  Parity Mode Select                       */
    uint8_t  STOP_BITS:1;               /*!< bit:      4  Number of stop bits                      */
    uint8_t  CTS_ENABLE:1;              /*!< bit:      5  Active High Flow Control Enable. When enabled, transmission starts when cts signal is asserted */
    uint8_t  :2;                        /*!< bit:   6..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} UART_UART_CONFIGURATION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_UART_CONFIGURATION_OFFSET        0x20           /**<  \brief (UART_UART_CONFIGURATION offset) UART Operation Configuration Register, for both Rx and Tx.  */
#define UART_UART_CONFIGURATION_RESETVALUE    0x00ul         /**<  \brief (UART_UART_CONFIGURATION reset_value) UART Operation Configuration Register, for both Rx and Tx.  */

#define UART_UART_CONFIGURATION_NUMBER_OF_BITS_Pos 0  /**< \brief (UART_UART_CONFIGURATION) Number of bits per character, not including parity */
#define UART_UART_CONFIGURATION_NUMBER_OF_BITS_Msk (0x1ul << UART_UART_CONFIGURATION_NUMBER_OF_BITS_Pos)
#define UART_UART_CONFIGURATION_NUMBER_OF_BITS(value) (UART_UART_CONFIGURATION_NUMBER_OF_BITS_Msk & ((value) << UART_UART_CONFIGURATION_NUMBER_OF_BITS_Pos))  
#define   UART_UART_CONFIGURATION_NUMBER_OF_BITS_0_Val        0X0ul  /**< \brief (UART_UART_CONFIGURATION) 8 bits  */
#define   UART_UART_CONFIGURATION_NUMBER_OF_BITS_1_Val        0X1ul  /**< \brief (UART_UART_CONFIGURATION) 7 bits  */
#define UART_UART_CONFIGURATION_NUMBER_OF_BITS_0    (UART_UART_CONFIGURATION_NUMBER_OF_BITS_0_Val << UART_UART_CONFIGURATION_NUMBER_OF_BITS_Pos)
#define UART_UART_CONFIGURATION_NUMBER_OF_BITS_1    (UART_UART_CONFIGURATION_NUMBER_OF_BITS_1_Val << UART_UART_CONFIGURATION_NUMBER_OF_BITS_Pos)
#define UART_UART_CONFIGURATION_PARITY_ENABLE_Pos 1  /**< \brief (UART_UART_CONFIGURATION) Active High parity checking and generation enable */
#define UART_UART_CONFIGURATION_PARITY_ENABLE_Msk (0x1ul << UART_UART_CONFIGURATION_PARITY_ENABLE_Pos)
#define UART_UART_CONFIGURATION_PARITY_ENABLE(value) (UART_UART_CONFIGURATION_PARITY_ENABLE_Msk & ((value) << UART_UART_CONFIGURATION_PARITY_ENABLE_Pos))  
#define   UART_UART_CONFIGURATION_PARITY_ENABLE_0_Val        0X0ul  /**< \brief (UART_UART_CONFIGURATION) Disable  */
#define   UART_UART_CONFIGURATION_PARITY_ENABLE_1_Val        0X1ul  /**< \brief (UART_UART_CONFIGURATION) Enable  */
#define UART_UART_CONFIGURATION_PARITY_ENABLE_0    (UART_UART_CONFIGURATION_PARITY_ENABLE_0_Val << UART_UART_CONFIGURATION_PARITY_ENABLE_Pos)
#define UART_UART_CONFIGURATION_PARITY_ENABLE_1    (UART_UART_CONFIGURATION_PARITY_ENABLE_1_Val << UART_UART_CONFIGURATION_PARITY_ENABLE_Pos)
#define UART_UART_CONFIGURATION_PARITY_MODE_Pos 2  /**< \brief (UART_UART_CONFIGURATION) Parity Mode Select                 */
#define UART_UART_CONFIGURATION_PARITY_MODE_Msk (0x3ul << UART_UART_CONFIGURATION_PARITY_MODE_Pos)
#define UART_UART_CONFIGURATION_PARITY_MODE(value) (UART_UART_CONFIGURATION_PARITY_MODE_Msk & ((value) << UART_UART_CONFIGURATION_PARITY_MODE_Pos))  
#define   UART_UART_CONFIGURATION_PARITY_MODE_0_Val        0X0ul  /**< \brief (UART_UART_CONFIGURATION) Even Parity  */
#define   UART_UART_CONFIGURATION_PARITY_MODE_1_Val        0X1ul  /**< \brief (UART_UART_CONFIGURATION) Odd Parity  */
#define   UART_UART_CONFIGURATION_PARITY_MODE_2_Val        0X2ul  /**< \brief (UART_UART_CONFIGURATION) Parity bit is space  */
#define   UART_UART_CONFIGURATION_PARITY_MODE_3_Val        0X3ul  /**< \brief (UART_UART_CONFIGURATION) Parity bit is mark  */
#define UART_UART_CONFIGURATION_PARITY_MODE_0    (UART_UART_CONFIGURATION_PARITY_MODE_0_Val << UART_UART_CONFIGURATION_PARITY_MODE_Pos)
#define UART_UART_CONFIGURATION_PARITY_MODE_1    (UART_UART_CONFIGURATION_PARITY_MODE_1_Val << UART_UART_CONFIGURATION_PARITY_MODE_Pos)
#define UART_UART_CONFIGURATION_PARITY_MODE_2    (UART_UART_CONFIGURATION_PARITY_MODE_2_Val << UART_UART_CONFIGURATION_PARITY_MODE_Pos)
#define UART_UART_CONFIGURATION_PARITY_MODE_3    (UART_UART_CONFIGURATION_PARITY_MODE_3_Val << UART_UART_CONFIGURATION_PARITY_MODE_Pos)
#define UART_UART_CONFIGURATION_STOP_BITS_Pos 4  /**< \brief (UART_UART_CONFIGURATION) Number of stop bits                */
#define UART_UART_CONFIGURATION_STOP_BITS_Msk (0x1ul << UART_UART_CONFIGURATION_STOP_BITS_Pos)
#define UART_UART_CONFIGURATION_STOP_BITS(value) (UART_UART_CONFIGURATION_STOP_BITS_Msk & ((value) << UART_UART_CONFIGURATION_STOP_BITS_Pos))  
#define   UART_UART_CONFIGURATION_STOP_BITS_0_Val        0X0ul  /**< \brief (UART_UART_CONFIGURATION) One Bit  */
#define   UART_UART_CONFIGURATION_STOP_BITS_1_Val        0X1ul  /**< \brief (UART_UART_CONFIGURATION) Two Bits  */
#define UART_UART_CONFIGURATION_STOP_BITS_0    (UART_UART_CONFIGURATION_STOP_BITS_0_Val << UART_UART_CONFIGURATION_STOP_BITS_Pos)
#define UART_UART_CONFIGURATION_STOP_BITS_1    (UART_UART_CONFIGURATION_STOP_BITS_1_Val << UART_UART_CONFIGURATION_STOP_BITS_Pos)
#define UART_UART_CONFIGURATION_CTS_ENABLE_Pos 5  /**< \brief (UART_UART_CONFIGURATION) Active High Flow Control Enable. When enabled, transmission starts when cts signal is asserted */
#define UART_UART_CONFIGURATION_CTS_ENABLE_Msk (0x1ul << UART_UART_CONFIGURATION_CTS_ENABLE_Pos)
#define UART_UART_CONFIGURATION_CTS_ENABLE(value) (UART_UART_CONFIGURATION_CTS_ENABLE_Msk & ((value) << UART_UART_CONFIGURATION_CTS_ENABLE_Pos))  
#define   UART_UART_CONFIGURATION_CTS_ENABLE_0_Val        0X0ul  /**< \brief (UART_UART_CONFIGURATION) Disable-Transmission starts only when cts signal is asserted  */
#define   UART_UART_CONFIGURATION_CTS_ENABLE_1_Val        0X1ul  /**< \brief (UART_UART_CONFIGURATION) Enable-Transmission starts regardless of cts signal  */
#define UART_UART_CONFIGURATION_CTS_ENABLE_0    (UART_UART_CONFIGURATION_CTS_ENABLE_0_Val << UART_UART_CONFIGURATION_CTS_ENABLE_Pos)
#define UART_UART_CONFIGURATION_CTS_ENABLE_1    (UART_UART_CONFIGURATION_CTS_ENABLE_1_Val << UART_UART_CONFIGURATION_CTS_ENABLE_Pos)
#define UART_UART_CONFIGURATION_MASK          0x3Ful    /**< \brief (UART_UART_CONFIGURATION) Register MASK */

/* -------- UART_UART_BAUD_RATE : (UART Offset: 0x24) (R/W  16) Baud Rate Control Register. Bits 15:3 specify the integral division of the clock (divide by n),  and bit 2:0 specify the fractional division.  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t FRACTIONAL_DIVISION:3;     /*!< bit:   0..2  Fractional Division Part. If non-zero, the integer part must be at least set to 3.  */
    uint16_t INTEGER_DIVISION:13;       /*!< bit:  3..15  Integral Division Part. Must be at least set to 2.  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} UART_UART_BAUD_RATE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_UART_BAUD_RATE_OFFSET            0x24           /**<  \brief (UART_UART_BAUD_RATE offset) Baud Rate Control Register. Bits 15:3 specify the integral division of the clock (divide by n),  and bit 2:0 specify the fractional division.  */
#define UART_UART_BAUD_RATE_RESETVALUE        0x00ul         /**<  \brief (UART_UART_BAUD_RATE reset_value) Baud Rate Control Register. Bits 15:3 specify the integral division of the clock (divide by n),  and bit 2:0 specify the fractional division.  */

#define UART_UART_BAUD_RATE_FRACTIONAL_DIVISION_Pos 0  /**< \brief (UART_UART_BAUD_RATE) Fractional Division Part. If non-zero, the integer part must be at least set to 3.  */
#define UART_UART_BAUD_RATE_FRACTIONAL_DIVISION_Msk (0x7ul << UART_UART_BAUD_RATE_FRACTIONAL_DIVISION_Pos)
#define UART_UART_BAUD_RATE_FRACTIONAL_DIVISION(value) (UART_UART_BAUD_RATE_FRACTIONAL_DIVISION_Msk & ((value) << UART_UART_BAUD_RATE_FRACTIONAL_DIVISION_Pos))  
#define UART_UART_BAUD_RATE_INTEGER_DIVISION_Pos 3  /**< \brief (UART_UART_BAUD_RATE) Integral Division Part. Must be at least set to 2.  */
#define UART_UART_BAUD_RATE_INTEGER_DIVISION_Msk (0x1FFFul << UART_UART_BAUD_RATE_INTEGER_DIVISION_Pos)
#define UART_UART_BAUD_RATE_INTEGER_DIVISION(value) (UART_UART_BAUD_RATE_INTEGER_DIVISION_Msk & ((value) << UART_UART_BAUD_RATE_INTEGER_DIVISION_Pos))  
#define UART_UART_BAUD_RATE_MASK              0xFFFFul    /**< \brief (UART_UART_BAUD_RATE) Register MASK */

/* -------- UART_UART_CLOCK_SOURCE : (UART Offset: 0x28) (R/W  8) Selects Source of UART Clock  -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CLOCK_SELECT:2;            /*!< bit:   0..1  Selects one of the four possible clock sources. */
    uint8_t  :6;                        /*!< bit:   2..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} UART_UART_CLOCK_SOURCE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_UART_CLOCK_SOURCE_OFFSET         0x28           /**<  \brief (UART_UART_CLOCK_SOURCE offset) Selects Source of UART Clock  */
#define UART_UART_CLOCK_SOURCE_RESETVALUE     0x00ul         /**<  \brief (UART_UART_CLOCK_SOURCE reset_value) Selects Source of UART Clock  */

#define UART_UART_CLOCK_SOURCE_CLOCK_SELECT_Pos 0  /**< \brief (UART_UART_CLOCK_SOURCE) Selects one of the four possible clock sources. */
#define UART_UART_CLOCK_SOURCE_CLOCK_SELECT_Msk (0x3ul << UART_UART_CLOCK_SOURCE_CLOCK_SELECT_Pos)
#define UART_UART_CLOCK_SOURCE_CLOCK_SELECT(value) (UART_UART_CLOCK_SOURCE_CLOCK_SELECT_Msk & ((value) << UART_UART_CLOCK_SOURCE_CLOCK_SELECT_Pos))  
#define   UART_UART_CLOCK_SOURCE_CLOCK_SELECT_0_Val        0X0ul  /**< \brief (UART_UART_CLOCK_SOURCE) Clock input 0  */
#define   UART_UART_CLOCK_SOURCE_CLOCK_SELECT_1_Val        0X1ul  /**< \brief (UART_UART_CLOCK_SOURCE) Clock input 1  */
#define   UART_UART_CLOCK_SOURCE_CLOCK_SELECT_2_Val        0X2ul  /**< \brief (UART_UART_CLOCK_SOURCE) Clock input 2  */
#define   UART_UART_CLOCK_SOURCE_CLOCK_SELECT_3_Val        0X3ul  /**< \brief (UART_UART_CLOCK_SOURCE) Clock input 3  */
#define UART_UART_CLOCK_SOURCE_CLOCK_SELECT_0    (UART_UART_CLOCK_SOURCE_CLOCK_SELECT_0_Val << UART_UART_CLOCK_SOURCE_CLOCK_SELECT_Pos)
#define UART_UART_CLOCK_SOURCE_CLOCK_SELECT_1    (UART_UART_CLOCK_SOURCE_CLOCK_SELECT_1_Val << UART_UART_CLOCK_SOURCE_CLOCK_SELECT_Pos)
#define UART_UART_CLOCK_SOURCE_CLOCK_SELECT_2    (UART_UART_CLOCK_SOURCE_CLOCK_SELECT_2_Val << UART_UART_CLOCK_SOURCE_CLOCK_SELECT_Pos)
#define UART_UART_CLOCK_SOURCE_CLOCK_SELECT_3    (UART_UART_CLOCK_SOURCE_CLOCK_SELECT_3_Val << UART_UART_CLOCK_SOURCE_CLOCK_SELECT_Pos)
#define UART_UART_CLOCK_SOURCE_MASK           0x03ul    /**< \brief (UART_UART_CLOCK_SOURCE) Register MASK */

/** \brief UART hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* UART Controller */
  __O  UART_TRANSMIT_DATA_Type        TRANSMIT_DATA;  /**< \brief Offset: 0x00 ( /W   8) Writes one byte to UART Transmit Data FIFO.  */
       RoReg8                         Reserved1[0x3];
  __I  UART_TRANSMIT_STATUS_Type      TRANSMIT_STATUS; /**< \brief Offset: 0x04 (R/    8) Status of the UART transmitter. Each field can generate an interrupt if corresponding bit in  the Tx interrupt mask register is set.  */
       RoReg8                         Reserved2[0x3];
  __IO UART_TX_INTERRUPT_MASK_Type    TX_INTERRUPT_MASK; /**< \brief Offset: 0x08 (R/W   8) Enable or Disable the generation of interrupts by the tx_status register.  */
       RoReg8                         Reserved3[0x7];
  __I  UART_RECEIVE_DATA_Type         RECEIVE_DATA;   /**< \brief Offset: 0x10 (R/    8) Read one byte from UART Receive Data FIFO.  */
       RoReg8                         Reserved4[0x3];
  __I  UART_RECEIVE_STATUS_Type       RECEIVE_STATUS; /**< \brief Offset: 0x14 (R/    8) Status of the UART receiver. Each field can generate an interrupt if corresponding bit in  the Rx interrupt mask register is set.  */
       RoReg8                         Reserved5[0x3];
  __IO UART_RX_INTERRUPT_MASK_Type    RX_INTERRUPT_MASK; /**< \brief Offset: 0x18 (R/W   8) Enable or Disable the generation of interrupts by the rx_status register.  */
       RoReg8                         Reserved6[0x3];
  __IO UART_RECEIVE_TIMEOUT_Type      RECEIVE_TIMEOUT; /**< \brief Offset: 0x1C (R/W   8) Timeout counter configuration.  */
       RoReg8                         Reserved7[0x3];
  __IO UART_UART_CONFIGURATION_Type   UART_CONFIGURATION; /**< \brief Offset: 0x20 (R/W   8) UART Operation Configuration Register, for both Rx and Tx.  */
       RoReg8                         Reserved8[0x3];
  __IO UART_UART_BAUD_RATE_Type       UART_BAUD_RATE; /**< \brief Offset: 0x24 (R/W  16) Baud Rate Control Register. Bits 15:3 specify the integral division of the clock (divide by n),  and bit 2:0 specify the fractional division.  */
       RoReg8                         Reserved9[0x2];
  __IO UART_UART_CLOCK_SOURCE_Type    UART_CLOCK_SOURCE; /**< \brief Offset: 0x28 (R/W   8) Selects Source of UART Clock  */
} Uart;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_UART_COMPONENT_ */
