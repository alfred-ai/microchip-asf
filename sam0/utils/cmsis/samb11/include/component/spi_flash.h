/**
 * \file
 *
 * \brief Component description for SPI_FLASH
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

#ifndef _SAMB11_SPI_FLASH_COMPONENT_
#define _SAMB11_SPI_FLASH_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SPI_FLASH */
/* ========================================================================== */
/** \addtogroup SAMB11_SPI_FLASH SPI Flash Controller */
/*@{*/

#define SPI_FLASH_SF1234
#define REV_SPI_FLASH                    0x100

/* -------- SPI_FLASH_MODE_CTRL : (SPI_FLASH Offset: 0x00) (R/W  8) SPI Flash Mode Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  MODE:2;                    /*!< bit:   0..1  SPI Modes                                */
    uint8_t  BYPASS_CS_PRE:1;           /*!< bit:      2  Bypass CS PRE state                      */
    uint8_t  BYPASS_CS_POST:1;          /*!< bit:      3  Bypass CS POST state                     */
    uint8_t  :3;                        /*!< bit:   4..6  Reserved                                 */
    uint8_t  MODE_SELECT:1;             /*!< bit:      7  Set to 1 to use external bits for mode   */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} SPI_FLASH_MODE_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_FLASH_MODE_CTRL_OFFSET            0x00           /**<  \brief (SPI_FLASH_MODE_CTRL offset) SPI Flash Mode Control */
#define SPI_FLASH_MODE_CTRL_RESETVALUE        0x00ul         /**<  \brief (SPI_FLASH_MODE_CTRL reset_value) SPI Flash Mode Control */

#define SPI_FLASH_MODE_CTRL_MODE_Pos          0  /**< \brief (SPI_FLASH_MODE_CTRL) SPI Modes                              */
#define SPI_FLASH_MODE_CTRL_MODE_Msk          (0x3ul << SPI_FLASH_MODE_CTRL_MODE_Pos)
#define SPI_FLASH_MODE_CTRL_MODE(value)       (SPI_FLASH_MODE_CTRL_MODE_Msk & ((value) << SPI_FLASH_MODE_CTRL_MODE_Pos))  
#define   SPI_FLASH_MODE_CTRL_MODE_0_Val        0X0ul  /**< \brief (SPI_FLASH_MODE_CTRL) Mode 0  */
#define   SPI_FLASH_MODE_CTRL_MODE_1_Val        0X1ul  /**< \brief (SPI_FLASH_MODE_CTRL) Mode 1  */
#define   SPI_FLASH_MODE_CTRL_MODE_2_Val        0X2ul  /**< \brief (SPI_FLASH_MODE_CTRL) Mode 2  */
#define   SPI_FLASH_MODE_CTRL_MODE_3_Val        0X3ul  /**< \brief (SPI_FLASH_MODE_CTRL) Mode 3  */
#define SPI_FLASH_MODE_CTRL_MODE_0            (SPI_FLASH_MODE_CTRL_MODE_0_Val << SPI_FLASH_MODE_CTRL_MODE_Pos)
#define SPI_FLASH_MODE_CTRL_MODE_1            (SPI_FLASH_MODE_CTRL_MODE_1_Val << SPI_FLASH_MODE_CTRL_MODE_Pos)
#define SPI_FLASH_MODE_CTRL_MODE_2            (SPI_FLASH_MODE_CTRL_MODE_2_Val << SPI_FLASH_MODE_CTRL_MODE_Pos)
#define SPI_FLASH_MODE_CTRL_MODE_3            (SPI_FLASH_MODE_CTRL_MODE_3_Val << SPI_FLASH_MODE_CTRL_MODE_Pos)
#define SPI_FLASH_MODE_CTRL_BYPASS_CS_PRE_Pos 2  /**< \brief (SPI_FLASH_MODE_CTRL) Bypass CS PRE state                    */
#define SPI_FLASH_MODE_CTRL_BYPASS_CS_PRE     (0x1ul << SPI_FLASH_MODE_CTRL_BYPASS_CS_PRE_Pos)  
#define SPI_FLASH_MODE_CTRL_BYPASS_CS_POST_Pos 3  /**< \brief (SPI_FLASH_MODE_CTRL) Bypass CS POST state                   */
#define SPI_FLASH_MODE_CTRL_BYPASS_CS_POST    (0x1ul << SPI_FLASH_MODE_CTRL_BYPASS_CS_POST_Pos)  
#define SPI_FLASH_MODE_CTRL_MODE_SELECT_Pos   7  /**< \brief (SPI_FLASH_MODE_CTRL) Set to 1 to use external bits for mode */
#define SPI_FLASH_MODE_CTRL_MODE_SELECT       (0x1ul << SPI_FLASH_MODE_CTRL_MODE_SELECT_Pos)  
#define SPI_FLASH_MODE_CTRL_MASK              0x8Ful    /**< \brief (SPI_FLASH_MODE_CTRL) Register MASK */

/* -------- SPI_FLASH_TRANSACTION_CTRL : (SPI_FLASH Offset: 0x04) (R/W  32) Transaction Control (Cleared after each transaction completes) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CMD_COUNT:3;               /*!< bit:   0..2  Number of bytes to be transferred or received */
    uint32_t :4;                        /*!< bit:   3..6  Reserved                                 */
    uint32_t FLASH_TRANS_START:1;       /*!< bit:      7  Rising Edge Flast Transaction Start      */
    uint32_t WDATA_COUNT:24;            /*!< bit:  8..31  Number of bytes to be programmed to flash */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} SPI_FLASH_TRANSACTION_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_FLASH_TRANSACTION_CTRL_OFFSET     0x04           /**<  \brief (SPI_FLASH_TRANSACTION_CTRL offset) Transaction Control (Cleared after each transaction completes) */
#define SPI_FLASH_TRANSACTION_CTRL_RESETVALUE 0x04ul         /**<  \brief (SPI_FLASH_TRANSACTION_CTRL reset_value) Transaction Control (Cleared after each transaction completes) */

#define SPI_FLASH_TRANSACTION_CTRL_CMD_COUNT_Pos 0  /**< \brief (SPI_FLASH_TRANSACTION_CTRL) Number of bytes to be transferred or received */
#define SPI_FLASH_TRANSACTION_CTRL_CMD_COUNT_Msk (0x7ul << SPI_FLASH_TRANSACTION_CTRL_CMD_COUNT_Pos)
#define SPI_FLASH_TRANSACTION_CTRL_CMD_COUNT(value) (SPI_FLASH_TRANSACTION_CTRL_CMD_COUNT_Msk & ((value) << SPI_FLASH_TRANSACTION_CTRL_CMD_COUNT_Pos))  
#define SPI_FLASH_TRANSACTION_CTRL_FLASH_TRANS_START_Pos 7  /**< \brief (SPI_FLASH_TRANSACTION_CTRL) Rising Edge Flast Transaction Start */
#define SPI_FLASH_TRANSACTION_CTRL_FLASH_TRANS_START (0x1ul << SPI_FLASH_TRANSACTION_CTRL_FLASH_TRANS_START_Pos)  
#define SPI_FLASH_TRANSACTION_CTRL_WDATA_COUNT_Pos 8  /**< \brief (SPI_FLASH_TRANSACTION_CTRL) Number of bytes to be programmed to flash */
#define SPI_FLASH_TRANSACTION_CTRL_WDATA_COUNT_Msk (0xFFFFFFul << SPI_FLASH_TRANSACTION_CTRL_WDATA_COUNT_Pos)
#define SPI_FLASH_TRANSACTION_CTRL_WDATA_COUNT(value) (SPI_FLASH_TRANSACTION_CTRL_WDATA_COUNT_Msk & ((value) << SPI_FLASH_TRANSACTION_CTRL_WDATA_COUNT_Pos))  
#define SPI_FLASH_TRANSACTION_CTRL_MASK       0xFFFFFF87ul    /**< \brief (SPI_FLASH_TRANSACTION_CTRL) Register MASK */

/* -------- SPI_FLASH_READ_CTRL : (SPI_FLASH Offset: 0x08) (R/W  32) Read Control (Cleared after each transaction completes) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RDATA_COUNT:24;            /*!< bit:  0..23  Number of data bytes to be read from flash */
    uint32_t :8;                        /*!< bit: 24..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} SPI_FLASH_READ_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_FLASH_READ_CTRL_OFFSET            0x08           /**<  \brief (SPI_FLASH_READ_CTRL offset) Read Control (Cleared after each transaction completes) */
#define SPI_FLASH_READ_CTRL_RESETVALUE        0x00ul         /**<  \brief (SPI_FLASH_READ_CTRL reset_value) Read Control (Cleared after each transaction completes) */

#define SPI_FLASH_READ_CTRL_RDATA_COUNT_Pos   0  /**< \brief (SPI_FLASH_READ_CTRL) Number of data bytes to be read from flash */
#define SPI_FLASH_READ_CTRL_RDATA_COUNT_Msk   (0xFFFFFFul << SPI_FLASH_READ_CTRL_RDATA_COUNT_Pos)
#define SPI_FLASH_READ_CTRL_RDATA_COUNT(value) (SPI_FLASH_READ_CTRL_RDATA_COUNT_Msk & ((value) << SPI_FLASH_READ_CTRL_RDATA_COUNT_Pos))  
#define SPI_FLASH_READ_CTRL_MASK              0xFFFFFFul    /**< \brief (SPI_FLASH_READ_CTRL) Register MASK */

/* -------- SPI_FLASH_CMD_BUFFER0 : (SPI_FLASH Offset: 0x0c) (R/W  32) Command Buffer 0 (Bytes 3 - 0) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CMD_BUFFER0:32;            /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} SPI_FLASH_CMD_BUFFER0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_FLASH_CMD_BUFFER0_OFFSET          0x0C           /**<  \brief (SPI_FLASH_CMD_BUFFER0 offset) Command Buffer 0 (Bytes 3 - 0) */
#define SPI_FLASH_CMD_BUFFER0_RESETVALUE      0x03ul         /**<  \brief (SPI_FLASH_CMD_BUFFER0 reset_value) Command Buffer 0 (Bytes 3 - 0) */

#define SPI_FLASH_CMD_BUFFER0_CMD_BUFFER0_Pos 0  /**< \brief (SPI_FLASH_CMD_BUFFER0)                                      */
#define SPI_FLASH_CMD_BUFFER0_CMD_BUFFER0_Msk (0xFFFFFFFFul << SPI_FLASH_CMD_BUFFER0_CMD_BUFFER0_Pos)
#define SPI_FLASH_CMD_BUFFER0_CMD_BUFFER0(value) (SPI_FLASH_CMD_BUFFER0_CMD_BUFFER0_Msk & ((value) << SPI_FLASH_CMD_BUFFER0_CMD_BUFFER0_Pos))  
#define SPI_FLASH_CMD_BUFFER0_MASK            0xFFFFFFFFul    /**< \brief (SPI_FLASH_CMD_BUFFER0) Register MASK */

/* -------- SPI_FLASH_CMD_BUFFER1 : (SPI_FLASH Offset: 0x10) (R/W  32) Command Buffer 1 (Bytes 7 - 4) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CMD_BUFFER1:32;            /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} SPI_FLASH_CMD_BUFFER1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_FLASH_CMD_BUFFER1_OFFSET          0x10           /**<  \brief (SPI_FLASH_CMD_BUFFER1 offset) Command Buffer 1 (Bytes 7 - 4) */
#define SPI_FLASH_CMD_BUFFER1_RESETVALUE      0x00ul         /**<  \brief (SPI_FLASH_CMD_BUFFER1 reset_value) Command Buffer 1 (Bytes 7 - 4) */

#define SPI_FLASH_CMD_BUFFER1_CMD_BUFFER1_Pos 0  /**< \brief (SPI_FLASH_CMD_BUFFER1)                                      */
#define SPI_FLASH_CMD_BUFFER1_CMD_BUFFER1_Msk (0xFFFFFFFFul << SPI_FLASH_CMD_BUFFER1_CMD_BUFFER1_Pos)
#define SPI_FLASH_CMD_BUFFER1_CMD_BUFFER1(value) (SPI_FLASH_CMD_BUFFER1_CMD_BUFFER1_Msk & ((value) << SPI_FLASH_CMD_BUFFER1_CMD_BUFFER1_Pos))  
#define SPI_FLASH_CMD_BUFFER1_MASK            0xFFFFFFFFul    /**< \brief (SPI_FLASH_CMD_BUFFER1) Register MASK */

/* -------- SPI_FLASH_DIRECTION : (SPI_FLASH Offset: 0x14) (R/W  8) Read/Write bit for Bytes 7 - 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  DIRECTION:8;               /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} SPI_FLASH_DIRECTION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_FLASH_DIRECTION_OFFSET            0x14           /**<  \brief (SPI_FLASH_DIRECTION offset) Read/Write bit for Bytes 7 - 0 */
#define SPI_FLASH_DIRECTION_RESETVALUE        0x0Ful         /**<  \brief (SPI_FLASH_DIRECTION reset_value) Read/Write bit for Bytes 7 - 0 */

#define SPI_FLASH_DIRECTION_DIRECTION_Pos     0  /**< \brief (SPI_FLASH_DIRECTION)                                        */
#define SPI_FLASH_DIRECTION_DIRECTION_Msk     (0xFFul << SPI_FLASH_DIRECTION_DIRECTION_Pos)
#define SPI_FLASH_DIRECTION_DIRECTION(value)  (SPI_FLASH_DIRECTION_DIRECTION_Msk & ((value) << SPI_FLASH_DIRECTION_DIRECTION_Pos))  
#define SPI_FLASH_DIRECTION_MASK              0xFFul    /**< \brief (SPI_FLASH_DIRECTION) Register MASK */

/* -------- SPI_FLASH_IRQ_STATUS : (SPI_FLASH Offset: 0x18) (/W  8) IRQ Status (Write 0 to bit to clear, Read clears interupts) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  FLASH_TRANS_DONE:1;        /*!< bit:      0  Current Flash Transaction Done           */
    uint8_t  AHB_ERROR_RESPONSE:1;      /*!< bit:      1  AHB Error Response                       */
    uint8_t  :6;                        /*!< bit:   2..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} SPI_FLASH_IRQ_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_FLASH_IRQ_STATUS_OFFSET           0x18           /**<  \brief (SPI_FLASH_IRQ_STATUS offset) IRQ Status (Write 0 to bit to clear, Read clears interupts) */
#define SPI_FLASH_IRQ_STATUS_RESETVALUE       0x00ul         /**<  \brief (SPI_FLASH_IRQ_STATUS reset_value) IRQ Status (Write 0 to bit to clear, Read clears interupts) */

#define SPI_FLASH_IRQ_STATUS_FLASH_TRANS_DONE_Pos 0  /**< \brief (SPI_FLASH_IRQ_STATUS) Current Flash Transaction Done        */
#define SPI_FLASH_IRQ_STATUS_FLASH_TRANS_DONE (0x1ul << SPI_FLASH_IRQ_STATUS_FLASH_TRANS_DONE_Pos)  
#define SPI_FLASH_IRQ_STATUS_AHB_ERROR_RESPONSE_Pos 1  /**< \brief (SPI_FLASH_IRQ_STATUS) AHB Error Response                    */
#define SPI_FLASH_IRQ_STATUS_AHB_ERROR_RESPONSE (0x1ul << SPI_FLASH_IRQ_STATUS_AHB_ERROR_RESPONSE_Pos)  
#define SPI_FLASH_IRQ_STATUS_MASK             0x03ul    /**< \brief (SPI_FLASH_IRQ_STATUS) Register MASK */

/* -------- SPI_FLASH_DMA_START_ADDRESS : (SPI_FLASH Offset: 0x1c) (R/W  32) DMA Starting Address -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t DMA_START_ADDRESS:32;      /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} SPI_FLASH_DMA_START_ADDRESS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_FLASH_DMA_START_ADDRESS_OFFSET    0x1C           /**<  \brief (SPI_FLASH_DMA_START_ADDRESS offset) DMA Starting Address */
#define SPI_FLASH_DMA_START_ADDRESS_RESETVALUE 0x00ul         /**<  \brief (SPI_FLASH_DMA_START_ADDRESS reset_value) DMA Starting Address */

#define SPI_FLASH_DMA_START_ADDRESS_DMA_START_ADDRESS_Pos 0  /**< \brief (SPI_FLASH_DMA_START_ADDRESS)                                */
#define SPI_FLASH_DMA_START_ADDRESS_DMA_START_ADDRESS_Msk (0xFFFFFFFFul << SPI_FLASH_DMA_START_ADDRESS_DMA_START_ADDRESS_Pos)
#define SPI_FLASH_DMA_START_ADDRESS_DMA_START_ADDRESS(value) (SPI_FLASH_DMA_START_ADDRESS_DMA_START_ADDRESS_Msk & ((value) << SPI_FLASH_DMA_START_ADDRESS_DMA_START_ADDRESS_Pos))  
#define SPI_FLASH_DMA_START_ADDRESS_MASK      0xFFFFFFFFul    /**< \brief (SPI_FLASH_DMA_START_ADDRESS) Register MASK */

/* -------- SPI_FLASH_CONFIG : (SPI_FLASH Offset: 0x20) (R/W  16) SPI Flash Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t ENDIANNESS:1;              /*!< bit:      0  1 for Little Endian                      */
    uint16_t REVERSE_CMD_BUFFER:1;      /*!< bit:      1  Reverse bits of every byte in cmd_buffer */
    uint16_t RDATA_REVERSE:1;           /*!< bit:      2  Reverse bits of every data byte read from flash */
    uint16_t REVERSE_INCOMIND_DATA:1;   /*!< bit:      3  Reverse bits of status registers read from flash */
    uint16_t SPI_INTERFACE_CONFIG_DEBUG:4;  /*!< bit:   4..7  Debug only                               */
    uint16_t WDATA_REVERSE:1;           /*!< bit:      8  Reverse bits of every data byte written to flash */
    uint16_t :7;                        /*!< bit:  9..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} SPI_FLASH_CONFIG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_FLASH_CONFIG_OFFSET               0x20           /**<  \brief (SPI_FLASH_CONFIG offset) SPI Flash Configuration */
#define SPI_FLASH_CONFIG_RESETVALUE           0x103ul        /**<  \brief (SPI_FLASH_CONFIG reset_value) SPI Flash Configuration */

#define SPI_FLASH_CONFIG_ENDIANNESS_Pos       0  /**< \brief (SPI_FLASH_CONFIG) 1 for Little Endian                       */
#define SPI_FLASH_CONFIG_ENDIANNESS           (0x1ul << SPI_FLASH_CONFIG_ENDIANNESS_Pos)  
#define SPI_FLASH_CONFIG_REVERSE_CMD_BUFFER_Pos 1  /**< \brief (SPI_FLASH_CONFIG) Reverse bits of every byte in cmd_buffer  */
#define SPI_FLASH_CONFIG_REVERSE_CMD_BUFFER   (0x1ul << SPI_FLASH_CONFIG_REVERSE_CMD_BUFFER_Pos)  
#define SPI_FLASH_CONFIG_RDATA_REVERSE_Pos    2  /**< \brief (SPI_FLASH_CONFIG) Reverse bits of every data byte read from flash */
#define SPI_FLASH_CONFIG_RDATA_REVERSE        (0x1ul << SPI_FLASH_CONFIG_RDATA_REVERSE_Pos)  
#define SPI_FLASH_CONFIG_REVERSE_INCOMIND_DATA_Pos 3  /**< \brief (SPI_FLASH_CONFIG) Reverse bits of status registers read from flash */
#define SPI_FLASH_CONFIG_REVERSE_INCOMIND_DATA (0x1ul << SPI_FLASH_CONFIG_REVERSE_INCOMIND_DATA_Pos)  
#define SPI_FLASH_CONFIG_SPI_INTERFACE_CONFIG_DEBUG_Pos 4  /**< \brief (SPI_FLASH_CONFIG) Debug only                                */
#define SPI_FLASH_CONFIG_SPI_INTERFACE_CONFIG_DEBUG_Msk (0xFul << SPI_FLASH_CONFIG_SPI_INTERFACE_CONFIG_DEBUG_Pos)
#define SPI_FLASH_CONFIG_SPI_INTERFACE_CONFIG_DEBUG(value) (SPI_FLASH_CONFIG_SPI_INTERFACE_CONFIG_DEBUG_Msk & ((value) << SPI_FLASH_CONFIG_SPI_INTERFACE_CONFIG_DEBUG_Pos))  
#define SPI_FLASH_CONFIG_WDATA_REVERSE_Pos    8  /**< \brief (SPI_FLASH_CONFIG) Reverse bits of every data byte written to flash */
#define SPI_FLASH_CONFIG_WDATA_REVERSE        (0x1ul << SPI_FLASH_CONFIG_WDATA_REVERSE_Pos)  
#define SPI_FLASH_CONFIG_MASK                 0x1FFul    /**< \brief (SPI_FLASH_CONFIG) Register MASK */

/* -------- SPI_FLASH_TX_CONTROL : (SPI_FLASH Offset: 0x24) (R/W  16) TX Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t DRIVE_0_ON_TX:1;           /*!< bit:      0  Drive 0 on TX while reading              */
    uint16_t DRIVE_1_ON_TX:1;           /*!< bit:      1  Drive 1 on TX while reading              */
    uint16_t TOGGLE_ON_TX:1;            /*!< bit:      2  Toggle TX while reading                  */
    uint16_t DUMMY_ON_TX:1;             /*!< bit:      3  Send dummy_byte while reading            */
    uint16_t :4;                        /*!< bit:   4..7  Reserved                                 */
    uint16_t DUMMY_BYTE:8;              /*!< bit:  8..15  Byte to be sent for dummy_on_tx option   */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} SPI_FLASH_TX_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_FLASH_TX_CONTROL_OFFSET           0x24           /**<  \brief (SPI_FLASH_TX_CONTROL offset) TX Control */
#define SPI_FLASH_TX_CONTROL_RESETVALUE       0x00ul         /**<  \brief (SPI_FLASH_TX_CONTROL reset_value) TX Control */

#define SPI_FLASH_TX_CONTROL_DRIVE_0_ON_TX_Pos 0  /**< \brief (SPI_FLASH_TX_CONTROL) Drive 0 on TX while reading           */
#define SPI_FLASH_TX_CONTROL_DRIVE_0_ON_TX    (0x1ul << SPI_FLASH_TX_CONTROL_DRIVE_0_ON_TX_Pos)  
#define SPI_FLASH_TX_CONTROL_DRIVE_1_ON_TX_Pos 1  /**< \brief (SPI_FLASH_TX_CONTROL) Drive 1 on TX while reading           */
#define SPI_FLASH_TX_CONTROL_DRIVE_1_ON_TX    (0x1ul << SPI_FLASH_TX_CONTROL_DRIVE_1_ON_TX_Pos)  
#define SPI_FLASH_TX_CONTROL_TOGGLE_ON_TX_Pos 2  /**< \brief (SPI_FLASH_TX_CONTROL) Toggle TX while reading               */
#define SPI_FLASH_TX_CONTROL_TOGGLE_ON_TX     (0x1ul << SPI_FLASH_TX_CONTROL_TOGGLE_ON_TX_Pos)  
#define SPI_FLASH_TX_CONTROL_DUMMY_ON_TX_Pos  3  /**< \brief (SPI_FLASH_TX_CONTROL) Send dummy_byte while reading         */
#define SPI_FLASH_TX_CONTROL_DUMMY_ON_TX      (0x1ul << SPI_FLASH_TX_CONTROL_DUMMY_ON_TX_Pos)  
#define SPI_FLASH_TX_CONTROL_DUMMY_BYTE_Pos   8  /**< \brief (SPI_FLASH_TX_CONTROL) Byte to be sent for dummy_on_tx option */
#define SPI_FLASH_TX_CONTROL_DUMMY_BYTE_Msk   (0xFFul << SPI_FLASH_TX_CONTROL_DUMMY_BYTE_Pos)
#define SPI_FLASH_TX_CONTROL_DUMMY_BYTE(value) (SPI_FLASH_TX_CONTROL_DUMMY_BYTE_Msk & ((value) << SPI_FLASH_TX_CONTROL_DUMMY_BYTE_Pos))  
#define SPI_FLASH_TX_CONTROL_MASK             0xFF0Ful    /**< \brief (SPI_FLASH_TX_CONTROL) Register MASK */

/* -------- SPI_FLASH_STATUS : (SPI_FLASH Offset: 0x28) (R/  16) Misc Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t AHB_MASTER_STATE:2;        /*!< bit:   0..1  AHB Master State                         */
    uint16_t :2;                        /*!< bit:   2..3  Reserved                                 */
    uint16_t FIFO_CTRL_STATE:3;         /*!< bit:   4..6  FIFO Control State                       */
    uint16_t :1;                        /*!< bit:      7  Reserved                                 */
    uint16_t SPI_MASTER_STATE:3;        /*!< bit:  8..10  SPI Master State                         */
    uint16_t :1;                        /*!< bit:     11  Reserved                                 */
    uint16_t SPI_MASTER_CSN:1;          /*!< bit:     12  Inverted version of the SPI Master Chip Select */
    uint16_t :3;                        /*!< bit: 13..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} SPI_FLASH_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_FLASH_STATUS_OFFSET               0x28           /**<  \brief (SPI_FLASH_STATUS offset) Misc Status */
#define SPI_FLASH_STATUS_RESETVALUE           0x00ul         /**<  \brief (SPI_FLASH_STATUS reset_value) Misc Status */

#define SPI_FLASH_STATUS_AHB_MASTER_STATE_Pos 0  /**< \brief (SPI_FLASH_STATUS) AHB Master State                          */
#define SPI_FLASH_STATUS_AHB_MASTER_STATE_Msk (0x3ul << SPI_FLASH_STATUS_AHB_MASTER_STATE_Pos)
#define SPI_FLASH_STATUS_AHB_MASTER_STATE(value) (SPI_FLASH_STATUS_AHB_MASTER_STATE_Msk & ((value) << SPI_FLASH_STATUS_AHB_MASTER_STATE_Pos))  
#define   SPI_FLASH_STATUS_AHB_MASTER_STATE_0_Val        0X0ul  /**< \brief (SPI_FLASH_STATUS) IDLE  */
#define   SPI_FLASH_STATUS_AHB_MASTER_STATE_1_Val        0X1ul  /**< \brief (SPI_FLASH_STATUS) WAIT_GRANT  */
#define   SPI_FLASH_STATUS_AHB_MASTER_STATE_2_Val        0X2ul  /**< \brief (SPI_FLASH_STATUS) ADDR_PHASE  */
#define   SPI_FLASH_STATUS_AHB_MASTER_STATE_3_Val        0X3ul  /**< \brief (SPI_FLASH_STATUS) DATA_PHASE  */
#define SPI_FLASH_STATUS_AHB_MASTER_STATE_0    (SPI_FLASH_STATUS_AHB_MASTER_STATE_0_Val << SPI_FLASH_STATUS_AHB_MASTER_STATE_Pos)
#define SPI_FLASH_STATUS_AHB_MASTER_STATE_1    (SPI_FLASH_STATUS_AHB_MASTER_STATE_1_Val << SPI_FLASH_STATUS_AHB_MASTER_STATE_Pos)
#define SPI_FLASH_STATUS_AHB_MASTER_STATE_2    (SPI_FLASH_STATUS_AHB_MASTER_STATE_2_Val << SPI_FLASH_STATUS_AHB_MASTER_STATE_Pos)
#define SPI_FLASH_STATUS_AHB_MASTER_STATE_3    (SPI_FLASH_STATUS_AHB_MASTER_STATE_3_Val << SPI_FLASH_STATUS_AHB_MASTER_STATE_Pos)
#define SPI_FLASH_STATUS_FIFO_CTRL_STATE_Pos  4  /**< \brief (SPI_FLASH_STATUS) FIFO Control State                        */
#define SPI_FLASH_STATUS_FIFO_CTRL_STATE_Msk  (0x7ul << SPI_FLASH_STATUS_FIFO_CTRL_STATE_Pos)
#define SPI_FLASH_STATUS_FIFO_CTRL_STATE(value) (SPI_FLASH_STATUS_FIFO_CTRL_STATE_Msk & ((value) << SPI_FLASH_STATUS_FIFO_CTRL_STATE_Pos))  
#define   SPI_FLASH_STATUS_FIFO_CTRL_STATE_0_Val        0X0ul  /**< \brief (SPI_FLASH_STATUS) FLASH_IDLE  */
#define   SPI_FLASH_STATUS_FIFO_CTRL_STATE_1_Val        0X1ul  /**< \brief (SPI_FLASH_STATUS) GET_DATA_FROM_FLASH  */
#define   SPI_FLASH_STATUS_FIFO_CTRL_STATE_2_Val        0X2ul  /**< \brief (SPI_FLASH_STATUS) WRITE_DATA_TO_AHB  */
#define   SPI_FLASH_STATUS_FIFO_CTRL_STATE_3_Val        0X3ul  /**< \brief (SPI_FLASH_STATUS) GET_DATA_FROM_AHB  */
#define   SPI_FLASH_STATUS_FIFO_CTRL_STATE_4_Val        0X4ul  /**< \brief (SPI_FLASH_STATUS) WRITE_DATA_TO_FLASH  */
#define SPI_FLASH_STATUS_FIFO_CTRL_STATE_0    (SPI_FLASH_STATUS_FIFO_CTRL_STATE_0_Val << SPI_FLASH_STATUS_FIFO_CTRL_STATE_Pos)
#define SPI_FLASH_STATUS_FIFO_CTRL_STATE_1    (SPI_FLASH_STATUS_FIFO_CTRL_STATE_1_Val << SPI_FLASH_STATUS_FIFO_CTRL_STATE_Pos)
#define SPI_FLASH_STATUS_FIFO_CTRL_STATE_2    (SPI_FLASH_STATUS_FIFO_CTRL_STATE_2_Val << SPI_FLASH_STATUS_FIFO_CTRL_STATE_Pos)
#define SPI_FLASH_STATUS_FIFO_CTRL_STATE_3    (SPI_FLASH_STATUS_FIFO_CTRL_STATE_3_Val << SPI_FLASH_STATUS_FIFO_CTRL_STATE_Pos)
#define SPI_FLASH_STATUS_FIFO_CTRL_STATE_4    (SPI_FLASH_STATUS_FIFO_CTRL_STATE_4_Val << SPI_FLASH_STATUS_FIFO_CTRL_STATE_Pos)
#define SPI_FLASH_STATUS_SPI_MASTER_STATE_Pos 8  /**< \brief (SPI_FLASH_STATUS) SPI Master State                          */
#define SPI_FLASH_STATUS_SPI_MASTER_STATE_Msk (0x7ul << SPI_FLASH_STATUS_SPI_MASTER_STATE_Pos)
#define SPI_FLASH_STATUS_SPI_MASTER_STATE(value) (SPI_FLASH_STATUS_SPI_MASTER_STATE_Msk & ((value) << SPI_FLASH_STATUS_SPI_MASTER_STATE_Pos))  
#define   SPI_FLASH_STATUS_SPI_MASTER_STATE_0_Val        0X0ul  /**< \brief (SPI_FLASH_STATUS) IDLE  */
#define   SPI_FLASH_STATUS_SPI_MASTER_STATE_1_Val        0X1ul  /**< \brief (SPI_FLASH_STATUS) READ  */
#define   SPI_FLASH_STATUS_SPI_MASTER_STATE_2_Val        0X2ul  /**< \brief (SPI_FLASH_STATUS) WRITE  */
#define   SPI_FLASH_STATUS_SPI_MASTER_STATE_3_Val        0X3ul  /**< \brief (SPI_FLASH_STATUS) READ_FLASH  */
#define   SPI_FLASH_STATUS_SPI_MASTER_STATE_4_Val        0X4ul  /**< \brief (SPI_FLASH_STATUS) WRITE_FLASH  */
#define   SPI_FLASH_STATUS_SPI_MASTER_STATE_5_Val        0X5ul  /**< \brief (SPI_FLASH_STATUS) PRE_ACTION  */
#define   SPI_FLASH_STATUS_SPI_MASTER_STATE_6_Val        0X6ul  /**< \brief (SPI_FLASH_STATUS) POST_ACTION  */
#define   SPI_FLASH_STATUS_SPI_MASTER_STATE_7_Val        0X7ul  /**< \brief (SPI_FLASH_STATUS) WAIT_AHB  */
#define SPI_FLASH_STATUS_SPI_MASTER_STATE_0    (SPI_FLASH_STATUS_SPI_MASTER_STATE_0_Val << SPI_FLASH_STATUS_SPI_MASTER_STATE_Pos)
#define SPI_FLASH_STATUS_SPI_MASTER_STATE_1    (SPI_FLASH_STATUS_SPI_MASTER_STATE_1_Val << SPI_FLASH_STATUS_SPI_MASTER_STATE_Pos)
#define SPI_FLASH_STATUS_SPI_MASTER_STATE_2    (SPI_FLASH_STATUS_SPI_MASTER_STATE_2_Val << SPI_FLASH_STATUS_SPI_MASTER_STATE_Pos)
#define SPI_FLASH_STATUS_SPI_MASTER_STATE_3    (SPI_FLASH_STATUS_SPI_MASTER_STATE_3_Val << SPI_FLASH_STATUS_SPI_MASTER_STATE_Pos)
#define SPI_FLASH_STATUS_SPI_MASTER_STATE_4    (SPI_FLASH_STATUS_SPI_MASTER_STATE_4_Val << SPI_FLASH_STATUS_SPI_MASTER_STATE_Pos)
#define SPI_FLASH_STATUS_SPI_MASTER_STATE_5    (SPI_FLASH_STATUS_SPI_MASTER_STATE_5_Val << SPI_FLASH_STATUS_SPI_MASTER_STATE_Pos)
#define SPI_FLASH_STATUS_SPI_MASTER_STATE_6    (SPI_FLASH_STATUS_SPI_MASTER_STATE_6_Val << SPI_FLASH_STATUS_SPI_MASTER_STATE_Pos)
#define SPI_FLASH_STATUS_SPI_MASTER_STATE_7    (SPI_FLASH_STATUS_SPI_MASTER_STATE_7_Val << SPI_FLASH_STATUS_SPI_MASTER_STATE_Pos)
#define SPI_FLASH_STATUS_SPI_MASTER_CSN_Pos   12  /**< \brief (SPI_FLASH_STATUS) Inverted version of the SPI Master Chip Select */
#define SPI_FLASH_STATUS_SPI_MASTER_CSN       (0x1ul << SPI_FLASH_STATUS_SPI_MASTER_CSN_Pos)  
#define SPI_FLASH_STATUS_MASK                 0x1773ul    /**< \brief (SPI_FLASH_STATUS) Register MASK */

/** \brief SPI_FLASH hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* SPI Flash Controller */
  __IO SPI_FLASH_MODE_CTRL_Type       MODE_CTRL;      /**< \brief Offset: 0x00 (R/W   8) SPI Flash Mode Control */
       RoReg8                         Reserved1[0x3];
  __IO SPI_FLASH_TRANSACTION_CTRL_Type TRANSACTION_CTRL; /**< \brief Offset: 0x04 (R/W  32) Transaction Control (Cleared after each transaction completes) */
  __IO SPI_FLASH_READ_CTRL_Type       READ_CTRL;      /**< \brief Offset: 0x08 (R/W  32) Read Control (Cleared after each transaction completes) */
  __IO SPI_FLASH_CMD_BUFFER0_Type     CMD_BUFFER0;    /**< \brief Offset: 0x0C (R/W  32) Command Buffer 0 (Bytes 3 - 0) */
  __IO SPI_FLASH_CMD_BUFFER1_Type     CMD_BUFFER1;    /**< \brief Offset: 0x10 (R/W  32) Command Buffer 1 (Bytes 7 - 4) */
  __IO SPI_FLASH_DIRECTION_Type       DIRECTION;      /**< \brief Offset: 0x14 (R/W   8) Read/Write bit for Bytes 7 - 0 */
       RoReg8                         Reserved2[0x3];
  __O  SPI_FLASH_IRQ_STATUS_Type      IRQ_STATUS;     /**< \brief Offset: 0x18 ( /W   8) IRQ Status (Write 0 to bit to clear, Read clears interupts) */
       RoReg8                         Reserved3[0x3];
  __IO SPI_FLASH_DMA_START_ADDRESS_Type DMA_START_ADDRESS; /**< \brief Offset: 0x1C (R/W  32) DMA Starting Address */
  __IO SPI_FLASH_CONFIG_Type          CONFIG;         /**< \brief Offset: 0x20 (R/W  16) SPI Flash Configuration */
       RoReg8                         Reserved4[0x2];
  __IO SPI_FLASH_TX_CONTROL_Type      TX_CONTROL;     /**< \brief Offset: 0x24 (R/W  16) TX Control */
       RoReg8                         Reserved5[0x2];
  __I  SPI_FLASH_STATUS_Type          STATUS;         /**< \brief Offset: 0x28 (R/   16) Misc Status */
} SpiFlash;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_SPI_FLASH_COMPONENT_ */
