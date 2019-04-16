/**
 * \file
 *
 * \brief Component description for PROV_DMA_CTRL
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

#ifndef _SAMB11_PROV_DMA_CTRL_COMPONENT_
#define _SAMB11_PROV_DMA_CTRL_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PROV_DMA_CTRL */
/* ========================================================================== */
/** \addtogroup SAMB11_PROV_DMA_CTRL 4 Channel DMA Controller */
/*@{*/

#define PROV_DMA_CTRL_PDC1234
#define REV_PROV_DMA_CTRL                0x100

/* -------- PROV_DMA_CTRL_CH0_CMD_REG0 : (PROV_DMA_CTRL Offset: 0x00) (R/W  32) Channel 0 First Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_START_ADDR:32;          /*!< bit:  0..31  Start Address of Read Buffer             */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_CMD_REG0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_CMD_REG0_OFFSET     0x00           /**<  \brief (PROV_DMA_CTRL_CH0_CMD_REG0 offset) Channel 0 First Line Channel Command */
#define PROV_DMA_CTRL_CH0_CMD_REG0_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH0_CMD_REG0 reset_value) Channel 0 First Line Channel Command */

#define PROV_DMA_CTRL_CH0_CMD_REG0_RD_START_ADDR_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_CMD_REG0) Start Address of Read Buffer    */
#define PROV_DMA_CTRL_CH0_CMD_REG0_RD_START_ADDR_Msk (0xFFFFFFFFul << PROV_DMA_CTRL_CH0_CMD_REG0_RD_START_ADDR_Pos)
#define PROV_DMA_CTRL_CH0_CMD_REG0_RD_START_ADDR(value) (PROV_DMA_CTRL_CH0_CMD_REG0_RD_START_ADDR_Msk & ((value) << PROV_DMA_CTRL_CH0_CMD_REG0_RD_START_ADDR_Pos))  
#define PROV_DMA_CTRL_CH0_CMD_REG0_MASK       0xFFFFFFFFul    /**< \brief (PROV_DMA_CTRL_CH0_CMD_REG0) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_CMD_REG1 : (PROV_DMA_CTRL Offset: 0x04) (R/W  32) Channel 0 Second Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t WR_START_ADDR:32;          /*!< bit:  0..31  Start Address of Write Buffer            */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_CMD_REG1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_CMD_REG1_OFFSET     0x04           /**<  \brief (PROV_DMA_CTRL_CH0_CMD_REG1 offset) Channel 0 Second Line Channel Command */
#define PROV_DMA_CTRL_CH0_CMD_REG1_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH0_CMD_REG1 reset_value) Channel 0 Second Line Channel Command */

#define PROV_DMA_CTRL_CH0_CMD_REG1_WR_START_ADDR_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_CMD_REG1) Start Address of Write Buffer   */
#define PROV_DMA_CTRL_CH0_CMD_REG1_WR_START_ADDR_Msk (0xFFFFFFFFul << PROV_DMA_CTRL_CH0_CMD_REG1_WR_START_ADDR_Pos)
#define PROV_DMA_CTRL_CH0_CMD_REG1_WR_START_ADDR(value) (PROV_DMA_CTRL_CH0_CMD_REG1_WR_START_ADDR_Msk & ((value) << PROV_DMA_CTRL_CH0_CMD_REG1_WR_START_ADDR_Pos))  
#define PROV_DMA_CTRL_CH0_CMD_REG1_MASK       0xFFFFFFFFul    /**< \brief (PROV_DMA_CTRL_CH0_CMD_REG1) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_CMD_REG2 : (PROV_DMA_CTRL Offset: 0x08) (R/W  16) Channel 0 Third Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t BUFFER_SIZE:13;            /*!< bit:  0..12  Size (in Bytes) of Buffer to Transfer    */
    uint16_t :3;                        /*!< bit: 13..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_CMD_REG2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_CMD_REG2_OFFSET     0x08           /**<  \brief (PROV_DMA_CTRL_CH0_CMD_REG2 offset) Channel 0 Third Line Channel Command */
#define PROV_DMA_CTRL_CH0_CMD_REG2_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH0_CMD_REG2 reset_value) Channel 0 Third Line Channel Command */

#define PROV_DMA_CTRL_CH0_CMD_REG2_BUFFER_SIZE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_CMD_REG2) Size (in Bytes) of Buffer to Transfer */
#define PROV_DMA_CTRL_CH0_CMD_REG2_BUFFER_SIZE_Msk (0x1FFFul << PROV_DMA_CTRL_CH0_CMD_REG2_BUFFER_SIZE_Pos)
#define PROV_DMA_CTRL_CH0_CMD_REG2_BUFFER_SIZE(value) (PROV_DMA_CTRL_CH0_CMD_REG2_BUFFER_SIZE_Msk & ((value) << PROV_DMA_CTRL_CH0_CMD_REG2_BUFFER_SIZE_Pos))  
#define PROV_DMA_CTRL_CH0_CMD_REG2_MASK       0x1FFFul    /**< \brief (PROV_DMA_CTRL_CH0_CMD_REG2) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_CMD_REG3 : (PROV_DMA_CTRL Offset: 0x0c) (R/W  32) Channel 0 Fourth Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CMD_SET_INT:1;             /*!< bit:      0  Active High Interrupt Enable once buffer has been transfered */
    uint32_t CMD_LAST:1;                /*!< bit:      1  If set, channel stops when buffer done, otherwise load from CMD_NEXT_ADDR */
    uint32_t CMD_NEXT_ADDR:30;          /*!< bit:  2..31  Address of next command if CMD_LAST is not set */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_CMD_REG3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_CMD_REG3_OFFSET     0x0C           /**<  \brief (PROV_DMA_CTRL_CH0_CMD_REG3 offset) Channel 0 Fourth Line Channel Command */
#define PROV_DMA_CTRL_CH0_CMD_REG3_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH0_CMD_REG3 reset_value) Channel 0 Fourth Line Channel Command */

#define PROV_DMA_CTRL_CH0_CMD_REG3_CMD_SET_INT_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_CMD_REG3) Active High Interrupt Enable once buffer has been transfered */
#define PROV_DMA_CTRL_CH0_CMD_REG3_CMD_SET_INT (0x1ul << PROV_DMA_CTRL_CH0_CMD_REG3_CMD_SET_INT_Pos)  
#define PROV_DMA_CTRL_CH0_CMD_REG3_CMD_LAST_Pos 1  /**< \brief (PROV_DMA_CTRL_CH0_CMD_REG3) If set, channel stops when buffer done, otherwise load from CMD_NEXT_ADDR */
#define PROV_DMA_CTRL_CH0_CMD_REG3_CMD_LAST   (0x1ul << PROV_DMA_CTRL_CH0_CMD_REG3_CMD_LAST_Pos)  
#define PROV_DMA_CTRL_CH0_CMD_REG3_CMD_NEXT_ADDR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH0_CMD_REG3) Address of next command if CMD_LAST is not set */
#define PROV_DMA_CTRL_CH0_CMD_REG3_CMD_NEXT_ADDR_Msk (0x3FFFFFFFul << PROV_DMA_CTRL_CH0_CMD_REG3_CMD_NEXT_ADDR_Pos)
#define PROV_DMA_CTRL_CH0_CMD_REG3_CMD_NEXT_ADDR(value) (PROV_DMA_CTRL_CH0_CMD_REG3_CMD_NEXT_ADDR_Msk & ((value) << PROV_DMA_CTRL_CH0_CMD_REG3_CMD_NEXT_ADDR_Pos))  
#define PROV_DMA_CTRL_CH0_CMD_REG3_MASK       0xFFFFFFFFul    /**< \brief (PROV_DMA_CTRL_CH0_CMD_REG3) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_STATIC_REG0 : (PROV_DMA_CTRL Offset: 0x10) (R/W  32) Channel 0 Static Configuration Read -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_BURST_MAX_SIZE:7;       /*!< bit:   0..6  Maximum number of bytes of an AHB read burst */
    uint32_t :9;                        /*!< bit:  7..15  Reserved                                 */
    uint32_t RD_TOKENS:6;               /*!< bit: 16..21  Number of AHB read commands to issue before channel is released */
    uint32_t :9;                        /*!< bit: 22..30  Reserved                                 */
    uint32_t RD_INCR:1;                 /*!< bit:     31  If set the controller will increment the next burst address */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_STATIC_REG0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_STATIC_REG0_OFFSET  0x10           /**<  \brief (PROV_DMA_CTRL_CH0_STATIC_REG0 offset) Channel 0 Static Configuration Read */
#define PROV_DMA_CTRL_CH0_STATIC_REG0_RESETVALUE 0x80010000ul   /**<  \brief (PROV_DMA_CTRL_CH0_STATIC_REG0 reset_value) Channel 0 Static Configuration Read */

#define PROV_DMA_CTRL_CH0_STATIC_REG0_RD_BURST_MAX_SIZE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG0) Maximum number of bytes of an AHB read burst */
#define PROV_DMA_CTRL_CH0_STATIC_REG0_RD_BURST_MAX_SIZE_Msk (0x7Ful << PROV_DMA_CTRL_CH0_STATIC_REG0_RD_BURST_MAX_SIZE_Pos)
#define PROV_DMA_CTRL_CH0_STATIC_REG0_RD_BURST_MAX_SIZE(value) (PROV_DMA_CTRL_CH0_STATIC_REG0_RD_BURST_MAX_SIZE_Msk & ((value) << PROV_DMA_CTRL_CH0_STATIC_REG0_RD_BURST_MAX_SIZE_Pos))  
#define PROV_DMA_CTRL_CH0_STATIC_REG0_RD_TOKENS_Pos 16  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG0) Number of AHB read commands to issue before channel is released */
#define PROV_DMA_CTRL_CH0_STATIC_REG0_RD_TOKENS_Msk (0x3Ful << PROV_DMA_CTRL_CH0_STATIC_REG0_RD_TOKENS_Pos)
#define PROV_DMA_CTRL_CH0_STATIC_REG0_RD_TOKENS(value) (PROV_DMA_CTRL_CH0_STATIC_REG0_RD_TOKENS_Msk & ((value) << PROV_DMA_CTRL_CH0_STATIC_REG0_RD_TOKENS_Pos))  
#define PROV_DMA_CTRL_CH0_STATIC_REG0_RD_INCR_Pos 31  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG0) If set the controller will increment the next burst address */
#define PROV_DMA_CTRL_CH0_STATIC_REG0_RD_INCR (0x1ul << PROV_DMA_CTRL_CH0_STATIC_REG0_RD_INCR_Pos)  
#define PROV_DMA_CTRL_CH0_STATIC_REG0_MASK    0x803F007Ful    /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG0) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_STATIC_REG1 : (PROV_DMA_CTRL Offset: 0x14) (R/W  32) Channel 0 Static Configuration Write -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t WR_BURST_MAX_SIZE:7;       /*!< bit:   0..6  Maximum number of bytes of an AHB write burst */
    uint32_t :9;                        /*!< bit:  7..15  Reserved                                 */
    uint32_t WR_TOKENS:6;               /*!< bit: 16..21  Number of AHB write commands to issue before channel is released */
    uint32_t :9;                        /*!< bit: 22..30  Reserved                                 */
    uint32_t WR_INCR:1;                 /*!< bit:     31  If set the controller will increment the next burst address */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_STATIC_REG1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_STATIC_REG1_OFFSET  0x14           /**<  \brief (PROV_DMA_CTRL_CH0_STATIC_REG1 offset) Channel 0 Static Configuration Write */
#define PROV_DMA_CTRL_CH0_STATIC_REG1_RESETVALUE 0x80010000ul   /**<  \brief (PROV_DMA_CTRL_CH0_STATIC_REG1 reset_value) Channel 0 Static Configuration Write */

#define PROV_DMA_CTRL_CH0_STATIC_REG1_WR_BURST_MAX_SIZE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG1) Maximum number of bytes of an AHB write burst */
#define PROV_DMA_CTRL_CH0_STATIC_REG1_WR_BURST_MAX_SIZE_Msk (0x7Ful << PROV_DMA_CTRL_CH0_STATIC_REG1_WR_BURST_MAX_SIZE_Pos)
#define PROV_DMA_CTRL_CH0_STATIC_REG1_WR_BURST_MAX_SIZE(value) (PROV_DMA_CTRL_CH0_STATIC_REG1_WR_BURST_MAX_SIZE_Msk & ((value) << PROV_DMA_CTRL_CH0_STATIC_REG1_WR_BURST_MAX_SIZE_Pos))  
#define PROV_DMA_CTRL_CH0_STATIC_REG1_WR_TOKENS_Pos 16  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG1) Number of AHB write commands to issue before channel is released */
#define PROV_DMA_CTRL_CH0_STATIC_REG1_WR_TOKENS_Msk (0x3Ful << PROV_DMA_CTRL_CH0_STATIC_REG1_WR_TOKENS_Pos)
#define PROV_DMA_CTRL_CH0_STATIC_REG1_WR_TOKENS(value) (PROV_DMA_CTRL_CH0_STATIC_REG1_WR_TOKENS_Msk & ((value) << PROV_DMA_CTRL_CH0_STATIC_REG1_WR_TOKENS_Pos))  
#define PROV_DMA_CTRL_CH0_STATIC_REG1_WR_INCR_Pos 31  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG1) If set the controller will increment the next burst address */
#define PROV_DMA_CTRL_CH0_STATIC_REG1_WR_INCR (0x1ul << PROV_DMA_CTRL_CH0_STATIC_REG1_WR_INCR_Pos)  
#define PROV_DMA_CTRL_CH0_STATIC_REG1_MASK    0x803F007Ful    /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG1) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_STATIC_REG2 : (PROV_DMA_CTRL Offset: 0x18) (R/W  32) Channel 0 Block Mode -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :16;                       /*!< bit:  0..15  Reserved                                 */
    uint32_t JOINT:1;                   /*!< bit:     16  If set channel will work in joint mode   */
    uint32_t :11;                       /*!< bit: 17..27  Reserved                                 */
    uint32_t END_SWAP:2;                /*!< bit: 28..29  Endianness Byte Swapping                 */
    uint32_t :2;                        /*!< bit: 30..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_STATIC_REG2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_STATIC_REG2_OFFSET  0x18           /**<  \brief (PROV_DMA_CTRL_CH0_STATIC_REG2 offset) Channel 0 Block Mode */
#define PROV_DMA_CTRL_CH0_STATIC_REG2_RESETVALUE 0x10000ul      /**<  \brief (PROV_DMA_CTRL_CH0_STATIC_REG2 reset_value) Channel 0 Block Mode */

#define PROV_DMA_CTRL_CH0_STATIC_REG2_JOINT_Pos 16  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG2) If set channel will work in joint mode */
#define PROV_DMA_CTRL_CH0_STATIC_REG2_JOINT   (0x1ul << PROV_DMA_CTRL_CH0_STATIC_REG2_JOINT_Pos)  
#define PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_Pos 28  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG2) Endianness Byte Swapping     */
#define PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_Msk (0x3ul << PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP(value) (PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_Msk & ((value) << PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_Pos))  
#define   PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_0_Val        0X0ul  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG2) No Swapping  */
#define   PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_1_Val        0X1ul  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG2) Swap bytes within 16 bits  */
#define   PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_2_Val        0X2ul  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG2) Swap bytes within 32 bits  */
#define   PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_3_Val        0X3ul  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG2) Swap bytes within 64 bits  */
#define PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_0    (PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_0_Val << PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_1    (PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_1_Val << PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_2    (PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_2_Val << PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_3    (PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_3_Val << PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH0_STATIC_REG2_MASK    0x30010000ul    /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG2) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_STATIC_REG4 : (PROV_DMA_CTRL Offset: 0x20) (R/W  32) Channel 0 Static Configuration Peripheral -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_PERIPH_NUM:5;           /*!< bit:   0..4  Number of peripheral to read from (0 if memory or no peripheral flow control) */
    uint32_t :3;                        /*!< bit:   5..7  Reserved                                 */
    uint32_t RD_PERIPH_DELAY:3;         /*!< bit:  8..10  Number of cycles to wait for read request signal to update after issuing the read clear signal */
    uint32_t :5;                        /*!< bit: 11..15  Reserved                                 */
    uint32_t WR_PERIPH_NUM:5;           /*!< bit: 16..20  Number of peripheral to write from (0 if memory or no peripheral flow control) */
    uint32_t :3;                        /*!< bit: 21..23  Reserved                                 */
    uint32_t WR_PERIPH_DELAY:3;         /*!< bit: 24..26  Number of cycles to wait for write request signal to update after issuing the write clear signal */
    uint32_t :5;                        /*!< bit: 27..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_STATIC_REG4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_STATIC_REG4_OFFSET  0x20           /**<  \brief (PROV_DMA_CTRL_CH0_STATIC_REG4 offset) Channel 0 Static Configuration Peripheral */
#define PROV_DMA_CTRL_CH0_STATIC_REG4_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH0_STATIC_REG4 reset_value) Channel 0 Static Configuration Peripheral */

#define PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_NUM_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG4) Number of peripheral to read from (0 if memory or no peripheral flow control) */
#define PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_NUM_Msk (0x1Ful << PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_NUM_Pos)
#define PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_NUM(value) (PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_NUM_Msk & ((value) << PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_NUM_Pos))  
#define PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_DELAY_Pos 8  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG4) Number of cycles to wait for read request signal to update after issuing the read clear signal */
#define PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_DELAY_Msk (0x7ul << PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_DELAY_Pos)
#define PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_DELAY(value) (PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_DELAY_Msk & ((value) << PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_DELAY_Pos))  
#define PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_NUM_Pos 16  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG4) Number of peripheral to write from (0 if memory or no peripheral flow control) */
#define PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_NUM_Msk (0x1Ful << PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_NUM_Pos)
#define PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_NUM(value) (PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_NUM_Msk & ((value) << PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_NUM_Pos))  
#define PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_DELAY_Pos 24  /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG4) Number of cycles to wait for write request signal to update after issuing the write clear signal */
#define PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_DELAY_Msk (0x7ul << PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_DELAY_Pos)
#define PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_DELAY(value) (PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_DELAY_Msk & ((value) << PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_DELAY_Pos))  
#define PROV_DMA_CTRL_CH0_STATIC_REG4_MASK    0x71F071Ful    /**< \brief (PROV_DMA_CTRL_CH0_STATIC_REG4) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_RESRICT_REG : (PROV_DMA_CTRL Offset: 0x2c) (R/  16) Channel 0 Restrictions Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t RD_ALLOW_FULL_FIFO:1;      /*!< bit:      0  Read start address does not restrict burst size */
    uint16_t WR_ALLOW_FULL_FIFO:1;      /*!< bit:      1  Write start address does not restrict burst size */
    uint16_t ALLOW_FULL_FIFO:1;         /*!< bit:      2  Burst sizes can equal data buffer size, otherwise max burst is half data buffer size */
    uint16_t ALLOW_FULL_BURST:1;        /*!< bit:      3  Maximum burst of 16 strobes can be used (joint mode only) */
    uint16_t ALLOW_JOINT_BURST:1;       /*!< bit:      4  Joint bursts are currently active        */
    uint16_t :3;                        /*!< bit:   5..7  Reserved                                 */
    uint16_t SIMPLE_MEM:1;              /*!< bit:      8  Configuration is aligned and peripherals are not used */
    uint16_t :7;                        /*!< bit:  9..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_RESRICT_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_RESRICT_REG_OFFSET  0x2C           /**<  \brief (PROV_DMA_CTRL_CH0_RESRICT_REG offset) Channel 0 Restrictions Status Register */
#define PROV_DMA_CTRL_CH0_RESRICT_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH0_RESRICT_REG reset_value) Channel 0 Restrictions Status Register */

#define PROV_DMA_CTRL_CH0_RESRICT_REG_RD_ALLOW_FULL_FIFO_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_RESRICT_REG) Read start address does not restrict burst size */
#define PROV_DMA_CTRL_CH0_RESRICT_REG_RD_ALLOW_FULL_FIFO (0x1ul << PROV_DMA_CTRL_CH0_RESRICT_REG_RD_ALLOW_FULL_FIFO_Pos)  
#define PROV_DMA_CTRL_CH0_RESRICT_REG_WR_ALLOW_FULL_FIFO_Pos 1  /**< \brief (PROV_DMA_CTRL_CH0_RESRICT_REG) Write start address does not restrict burst size */
#define PROV_DMA_CTRL_CH0_RESRICT_REG_WR_ALLOW_FULL_FIFO (0x1ul << PROV_DMA_CTRL_CH0_RESRICT_REG_WR_ALLOW_FULL_FIFO_Pos)  
#define PROV_DMA_CTRL_CH0_RESRICT_REG_ALLOW_FULL_FIFO_Pos 2  /**< \brief (PROV_DMA_CTRL_CH0_RESRICT_REG) Burst sizes can equal data buffer size, otherwise max burst is half data buffer size */
#define PROV_DMA_CTRL_CH0_RESRICT_REG_ALLOW_FULL_FIFO (0x1ul << PROV_DMA_CTRL_CH0_RESRICT_REG_ALLOW_FULL_FIFO_Pos)  
#define PROV_DMA_CTRL_CH0_RESRICT_REG_ALLOW_FULL_BURST_Pos 3  /**< \brief (PROV_DMA_CTRL_CH0_RESRICT_REG) Maximum burst of 16 strobes can be used (joint mode only) */
#define PROV_DMA_CTRL_CH0_RESRICT_REG_ALLOW_FULL_BURST (0x1ul << PROV_DMA_CTRL_CH0_RESRICT_REG_ALLOW_FULL_BURST_Pos)  
#define PROV_DMA_CTRL_CH0_RESRICT_REG_ALLOW_JOINT_BURST_Pos 4  /**< \brief (PROV_DMA_CTRL_CH0_RESRICT_REG) Joint bursts are currently active */
#define PROV_DMA_CTRL_CH0_RESRICT_REG_ALLOW_JOINT_BURST (0x1ul << PROV_DMA_CTRL_CH0_RESRICT_REG_ALLOW_JOINT_BURST_Pos)  
#define PROV_DMA_CTRL_CH0_RESRICT_REG_SIMPLE_MEM_Pos 8  /**< \brief (PROV_DMA_CTRL_CH0_RESRICT_REG) Configuration is aligned and peripherals are not used */
#define PROV_DMA_CTRL_CH0_RESRICT_REG_SIMPLE_MEM (0x1ul << PROV_DMA_CTRL_CH0_RESRICT_REG_SIMPLE_MEM_Pos)  
#define PROV_DMA_CTRL_CH0_RESRICT_REG_MASK    0x11Ful    /**< \brief (PROV_DMA_CTRL_CH0_RESRICT_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG : (PROV_DMA_CTRL Offset: 0x38) (R/  32) Channel 0 FIFO Fullness Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_GAP:13;                 /*!< bit:  0..12  Remaining space (in bytes) in FIFO for read data */
    uint32_t :3;                        /*!< bit: 13..15  Reserved                                 */
    uint32_t WR_FULLNESS:13;            /*!< bit: 16..28  Occupied space (in bytes) in FIFO by write data */
    uint32_t :3;                        /*!< bit: 29..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_OFFSET 0x38           /**<  \brief (PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG offset) Channel 0 FIFO Fullness Status Register */
#define PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG reset_value) Channel 0 FIFO Fullness Status Register */

#define PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_RD_GAP_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG) Remaining space (in bytes) in FIFO for read data */
#define PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_RD_GAP_Msk (0x1FFFul << PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_RD_GAP_Pos)
#define PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_RD_GAP(value) (PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_RD_GAP_Msk & ((value) << PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_RD_GAP_Pos))  
#define PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_WR_FULLNESS_Pos 16  /**< \brief (PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG) Occupied space (in bytes) in FIFO by write data */
#define PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_WR_FULLNESS_Msk (0x1FFFul << PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_WR_FULLNESS_Pos)
#define PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_WR_FULLNESS(value) (PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_WR_FULLNESS_Msk & ((value) << PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_WR_FULLNESS_Pos))  
#define PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_MASK 0x1FFF1FFFul    /**< \brief (PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_CH_ENABLE_REG : (PROV_DMA_CTRL Offset: 0x40) (R/W  8) Channel 0 Channel Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH0_CH_ENABLE_REG:1;       /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_CH_ENABLE_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_CH_ENABLE_REG_OFFSET 0x40           /**<  \brief (PROV_DMA_CTRL_CH0_CH_ENABLE_REG offset) Channel 0 Channel Enable Register */
#define PROV_DMA_CTRL_CH0_CH_ENABLE_REG_RESETVALUE 0x01ul         /**<  \brief (PROV_DMA_CTRL_CH0_CH_ENABLE_REG reset_value) Channel 0 Channel Enable Register */

#define PROV_DMA_CTRL_CH0_CH_ENABLE_REG_CH0_CH_ENABLE_REG_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_CH_ENABLE_REG)                            */
#define PROV_DMA_CTRL_CH0_CH_ENABLE_REG_CH0_CH_ENABLE_REG (0x1ul << PROV_DMA_CTRL_CH0_CH_ENABLE_REG_CH0_CH_ENABLE_REG_Pos)  
#define PROV_DMA_CTRL_CH0_CH_ENABLE_REG_MASK  0x01ul    /**< \brief (PROV_DMA_CTRL_CH0_CH_ENABLE_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_CH_START_REG : (PROV_DMA_CTRL Offset: 0x44) (/W  8) Channel 0 Channel Start Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH0_CH_START_REG:1;        /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_CH_START_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_CH_START_REG_OFFSET 0x44           /**<  \brief (PROV_DMA_CTRL_CH0_CH_START_REG offset) Channel 0 Channel Start Register */
#define PROV_DMA_CTRL_CH0_CH_START_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH0_CH_START_REG reset_value) Channel 0 Channel Start Register */

#define PROV_DMA_CTRL_CH0_CH_START_REG_CH0_CH_START_REG_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_CH_START_REG)                             */
#define PROV_DMA_CTRL_CH0_CH_START_REG_CH0_CH_START_REG (0x1ul << PROV_DMA_CTRL_CH0_CH_START_REG_CH0_CH_START_REG_Pos)  
#define PROV_DMA_CTRL_CH0_CH_START_REG_MASK   0x01ul    /**< \brief (PROV_DMA_CTRL_CH0_CH_START_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_CH_ACTIVE_REG : (PROV_DMA_CTRL Offset: 0x48) (R/  8) Channel 0 Channel Active Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_RD_ACTIVE:1;            /*!< bit:      0  Set if channel is enabled and all read data has been received */
    uint8_t  CH_WR_ACTIVE:1;            /*!< bit:      1  Set if channel is enabled and all write data has been transfered */
    uint8_t  :6;                        /*!< bit:   2..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_CH_ACTIVE_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_CH_ACTIVE_REG_OFFSET 0x48           /**<  \brief (PROV_DMA_CTRL_CH0_CH_ACTIVE_REG offset) Channel 0 Channel Active Status Register */
#define PROV_DMA_CTRL_CH0_CH_ACTIVE_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH0_CH_ACTIVE_REG reset_value) Channel 0 Channel Active Status Register */

#define PROV_DMA_CTRL_CH0_CH_ACTIVE_REG_CH_RD_ACTIVE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_CH_ACTIVE_REG) Set if channel is enabled and all read data has been received */
#define PROV_DMA_CTRL_CH0_CH_ACTIVE_REG_CH_RD_ACTIVE (0x1ul << PROV_DMA_CTRL_CH0_CH_ACTIVE_REG_CH_RD_ACTIVE_Pos)  
#define PROV_DMA_CTRL_CH0_CH_ACTIVE_REG_CH_WR_ACTIVE_Pos 1  /**< \brief (PROV_DMA_CTRL_CH0_CH_ACTIVE_REG) Set if channel is enabled and all write data has been transfered */
#define PROV_DMA_CTRL_CH0_CH_ACTIVE_REG_CH_WR_ACTIVE (0x1ul << PROV_DMA_CTRL_CH0_CH_ACTIVE_REG_CH_WR_ACTIVE_Pos)  
#define PROV_DMA_CTRL_CH0_CH_ACTIVE_REG_MASK  0x03ul    /**< \brief (PROV_DMA_CTRL_CH0_CH_ACTIVE_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_COUNT_REG : (PROV_DMA_CTRL Offset: 0x50) (R/  32) Channel 0 Buffer Counter Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t BUFF_COUNT:12;             /*!< bit:  0..11  Number of buffers transferred by channel since started */
    uint32_t :4;                        /*!< bit: 12..15  Reserved                                 */
    uint32_t INT_COUNT:4;               /*!< bit: 16..19  Number of unserviced end interrupts      */
    uint32_t :12;                       /*!< bit: 20..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_COUNT_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_COUNT_REG_OFFSET    0x50           /**<  \brief (PROV_DMA_CTRL_CH0_COUNT_REG offset) Channel 0 Buffer Counter Status Register */
#define PROV_DMA_CTRL_CH0_COUNT_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH0_COUNT_REG reset_value) Channel 0 Buffer Counter Status Register */

#define PROV_DMA_CTRL_CH0_COUNT_REG_BUFF_COUNT_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_COUNT_REG) Number of buffers transferred by channel since started */
#define PROV_DMA_CTRL_CH0_COUNT_REG_BUFF_COUNT_Msk (0xFFFul << PROV_DMA_CTRL_CH0_COUNT_REG_BUFF_COUNT_Pos)
#define PROV_DMA_CTRL_CH0_COUNT_REG_BUFF_COUNT(value) (PROV_DMA_CTRL_CH0_COUNT_REG_BUFF_COUNT_Msk & ((value) << PROV_DMA_CTRL_CH0_COUNT_REG_BUFF_COUNT_Pos))  
#define PROV_DMA_CTRL_CH0_COUNT_REG_INT_COUNT_Pos 16  /**< \brief (PROV_DMA_CTRL_CH0_COUNT_REG) Number of unserviced end interrupts */
#define PROV_DMA_CTRL_CH0_COUNT_REG_INT_COUNT_Msk (0xFul << PROV_DMA_CTRL_CH0_COUNT_REG_INT_COUNT_Pos)
#define PROV_DMA_CTRL_CH0_COUNT_REG_INT_COUNT(value) (PROV_DMA_CTRL_CH0_COUNT_REG_INT_COUNT_Msk & ((value) << PROV_DMA_CTRL_CH0_COUNT_REG_INT_COUNT_Pos))  
#define PROV_DMA_CTRL_CH0_COUNT_REG_MASK      0xF0FFFul    /**< \brief (PROV_DMA_CTRL_CH0_COUNT_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG : (PROV_DMA_CTRL Offset: 0xa0) (R/W  8) Channel 0 Interrupt Raw Status (Write 1 to any field to issue interrupt) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Indicates an unserviced channel end interrupt */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  AHB read slave error                     */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  AHB write slave error                    */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  FIFO has been overflown                  */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  FIFO has been underflown                 */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  WDT:1;                     /*!< bit:      7  Channel active but did not start a burst for 2048 cycles */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_OFFSET 0xA0           /**<  \brief (PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG offset) Channel 0 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG reset_value) Channel 0 Interrupt Raw Status (Write 1 to any field to issue interrupt) */

#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG) Indicates an unserviced channel end interrupt */
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG) AHB read slave error     */
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG) AHB write slave error    */
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG) FIFO has been overflown  */
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG) FIFO has been underflown */
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG) Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG) Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG) Channel active but did not start a burst for 2048 cycles */
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WDT (0x1ul << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_MASK 0xFFul    /**< \brief (PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_INT_CLEAR_REG : (PROV_DMA_CTRL Offset: 0xa4) (R/W  8) Channel 0 Interrupt Clear (Write 1 to clear) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Clear channel end interrupt. Decrements INT_COUNT register */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  Clear AHB read slave error               */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  Clear AHB write slave error              */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  Clears FIFO overflow                     */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  Clears FIFO underflow                    */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Clears Read Timeout                      */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Clears Write Timeout                     */
    uint8_t  WDT:1;                     /*!< bit:      7  Clears WDT                               */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_INT_CLEAR_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_OFFSET 0xA4           /**<  \brief (PROV_DMA_CTRL_CH0_INT_CLEAR_REG offset) Channel 0 Interrupt Clear (Write 1 to clear) */
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH0_INT_CLEAR_REG reset_value) Channel 0 Interrupt Clear (Write 1 to clear) */

#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_INT_CLEAR_REG) Clear channel end interrupt. Decrements INT_COUNT register */
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH0_INT_CLEAR_REG) Clear AHB read slave error */
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH0_INT_CLEAR_REG) Clear AHB write slave error */
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH0_INT_CLEAR_REG) Clears FIFO overflow       */
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH0_INT_CLEAR_REG) Clears FIFO underflow      */
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH0_INT_CLEAR_REG) Clears Read Timeout        */
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH0_INT_CLEAR_REG) Clears Write Timeout       */
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH0_INT_CLEAR_REG) Clears WDT                 */
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WDT   (0x1ul << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH0_INT_CLEAR_REG_MASK  0xFFul    /**< \brief (PROV_DMA_CTRL_CH0_INT_CLEAR_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_INT_ENABLE_REG : (PROV_DMA_CTRL Offset: 0xa8) (R/W  8) Channel 0 Interrupt Enable -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Enables end of channel interrupt         */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  Enables AHB read slave error interrupt   */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  Enables AHB write slave error interrupt  */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  Enables FIFO overflow interrupt          */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  Enables FIFO underflow interrupt         */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Enables AHB Read timeout interrupt       */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Enables AHB Write timeout interrupt      */
    uint8_t  WDT:1;                     /*!< bit:      7  Enables WDT interrupt                    */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_INT_ENABLE_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_OFFSET 0xA8           /**<  \brief (PROV_DMA_CTRL_CH0_INT_ENABLE_REG offset) Channel 0 Interrupt Enable */
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH0_INT_ENABLE_REG reset_value) Channel 0 Interrupt Enable */

#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_INT_ENABLE_REG) Enables end of channel interrupt */
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH0_INT_ENABLE_REG) Enables AHB read slave error interrupt */
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH0_INT_ENABLE_REG) Enables AHB write slave error interrupt */
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH0_INT_ENABLE_REG) Enables FIFO overflow interrupt */
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH0_INT_ENABLE_REG) Enables FIFO underflow interrupt */
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH0_INT_ENABLE_REG) Enables AHB Read timeout interrupt */
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH0_INT_ENABLE_REG) Enables AHB Write timeout interrupt */
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH0_INT_ENABLE_REG) Enables WDT interrupt     */
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WDT  (0x1ul << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH0_INT_ENABLE_REG_MASK 0xFFul    /**< \brief (PROV_DMA_CTRL_CH0_INT_ENABLE_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH0_INT_STATUS_REG : (PROV_DMA_CTRL Offset: 0xac) (R/W  8) Channel 0 Interrupt Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Indicates an unserviced channel end interrupt */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  AHB read slave error                     */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  AHB write slave error                    */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  FIFO has been overflown                  */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  FIFO has been underflown                 */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  WDT:1;                     /*!< bit:      7  Channel active but did not start a burst for 2048 cycles */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH0_INT_STATUS_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_OFFSET 0xAC           /**<  \brief (PROV_DMA_CTRL_CH0_INT_STATUS_REG offset) Channel 0 Interrupt Status */
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH0_INT_STATUS_REG reset_value) Channel 0 Interrupt Status */

#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH0_INT_STATUS_REG) Indicates an unserviced channel end interrupt */
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH0_INT_STATUS_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH0_INT_STATUS_REG) AHB read slave error      */
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH0_INT_STATUS_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH0_INT_STATUS_REG) AHB write slave error     */
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH0_INT_STATUS_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH0_INT_STATUS_REG) FIFO has been overflown   */
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH0_INT_STATUS_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH0_INT_STATUS_REG) FIFO has been underflown  */
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH0_INT_STATUS_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH0_INT_STATUS_REG) Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH0_INT_STATUS_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH0_INT_STATUS_REG) Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH0_INT_STATUS_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH0_INT_STATUS_REG) Channel active but did not start a burst for 2048 cycles */
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_WDT  (0x1ul << PROV_DMA_CTRL_CH0_INT_STATUS_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH0_INT_STATUS_REG_MASK 0xFFul    /**< \brief (PROV_DMA_CTRL_CH0_INT_STATUS_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_CMD_REG0 : (PROV_DMA_CTRL Offset: 0x100) (R/W  32) Channel 1 First Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_START_ADDR:32;          /*!< bit:  0..31  Start Address of Read Buffer             */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_CMD_REG0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_CMD_REG0_OFFSET     0x100          /**<  \brief (PROV_DMA_CTRL_CH1_CMD_REG0 offset) Channel 1 First Line Channel Command */
#define PROV_DMA_CTRL_CH1_CMD_REG0_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH1_CMD_REG0 reset_value) Channel 1 First Line Channel Command */

#define PROV_DMA_CTRL_CH1_CMD_REG0_RD_START_ADDR_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_CMD_REG0) Start Address of Read Buffer    */
#define PROV_DMA_CTRL_CH1_CMD_REG0_RD_START_ADDR_Msk (0xFFFFFFFFul << PROV_DMA_CTRL_CH1_CMD_REG0_RD_START_ADDR_Pos)
#define PROV_DMA_CTRL_CH1_CMD_REG0_RD_START_ADDR(value) (PROV_DMA_CTRL_CH1_CMD_REG0_RD_START_ADDR_Msk & ((value) << PROV_DMA_CTRL_CH1_CMD_REG0_RD_START_ADDR_Pos))  
#define PROV_DMA_CTRL_CH1_CMD_REG0_MASK       0xFFFFFFFFul    /**< \brief (PROV_DMA_CTRL_CH1_CMD_REG0) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_CMD_REG1 : (PROV_DMA_CTRL Offset: 0x104) (R/W  32) Channel 1 Second Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t WR_START_ADDR:32;          /*!< bit:  0..31  Start Address of Write Buffer            */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_CMD_REG1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_CMD_REG1_OFFSET     0x104          /**<  \brief (PROV_DMA_CTRL_CH1_CMD_REG1 offset) Channel 1 Second Line Channel Command */
#define PROV_DMA_CTRL_CH1_CMD_REG1_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH1_CMD_REG1 reset_value) Channel 1 Second Line Channel Command */

#define PROV_DMA_CTRL_CH1_CMD_REG1_WR_START_ADDR_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_CMD_REG1) Start Address of Write Buffer   */
#define PROV_DMA_CTRL_CH1_CMD_REG1_WR_START_ADDR_Msk (0xFFFFFFFFul << PROV_DMA_CTRL_CH1_CMD_REG1_WR_START_ADDR_Pos)
#define PROV_DMA_CTRL_CH1_CMD_REG1_WR_START_ADDR(value) (PROV_DMA_CTRL_CH1_CMD_REG1_WR_START_ADDR_Msk & ((value) << PROV_DMA_CTRL_CH1_CMD_REG1_WR_START_ADDR_Pos))  
#define PROV_DMA_CTRL_CH1_CMD_REG1_MASK       0xFFFFFFFFul    /**< \brief (PROV_DMA_CTRL_CH1_CMD_REG1) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_CMD_REG2 : (PROV_DMA_CTRL Offset: 0x108) (R/W  16) Channel 1 Third Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t BUFFER_SIZE:13;            /*!< bit:  0..12  Size (in Bytes) of Buffer to Transfer    */
    uint16_t :3;                        /*!< bit: 13..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_CMD_REG2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_CMD_REG2_OFFSET     0x108          /**<  \brief (PROV_DMA_CTRL_CH1_CMD_REG2 offset) Channel 1 Third Line Channel Command */
#define PROV_DMA_CTRL_CH1_CMD_REG2_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH1_CMD_REG2 reset_value) Channel 1 Third Line Channel Command */

#define PROV_DMA_CTRL_CH1_CMD_REG2_BUFFER_SIZE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_CMD_REG2) Size (in Bytes) of Buffer to Transfer */
#define PROV_DMA_CTRL_CH1_CMD_REG2_BUFFER_SIZE_Msk (0x1FFFul << PROV_DMA_CTRL_CH1_CMD_REG2_BUFFER_SIZE_Pos)
#define PROV_DMA_CTRL_CH1_CMD_REG2_BUFFER_SIZE(value) (PROV_DMA_CTRL_CH1_CMD_REG2_BUFFER_SIZE_Msk & ((value) << PROV_DMA_CTRL_CH1_CMD_REG2_BUFFER_SIZE_Pos))  
#define PROV_DMA_CTRL_CH1_CMD_REG2_MASK       0x1FFFul    /**< \brief (PROV_DMA_CTRL_CH1_CMD_REG2) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_CMD_REG3 : (PROV_DMA_CTRL Offset: 0x10c) (R/W  32) Channel 1 Fourth Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CMD_SET_INT:1;             /*!< bit:      0  Active High Interrupt Enable once buffer has been transfered */
    uint32_t CMD_LAST:1;                /*!< bit:      1  If set, channel stops when buffer done, otherwise load from CMD_NEXT_ADDR */
    uint32_t CMD_NEXT_ADDR:30;          /*!< bit:  2..31  Address of next command if CMD_LAST is not set */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_CMD_REG3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_CMD_REG3_OFFSET     0x10C          /**<  \brief (PROV_DMA_CTRL_CH1_CMD_REG3 offset) Channel 1 Fourth Line Channel Command */
#define PROV_DMA_CTRL_CH1_CMD_REG3_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH1_CMD_REG3 reset_value) Channel 1 Fourth Line Channel Command */

#define PROV_DMA_CTRL_CH1_CMD_REG3_CMD_SET_INT_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_CMD_REG3) Active High Interrupt Enable once buffer has been transfered */
#define PROV_DMA_CTRL_CH1_CMD_REG3_CMD_SET_INT (0x1ul << PROV_DMA_CTRL_CH1_CMD_REG3_CMD_SET_INT_Pos)  
#define PROV_DMA_CTRL_CH1_CMD_REG3_CMD_LAST_Pos 1  /**< \brief (PROV_DMA_CTRL_CH1_CMD_REG3) If set, channel stops when buffer done, otherwise load from CMD_NEXT_ADDR */
#define PROV_DMA_CTRL_CH1_CMD_REG3_CMD_LAST   (0x1ul << PROV_DMA_CTRL_CH1_CMD_REG3_CMD_LAST_Pos)  
#define PROV_DMA_CTRL_CH1_CMD_REG3_CMD_NEXT_ADDR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH1_CMD_REG3) Address of next command if CMD_LAST is not set */
#define PROV_DMA_CTRL_CH1_CMD_REG3_CMD_NEXT_ADDR_Msk (0x3FFFFFFFul << PROV_DMA_CTRL_CH1_CMD_REG3_CMD_NEXT_ADDR_Pos)
#define PROV_DMA_CTRL_CH1_CMD_REG3_CMD_NEXT_ADDR(value) (PROV_DMA_CTRL_CH1_CMD_REG3_CMD_NEXT_ADDR_Msk & ((value) << PROV_DMA_CTRL_CH1_CMD_REG3_CMD_NEXT_ADDR_Pos))  
#define PROV_DMA_CTRL_CH1_CMD_REG3_MASK       0xFFFFFFFFul    /**< \brief (PROV_DMA_CTRL_CH1_CMD_REG3) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_STATIC_REG0 : (PROV_DMA_CTRL Offset: 0x110) (R/W  32) Channel 1 Static Configuration Read -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_BURST_MAX_SIZE:7;       /*!< bit:   0..6  Maximum number of bytes of an AHB read burst */
    uint32_t :9;                        /*!< bit:  7..15  Reserved                                 */
    uint32_t RD_TOKENS:6;               /*!< bit: 16..21  Number of AHB read commands to issue before channel is released */
    uint32_t :9;                        /*!< bit: 22..30  Reserved                                 */
    uint32_t RD_INCR:1;                 /*!< bit:     31  If set the controller will increment the next burst address */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_STATIC_REG0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_STATIC_REG0_OFFSET  0x110          /**<  \brief (PROV_DMA_CTRL_CH1_STATIC_REG0 offset) Channel 1 Static Configuration Read */
#define PROV_DMA_CTRL_CH1_STATIC_REG0_RESETVALUE 0x80010000ul   /**<  \brief (PROV_DMA_CTRL_CH1_STATIC_REG0 reset_value) Channel 1 Static Configuration Read */

#define PROV_DMA_CTRL_CH1_STATIC_REG0_RD_BURST_MAX_SIZE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG0) Maximum number of bytes of an AHB read burst */
#define PROV_DMA_CTRL_CH1_STATIC_REG0_RD_BURST_MAX_SIZE_Msk (0x7Ful << PROV_DMA_CTRL_CH1_STATIC_REG0_RD_BURST_MAX_SIZE_Pos)
#define PROV_DMA_CTRL_CH1_STATIC_REG0_RD_BURST_MAX_SIZE(value) (PROV_DMA_CTRL_CH1_STATIC_REG0_RD_BURST_MAX_SIZE_Msk & ((value) << PROV_DMA_CTRL_CH1_STATIC_REG0_RD_BURST_MAX_SIZE_Pos))  
#define PROV_DMA_CTRL_CH1_STATIC_REG0_RD_TOKENS_Pos 16  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG0) Number of AHB read commands to issue before channel is released */
#define PROV_DMA_CTRL_CH1_STATIC_REG0_RD_TOKENS_Msk (0x3Ful << PROV_DMA_CTRL_CH1_STATIC_REG0_RD_TOKENS_Pos)
#define PROV_DMA_CTRL_CH1_STATIC_REG0_RD_TOKENS(value) (PROV_DMA_CTRL_CH1_STATIC_REG0_RD_TOKENS_Msk & ((value) << PROV_DMA_CTRL_CH1_STATIC_REG0_RD_TOKENS_Pos))  
#define PROV_DMA_CTRL_CH1_STATIC_REG0_RD_INCR_Pos 31  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG0) If set the controller will increment the next burst address */
#define PROV_DMA_CTRL_CH1_STATIC_REG0_RD_INCR (0x1ul << PROV_DMA_CTRL_CH1_STATIC_REG0_RD_INCR_Pos)  
#define PROV_DMA_CTRL_CH1_STATIC_REG0_MASK    0x803F007Ful    /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG0) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_STATIC_REG1 : (PROV_DMA_CTRL Offset: 0x114) (R/W  32) Channel 1 Static Configuration Write -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t WR_BURST_MAX_SIZE:7;       /*!< bit:   0..6  Maximum number of bytes of an AHB write burst */
    uint32_t :9;                        /*!< bit:  7..15  Reserved                                 */
    uint32_t WR_TOKENS:6;               /*!< bit: 16..21  Number of AHB write commands to issue before channel is released */
    uint32_t :9;                        /*!< bit: 22..30  Reserved                                 */
    uint32_t WR_INCR:1;                 /*!< bit:     31  If set the controller will increment the next burst address */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_STATIC_REG1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_STATIC_REG1_OFFSET  0x114          /**<  \brief (PROV_DMA_CTRL_CH1_STATIC_REG1 offset) Channel 1 Static Configuration Write */
#define PROV_DMA_CTRL_CH1_STATIC_REG1_RESETVALUE 0x80010000ul   /**<  \brief (PROV_DMA_CTRL_CH1_STATIC_REG1 reset_value) Channel 1 Static Configuration Write */

#define PROV_DMA_CTRL_CH1_STATIC_REG1_WR_BURST_MAX_SIZE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG1) Maximum number of bytes of an AHB write burst */
#define PROV_DMA_CTRL_CH1_STATIC_REG1_WR_BURST_MAX_SIZE_Msk (0x7Ful << PROV_DMA_CTRL_CH1_STATIC_REG1_WR_BURST_MAX_SIZE_Pos)
#define PROV_DMA_CTRL_CH1_STATIC_REG1_WR_BURST_MAX_SIZE(value) (PROV_DMA_CTRL_CH1_STATIC_REG1_WR_BURST_MAX_SIZE_Msk & ((value) << PROV_DMA_CTRL_CH1_STATIC_REG1_WR_BURST_MAX_SIZE_Pos))  
#define PROV_DMA_CTRL_CH1_STATIC_REG1_WR_TOKENS_Pos 16  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG1) Number of AHB write commands to issue before channel is released */
#define PROV_DMA_CTRL_CH1_STATIC_REG1_WR_TOKENS_Msk (0x3Ful << PROV_DMA_CTRL_CH1_STATIC_REG1_WR_TOKENS_Pos)
#define PROV_DMA_CTRL_CH1_STATIC_REG1_WR_TOKENS(value) (PROV_DMA_CTRL_CH1_STATIC_REG1_WR_TOKENS_Msk & ((value) << PROV_DMA_CTRL_CH1_STATIC_REG1_WR_TOKENS_Pos))  
#define PROV_DMA_CTRL_CH1_STATIC_REG1_WR_INCR_Pos 31  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG1) If set the controller will increment the next burst address */
#define PROV_DMA_CTRL_CH1_STATIC_REG1_WR_INCR (0x1ul << PROV_DMA_CTRL_CH1_STATIC_REG1_WR_INCR_Pos)  
#define PROV_DMA_CTRL_CH1_STATIC_REG1_MASK    0x803F007Ful    /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG1) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_STATIC_REG2 : (PROV_DMA_CTRL Offset: 0x118) (R/W  32) Channel 1 Block Mode -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :16;                       /*!< bit:  0..15  Reserved                                 */
    uint32_t JOINT:1;                   /*!< bit:     16  If set channel will work in joint mode   */
    uint32_t :11;                       /*!< bit: 17..27  Reserved                                 */
    uint32_t END_SWAP:2;                /*!< bit: 28..29  Endianness Byte Swapping                 */
    uint32_t :2;                        /*!< bit: 30..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_STATIC_REG2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_STATIC_REG2_OFFSET  0x118          /**<  \brief (PROV_DMA_CTRL_CH1_STATIC_REG2 offset) Channel 1 Block Mode */
#define PROV_DMA_CTRL_CH1_STATIC_REG2_RESETVALUE 0x10000ul      /**<  \brief (PROV_DMA_CTRL_CH1_STATIC_REG2 reset_value) Channel 1 Block Mode */

#define PROV_DMA_CTRL_CH1_STATIC_REG2_JOINT_Pos 16  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG2) If set channel will work in joint mode */
#define PROV_DMA_CTRL_CH1_STATIC_REG2_JOINT   (0x1ul << PROV_DMA_CTRL_CH1_STATIC_REG2_JOINT_Pos)  
#define PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_Pos 28  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG2) Endianness Byte Swapping     */
#define PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_Msk (0x3ul << PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP(value) (PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_Msk & ((value) << PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_Pos))  
#define   PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_0_Val        0X0ul  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG2) No Swapping  */
#define   PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_1_Val        0X1ul  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG2) Swap bytes within 16 bits  */
#define   PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_2_Val        0X2ul  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG2) Swap bytes within 32 bits  */
#define   PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_3_Val        0X3ul  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG2) Swap bytes within 64 bits  */
#define PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_0    (PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_0_Val << PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_1    (PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_1_Val << PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_2    (PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_2_Val << PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_3    (PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_3_Val << PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH1_STATIC_REG2_MASK    0x30010000ul    /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG2) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_STATIC_REG4 : (PROV_DMA_CTRL Offset: 0x120) (R/W  32) Channel 1 Static Configuration Peripheral -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_PERIPH_NUM:5;           /*!< bit:   0..4  Number of peripheral to read from (0 if memory or no peripheral flow control) */
    uint32_t :3;                        /*!< bit:   5..7  Reserved                                 */
    uint32_t RD_PERIPH_DELAY:3;         /*!< bit:  8..10  Number of cycles to wait for read request signal to update after issuing the read clear signal */
    uint32_t :5;                        /*!< bit: 11..15  Reserved                                 */
    uint32_t WR_PERIPH_NUM:5;           /*!< bit: 16..20  Number of peripheral to write from (0 if memory or no peripheral flow control) */
    uint32_t :3;                        /*!< bit: 21..23  Reserved                                 */
    uint32_t WR_PERIPH_DELAY:3;         /*!< bit: 24..26  Number of cycles to wait for write request signal to update after issuing the write clear signal */
    uint32_t :5;                        /*!< bit: 27..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_STATIC_REG4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_STATIC_REG4_OFFSET  0x120          /**<  \brief (PROV_DMA_CTRL_CH1_STATIC_REG4 offset) Channel 1 Static Configuration Peripheral */
#define PROV_DMA_CTRL_CH1_STATIC_REG4_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH1_STATIC_REG4 reset_value) Channel 1 Static Configuration Peripheral */

#define PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_NUM_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG4) Number of peripheral to read from (0 if memory or no peripheral flow control) */
#define PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_NUM_Msk (0x1Ful << PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_NUM_Pos)
#define PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_NUM(value) (PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_NUM_Msk & ((value) << PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_NUM_Pos))  
#define PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_DELAY_Pos 8  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG4) Number of cycles to wait for read request signal to update after issuing the read clear signal */
#define PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_DELAY_Msk (0x7ul << PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_DELAY_Pos)
#define PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_DELAY(value) (PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_DELAY_Msk & ((value) << PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_DELAY_Pos))  
#define PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_NUM_Pos 16  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG4) Number of peripheral to write from (0 if memory or no peripheral flow control) */
#define PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_NUM_Msk (0x1Ful << PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_NUM_Pos)
#define PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_NUM(value) (PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_NUM_Msk & ((value) << PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_NUM_Pos))  
#define PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_DELAY_Pos 24  /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG4) Number of cycles to wait for write request signal to update after issuing the write clear signal */
#define PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_DELAY_Msk (0x7ul << PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_DELAY_Pos)
#define PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_DELAY(value) (PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_DELAY_Msk & ((value) << PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_DELAY_Pos))  
#define PROV_DMA_CTRL_CH1_STATIC_REG4_MASK    0x71F071Ful    /**< \brief (PROV_DMA_CTRL_CH1_STATIC_REG4) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_RESRICT_REG : (PROV_DMA_CTRL Offset: 0x12c) (R/  16) Channel 1 Restrictions Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t RD_ALLOW_FULL_FIFO:1;      /*!< bit:      0  Read start address does not restrict burst size */
    uint16_t WR_ALLOW_FULL_FIFO:1;      /*!< bit:      1  Write start address does not restrict burst size */
    uint16_t ALLOW_FULL_FIFO:1;         /*!< bit:      2  Burst sizes can equal data buffer size, otherwise max burst is half data buffer size */
    uint16_t ALLOW_FULL_BURST:1;        /*!< bit:      3  Maximum burst of 16 strobes can be used (joint mode only) */
    uint16_t ALLOW_JOINT_BURST:1;       /*!< bit:      4  Joint bursts are currently active        */
    uint16_t :3;                        /*!< bit:   5..7  Reserved                                 */
    uint16_t SIMPLE_MEM:1;              /*!< bit:      8  Configuration is aligned and peripherals are not used */
    uint16_t :7;                        /*!< bit:  9..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_RESRICT_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_RESRICT_REG_OFFSET  0x12C          /**<  \brief (PROV_DMA_CTRL_CH1_RESRICT_REG offset) Channel 1 Restrictions Status Register */
#define PROV_DMA_CTRL_CH1_RESRICT_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH1_RESRICT_REG reset_value) Channel 1 Restrictions Status Register */

#define PROV_DMA_CTRL_CH1_RESRICT_REG_RD_ALLOW_FULL_FIFO_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_RESRICT_REG) Read start address does not restrict burst size */
#define PROV_DMA_CTRL_CH1_RESRICT_REG_RD_ALLOW_FULL_FIFO (0x1ul << PROV_DMA_CTRL_CH1_RESRICT_REG_RD_ALLOW_FULL_FIFO_Pos)  
#define PROV_DMA_CTRL_CH1_RESRICT_REG_WR_ALLOW_FULL_FIFO_Pos 1  /**< \brief (PROV_DMA_CTRL_CH1_RESRICT_REG) Write start address does not restrict burst size */
#define PROV_DMA_CTRL_CH1_RESRICT_REG_WR_ALLOW_FULL_FIFO (0x1ul << PROV_DMA_CTRL_CH1_RESRICT_REG_WR_ALLOW_FULL_FIFO_Pos)  
#define PROV_DMA_CTRL_CH1_RESRICT_REG_ALLOW_FULL_FIFO_Pos 2  /**< \brief (PROV_DMA_CTRL_CH1_RESRICT_REG) Burst sizes can equal data buffer size, otherwise max burst is half data buffer size */
#define PROV_DMA_CTRL_CH1_RESRICT_REG_ALLOW_FULL_FIFO (0x1ul << PROV_DMA_CTRL_CH1_RESRICT_REG_ALLOW_FULL_FIFO_Pos)  
#define PROV_DMA_CTRL_CH1_RESRICT_REG_ALLOW_FULL_BURST_Pos 3  /**< \brief (PROV_DMA_CTRL_CH1_RESRICT_REG) Maximum burst of 16 strobes can be used (joint mode only) */
#define PROV_DMA_CTRL_CH1_RESRICT_REG_ALLOW_FULL_BURST (0x1ul << PROV_DMA_CTRL_CH1_RESRICT_REG_ALLOW_FULL_BURST_Pos)  
#define PROV_DMA_CTRL_CH1_RESRICT_REG_ALLOW_JOINT_BURST_Pos 4  /**< \brief (PROV_DMA_CTRL_CH1_RESRICT_REG) Joint bursts are currently active */
#define PROV_DMA_CTRL_CH1_RESRICT_REG_ALLOW_JOINT_BURST (0x1ul << PROV_DMA_CTRL_CH1_RESRICT_REG_ALLOW_JOINT_BURST_Pos)  
#define PROV_DMA_CTRL_CH1_RESRICT_REG_SIMPLE_MEM_Pos 8  /**< \brief (PROV_DMA_CTRL_CH1_RESRICT_REG) Configuration is aligned and peripherals are not used */
#define PROV_DMA_CTRL_CH1_RESRICT_REG_SIMPLE_MEM (0x1ul << PROV_DMA_CTRL_CH1_RESRICT_REG_SIMPLE_MEM_Pos)  
#define PROV_DMA_CTRL_CH1_RESRICT_REG_MASK    0x11Ful    /**< \brief (PROV_DMA_CTRL_CH1_RESRICT_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG : (PROV_DMA_CTRL Offset: 0x138) (R/  32) Channel 1 FIFO Fullness Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_GAP:13;                 /*!< bit:  0..12  Remaining space (in bytes) in FIFO for read data */
    uint32_t :3;                        /*!< bit: 13..15  Reserved                                 */
    uint32_t WR_FULLNESS:13;            /*!< bit: 16..28  Occupied space (in bytes) in FIFO by write data */
    uint32_t :3;                        /*!< bit: 29..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_OFFSET 0x138          /**<  \brief (PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG offset) Channel 1 FIFO Fullness Status Register */
#define PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG reset_value) Channel 1 FIFO Fullness Status Register */

#define PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_RD_GAP_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG) Remaining space (in bytes) in FIFO for read data */
#define PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_RD_GAP_Msk (0x1FFFul << PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_RD_GAP_Pos)
#define PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_RD_GAP(value) (PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_RD_GAP_Msk & ((value) << PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_RD_GAP_Pos))  
#define PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_WR_FULLNESS_Pos 16  /**< \brief (PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG) Occupied space (in bytes) in FIFO by write data */
#define PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_WR_FULLNESS_Msk (0x1FFFul << PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_WR_FULLNESS_Pos)
#define PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_WR_FULLNESS(value) (PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_WR_FULLNESS_Msk & ((value) << PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_WR_FULLNESS_Pos))  
#define PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_MASK 0x1FFF1FFFul    /**< \brief (PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_CH_ENABLE_REG : (PROV_DMA_CTRL Offset: 0x140) (R/W  8) Channel 1 Channel Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH1_CH_ENABLE_REG:1;       /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_CH_ENABLE_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_CH_ENABLE_REG_OFFSET 0x140          /**<  \brief (PROV_DMA_CTRL_CH1_CH_ENABLE_REG offset) Channel 1 Channel Enable Register */
#define PROV_DMA_CTRL_CH1_CH_ENABLE_REG_RESETVALUE 0x01ul         /**<  \brief (PROV_DMA_CTRL_CH1_CH_ENABLE_REG reset_value) Channel 1 Channel Enable Register */

#define PROV_DMA_CTRL_CH1_CH_ENABLE_REG_CH1_CH_ENABLE_REG_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_CH_ENABLE_REG)                            */
#define PROV_DMA_CTRL_CH1_CH_ENABLE_REG_CH1_CH_ENABLE_REG (0x1ul << PROV_DMA_CTRL_CH1_CH_ENABLE_REG_CH1_CH_ENABLE_REG_Pos)  
#define PROV_DMA_CTRL_CH1_CH_ENABLE_REG_MASK  0x01ul    /**< \brief (PROV_DMA_CTRL_CH1_CH_ENABLE_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_CH_START_REG : (PROV_DMA_CTRL Offset: 0x144) (/W  8) Channel 1 Channel Start Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH1_CH_START_REG:1;        /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_CH_START_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_CH_START_REG_OFFSET 0x144          /**<  \brief (PROV_DMA_CTRL_CH1_CH_START_REG offset) Channel 1 Channel Start Register */
#define PROV_DMA_CTRL_CH1_CH_START_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH1_CH_START_REG reset_value) Channel 1 Channel Start Register */

#define PROV_DMA_CTRL_CH1_CH_START_REG_CH1_CH_START_REG_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_CH_START_REG)                             */
#define PROV_DMA_CTRL_CH1_CH_START_REG_CH1_CH_START_REG (0x1ul << PROV_DMA_CTRL_CH1_CH_START_REG_CH1_CH_START_REG_Pos)  
#define PROV_DMA_CTRL_CH1_CH_START_REG_MASK   0x01ul    /**< \brief (PROV_DMA_CTRL_CH1_CH_START_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_CH_ACTIVE_REG : (PROV_DMA_CTRL Offset: 0x148) (R/  8) Channel 1 Channel Active Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_RD_ACTIVE:1;            /*!< bit:      0  Set if channel is enabled and all read data has been received */
    uint8_t  CH_WR_ACTIVE:1;            /*!< bit:      1  Set if channel is enabled and all write data has been transfered */
    uint8_t  :6;                        /*!< bit:   2..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_CH_ACTIVE_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_CH_ACTIVE_REG_OFFSET 0x148          /**<  \brief (PROV_DMA_CTRL_CH1_CH_ACTIVE_REG offset) Channel 1 Channel Active Status Register */
#define PROV_DMA_CTRL_CH1_CH_ACTIVE_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH1_CH_ACTIVE_REG reset_value) Channel 1 Channel Active Status Register */

#define PROV_DMA_CTRL_CH1_CH_ACTIVE_REG_CH_RD_ACTIVE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_CH_ACTIVE_REG) Set if channel is enabled and all read data has been received */
#define PROV_DMA_CTRL_CH1_CH_ACTIVE_REG_CH_RD_ACTIVE (0x1ul << PROV_DMA_CTRL_CH1_CH_ACTIVE_REG_CH_RD_ACTIVE_Pos)  
#define PROV_DMA_CTRL_CH1_CH_ACTIVE_REG_CH_WR_ACTIVE_Pos 1  /**< \brief (PROV_DMA_CTRL_CH1_CH_ACTIVE_REG) Set if channel is enabled and all write data has been transfered */
#define PROV_DMA_CTRL_CH1_CH_ACTIVE_REG_CH_WR_ACTIVE (0x1ul << PROV_DMA_CTRL_CH1_CH_ACTIVE_REG_CH_WR_ACTIVE_Pos)  
#define PROV_DMA_CTRL_CH1_CH_ACTIVE_REG_MASK  0x03ul    /**< \brief (PROV_DMA_CTRL_CH1_CH_ACTIVE_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_COUNT_REG : (PROV_DMA_CTRL Offset: 0x150) (R/  32) Channel 1 Buffer Counter Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t BUFF_COUNT:12;             /*!< bit:  0..11  Number of buffers transferred by channel since started */
    uint32_t :4;                        /*!< bit: 12..15  Reserved                                 */
    uint32_t INT_COUNT:4;               /*!< bit: 16..19  Number of unserviced end interrupts      */
    uint32_t :12;                       /*!< bit: 20..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_COUNT_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_COUNT_REG_OFFSET    0x150          /**<  \brief (PROV_DMA_CTRL_CH1_COUNT_REG offset) Channel 1 Buffer Counter Status Register */
#define PROV_DMA_CTRL_CH1_COUNT_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH1_COUNT_REG reset_value) Channel 1 Buffer Counter Status Register */

#define PROV_DMA_CTRL_CH1_COUNT_REG_BUFF_COUNT_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_COUNT_REG) Number of buffers transferred by channel since started */
#define PROV_DMA_CTRL_CH1_COUNT_REG_BUFF_COUNT_Msk (0xFFFul << PROV_DMA_CTRL_CH1_COUNT_REG_BUFF_COUNT_Pos)
#define PROV_DMA_CTRL_CH1_COUNT_REG_BUFF_COUNT(value) (PROV_DMA_CTRL_CH1_COUNT_REG_BUFF_COUNT_Msk & ((value) << PROV_DMA_CTRL_CH1_COUNT_REG_BUFF_COUNT_Pos))  
#define PROV_DMA_CTRL_CH1_COUNT_REG_INT_COUNT_Pos 16  /**< \brief (PROV_DMA_CTRL_CH1_COUNT_REG) Number of unserviced end interrupts */
#define PROV_DMA_CTRL_CH1_COUNT_REG_INT_COUNT_Msk (0xFul << PROV_DMA_CTRL_CH1_COUNT_REG_INT_COUNT_Pos)
#define PROV_DMA_CTRL_CH1_COUNT_REG_INT_COUNT(value) (PROV_DMA_CTRL_CH1_COUNT_REG_INT_COUNT_Msk & ((value) << PROV_DMA_CTRL_CH1_COUNT_REG_INT_COUNT_Pos))  
#define PROV_DMA_CTRL_CH1_COUNT_REG_MASK      0xF0FFFul    /**< \brief (PROV_DMA_CTRL_CH1_COUNT_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG : (PROV_DMA_CTRL Offset: 0x1a0) (R/W  8) Channel 1 Interrupt Raw Status (Write 1 to any field to issue interrupt) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Indicates an unserviced channel end interrupt */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  AHB read slave error                     */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  AHB write slave error                    */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  FIFO has been overflown                  */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  FIFO has been underflown                 */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  WDT:1;                     /*!< bit:      7  Channel active but did not start a burst for 2048 cycles */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_OFFSET 0x1A0          /**<  \brief (PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG offset) Channel 1 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG reset_value) Channel 1 Interrupt Raw Status (Write 1 to any field to issue interrupt) */

#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG) Indicates an unserviced channel end interrupt */
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG) AHB read slave error     */
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG) AHB write slave error    */
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG) FIFO has been overflown  */
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG) FIFO has been underflown */
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG) Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG) Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG) Channel active but did not start a burst for 2048 cycles */
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WDT (0x1ul << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_MASK 0xFFul    /**< \brief (PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_INT_CLEAR_REG : (PROV_DMA_CTRL Offset: 0x1a4) (R/W  8) Channel 1 Interrupt Clear (Write 1 to clear) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Clear channel end interrupt. Decrements INT_COUNT register */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  Clear AHB read slave error               */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  Clear AHB write slave error              */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  Clears FIFO overflow                     */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  Clears FIFO underflow                    */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Clears Read Timeout                      */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Clears Write Timeout                     */
    uint8_t  WDT:1;                     /*!< bit:      7  Clears WDT                               */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_INT_CLEAR_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_OFFSET 0x1A4          /**<  \brief (PROV_DMA_CTRL_CH1_INT_CLEAR_REG offset) Channel 1 Interrupt Clear (Write 1 to clear) */
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH1_INT_CLEAR_REG reset_value) Channel 1 Interrupt Clear (Write 1 to clear) */

#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_INT_CLEAR_REG) Clear channel end interrupt. Decrements INT_COUNT register */
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH1_INT_CLEAR_REG) Clear AHB read slave error */
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH1_INT_CLEAR_REG) Clear AHB write slave error */
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH1_INT_CLEAR_REG) Clears FIFO overflow       */
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH1_INT_CLEAR_REG) Clears FIFO underflow      */
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH1_INT_CLEAR_REG) Clears Read Timeout        */
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH1_INT_CLEAR_REG) Clears Write Timeout       */
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH1_INT_CLEAR_REG) Clears WDT                 */
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WDT   (0x1ul << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH1_INT_CLEAR_REG_MASK  0xFFul    /**< \brief (PROV_DMA_CTRL_CH1_INT_CLEAR_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_INT_ENABLE_REG : (PROV_DMA_CTRL Offset: 0x1a8) (R/W  8) Channel 1 Interrupt Enable -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Enables end of channel interrupt         */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  Enables AHB read slave error interrupt   */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  Enables AHB write slave error interrupt  */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  Enables FIFO overflow interrupt          */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  Enables FIFO underflow interrupt         */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Enables AHB Read timeout interrupt       */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Enables AHB Write timeout interrupt      */
    uint8_t  WDT:1;                     /*!< bit:      7  Enables WDT interrupt                    */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_INT_ENABLE_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_OFFSET 0x1A8          /**<  \brief (PROV_DMA_CTRL_CH1_INT_ENABLE_REG offset) Channel 1 Interrupt Enable */
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH1_INT_ENABLE_REG reset_value) Channel 1 Interrupt Enable */

#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_INT_ENABLE_REG) Enables end of channel interrupt */
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH1_INT_ENABLE_REG) Enables AHB read slave error interrupt */
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH1_INT_ENABLE_REG) Enables AHB write slave error interrupt */
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH1_INT_ENABLE_REG) Enables FIFO overflow interrupt */
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH1_INT_ENABLE_REG) Enables FIFO underflow interrupt */
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH1_INT_ENABLE_REG) Enables AHB Read timeout interrupt */
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH1_INT_ENABLE_REG) Enables AHB Write timeout interrupt */
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH1_INT_ENABLE_REG) Enables WDT interrupt     */
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WDT  (0x1ul << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH1_INT_ENABLE_REG_MASK 0xFFul    /**< \brief (PROV_DMA_CTRL_CH1_INT_ENABLE_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH1_INT_STATUS_REG : (PROV_DMA_CTRL Offset: 0x1ac) (R/W  8) Channel 1 Interrupt Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Indicates an unserviced channel end interrupt */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  AHB read slave error                     */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  AHB write slave error                    */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  FIFO has been overflown                  */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  FIFO has been underflown                 */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  WDT:1;                     /*!< bit:      7  Channel active but did not start a burst for 2048 cycles */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH1_INT_STATUS_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_OFFSET 0x1AC          /**<  \brief (PROV_DMA_CTRL_CH1_INT_STATUS_REG offset) Channel 1 Interrupt Status */
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH1_INT_STATUS_REG reset_value) Channel 1 Interrupt Status */

#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH1_INT_STATUS_REG) Indicates an unserviced channel end interrupt */
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH1_INT_STATUS_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH1_INT_STATUS_REG) AHB read slave error      */
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH1_INT_STATUS_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH1_INT_STATUS_REG) AHB write slave error     */
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH1_INT_STATUS_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH1_INT_STATUS_REG) FIFO has been overflown   */
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH1_INT_STATUS_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH1_INT_STATUS_REG) FIFO has been underflown  */
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH1_INT_STATUS_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH1_INT_STATUS_REG) Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH1_INT_STATUS_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH1_INT_STATUS_REG) Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH1_INT_STATUS_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH1_INT_STATUS_REG) Channel active but did not start a burst for 2048 cycles */
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_WDT  (0x1ul << PROV_DMA_CTRL_CH1_INT_STATUS_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH1_INT_STATUS_REG_MASK 0xFFul    /**< \brief (PROV_DMA_CTRL_CH1_INT_STATUS_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_CMD_REG0 : (PROV_DMA_CTRL Offset: 0x200) (R/W  32) Channel 2 First Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_START_ADDR:32;          /*!< bit:  0..31  Start Address of Read Buffer             */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_CMD_REG0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_CMD_REG0_OFFSET     0x200          /**<  \brief (PROV_DMA_CTRL_CH2_CMD_REG0 offset) Channel 2 First Line Channel Command */
#define PROV_DMA_CTRL_CH2_CMD_REG0_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH2_CMD_REG0 reset_value) Channel 2 First Line Channel Command */

#define PROV_DMA_CTRL_CH2_CMD_REG0_RD_START_ADDR_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_CMD_REG0) Start Address of Read Buffer    */
#define PROV_DMA_CTRL_CH2_CMD_REG0_RD_START_ADDR_Msk (0xFFFFFFFFul << PROV_DMA_CTRL_CH2_CMD_REG0_RD_START_ADDR_Pos)
#define PROV_DMA_CTRL_CH2_CMD_REG0_RD_START_ADDR(value) (PROV_DMA_CTRL_CH2_CMD_REG0_RD_START_ADDR_Msk & ((value) << PROV_DMA_CTRL_CH2_CMD_REG0_RD_START_ADDR_Pos))  
#define PROV_DMA_CTRL_CH2_CMD_REG0_MASK       0xFFFFFFFFul    /**< \brief (PROV_DMA_CTRL_CH2_CMD_REG0) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_CMD_REG1 : (PROV_DMA_CTRL Offset: 0x204) (R/W  32) Channel 2 Second Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t WR_START_ADDR:32;          /*!< bit:  0..31  Start Address of Write Buffer            */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_CMD_REG1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_CMD_REG1_OFFSET     0x204          /**<  \brief (PROV_DMA_CTRL_CH2_CMD_REG1 offset) Channel 2 Second Line Channel Command */
#define PROV_DMA_CTRL_CH2_CMD_REG1_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH2_CMD_REG1 reset_value) Channel 2 Second Line Channel Command */

#define PROV_DMA_CTRL_CH2_CMD_REG1_WR_START_ADDR_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_CMD_REG1) Start Address of Write Buffer   */
#define PROV_DMA_CTRL_CH2_CMD_REG1_WR_START_ADDR_Msk (0xFFFFFFFFul << PROV_DMA_CTRL_CH2_CMD_REG1_WR_START_ADDR_Pos)
#define PROV_DMA_CTRL_CH2_CMD_REG1_WR_START_ADDR(value) (PROV_DMA_CTRL_CH2_CMD_REG1_WR_START_ADDR_Msk & ((value) << PROV_DMA_CTRL_CH2_CMD_REG1_WR_START_ADDR_Pos))  
#define PROV_DMA_CTRL_CH2_CMD_REG1_MASK       0xFFFFFFFFul    /**< \brief (PROV_DMA_CTRL_CH2_CMD_REG1) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_CMD_REG2 : (PROV_DMA_CTRL Offset: 0x208) (R/W  16) Channel 2 Third Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t BUFFER_SIZE:13;            /*!< bit:  0..12  Size (in Bytes) of Buffer to Transfer    */
    uint16_t :3;                        /*!< bit: 13..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_CMD_REG2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_CMD_REG2_OFFSET     0x208          /**<  \brief (PROV_DMA_CTRL_CH2_CMD_REG2 offset) Channel 2 Third Line Channel Command */
#define PROV_DMA_CTRL_CH2_CMD_REG2_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH2_CMD_REG2 reset_value) Channel 2 Third Line Channel Command */

#define PROV_DMA_CTRL_CH2_CMD_REG2_BUFFER_SIZE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_CMD_REG2) Size (in Bytes) of Buffer to Transfer */
#define PROV_DMA_CTRL_CH2_CMD_REG2_BUFFER_SIZE_Msk (0x1FFFul << PROV_DMA_CTRL_CH2_CMD_REG2_BUFFER_SIZE_Pos)
#define PROV_DMA_CTRL_CH2_CMD_REG2_BUFFER_SIZE(value) (PROV_DMA_CTRL_CH2_CMD_REG2_BUFFER_SIZE_Msk & ((value) << PROV_DMA_CTRL_CH2_CMD_REG2_BUFFER_SIZE_Pos))  
#define PROV_DMA_CTRL_CH2_CMD_REG2_MASK       0x1FFFul    /**< \brief (PROV_DMA_CTRL_CH2_CMD_REG2) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_CMD_REG3 : (PROV_DMA_CTRL Offset: 0x20c) (R/W  32) Channel 2 Fourth Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CMD_SET_INT:1;             /*!< bit:      0  Active High Interrupt Enable once buffer has been transfered */
    uint32_t CMD_LAST:1;                /*!< bit:      1  If set, channel stops when buffer done, otherwise load from CMD_NEXT_ADDR */
    uint32_t CMD_NEXT_ADDR:30;          /*!< bit:  2..31  Address of next command if CMD_LAST is not set */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_CMD_REG3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_CMD_REG3_OFFSET     0x20C          /**<  \brief (PROV_DMA_CTRL_CH2_CMD_REG3 offset) Channel 2 Fourth Line Channel Command */
#define PROV_DMA_CTRL_CH2_CMD_REG3_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH2_CMD_REG3 reset_value) Channel 2 Fourth Line Channel Command */

#define PROV_DMA_CTRL_CH2_CMD_REG3_CMD_SET_INT_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_CMD_REG3) Active High Interrupt Enable once buffer has been transfered */
#define PROV_DMA_CTRL_CH2_CMD_REG3_CMD_SET_INT (0x1ul << PROV_DMA_CTRL_CH2_CMD_REG3_CMD_SET_INT_Pos)  
#define PROV_DMA_CTRL_CH2_CMD_REG3_CMD_LAST_Pos 1  /**< \brief (PROV_DMA_CTRL_CH2_CMD_REG3) If set, channel stops when buffer done, otherwise load from CMD_NEXT_ADDR */
#define PROV_DMA_CTRL_CH2_CMD_REG3_CMD_LAST   (0x1ul << PROV_DMA_CTRL_CH2_CMD_REG3_CMD_LAST_Pos)  
#define PROV_DMA_CTRL_CH2_CMD_REG3_CMD_NEXT_ADDR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH2_CMD_REG3) Address of next command if CMD_LAST is not set */
#define PROV_DMA_CTRL_CH2_CMD_REG3_CMD_NEXT_ADDR_Msk (0x3FFFFFFFul << PROV_DMA_CTRL_CH2_CMD_REG3_CMD_NEXT_ADDR_Pos)
#define PROV_DMA_CTRL_CH2_CMD_REG3_CMD_NEXT_ADDR(value) (PROV_DMA_CTRL_CH2_CMD_REG3_CMD_NEXT_ADDR_Msk & ((value) << PROV_DMA_CTRL_CH2_CMD_REG3_CMD_NEXT_ADDR_Pos))  
#define PROV_DMA_CTRL_CH2_CMD_REG3_MASK       0xFFFFFFFFul    /**< \brief (PROV_DMA_CTRL_CH2_CMD_REG3) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_STATIC_REG0 : (PROV_DMA_CTRL Offset: 0x210) (R/W  32) Channel 2 Static Configuration Read -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_BURST_MAX_SIZE:7;       /*!< bit:   0..6  Maximum number of bytes of an AHB read burst */
    uint32_t :9;                        /*!< bit:  7..15  Reserved                                 */
    uint32_t RD_TOKENS:6;               /*!< bit: 16..21  Number of AHB read commands to issue before channel is released */
    uint32_t :9;                        /*!< bit: 22..30  Reserved                                 */
    uint32_t RD_INCR:1;                 /*!< bit:     31  If set the controller will increment the next burst address */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_STATIC_REG0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_STATIC_REG0_OFFSET  0x210          /**<  \brief (PROV_DMA_CTRL_CH2_STATIC_REG0 offset) Channel 2 Static Configuration Read */
#define PROV_DMA_CTRL_CH2_STATIC_REG0_RESETVALUE 0x80010000ul   /**<  \brief (PROV_DMA_CTRL_CH2_STATIC_REG0 reset_value) Channel 2 Static Configuration Read */

#define PROV_DMA_CTRL_CH2_STATIC_REG0_RD_BURST_MAX_SIZE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG0) Maximum number of bytes of an AHB read burst */
#define PROV_DMA_CTRL_CH2_STATIC_REG0_RD_BURST_MAX_SIZE_Msk (0x7Ful << PROV_DMA_CTRL_CH2_STATIC_REG0_RD_BURST_MAX_SIZE_Pos)
#define PROV_DMA_CTRL_CH2_STATIC_REG0_RD_BURST_MAX_SIZE(value) (PROV_DMA_CTRL_CH2_STATIC_REG0_RD_BURST_MAX_SIZE_Msk & ((value) << PROV_DMA_CTRL_CH2_STATIC_REG0_RD_BURST_MAX_SIZE_Pos))  
#define PROV_DMA_CTRL_CH2_STATIC_REG0_RD_TOKENS_Pos 16  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG0) Number of AHB read commands to issue before channel is released */
#define PROV_DMA_CTRL_CH2_STATIC_REG0_RD_TOKENS_Msk (0x3Ful << PROV_DMA_CTRL_CH2_STATIC_REG0_RD_TOKENS_Pos)
#define PROV_DMA_CTRL_CH2_STATIC_REG0_RD_TOKENS(value) (PROV_DMA_CTRL_CH2_STATIC_REG0_RD_TOKENS_Msk & ((value) << PROV_DMA_CTRL_CH2_STATIC_REG0_RD_TOKENS_Pos))  
#define PROV_DMA_CTRL_CH2_STATIC_REG0_RD_INCR_Pos 31  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG0) If set the controller will increment the next burst address */
#define PROV_DMA_CTRL_CH2_STATIC_REG0_RD_INCR (0x1ul << PROV_DMA_CTRL_CH2_STATIC_REG0_RD_INCR_Pos)  
#define PROV_DMA_CTRL_CH2_STATIC_REG0_MASK    0x803F007Ful    /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG0) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_STATIC_REG1 : (PROV_DMA_CTRL Offset: 0x214) (R/W  32) Channel 2 Static Configuration Write -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t WR_BURST_MAX_SIZE:7;       /*!< bit:   0..6  Maximum number of bytes of an AHB write burst */
    uint32_t :9;                        /*!< bit:  7..15  Reserved                                 */
    uint32_t WR_TOKENS:6;               /*!< bit: 16..21  Number of AHB write commands to issue before channel is released */
    uint32_t :9;                        /*!< bit: 22..30  Reserved                                 */
    uint32_t WR_INCR:1;                 /*!< bit:     31  If set the controller will increment the next burst address */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_STATIC_REG1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_STATIC_REG1_OFFSET  0x214          /**<  \brief (PROV_DMA_CTRL_CH2_STATIC_REG1 offset) Channel 2 Static Configuration Write */
#define PROV_DMA_CTRL_CH2_STATIC_REG1_RESETVALUE 0x80010000ul   /**<  \brief (PROV_DMA_CTRL_CH2_STATIC_REG1 reset_value) Channel 2 Static Configuration Write */

#define PROV_DMA_CTRL_CH2_STATIC_REG1_WR_BURST_MAX_SIZE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG1) Maximum number of bytes of an AHB write burst */
#define PROV_DMA_CTRL_CH2_STATIC_REG1_WR_BURST_MAX_SIZE_Msk (0x7Ful << PROV_DMA_CTRL_CH2_STATIC_REG1_WR_BURST_MAX_SIZE_Pos)
#define PROV_DMA_CTRL_CH2_STATIC_REG1_WR_BURST_MAX_SIZE(value) (PROV_DMA_CTRL_CH2_STATIC_REG1_WR_BURST_MAX_SIZE_Msk & ((value) << PROV_DMA_CTRL_CH2_STATIC_REG1_WR_BURST_MAX_SIZE_Pos))  
#define PROV_DMA_CTRL_CH2_STATIC_REG1_WR_TOKENS_Pos 16  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG1) Number of AHB write commands to issue before channel is released */
#define PROV_DMA_CTRL_CH2_STATIC_REG1_WR_TOKENS_Msk (0x3Ful << PROV_DMA_CTRL_CH2_STATIC_REG1_WR_TOKENS_Pos)
#define PROV_DMA_CTRL_CH2_STATIC_REG1_WR_TOKENS(value) (PROV_DMA_CTRL_CH2_STATIC_REG1_WR_TOKENS_Msk & ((value) << PROV_DMA_CTRL_CH2_STATIC_REG1_WR_TOKENS_Pos))  
#define PROV_DMA_CTRL_CH2_STATIC_REG1_WR_INCR_Pos 31  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG1) If set the controller will increment the next burst address */
#define PROV_DMA_CTRL_CH2_STATIC_REG1_WR_INCR (0x1ul << PROV_DMA_CTRL_CH2_STATIC_REG1_WR_INCR_Pos)  
#define PROV_DMA_CTRL_CH2_STATIC_REG1_MASK    0x803F007Ful    /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG1) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_STATIC_REG2 : (PROV_DMA_CTRL Offset: 0x218) (R/W  32) Channel 2 Block Mode -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :16;                       /*!< bit:  0..15  Reserved                                 */
    uint32_t JOINT:1;                   /*!< bit:     16  If set channel will work in joint mode   */
    uint32_t :11;                       /*!< bit: 17..27  Reserved                                 */
    uint32_t END_SWAP:2;                /*!< bit: 28..29  Endianness Byte Swapping                 */
    uint32_t :2;                        /*!< bit: 30..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_STATIC_REG2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_STATIC_REG2_OFFSET  0x218          /**<  \brief (PROV_DMA_CTRL_CH2_STATIC_REG2 offset) Channel 2 Block Mode */
#define PROV_DMA_CTRL_CH2_STATIC_REG2_RESETVALUE 0x10000ul      /**<  \brief (PROV_DMA_CTRL_CH2_STATIC_REG2 reset_value) Channel 2 Block Mode */

#define PROV_DMA_CTRL_CH2_STATIC_REG2_JOINT_Pos 16  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG2) If set channel will work in joint mode */
#define PROV_DMA_CTRL_CH2_STATIC_REG2_JOINT   (0x1ul << PROV_DMA_CTRL_CH2_STATIC_REG2_JOINT_Pos)  
#define PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_Pos 28  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG2) Endianness Byte Swapping     */
#define PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_Msk (0x3ul << PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP(value) (PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_Msk & ((value) << PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_Pos))  
#define   PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_0_Val        0X0ul  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG2) No Swapping  */
#define   PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_1_Val        0X1ul  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG2) Swap bytes within 16 bits  */
#define   PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_2_Val        0X2ul  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG2) Swap bytes within 32 bits  */
#define   PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_3_Val        0X3ul  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG2) Swap bytes within 64 bits  */
#define PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_0    (PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_0_Val << PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_1    (PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_1_Val << PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_2    (PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_2_Val << PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_3    (PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_3_Val << PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH2_STATIC_REG2_MASK    0x30010000ul    /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG2) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_STATIC_REG4 : (PROV_DMA_CTRL Offset: 0x220) (R/W  32) Channel 2 Static Configuration Peripheral -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_PERIPH_NUM:5;           /*!< bit:   0..4  Number of peripheral to read from (0 if memory or no peripheral flow control) */
    uint32_t :3;                        /*!< bit:   5..7  Reserved                                 */
    uint32_t RD_PERIPH_DELAY:3;         /*!< bit:  8..10  Number of cycles to wait for read request signal to update after issuing the read clear signal */
    uint32_t :5;                        /*!< bit: 11..15  Reserved                                 */
    uint32_t WR_PERIPH_NUM:5;           /*!< bit: 16..20  Number of peripheral to write from (0 if memory or no peripheral flow control) */
    uint32_t :3;                        /*!< bit: 21..23  Reserved                                 */
    uint32_t WR_PERIPH_DELAY:3;         /*!< bit: 24..26  Number of cycles to wait for write request signal to update after issuing the write clear signal */
    uint32_t :5;                        /*!< bit: 27..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_STATIC_REG4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_STATIC_REG4_OFFSET  0x220          /**<  \brief (PROV_DMA_CTRL_CH2_STATIC_REG4 offset) Channel 2 Static Configuration Peripheral */
#define PROV_DMA_CTRL_CH2_STATIC_REG4_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH2_STATIC_REG4 reset_value) Channel 2 Static Configuration Peripheral */

#define PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_NUM_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG4) Number of peripheral to read from (0 if memory or no peripheral flow control) */
#define PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_NUM_Msk (0x1Ful << PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_NUM_Pos)
#define PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_NUM(value) (PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_NUM_Msk & ((value) << PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_NUM_Pos))  
#define PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_DELAY_Pos 8  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG4) Number of cycles to wait for read request signal to update after issuing the read clear signal */
#define PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_DELAY_Msk (0x7ul << PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_DELAY_Pos)
#define PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_DELAY(value) (PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_DELAY_Msk & ((value) << PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_DELAY_Pos))  
#define PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_NUM_Pos 16  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG4) Number of peripheral to write from (0 if memory or no peripheral flow control) */
#define PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_NUM_Msk (0x1Ful << PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_NUM_Pos)
#define PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_NUM(value) (PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_NUM_Msk & ((value) << PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_NUM_Pos))  
#define PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_DELAY_Pos 24  /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG4) Number of cycles to wait for write request signal to update after issuing the write clear signal */
#define PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_DELAY_Msk (0x7ul << PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_DELAY_Pos)
#define PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_DELAY(value) (PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_DELAY_Msk & ((value) << PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_DELAY_Pos))  
#define PROV_DMA_CTRL_CH2_STATIC_REG4_MASK    0x71F071Ful    /**< \brief (PROV_DMA_CTRL_CH2_STATIC_REG4) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_RESRICT_REG : (PROV_DMA_CTRL Offset: 0x22c) (R/  16) Channel 2 Restrictions Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t RD_ALLOW_FULL_FIFO:1;      /*!< bit:      0  Read start address does not restrict burst size */
    uint16_t WR_ALLOW_FULL_FIFO:1;      /*!< bit:      1  Write start address does not restrict burst size */
    uint16_t ALLOW_FULL_FIFO:1;         /*!< bit:      2  Burst sizes can equal data buffer size, otherwise max burst is half data buffer size */
    uint16_t ALLOW_FULL_BURST:1;        /*!< bit:      3  Maximum burst of 16 strobes can be used (joint mode only) */
    uint16_t ALLOW_JOINT_BURST:1;       /*!< bit:      4  Joint bursts are currently active        */
    uint16_t :3;                        /*!< bit:   5..7  Reserved                                 */
    uint16_t SIMPLE_MEM:1;              /*!< bit:      8  Configuration is aligned and peripherals are not used */
    uint16_t :7;                        /*!< bit:  9..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_RESRICT_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_RESRICT_REG_OFFSET  0x22C          /**<  \brief (PROV_DMA_CTRL_CH2_RESRICT_REG offset) Channel 2 Restrictions Status Register */
#define PROV_DMA_CTRL_CH2_RESRICT_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH2_RESRICT_REG reset_value) Channel 2 Restrictions Status Register */

#define PROV_DMA_CTRL_CH2_RESRICT_REG_RD_ALLOW_FULL_FIFO_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_RESRICT_REG) Read start address does not restrict burst size */
#define PROV_DMA_CTRL_CH2_RESRICT_REG_RD_ALLOW_FULL_FIFO (0x1ul << PROV_DMA_CTRL_CH2_RESRICT_REG_RD_ALLOW_FULL_FIFO_Pos)  
#define PROV_DMA_CTRL_CH2_RESRICT_REG_WR_ALLOW_FULL_FIFO_Pos 1  /**< \brief (PROV_DMA_CTRL_CH2_RESRICT_REG) Write start address does not restrict burst size */
#define PROV_DMA_CTRL_CH2_RESRICT_REG_WR_ALLOW_FULL_FIFO (0x1ul << PROV_DMA_CTRL_CH2_RESRICT_REG_WR_ALLOW_FULL_FIFO_Pos)  
#define PROV_DMA_CTRL_CH2_RESRICT_REG_ALLOW_FULL_FIFO_Pos 2  /**< \brief (PROV_DMA_CTRL_CH2_RESRICT_REG) Burst sizes can equal data buffer size, otherwise max burst is half data buffer size */
#define PROV_DMA_CTRL_CH2_RESRICT_REG_ALLOW_FULL_FIFO (0x1ul << PROV_DMA_CTRL_CH2_RESRICT_REG_ALLOW_FULL_FIFO_Pos)  
#define PROV_DMA_CTRL_CH2_RESRICT_REG_ALLOW_FULL_BURST_Pos 3  /**< \brief (PROV_DMA_CTRL_CH2_RESRICT_REG) Maximum burst of 16 strobes can be used (joint mode only) */
#define PROV_DMA_CTRL_CH2_RESRICT_REG_ALLOW_FULL_BURST (0x1ul << PROV_DMA_CTRL_CH2_RESRICT_REG_ALLOW_FULL_BURST_Pos)  
#define PROV_DMA_CTRL_CH2_RESRICT_REG_ALLOW_JOINT_BURST_Pos 4  /**< \brief (PROV_DMA_CTRL_CH2_RESRICT_REG) Joint bursts are currently active */
#define PROV_DMA_CTRL_CH2_RESRICT_REG_ALLOW_JOINT_BURST (0x1ul << PROV_DMA_CTRL_CH2_RESRICT_REG_ALLOW_JOINT_BURST_Pos)  
#define PROV_DMA_CTRL_CH2_RESRICT_REG_SIMPLE_MEM_Pos 8  /**< \brief (PROV_DMA_CTRL_CH2_RESRICT_REG) Configuration is aligned and peripherals are not used */
#define PROV_DMA_CTRL_CH2_RESRICT_REG_SIMPLE_MEM (0x1ul << PROV_DMA_CTRL_CH2_RESRICT_REG_SIMPLE_MEM_Pos)  
#define PROV_DMA_CTRL_CH2_RESRICT_REG_MASK    0x11Ful    /**< \brief (PROV_DMA_CTRL_CH2_RESRICT_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG : (PROV_DMA_CTRL Offset: 0x238) (R/  32) Channel 2 FIFO Fullness Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_GAP:13;                 /*!< bit:  0..12  Remaining space (in bytes) in FIFO for read data */
    uint32_t :3;                        /*!< bit: 13..15  Reserved                                 */
    uint32_t WR_FULLNESS:13;            /*!< bit: 16..28  Occupied space (in bytes) in FIFO by write data */
    uint32_t :3;                        /*!< bit: 29..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_OFFSET 0x238          /**<  \brief (PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG offset) Channel 2 FIFO Fullness Status Register */
#define PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG reset_value) Channel 2 FIFO Fullness Status Register */

#define PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_RD_GAP_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG) Remaining space (in bytes) in FIFO for read data */
#define PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_RD_GAP_Msk (0x1FFFul << PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_RD_GAP_Pos)
#define PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_RD_GAP(value) (PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_RD_GAP_Msk & ((value) << PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_RD_GAP_Pos))  
#define PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_WR_FULLNESS_Pos 16  /**< \brief (PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG) Occupied space (in bytes) in FIFO by write data */
#define PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_WR_FULLNESS_Msk (0x1FFFul << PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_WR_FULLNESS_Pos)
#define PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_WR_FULLNESS(value) (PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_WR_FULLNESS_Msk & ((value) << PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_WR_FULLNESS_Pos))  
#define PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_MASK 0x1FFF1FFFul    /**< \brief (PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_CH_ENABLE_REG : (PROV_DMA_CTRL Offset: 0x240) (R/W  8) Channel 2 Channel Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH2_CH_ENABLE_REG:1;       /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_CH_ENABLE_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_CH_ENABLE_REG_OFFSET 0x240          /**<  \brief (PROV_DMA_CTRL_CH2_CH_ENABLE_REG offset) Channel 2 Channel Enable Register */
#define PROV_DMA_CTRL_CH2_CH_ENABLE_REG_RESETVALUE 0x01ul         /**<  \brief (PROV_DMA_CTRL_CH2_CH_ENABLE_REG reset_value) Channel 2 Channel Enable Register */

#define PROV_DMA_CTRL_CH2_CH_ENABLE_REG_CH2_CH_ENABLE_REG_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_CH_ENABLE_REG)                            */
#define PROV_DMA_CTRL_CH2_CH_ENABLE_REG_CH2_CH_ENABLE_REG (0x1ul << PROV_DMA_CTRL_CH2_CH_ENABLE_REG_CH2_CH_ENABLE_REG_Pos)  
#define PROV_DMA_CTRL_CH2_CH_ENABLE_REG_MASK  0x01ul    /**< \brief (PROV_DMA_CTRL_CH2_CH_ENABLE_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_CH_START_REG : (PROV_DMA_CTRL Offset: 0x244) (/W  8) Channel 2 Channel Start Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH2_CH_START_REG:1;        /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_CH_START_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_CH_START_REG_OFFSET 0x244          /**<  \brief (PROV_DMA_CTRL_CH2_CH_START_REG offset) Channel 2 Channel Start Register */
#define PROV_DMA_CTRL_CH2_CH_START_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH2_CH_START_REG reset_value) Channel 2 Channel Start Register */

#define PROV_DMA_CTRL_CH2_CH_START_REG_CH2_CH_START_REG_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_CH_START_REG)                             */
#define PROV_DMA_CTRL_CH2_CH_START_REG_CH2_CH_START_REG (0x1ul << PROV_DMA_CTRL_CH2_CH_START_REG_CH2_CH_START_REG_Pos)  
#define PROV_DMA_CTRL_CH2_CH_START_REG_MASK   0x01ul    /**< \brief (PROV_DMA_CTRL_CH2_CH_START_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_CH_ACTIVE_REG : (PROV_DMA_CTRL Offset: 0x248) (R/  8) Channel 2 Channel Active Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_RD_ACTIVE:1;            /*!< bit:      0  Set if channel is enabled and all read data has been received */
    uint8_t  CH_WR_ACTIVE:1;            /*!< bit:      1  Set if channel is enabled and all write data has been transfered */
    uint8_t  :6;                        /*!< bit:   2..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_CH_ACTIVE_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_CH_ACTIVE_REG_OFFSET 0x248          /**<  \brief (PROV_DMA_CTRL_CH2_CH_ACTIVE_REG offset) Channel 2 Channel Active Status Register */
#define PROV_DMA_CTRL_CH2_CH_ACTIVE_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH2_CH_ACTIVE_REG reset_value) Channel 2 Channel Active Status Register */

#define PROV_DMA_CTRL_CH2_CH_ACTIVE_REG_CH_RD_ACTIVE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_CH_ACTIVE_REG) Set if channel is enabled and all read data has been received */
#define PROV_DMA_CTRL_CH2_CH_ACTIVE_REG_CH_RD_ACTIVE (0x1ul << PROV_DMA_CTRL_CH2_CH_ACTIVE_REG_CH_RD_ACTIVE_Pos)  
#define PROV_DMA_CTRL_CH2_CH_ACTIVE_REG_CH_WR_ACTIVE_Pos 1  /**< \brief (PROV_DMA_CTRL_CH2_CH_ACTIVE_REG) Set if channel is enabled and all write data has been transfered */
#define PROV_DMA_CTRL_CH2_CH_ACTIVE_REG_CH_WR_ACTIVE (0x1ul << PROV_DMA_CTRL_CH2_CH_ACTIVE_REG_CH_WR_ACTIVE_Pos)  
#define PROV_DMA_CTRL_CH2_CH_ACTIVE_REG_MASK  0x03ul    /**< \brief (PROV_DMA_CTRL_CH2_CH_ACTIVE_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_COUNT_REG : (PROV_DMA_CTRL Offset: 0x250) (R/  32) Channel 2 Buffer Counter Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t BUFF_COUNT:12;             /*!< bit:  0..11  Number of buffers transferred by channel since started */
    uint32_t :4;                        /*!< bit: 12..15  Reserved                                 */
    uint32_t INT_COUNT:4;               /*!< bit: 16..19  Number of unserviced end interrupts      */
    uint32_t :12;                       /*!< bit: 20..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_COUNT_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_COUNT_REG_OFFSET    0x250          /**<  \brief (PROV_DMA_CTRL_CH2_COUNT_REG offset) Channel 2 Buffer Counter Status Register */
#define PROV_DMA_CTRL_CH2_COUNT_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH2_COUNT_REG reset_value) Channel 2 Buffer Counter Status Register */

#define PROV_DMA_CTRL_CH2_COUNT_REG_BUFF_COUNT_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_COUNT_REG) Number of buffers transferred by channel since started */
#define PROV_DMA_CTRL_CH2_COUNT_REG_BUFF_COUNT_Msk (0xFFFul << PROV_DMA_CTRL_CH2_COUNT_REG_BUFF_COUNT_Pos)
#define PROV_DMA_CTRL_CH2_COUNT_REG_BUFF_COUNT(value) (PROV_DMA_CTRL_CH2_COUNT_REG_BUFF_COUNT_Msk & ((value) << PROV_DMA_CTRL_CH2_COUNT_REG_BUFF_COUNT_Pos))  
#define PROV_DMA_CTRL_CH2_COUNT_REG_INT_COUNT_Pos 16  /**< \brief (PROV_DMA_CTRL_CH2_COUNT_REG) Number of unserviced end interrupts */
#define PROV_DMA_CTRL_CH2_COUNT_REG_INT_COUNT_Msk (0xFul << PROV_DMA_CTRL_CH2_COUNT_REG_INT_COUNT_Pos)
#define PROV_DMA_CTRL_CH2_COUNT_REG_INT_COUNT(value) (PROV_DMA_CTRL_CH2_COUNT_REG_INT_COUNT_Msk & ((value) << PROV_DMA_CTRL_CH2_COUNT_REG_INT_COUNT_Pos))  
#define PROV_DMA_CTRL_CH2_COUNT_REG_MASK      0xF0FFFul    /**< \brief (PROV_DMA_CTRL_CH2_COUNT_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG : (PROV_DMA_CTRL Offset: 0x2a0) (R/W  8) Channel 2 Interrupt Raw Status (Write 1 to any field to issue interrupt) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Indicates an unserviced channel end interrupt */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  AHB read slave error                     */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  AHB write slave error                    */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  FIFO has been overflown                  */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  FIFO has been underflown                 */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  WDT:1;                     /*!< bit:      7  Channel active but did not start a burst for 2048 cycles */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_OFFSET 0x2A0          /**<  \brief (PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG offset) Channel 2 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG reset_value) Channel 2 Interrupt Raw Status (Write 1 to any field to issue interrupt) */

#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG) Indicates an unserviced channel end interrupt */
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG) AHB read slave error     */
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG) AHB write slave error    */
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG) FIFO has been overflown  */
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG) FIFO has been underflown */
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG) Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG) Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG) Channel active but did not start a burst for 2048 cycles */
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WDT (0x1ul << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_MASK 0xFFul    /**< \brief (PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_INT_CLEAR_REG : (PROV_DMA_CTRL Offset: 0x2a4) (R/W  8) Channel 2 Interrupt Clear (Write 1 to clear) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Clear channel end interrupt. Decrements INT_COUNT register */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  Clear AHB read slave error               */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  Clear AHB write slave error              */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  Clears FIFO overflow                     */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  Clears FIFO underflow                    */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Clears Read Timeout                      */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Clears Write Timeout                     */
    uint8_t  WDT:1;                     /*!< bit:      7  Clears WDT                               */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_INT_CLEAR_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_OFFSET 0x2A4          /**<  \brief (PROV_DMA_CTRL_CH2_INT_CLEAR_REG offset) Channel 2 Interrupt Clear (Write 1 to clear) */
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH2_INT_CLEAR_REG reset_value) Channel 2 Interrupt Clear (Write 1 to clear) */

#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_INT_CLEAR_REG) Clear channel end interrupt. Decrements INT_COUNT register */
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH2_INT_CLEAR_REG) Clear AHB read slave error */
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH2_INT_CLEAR_REG) Clear AHB write slave error */
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH2_INT_CLEAR_REG) Clears FIFO overflow       */
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH2_INT_CLEAR_REG) Clears FIFO underflow      */
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH2_INT_CLEAR_REG) Clears Read Timeout        */
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH2_INT_CLEAR_REG) Clears Write Timeout       */
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH2_INT_CLEAR_REG) Clears WDT                 */
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WDT   (0x1ul << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH2_INT_CLEAR_REG_MASK  0xFFul    /**< \brief (PROV_DMA_CTRL_CH2_INT_CLEAR_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_INT_ENABLE_REG : (PROV_DMA_CTRL Offset: 0x2a8) (R/W  8) Channel 2 Interrupt Enable -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Enables end of channel interrupt         */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  Enables AHB read slave error interrupt   */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  Enables AHB write slave error interrupt  */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  Enables FIFO overflow interrupt          */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  Enables FIFO underflow interrupt         */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Enables AHB Read timeout interrupt       */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Enables AHB Write timeout interrupt      */
    uint8_t  WDT:1;                     /*!< bit:      7  Enables WDT interrupt                    */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_INT_ENABLE_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_OFFSET 0x2A8          /**<  \brief (PROV_DMA_CTRL_CH2_INT_ENABLE_REG offset) Channel 2 Interrupt Enable */
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH2_INT_ENABLE_REG reset_value) Channel 2 Interrupt Enable */

#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_INT_ENABLE_REG) Enables end of channel interrupt */
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH2_INT_ENABLE_REG) Enables AHB read slave error interrupt */
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH2_INT_ENABLE_REG) Enables AHB write slave error interrupt */
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH2_INT_ENABLE_REG) Enables FIFO overflow interrupt */
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH2_INT_ENABLE_REG) Enables FIFO underflow interrupt */
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH2_INT_ENABLE_REG) Enables AHB Read timeout interrupt */
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH2_INT_ENABLE_REG) Enables AHB Write timeout interrupt */
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH2_INT_ENABLE_REG) Enables WDT interrupt     */
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WDT  (0x1ul << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH2_INT_ENABLE_REG_MASK 0xFFul    /**< \brief (PROV_DMA_CTRL_CH2_INT_ENABLE_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH2_INT_STATUS_REG : (PROV_DMA_CTRL Offset: 0x2ac) (R/W  8) Channel 2 Interrupt Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Indicates an unserviced channel end interrupt */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  AHB read slave error                     */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  AHB write slave error                    */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  FIFO has been overflown                  */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  FIFO has been underflown                 */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  WDT:1;                     /*!< bit:      7  Channel active but did not start a burst for 2048 cycles */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH2_INT_STATUS_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_OFFSET 0x2AC          /**<  \brief (PROV_DMA_CTRL_CH2_INT_STATUS_REG offset) Channel 2 Interrupt Status */
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH2_INT_STATUS_REG reset_value) Channel 2 Interrupt Status */

#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH2_INT_STATUS_REG) Indicates an unserviced channel end interrupt */
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH2_INT_STATUS_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH2_INT_STATUS_REG) AHB read slave error      */
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH2_INT_STATUS_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH2_INT_STATUS_REG) AHB write slave error     */
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH2_INT_STATUS_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH2_INT_STATUS_REG) FIFO has been overflown   */
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH2_INT_STATUS_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH2_INT_STATUS_REG) FIFO has been underflown  */
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH2_INT_STATUS_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH2_INT_STATUS_REG) Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH2_INT_STATUS_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH2_INT_STATUS_REG) Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH2_INT_STATUS_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH2_INT_STATUS_REG) Channel active but did not start a burst for 2048 cycles */
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_WDT  (0x1ul << PROV_DMA_CTRL_CH2_INT_STATUS_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH2_INT_STATUS_REG_MASK 0xFFul    /**< \brief (PROV_DMA_CTRL_CH2_INT_STATUS_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_CMD_REG0 : (PROV_DMA_CTRL Offset: 0x300) (R/W  32) Channel 3 First Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_START_ADDR:32;          /*!< bit:  0..31  Start Address of Read Buffer             */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_CMD_REG0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_CMD_REG0_OFFSET     0x300          /**<  \brief (PROV_DMA_CTRL_CH3_CMD_REG0 offset) Channel 3 First Line Channel Command */
#define PROV_DMA_CTRL_CH3_CMD_REG0_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH3_CMD_REG0 reset_value) Channel 3 First Line Channel Command */

#define PROV_DMA_CTRL_CH3_CMD_REG0_RD_START_ADDR_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_CMD_REG0) Start Address of Read Buffer    */
#define PROV_DMA_CTRL_CH3_CMD_REG0_RD_START_ADDR_Msk (0xFFFFFFFFul << PROV_DMA_CTRL_CH3_CMD_REG0_RD_START_ADDR_Pos)
#define PROV_DMA_CTRL_CH3_CMD_REG0_RD_START_ADDR(value) (PROV_DMA_CTRL_CH3_CMD_REG0_RD_START_ADDR_Msk & ((value) << PROV_DMA_CTRL_CH3_CMD_REG0_RD_START_ADDR_Pos))  
#define PROV_DMA_CTRL_CH3_CMD_REG0_MASK       0xFFFFFFFFul    /**< \brief (PROV_DMA_CTRL_CH3_CMD_REG0) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_CMD_REG1 : (PROV_DMA_CTRL Offset: 0x304) (R/W  32) Channel 3 Second Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t WR_START_ADDR:32;          /*!< bit:  0..31  Start Address of Write Buffer            */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_CMD_REG1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_CMD_REG1_OFFSET     0x304          /**<  \brief (PROV_DMA_CTRL_CH3_CMD_REG1 offset) Channel 3 Second Line Channel Command */
#define PROV_DMA_CTRL_CH3_CMD_REG1_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH3_CMD_REG1 reset_value) Channel 3 Second Line Channel Command */

#define PROV_DMA_CTRL_CH3_CMD_REG1_WR_START_ADDR_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_CMD_REG1) Start Address of Write Buffer   */
#define PROV_DMA_CTRL_CH3_CMD_REG1_WR_START_ADDR_Msk (0xFFFFFFFFul << PROV_DMA_CTRL_CH3_CMD_REG1_WR_START_ADDR_Pos)
#define PROV_DMA_CTRL_CH3_CMD_REG1_WR_START_ADDR(value) (PROV_DMA_CTRL_CH3_CMD_REG1_WR_START_ADDR_Msk & ((value) << PROV_DMA_CTRL_CH3_CMD_REG1_WR_START_ADDR_Pos))  
#define PROV_DMA_CTRL_CH3_CMD_REG1_MASK       0xFFFFFFFFul    /**< \brief (PROV_DMA_CTRL_CH3_CMD_REG1) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_CMD_REG2 : (PROV_DMA_CTRL Offset: 0x308) (R/W  16) Channel 3 Third Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t BUFFER_SIZE:13;            /*!< bit:  0..12  Size (in Bytes) of Buffer to Transfer    */
    uint16_t :3;                        /*!< bit: 13..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_CMD_REG2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_CMD_REG2_OFFSET     0x308          /**<  \brief (PROV_DMA_CTRL_CH3_CMD_REG2 offset) Channel 3 Third Line Channel Command */
#define PROV_DMA_CTRL_CH3_CMD_REG2_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH3_CMD_REG2 reset_value) Channel 3 Third Line Channel Command */

#define PROV_DMA_CTRL_CH3_CMD_REG2_BUFFER_SIZE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_CMD_REG2) Size (in Bytes) of Buffer to Transfer */
#define PROV_DMA_CTRL_CH3_CMD_REG2_BUFFER_SIZE_Msk (0x1FFFul << PROV_DMA_CTRL_CH3_CMD_REG2_BUFFER_SIZE_Pos)
#define PROV_DMA_CTRL_CH3_CMD_REG2_BUFFER_SIZE(value) (PROV_DMA_CTRL_CH3_CMD_REG2_BUFFER_SIZE_Msk & ((value) << PROV_DMA_CTRL_CH3_CMD_REG2_BUFFER_SIZE_Pos))  
#define PROV_DMA_CTRL_CH3_CMD_REG2_MASK       0x1FFFul    /**< \brief (PROV_DMA_CTRL_CH3_CMD_REG2) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_CMD_REG3 : (PROV_DMA_CTRL Offset: 0x30c) (R/W  32) Channel 3 Fourth Line Channel Command -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CMD_SET_INT:1;             /*!< bit:      0  Active High Interrupt Enable once buffer has been transfered */
    uint32_t CMD_LAST:1;                /*!< bit:      1  If set, channel stops when buffer done, otherwise load from CMD_NEXT_ADDR */
    uint32_t CMD_NEXT_ADDR:30;          /*!< bit:  2..31  Address of next command if CMD_LAST is not set */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_CMD_REG3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_CMD_REG3_OFFSET     0x30C          /**<  \brief (PROV_DMA_CTRL_CH3_CMD_REG3 offset) Channel 3 Fourth Line Channel Command */
#define PROV_DMA_CTRL_CH3_CMD_REG3_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH3_CMD_REG3 reset_value) Channel 3 Fourth Line Channel Command */

#define PROV_DMA_CTRL_CH3_CMD_REG3_CMD_SET_INT_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_CMD_REG3) Active High Interrupt Enable once buffer has been transfered */
#define PROV_DMA_CTRL_CH3_CMD_REG3_CMD_SET_INT (0x1ul << PROV_DMA_CTRL_CH3_CMD_REG3_CMD_SET_INT_Pos)  
#define PROV_DMA_CTRL_CH3_CMD_REG3_CMD_LAST_Pos 1  /**< \brief (PROV_DMA_CTRL_CH3_CMD_REG3) If set, channel stops when buffer done, otherwise load from CMD_NEXT_ADDR */
#define PROV_DMA_CTRL_CH3_CMD_REG3_CMD_LAST   (0x1ul << PROV_DMA_CTRL_CH3_CMD_REG3_CMD_LAST_Pos)  
#define PROV_DMA_CTRL_CH3_CMD_REG3_CMD_NEXT_ADDR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH3_CMD_REG3) Address of next command if CMD_LAST is not set */
#define PROV_DMA_CTRL_CH3_CMD_REG3_CMD_NEXT_ADDR_Msk (0x3FFFFFFFul << PROV_DMA_CTRL_CH3_CMD_REG3_CMD_NEXT_ADDR_Pos)
#define PROV_DMA_CTRL_CH3_CMD_REG3_CMD_NEXT_ADDR(value) (PROV_DMA_CTRL_CH3_CMD_REG3_CMD_NEXT_ADDR_Msk & ((value) << PROV_DMA_CTRL_CH3_CMD_REG3_CMD_NEXT_ADDR_Pos))  
#define PROV_DMA_CTRL_CH3_CMD_REG3_MASK       0xFFFFFFFFul    /**< \brief (PROV_DMA_CTRL_CH3_CMD_REG3) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_STATIC_REG0 : (PROV_DMA_CTRL Offset: 0x310) (R/W  32) Channel 3 Static Configuration Read -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_BURST_MAX_SIZE:7;       /*!< bit:   0..6  Maximum number of bytes of an AHB read burst */
    uint32_t :9;                        /*!< bit:  7..15  Reserved                                 */
    uint32_t RD_TOKENS:6;               /*!< bit: 16..21  Number of AHB read commands to issue before channel is released */
    uint32_t :9;                        /*!< bit: 22..30  Reserved                                 */
    uint32_t RD_INCR:1;                 /*!< bit:     31  If set the controller will increment the next burst address */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_STATIC_REG0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_STATIC_REG0_OFFSET  0x310          /**<  \brief (PROV_DMA_CTRL_CH3_STATIC_REG0 offset) Channel 3 Static Configuration Read */
#define PROV_DMA_CTRL_CH3_STATIC_REG0_RESETVALUE 0x80010000ul   /**<  \brief (PROV_DMA_CTRL_CH3_STATIC_REG0 reset_value) Channel 3 Static Configuration Read */

#define PROV_DMA_CTRL_CH3_STATIC_REG0_RD_BURST_MAX_SIZE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG0) Maximum number of bytes of an AHB read burst */
#define PROV_DMA_CTRL_CH3_STATIC_REG0_RD_BURST_MAX_SIZE_Msk (0x7Ful << PROV_DMA_CTRL_CH3_STATIC_REG0_RD_BURST_MAX_SIZE_Pos)
#define PROV_DMA_CTRL_CH3_STATIC_REG0_RD_BURST_MAX_SIZE(value) (PROV_DMA_CTRL_CH3_STATIC_REG0_RD_BURST_MAX_SIZE_Msk & ((value) << PROV_DMA_CTRL_CH3_STATIC_REG0_RD_BURST_MAX_SIZE_Pos))  
#define PROV_DMA_CTRL_CH3_STATIC_REG0_RD_TOKENS_Pos 16  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG0) Number of AHB read commands to issue before channel is released */
#define PROV_DMA_CTRL_CH3_STATIC_REG0_RD_TOKENS_Msk (0x3Ful << PROV_DMA_CTRL_CH3_STATIC_REG0_RD_TOKENS_Pos)
#define PROV_DMA_CTRL_CH3_STATIC_REG0_RD_TOKENS(value) (PROV_DMA_CTRL_CH3_STATIC_REG0_RD_TOKENS_Msk & ((value) << PROV_DMA_CTRL_CH3_STATIC_REG0_RD_TOKENS_Pos))  
#define PROV_DMA_CTRL_CH3_STATIC_REG0_RD_INCR_Pos 31  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG0) If set the controller will increment the next burst address */
#define PROV_DMA_CTRL_CH3_STATIC_REG0_RD_INCR (0x1ul << PROV_DMA_CTRL_CH3_STATIC_REG0_RD_INCR_Pos)  
#define PROV_DMA_CTRL_CH3_STATIC_REG0_MASK    0x803F007Ful    /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG0) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_STATIC_REG1 : (PROV_DMA_CTRL Offset: 0x314) (R/W  32) Channel 3 Static Configuration Write -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t WR_BURST_MAX_SIZE:7;       /*!< bit:   0..6  Maximum number of bytes of an AHB write burst */
    uint32_t :9;                        /*!< bit:  7..15  Reserved                                 */
    uint32_t WR_TOKENS:6;               /*!< bit: 16..21  Number of AHB write commands to issue before channel is released */
    uint32_t :9;                        /*!< bit: 22..30  Reserved                                 */
    uint32_t WR_INCR:1;                 /*!< bit:     31  If set the controller will increment the next burst address */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_STATIC_REG1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_STATIC_REG1_OFFSET  0x314          /**<  \brief (PROV_DMA_CTRL_CH3_STATIC_REG1 offset) Channel 3 Static Configuration Write */
#define PROV_DMA_CTRL_CH3_STATIC_REG1_RESETVALUE 0x80010000ul   /**<  \brief (PROV_DMA_CTRL_CH3_STATIC_REG1 reset_value) Channel 3 Static Configuration Write */

#define PROV_DMA_CTRL_CH3_STATIC_REG1_WR_BURST_MAX_SIZE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG1) Maximum number of bytes of an AHB write burst */
#define PROV_DMA_CTRL_CH3_STATIC_REG1_WR_BURST_MAX_SIZE_Msk (0x7Ful << PROV_DMA_CTRL_CH3_STATIC_REG1_WR_BURST_MAX_SIZE_Pos)
#define PROV_DMA_CTRL_CH3_STATIC_REG1_WR_BURST_MAX_SIZE(value) (PROV_DMA_CTRL_CH3_STATIC_REG1_WR_BURST_MAX_SIZE_Msk & ((value) << PROV_DMA_CTRL_CH3_STATIC_REG1_WR_BURST_MAX_SIZE_Pos))  
#define PROV_DMA_CTRL_CH3_STATIC_REG1_WR_TOKENS_Pos 16  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG1) Number of AHB write commands to issue before channel is released */
#define PROV_DMA_CTRL_CH3_STATIC_REG1_WR_TOKENS_Msk (0x3Ful << PROV_DMA_CTRL_CH3_STATIC_REG1_WR_TOKENS_Pos)
#define PROV_DMA_CTRL_CH3_STATIC_REG1_WR_TOKENS(value) (PROV_DMA_CTRL_CH3_STATIC_REG1_WR_TOKENS_Msk & ((value) << PROV_DMA_CTRL_CH3_STATIC_REG1_WR_TOKENS_Pos))  
#define PROV_DMA_CTRL_CH3_STATIC_REG1_WR_INCR_Pos 31  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG1) If set the controller will increment the next burst address */
#define PROV_DMA_CTRL_CH3_STATIC_REG1_WR_INCR (0x1ul << PROV_DMA_CTRL_CH3_STATIC_REG1_WR_INCR_Pos)  
#define PROV_DMA_CTRL_CH3_STATIC_REG1_MASK    0x803F007Ful    /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG1) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_STATIC_REG2 : (PROV_DMA_CTRL Offset: 0x318) (R/W  32) Channel 3 Block Mode -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :16;                       /*!< bit:  0..15  Reserved                                 */
    uint32_t JOINT:1;                   /*!< bit:     16  If set channel will work in joint mode   */
    uint32_t :11;                       /*!< bit: 17..27  Reserved                                 */
    uint32_t END_SWAP:2;                /*!< bit: 28..29  Endianness Byte Swapping                 */
    uint32_t :2;                        /*!< bit: 30..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_STATIC_REG2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_STATIC_REG2_OFFSET  0x318          /**<  \brief (PROV_DMA_CTRL_CH3_STATIC_REG2 offset) Channel 3 Block Mode */
#define PROV_DMA_CTRL_CH3_STATIC_REG2_RESETVALUE 0x10000ul      /**<  \brief (PROV_DMA_CTRL_CH3_STATIC_REG2 reset_value) Channel 3 Block Mode */

#define PROV_DMA_CTRL_CH3_STATIC_REG2_JOINT_Pos 16  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG2) If set channel will work in joint mode */
#define PROV_DMA_CTRL_CH3_STATIC_REG2_JOINT   (0x1ul << PROV_DMA_CTRL_CH3_STATIC_REG2_JOINT_Pos)  
#define PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_Pos 28  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG2) Endianness Byte Swapping     */
#define PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_Msk (0x3ul << PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP(value) (PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_Msk & ((value) << PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_Pos))  
#define   PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_0_Val        0X0ul  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG2) No Swapping  */
#define   PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_1_Val        0X1ul  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG2) Swap bytes within 16 bits  */
#define   PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_2_Val        0X2ul  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG2) Swap bytes within 32 bits  */
#define   PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_3_Val        0X3ul  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG2) Swap bytes within 64 bits  */
#define PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_0    (PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_0_Val << PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_1    (PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_1_Val << PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_2    (PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_2_Val << PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_3    (PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_3_Val << PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_Pos)
#define PROV_DMA_CTRL_CH3_STATIC_REG2_MASK    0x30010000ul    /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG2) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_STATIC_REG4 : (PROV_DMA_CTRL Offset: 0x320) (R/W  32) Channel 3 Static Configuration Peripheral -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_PERIPH_NUM:5;           /*!< bit:   0..4  Number of peripheral to read from (0 if memory or no peripheral flow control) */
    uint32_t :3;                        /*!< bit:   5..7  Reserved                                 */
    uint32_t RD_PERIPH_DELAY:3;         /*!< bit:  8..10  Number of cycles to wait for read request signal to update after issuing the read clear signal */
    uint32_t :5;                        /*!< bit: 11..15  Reserved                                 */
    uint32_t WR_PERIPH_NUM:5;           /*!< bit: 16..20  Number of peripheral to write from (0 if memory or no peripheral flow control) */
    uint32_t :3;                        /*!< bit: 21..23  Reserved                                 */
    uint32_t WR_PERIPH_DELAY:3;         /*!< bit: 24..26  Number of cycles to wait for write request signal to update after issuing the write clear signal */
    uint32_t :5;                        /*!< bit: 27..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_STATIC_REG4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_STATIC_REG4_OFFSET  0x320          /**<  \brief (PROV_DMA_CTRL_CH3_STATIC_REG4 offset) Channel 3 Static Configuration Peripheral */
#define PROV_DMA_CTRL_CH3_STATIC_REG4_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH3_STATIC_REG4 reset_value) Channel 3 Static Configuration Peripheral */

#define PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_NUM_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG4) Number of peripheral to read from (0 if memory or no peripheral flow control) */
#define PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_NUM_Msk (0x1Ful << PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_NUM_Pos)
#define PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_NUM(value) (PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_NUM_Msk & ((value) << PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_NUM_Pos))  
#define PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_DELAY_Pos 8  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG4) Number of cycles to wait for read request signal to update after issuing the read clear signal */
#define PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_DELAY_Msk (0x7ul << PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_DELAY_Pos)
#define PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_DELAY(value) (PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_DELAY_Msk & ((value) << PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_DELAY_Pos))  
#define PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_NUM_Pos 16  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG4) Number of peripheral to write from (0 if memory or no peripheral flow control) */
#define PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_NUM_Msk (0x1Ful << PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_NUM_Pos)
#define PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_NUM(value) (PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_NUM_Msk & ((value) << PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_NUM_Pos))  
#define PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_DELAY_Pos 24  /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG4) Number of cycles to wait for write request signal to update after issuing the write clear signal */
#define PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_DELAY_Msk (0x7ul << PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_DELAY_Pos)
#define PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_DELAY(value) (PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_DELAY_Msk & ((value) << PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_DELAY_Pos))  
#define PROV_DMA_CTRL_CH3_STATIC_REG4_MASK    0x71F071Ful    /**< \brief (PROV_DMA_CTRL_CH3_STATIC_REG4) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_RESRICT_REG : (PROV_DMA_CTRL Offset: 0x32c) (R/  16) Channel 3 Restrictions Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t RD_ALLOW_FULL_FIFO:1;      /*!< bit:      0  Read start address does not restrict burst size */
    uint16_t WR_ALLOW_FULL_FIFO:1;      /*!< bit:      1  Write start address does not restrict burst size */
    uint16_t ALLOW_FULL_FIFO:1;         /*!< bit:      2  Burst sizes can equal data buffer size, otherwise max burst is half data buffer size */
    uint16_t ALLOW_FULL_BURST:1;        /*!< bit:      3  Maximum burst of 16 strobes can be used (joint mode only) */
    uint16_t ALLOW_JOINT_BURST:1;       /*!< bit:      4  Joint bursts are currently active        */
    uint16_t :3;                        /*!< bit:   5..7  Reserved                                 */
    uint16_t SIMPLE_MEM:1;              /*!< bit:      8  Configuration is aligned and peripherals are not used */
    uint16_t :7;                        /*!< bit:  9..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_RESRICT_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_RESRICT_REG_OFFSET  0x32C          /**<  \brief (PROV_DMA_CTRL_CH3_RESRICT_REG offset) Channel 3 Restrictions Status Register */
#define PROV_DMA_CTRL_CH3_RESRICT_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH3_RESRICT_REG reset_value) Channel 3 Restrictions Status Register */

#define PROV_DMA_CTRL_CH3_RESRICT_REG_RD_ALLOW_FULL_FIFO_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_RESRICT_REG) Read start address does not restrict burst size */
#define PROV_DMA_CTRL_CH3_RESRICT_REG_RD_ALLOW_FULL_FIFO (0x1ul << PROV_DMA_CTRL_CH3_RESRICT_REG_RD_ALLOW_FULL_FIFO_Pos)  
#define PROV_DMA_CTRL_CH3_RESRICT_REG_WR_ALLOW_FULL_FIFO_Pos 1  /**< \brief (PROV_DMA_CTRL_CH3_RESRICT_REG) Write start address does not restrict burst size */
#define PROV_DMA_CTRL_CH3_RESRICT_REG_WR_ALLOW_FULL_FIFO (0x1ul << PROV_DMA_CTRL_CH3_RESRICT_REG_WR_ALLOW_FULL_FIFO_Pos)  
#define PROV_DMA_CTRL_CH3_RESRICT_REG_ALLOW_FULL_FIFO_Pos 2  /**< \brief (PROV_DMA_CTRL_CH3_RESRICT_REG) Burst sizes can equal data buffer size, otherwise max burst is half data buffer size */
#define PROV_DMA_CTRL_CH3_RESRICT_REG_ALLOW_FULL_FIFO (0x1ul << PROV_DMA_CTRL_CH3_RESRICT_REG_ALLOW_FULL_FIFO_Pos)  
#define PROV_DMA_CTRL_CH3_RESRICT_REG_ALLOW_FULL_BURST_Pos 3  /**< \brief (PROV_DMA_CTRL_CH3_RESRICT_REG) Maximum burst of 16 strobes can be used (joint mode only) */
#define PROV_DMA_CTRL_CH3_RESRICT_REG_ALLOW_FULL_BURST (0x1ul << PROV_DMA_CTRL_CH3_RESRICT_REG_ALLOW_FULL_BURST_Pos)  
#define PROV_DMA_CTRL_CH3_RESRICT_REG_ALLOW_JOINT_BURST_Pos 4  /**< \brief (PROV_DMA_CTRL_CH3_RESRICT_REG) Joint bursts are currently active */
#define PROV_DMA_CTRL_CH3_RESRICT_REG_ALLOW_JOINT_BURST (0x1ul << PROV_DMA_CTRL_CH3_RESRICT_REG_ALLOW_JOINT_BURST_Pos)  
#define PROV_DMA_CTRL_CH3_RESRICT_REG_SIMPLE_MEM_Pos 8  /**< \brief (PROV_DMA_CTRL_CH3_RESRICT_REG) Configuration is aligned and peripherals are not used */
#define PROV_DMA_CTRL_CH3_RESRICT_REG_SIMPLE_MEM (0x1ul << PROV_DMA_CTRL_CH3_RESRICT_REG_SIMPLE_MEM_Pos)  
#define PROV_DMA_CTRL_CH3_RESRICT_REG_MASK    0x11Ful    /**< \brief (PROV_DMA_CTRL_CH3_RESRICT_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG : (PROV_DMA_CTRL Offset: 0x338) (R/  32) Channel 3 FIFO Fullness Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RD_GAP:13;                 /*!< bit:  0..12  Remaining space (in bytes) in FIFO for read data */
    uint32_t :3;                        /*!< bit: 13..15  Reserved                                 */
    uint32_t WR_FULLNESS:13;            /*!< bit: 16..28  Occupied space (in bytes) in FIFO by write data */
    uint32_t :3;                        /*!< bit: 29..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_OFFSET 0x338          /**<  \brief (PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG offset) Channel 3 FIFO Fullness Status Register */
#define PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG reset_value) Channel 3 FIFO Fullness Status Register */

#define PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_RD_GAP_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG) Remaining space (in bytes) in FIFO for read data */
#define PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_RD_GAP_Msk (0x1FFFul << PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_RD_GAP_Pos)
#define PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_RD_GAP(value) (PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_RD_GAP_Msk & ((value) << PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_RD_GAP_Pos))  
#define PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_WR_FULLNESS_Pos 16  /**< \brief (PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG) Occupied space (in bytes) in FIFO by write data */
#define PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_WR_FULLNESS_Msk (0x1FFFul << PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_WR_FULLNESS_Pos)
#define PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_WR_FULLNESS(value) (PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_WR_FULLNESS_Msk & ((value) << PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_WR_FULLNESS_Pos))  
#define PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_MASK 0x1FFF1FFFul    /**< \brief (PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_CH_ENABLE_REG : (PROV_DMA_CTRL Offset: 0x340) (R/W  8) Channel 3 Channel Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH3_CH_ENABLE_REG:1;       /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_CH_ENABLE_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_CH_ENABLE_REG_OFFSET 0x340          /**<  \brief (PROV_DMA_CTRL_CH3_CH_ENABLE_REG offset) Channel 3 Channel Enable Register */
#define PROV_DMA_CTRL_CH3_CH_ENABLE_REG_RESETVALUE 0x01ul         /**<  \brief (PROV_DMA_CTRL_CH3_CH_ENABLE_REG reset_value) Channel 3 Channel Enable Register */

#define PROV_DMA_CTRL_CH3_CH_ENABLE_REG_CH3_CH_ENABLE_REG_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_CH_ENABLE_REG)                            */
#define PROV_DMA_CTRL_CH3_CH_ENABLE_REG_CH3_CH_ENABLE_REG (0x1ul << PROV_DMA_CTRL_CH3_CH_ENABLE_REG_CH3_CH_ENABLE_REG_Pos)  
#define PROV_DMA_CTRL_CH3_CH_ENABLE_REG_MASK  0x01ul    /**< \brief (PROV_DMA_CTRL_CH3_CH_ENABLE_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_CH_START_REG : (PROV_DMA_CTRL Offset: 0x344) (/W  8) Channel 3 Channel Start Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH3_CH_START_REG:1;        /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_CH_START_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_CH_START_REG_OFFSET 0x344          /**<  \brief (PROV_DMA_CTRL_CH3_CH_START_REG offset) Channel 3 Channel Start Register */
#define PROV_DMA_CTRL_CH3_CH_START_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH3_CH_START_REG reset_value) Channel 3 Channel Start Register */

#define PROV_DMA_CTRL_CH3_CH_START_REG_CH3_CH_START_REG_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_CH_START_REG)                             */
#define PROV_DMA_CTRL_CH3_CH_START_REG_CH3_CH_START_REG (0x1ul << PROV_DMA_CTRL_CH3_CH_START_REG_CH3_CH_START_REG_Pos)  
#define PROV_DMA_CTRL_CH3_CH_START_REG_MASK   0x01ul    /**< \brief (PROV_DMA_CTRL_CH3_CH_START_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_CH_ACTIVE_REG : (PROV_DMA_CTRL Offset: 0x348) (R/  8) Channel 3 Channel Active Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_RD_ACTIVE:1;            /*!< bit:      0  Set if channel is enabled and all read data has been received */
    uint8_t  CH_WR_ACTIVE:1;            /*!< bit:      1  Set if channel is enabled and all write data has been transfered */
    uint8_t  :6;                        /*!< bit:   2..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_CH_ACTIVE_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_CH_ACTIVE_REG_OFFSET 0x348          /**<  \brief (PROV_DMA_CTRL_CH3_CH_ACTIVE_REG offset) Channel 3 Channel Active Status Register */
#define PROV_DMA_CTRL_CH3_CH_ACTIVE_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH3_CH_ACTIVE_REG reset_value) Channel 3 Channel Active Status Register */

#define PROV_DMA_CTRL_CH3_CH_ACTIVE_REG_CH_RD_ACTIVE_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_CH_ACTIVE_REG) Set if channel is enabled and all read data has been received */
#define PROV_DMA_CTRL_CH3_CH_ACTIVE_REG_CH_RD_ACTIVE (0x1ul << PROV_DMA_CTRL_CH3_CH_ACTIVE_REG_CH_RD_ACTIVE_Pos)  
#define PROV_DMA_CTRL_CH3_CH_ACTIVE_REG_CH_WR_ACTIVE_Pos 1  /**< \brief (PROV_DMA_CTRL_CH3_CH_ACTIVE_REG) Set if channel is enabled and all write data has been transfered */
#define PROV_DMA_CTRL_CH3_CH_ACTIVE_REG_CH_WR_ACTIVE (0x1ul << PROV_DMA_CTRL_CH3_CH_ACTIVE_REG_CH_WR_ACTIVE_Pos)  
#define PROV_DMA_CTRL_CH3_CH_ACTIVE_REG_MASK  0x03ul    /**< \brief (PROV_DMA_CTRL_CH3_CH_ACTIVE_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_COUNT_REG : (PROV_DMA_CTRL Offset: 0x350) (R/  32) Channel 3 Buffer Counter Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t BUFF_COUNT:12;             /*!< bit:  0..11  Number of buffers transferred by channel since started */
    uint32_t :4;                        /*!< bit: 12..15  Reserved                                 */
    uint32_t INT_COUNT:4;               /*!< bit: 16..19  Number of unserviced end interrupts      */
    uint32_t :12;                       /*!< bit: 20..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_COUNT_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_COUNT_REG_OFFSET    0x350          /**<  \brief (PROV_DMA_CTRL_CH3_COUNT_REG offset) Channel 3 Buffer Counter Status Register */
#define PROV_DMA_CTRL_CH3_COUNT_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH3_COUNT_REG reset_value) Channel 3 Buffer Counter Status Register */

#define PROV_DMA_CTRL_CH3_COUNT_REG_BUFF_COUNT_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_COUNT_REG) Number of buffers transferred by channel since started */
#define PROV_DMA_CTRL_CH3_COUNT_REG_BUFF_COUNT_Msk (0xFFFul << PROV_DMA_CTRL_CH3_COUNT_REG_BUFF_COUNT_Pos)
#define PROV_DMA_CTRL_CH3_COUNT_REG_BUFF_COUNT(value) (PROV_DMA_CTRL_CH3_COUNT_REG_BUFF_COUNT_Msk & ((value) << PROV_DMA_CTRL_CH3_COUNT_REG_BUFF_COUNT_Pos))  
#define PROV_DMA_CTRL_CH3_COUNT_REG_INT_COUNT_Pos 16  /**< \brief (PROV_DMA_CTRL_CH3_COUNT_REG) Number of unserviced end interrupts */
#define PROV_DMA_CTRL_CH3_COUNT_REG_INT_COUNT_Msk (0xFul << PROV_DMA_CTRL_CH3_COUNT_REG_INT_COUNT_Pos)
#define PROV_DMA_CTRL_CH3_COUNT_REG_INT_COUNT(value) (PROV_DMA_CTRL_CH3_COUNT_REG_INT_COUNT_Msk & ((value) << PROV_DMA_CTRL_CH3_COUNT_REG_INT_COUNT_Pos))  
#define PROV_DMA_CTRL_CH3_COUNT_REG_MASK      0xF0FFFul    /**< \brief (PROV_DMA_CTRL_CH3_COUNT_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG : (PROV_DMA_CTRL Offset: 0x3a0) (R/W  8) Channel 3 Interrupt Raw Status (Write 1 to any field to issue interrupt) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Indicates an unserviced channel end interrupt */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  AHB read slave error                     */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  AHB write slave error                    */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  FIFO has been overflown                  */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  FIFO has been underflown                 */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  WDT:1;                     /*!< bit:      7  Channel active but did not start a burst for 2048 cycles */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_OFFSET 0x3A0          /**<  \brief (PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG offset) Channel 3 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG reset_value) Channel 3 Interrupt Raw Status (Write 1 to any field to issue interrupt) */

#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG) Indicates an unserviced channel end interrupt */
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG) AHB read slave error     */
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG) AHB write slave error    */
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG) FIFO has been overflown  */
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG) FIFO has been underflown */
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG) Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG) Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG) Channel active but did not start a burst for 2048 cycles */
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WDT (0x1ul << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_MASK 0xFFul    /**< \brief (PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_INT_CLEAR_REG : (PROV_DMA_CTRL Offset: 0x3a4) (R/W  8) Channel 3 Interrupt Clear (Write 1 to clear) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Clear channel end interrupt. Decrements INT_COUNT register */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  Clear AHB read slave error               */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  Clear AHB write slave error              */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  Clears FIFO overflow                     */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  Clears FIFO underflow                    */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Clears Read Timeout                      */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Clears Write Timeout                     */
    uint8_t  WDT:1;                     /*!< bit:      7  Clears WDT                               */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_INT_CLEAR_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_OFFSET 0x3A4          /**<  \brief (PROV_DMA_CTRL_CH3_INT_CLEAR_REG offset) Channel 3 Interrupt Clear (Write 1 to clear) */
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH3_INT_CLEAR_REG reset_value) Channel 3 Interrupt Clear (Write 1 to clear) */

#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_INT_CLEAR_REG) Clear channel end interrupt. Decrements INT_COUNT register */
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH3_INT_CLEAR_REG) Clear AHB read slave error */
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH3_INT_CLEAR_REG) Clear AHB write slave error */
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH3_INT_CLEAR_REG) Clears FIFO overflow       */
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH3_INT_CLEAR_REG) Clears FIFO underflow      */
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH3_INT_CLEAR_REG) Clears Read Timeout        */
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH3_INT_CLEAR_REG) Clears Write Timeout       */
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH3_INT_CLEAR_REG) Clears WDT                 */
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WDT   (0x1ul << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH3_INT_CLEAR_REG_MASK  0xFFul    /**< \brief (PROV_DMA_CTRL_CH3_INT_CLEAR_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_INT_ENABLE_REG : (PROV_DMA_CTRL Offset: 0x3a8) (R/W  8) Channel 3 Interrupt Enable -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Enables end of channel interrupt         */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  Enables AHB read slave error interrupt   */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  Enables AHB write slave error interrupt  */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  Enables FIFO overflow interrupt          */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  Enables FIFO underflow interrupt         */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Enables AHB Read timeout interrupt       */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Enables AHB Write timeout interrupt      */
    uint8_t  WDT:1;                     /*!< bit:      7  Enables WDT interrupt                    */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_INT_ENABLE_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_OFFSET 0x3A8          /**<  \brief (PROV_DMA_CTRL_CH3_INT_ENABLE_REG offset) Channel 3 Interrupt Enable */
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH3_INT_ENABLE_REG reset_value) Channel 3 Interrupt Enable */

#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_INT_ENABLE_REG) Enables end of channel interrupt */
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH3_INT_ENABLE_REG) Enables AHB read slave error interrupt */
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH3_INT_ENABLE_REG) Enables AHB write slave error interrupt */
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH3_INT_ENABLE_REG) Enables FIFO overflow interrupt */
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH3_INT_ENABLE_REG) Enables FIFO underflow interrupt */
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH3_INT_ENABLE_REG) Enables AHB Read timeout interrupt */
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH3_INT_ENABLE_REG) Enables AHB Write timeout interrupt */
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH3_INT_ENABLE_REG) Enables WDT interrupt     */
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WDT  (0x1ul << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH3_INT_ENABLE_REG_MASK 0xFFul    /**< \brief (PROV_DMA_CTRL_CH3_INT_ENABLE_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CH3_INT_STATUS_REG : (PROV_DMA_CTRL Offset: 0x3ac) (R/W  8) Channel 3 Interrupt Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_END:1;                  /*!< bit:      0  Indicates an unserviced channel end interrupt */
    uint8_t  RD_SLVERR:1;               /*!< bit:      1  AHB read slave error                     */
    uint8_t  WR_SLVERR:1;               /*!< bit:      2  AHB write slave error                    */
    uint8_t  FIFO_OVERFLOW:1;           /*!< bit:      3  FIFO has been overflown                  */
    uint8_t  FIFO_UNDERFLOW:1;          /*!< bit:      4  FIFO has been underflown                 */
    uint8_t  TIMEOUT_RD:1;              /*!< bit:      5  Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  TIMEOUT_WR:1;              /*!< bit:      6  Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
    uint8_t  WDT:1;                     /*!< bit:      7  Channel active but did not start a burst for 2048 cycles */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CH3_INT_STATUS_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_OFFSET 0x3AC          /**<  \brief (PROV_DMA_CTRL_CH3_INT_STATUS_REG offset) Channel 3 Interrupt Status */
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CH3_INT_STATUS_REG reset_value) Channel 3 Interrupt Status */

#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_CH_END_Pos 0  /**< \brief (PROV_DMA_CTRL_CH3_INT_STATUS_REG) Indicates an unserviced channel end interrupt */
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_CH_END (0x1ul << PROV_DMA_CTRL_CH3_INT_STATUS_REG_CH_END_Pos)  
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_RD_SLVERR_Pos 1  /**< \brief (PROV_DMA_CTRL_CH3_INT_STATUS_REG) AHB read slave error      */
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_RD_SLVERR (0x1ul << PROV_DMA_CTRL_CH3_INT_STATUS_REG_RD_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_WR_SLVERR_Pos 2  /**< \brief (PROV_DMA_CTRL_CH3_INT_STATUS_REG) AHB write slave error     */
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_WR_SLVERR (0x1ul << PROV_DMA_CTRL_CH3_INT_STATUS_REG_WR_SLVERR_Pos)  
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_FIFO_OVERFLOW_Pos 3  /**< \brief (PROV_DMA_CTRL_CH3_INT_STATUS_REG) FIFO has been overflown   */
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_FIFO_OVERFLOW (0x1ul << PROV_DMA_CTRL_CH3_INT_STATUS_REG_FIFO_OVERFLOW_Pos)  
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_FIFO_UNDERFLOW_Pos 4  /**< \brief (PROV_DMA_CTRL_CH3_INT_STATUS_REG) FIFO has been underflown  */
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_FIFO_UNDERFLOW (0x1ul << PROV_DMA_CTRL_CH3_INT_STATUS_REG_FIFO_UNDERFLOW_Pos)  
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_TIMEOUT_RD_Pos 5  /**< \brief (PROV_DMA_CTRL_CH3_INT_STATUS_REG) Read timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_TIMEOUT_RD (0x1ul << PROV_DMA_CTRL_CH3_INT_STATUS_REG_TIMEOUT_RD_Pos)  
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_TIMEOUT_WR_Pos 6  /**< \brief (PROV_DMA_CTRL_CH3_INT_STATUS_REG) Write timeout on AHB bus (timeout value fixed at 1024 cycles) */
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_TIMEOUT_WR (0x1ul << PROV_DMA_CTRL_CH3_INT_STATUS_REG_TIMEOUT_WR_Pos)  
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_WDT_Pos 7  /**< \brief (PROV_DMA_CTRL_CH3_INT_STATUS_REG) Channel active but did not start a burst for 2048 cycles */
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_WDT  (0x1ul << PROV_DMA_CTRL_CH3_INT_STATUS_REG_WDT_Pos)  
#define PROV_DMA_CTRL_CH3_INT_STATUS_REG_MASK 0xFFul    /**< \brief (PROV_DMA_CTRL_CH3_INT_STATUS_REG) Register MASK */

/* -------- PROV_DMA_CTRL_CORE_INT_STATUS : (PROV_DMA_CTRL Offset: 0x800) (R/  8) Indicates which channels caused interrupt -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CHANNEL_0:1;               /*!< bit:      0  Indicates channel 0 caused interrupt     */
    uint8_t  CHANNEL_1:1;               /*!< bit:      1  Indicates channel 1 caused interrupt     */
    uint8_t  CHANNEL_2:1;               /*!< bit:      2  Indicates channel 2 caused interrupt     */
    uint8_t  CHANNEL_3:1;               /*!< bit:      3  Indicates channel 3 caused interrupt     */
    uint8_t  :4;                        /*!< bit:   4..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  struct {
    uint8_t  CHANNEL_:4;                /*!< bit:   0..3  Indicates channel 3 caused interrupt     */
    uint8_t  :4;                        /*!< bit:   4..7 Reserved                                  */
  } vec;                                /*!< Structure used for vec  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CORE_INT_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CORE_INT_STATUS_OFFSET  0x800          /**<  \brief (PROV_DMA_CTRL_CORE_INT_STATUS offset) Indicates which channels caused interrupt */
#define PROV_DMA_CTRL_CORE_INT_STATUS_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CORE_INT_STATUS reset_value) Indicates which channels caused interrupt */

#define PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_0_Pos 0  /**< \brief (PROV_DMA_CTRL_CORE_INT_STATUS) Indicates channel 0 caused interrupt */
#define PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_0 (0x1ul << PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_0_Pos)  
#define PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_1_Pos 1  /**< \brief (PROV_DMA_CTRL_CORE_INT_STATUS) Indicates channel 1 caused interrupt */
#define PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_1 (0x1ul << PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_1_Pos)  
#define PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_2_Pos 2  /**< \brief (PROV_DMA_CTRL_CORE_INT_STATUS) Indicates channel 2 caused interrupt */
#define PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_2 (0x1ul << PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_2_Pos)  
#define PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_3_Pos 3  /**< \brief (PROV_DMA_CTRL_CORE_INT_STATUS) Indicates channel 3 caused interrupt */
#define PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_3 (0x1ul << PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_3_Pos)  
#define PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL__Pos 0  /**< \brief (PROV_DMA_CTRL_CORE_INT_STATUS) Indicates channel 3 caused interrupt */
#define PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL__Msk (0xFul << PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL__Pos)  
#define PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_(value) (PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL__Msk & ((value) << PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL__Pos))  
#define PROV_DMA_CTRL_CORE_INT_STATUS_MASK    0x0Ful    /**< \brief (PROV_DMA_CTRL_CORE_INT_STATUS) Register MASK */

/* -------- PROV_DMA_CTRL_CORE_JOINT_MODE : (PROV_DMA_CTRL Offset: 0x830) (R/W  8) If set, core works in joint mode -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CORE_JOINT_MODE:1;         /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CORE_JOINT_MODE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CORE_JOINT_MODE_OFFSET  0x830          /**<  \brief (PROV_DMA_CTRL_CORE_JOINT_MODE offset) If set, core works in joint mode */
#define PROV_DMA_CTRL_CORE_JOINT_MODE_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CORE_JOINT_MODE reset_value) If set, core works in joint mode */

#define PROV_DMA_CTRL_CORE_JOINT_MODE_CORE_JOINT_MODE_Pos 0  /**< \brief (PROV_DMA_CTRL_CORE_JOINT_MODE)                              */
#define PROV_DMA_CTRL_CORE_JOINT_MODE_CORE_JOINT_MODE (0x1ul << PROV_DMA_CTRL_CORE_JOINT_MODE_CORE_JOINT_MODE_Pos)  
#define PROV_DMA_CTRL_CORE_JOINT_MODE_MASK    0x01ul    /**< \brief (PROV_DMA_CTRL_CORE_JOINT_MODE) Register MASK */

/* -------- PROV_DMA_CTRL_CORE_PRIORITY : (PROV_DMA_CTRL Offset: 0x838) (R/W  16) Core Priority Channels -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t RD_PRIO_TOP_NUM:3;         /*!< bit:   0..2  Core Read Top Priority Channel Number    */
    uint16_t RD_PRIO_TOP:1;             /*!< bit:      3  Core Read Top Priority Enable            */
    uint16_t RD_PRIO_HIGH_NUM:3;        /*!< bit:   4..6  Core Read High Priority Channel Number   */
    uint16_t RD_PRIO_HIGH:1;            /*!< bit:      7  Core Read High Priority Enable           */
    uint16_t WR_PRIO_TOP_NUM:3;         /*!< bit:  8..10  Core Write Top Priority Channel Number   */
    uint16_t WR_PRIO_TOP:1;             /*!< bit:     11  Core Write Top Priority Enable           */
    uint16_t WR_PRIO_HIGH_NUM:3;        /*!< bit: 12..14  Core Write High Priority Channel Number  */
    uint16_t WR_PRIO_HIGH:1;            /*!< bit:     15  Core Write High Priority Enable          */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CORE_PRIORITY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CORE_PRIORITY_OFFSET    0x838          /**<  \brief (PROV_DMA_CTRL_CORE_PRIORITY offset) Core Priority Channels */
#define PROV_DMA_CTRL_CORE_PRIORITY_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CORE_PRIORITY reset_value) Core Priority Channels */

#define PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_NUM_Pos 0  /**< \brief (PROV_DMA_CTRL_CORE_PRIORITY) Core Read Top Priority Channel Number */
#define PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_NUM_Msk (0x7ul << PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_NUM_Pos)
#define PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_NUM(value) (PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_NUM_Msk & ((value) << PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_NUM_Pos))  
#define PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_Pos 3  /**< \brief (PROV_DMA_CTRL_CORE_PRIORITY) Core Read Top Priority Enable  */
#define PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP (0x1ul << PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_Pos)  
#define PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_NUM_Pos 4  /**< \brief (PROV_DMA_CTRL_CORE_PRIORITY) Core Read High Priority Channel Number */
#define PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_NUM_Msk (0x7ul << PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_NUM_Pos)
#define PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_NUM(value) (PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_NUM_Msk & ((value) << PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_NUM_Pos))  
#define PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_Pos 7  /**< \brief (PROV_DMA_CTRL_CORE_PRIORITY) Core Read High Priority Enable */
#define PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH (0x1ul << PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_Pos)  
#define PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_NUM_Pos 8  /**< \brief (PROV_DMA_CTRL_CORE_PRIORITY) Core Write Top Priority Channel Number */
#define PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_NUM_Msk (0x7ul << PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_NUM_Pos)
#define PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_NUM(value) (PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_NUM_Msk & ((value) << PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_NUM_Pos))  
#define PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_Pos 11  /**< \brief (PROV_DMA_CTRL_CORE_PRIORITY) Core Write Top Priority Enable */
#define PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP (0x1ul << PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_Pos)  
#define PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_NUM_Pos 12  /**< \brief (PROV_DMA_CTRL_CORE_PRIORITY) Core Write High Priority Channel Number */
#define PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_NUM_Msk (0x7ul << PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_NUM_Pos)
#define PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_NUM(value) (PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_NUM_Msk & ((value) << PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_NUM_Pos))  
#define PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_Pos 15  /**< \brief (PROV_DMA_CTRL_CORE_PRIORITY) Core Write High Priority Enable */
#define PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH (0x1ul << PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_Pos)  
#define PROV_DMA_CTRL_CORE_PRIORITY_MASK      0xFFFFul    /**< \brief (PROV_DMA_CTRL_CORE_PRIORITY) Register MASK */

/* -------- PROV_DMA_CTRL_CORE_CLKDIV : (PROV_DMA_CTRL Offset: 0x840) (R/W  8) Ratio between main clock and core clock -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CORE_CLKDIV:4;             /*!< bit:   0..3                                           */
    uint8_t  :4;                        /*!< bit:   4..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CORE_CLKDIV_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CORE_CLKDIV_OFFSET      0x840          /**<  \brief (PROV_DMA_CTRL_CORE_CLKDIV offset) Ratio between main clock and core clock */
#define PROV_DMA_CTRL_CORE_CLKDIV_RESETVALUE  0x01ul         /**<  \brief (PROV_DMA_CTRL_CORE_CLKDIV reset_value) Ratio between main clock and core clock */

#define PROV_DMA_CTRL_CORE_CLKDIV_CORE_CLKDIV_Pos 0  /**< \brief (PROV_DMA_CTRL_CORE_CLKDIV)                                  */
#define PROV_DMA_CTRL_CORE_CLKDIV_CORE_CLKDIV_Msk (0xFul << PROV_DMA_CTRL_CORE_CLKDIV_CORE_CLKDIV_Pos)
#define PROV_DMA_CTRL_CORE_CLKDIV_CORE_CLKDIV(value) (PROV_DMA_CTRL_CORE_CLKDIV_CORE_CLKDIV_Msk & ((value) << PROV_DMA_CTRL_CORE_CLKDIV_CORE_CLKDIV_Pos))  
#define PROV_DMA_CTRL_CORE_CLKDIV_MASK        0x0Ful    /**< \brief (PROV_DMA_CTRL_CORE_CLKDIV) Register MASK */

/* -------- PROV_DMA_CTRL_CORE_CH_START : (PROV_DMA_CTRL Offset: 0x848) (/W  8) Channel Start -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CH_0:1;                    /*!< bit:      0  Starts Channel 0                         */
    uint8_t  CH_1:1;                    /*!< bit:      1  Starts Channel 1                         */
    uint8_t  CH_2:1;                    /*!< bit:      2  Starts Channel 2                         */
    uint8_t  CH_3:1;                    /*!< bit:      3  Starts Channel 3                         */
    uint8_t  :4;                        /*!< bit:   4..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  struct {
    uint8_t  CH_:4;                     /*!< bit:   0..3  Starts Channel 3                         */
    uint8_t  :4;                        /*!< bit:   4..7 Reserved                                  */
  } vec;                                /*!< Structure used for vec  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CORE_CH_START_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CORE_CH_START_OFFSET    0x848          /**<  \brief (PROV_DMA_CTRL_CORE_CH_START offset) Channel Start */
#define PROV_DMA_CTRL_CORE_CH_START_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_CORE_CH_START reset_value) Channel Start */

#define PROV_DMA_CTRL_CORE_CH_START_CH_0_Pos  0  /**< \brief (PROV_DMA_CTRL_CORE_CH_START) Starts Channel 0               */
#define PROV_DMA_CTRL_CORE_CH_START_CH_0      (0x1ul << PROV_DMA_CTRL_CORE_CH_START_CH_0_Pos)  
#define PROV_DMA_CTRL_CORE_CH_START_CH_1_Pos  1  /**< \brief (PROV_DMA_CTRL_CORE_CH_START) Starts Channel 1               */
#define PROV_DMA_CTRL_CORE_CH_START_CH_1      (0x1ul << PROV_DMA_CTRL_CORE_CH_START_CH_1_Pos)  
#define PROV_DMA_CTRL_CORE_CH_START_CH_2_Pos  2  /**< \brief (PROV_DMA_CTRL_CORE_CH_START) Starts Channel 2               */
#define PROV_DMA_CTRL_CORE_CH_START_CH_2      (0x1ul << PROV_DMA_CTRL_CORE_CH_START_CH_2_Pos)  
#define PROV_DMA_CTRL_CORE_CH_START_CH_3_Pos  3  /**< \brief (PROV_DMA_CTRL_CORE_CH_START) Starts Channel 3               */
#define PROV_DMA_CTRL_CORE_CH_START_CH_3      (0x1ul << PROV_DMA_CTRL_CORE_CH_START_CH_3_Pos)  
#define PROV_DMA_CTRL_CORE_CH_START_CH__Pos   0  /**< \brief (PROV_DMA_CTRL_CORE_CH_START) Starts Channel 3 */
#define PROV_DMA_CTRL_CORE_CH_START_CH__Msk   (0xFul << PROV_DMA_CTRL_CORE_CH_START_CH__Pos)  
#define PROV_DMA_CTRL_CORE_CH_START_CH_(value) (PROV_DMA_CTRL_CORE_CH_START_CH__Msk & ((value) << PROV_DMA_CTRL_CORE_CH_START_CH__Pos))  
#define PROV_DMA_CTRL_CORE_CH_START_MASK      0x0Ful    /**< \brief (PROV_DMA_CTRL_CORE_CH_START) Register MASK */

/* -------- PROV_DMA_CTRL_PERIPH_RX_CTRL : (PROV_DMA_CTRL Offset: 0x850) (R/W  32) Direct control of peripheral RX request -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :1;                        /*!< bit:      0  Reserved                                 */
    uint32_t RX_REQ:31;                 /*!< bit:  1..31  Allows direct control of the peripheral RX request bus */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_PERIPH_RX_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_PERIPH_RX_CTRL_OFFSET   0x850          /**<  \brief (PROV_DMA_CTRL_PERIPH_RX_CTRL offset) Direct control of peripheral RX request */
#define PROV_DMA_CTRL_PERIPH_RX_CTRL_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_PERIPH_RX_CTRL reset_value) Direct control of peripheral RX request */

#define PROV_DMA_CTRL_PERIPH_RX_CTRL_RX_REQ_Pos 1  /**< \brief (PROV_DMA_CTRL_PERIPH_RX_CTRL) Allows direct control of the peripheral RX request bus */
#define PROV_DMA_CTRL_PERIPH_RX_CTRL_RX_REQ_Msk (0x7FFFFFFFul << PROV_DMA_CTRL_PERIPH_RX_CTRL_RX_REQ_Pos)
#define PROV_DMA_CTRL_PERIPH_RX_CTRL_RX_REQ(value) (PROV_DMA_CTRL_PERIPH_RX_CTRL_RX_REQ_Msk & ((value) << PROV_DMA_CTRL_PERIPH_RX_CTRL_RX_REQ_Pos))  
#define PROV_DMA_CTRL_PERIPH_RX_CTRL_MASK     0xFFFFFFFEul    /**< \brief (PROV_DMA_CTRL_PERIPH_RX_CTRL) Register MASK */

/* -------- PROV_DMA_CTRL_PERIPH_TX_CTRL : (PROV_DMA_CTRL Offset: 0x860) (R/W  32) Direct control of peripheral TX request -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :1;                        /*!< bit:      0  Reserved                                 */
    uint32_t TX_REQ:31;                 /*!< bit:  1..31  Allows direct control of the peripheral TX request bus */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_PERIPH_TX_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_PERIPH_TX_CTRL_OFFSET   0x860          /**<  \brief (PROV_DMA_CTRL_PERIPH_TX_CTRL offset) Direct control of peripheral TX request */
#define PROV_DMA_CTRL_PERIPH_TX_CTRL_RESETVALUE 0x00ul         /**<  \brief (PROV_DMA_CTRL_PERIPH_TX_CTRL reset_value) Direct control of peripheral TX request */

#define PROV_DMA_CTRL_PERIPH_TX_CTRL_TX_REQ_Pos 1  /**< \brief (PROV_DMA_CTRL_PERIPH_TX_CTRL) Allows direct control of the peripheral TX request bus */
#define PROV_DMA_CTRL_PERIPH_TX_CTRL_TX_REQ_Msk (0x7FFFFFFFul << PROV_DMA_CTRL_PERIPH_TX_CTRL_TX_REQ_Pos)
#define PROV_DMA_CTRL_PERIPH_TX_CTRL_TX_REQ(value) (PROV_DMA_CTRL_PERIPH_TX_CTRL_TX_REQ_Msk & ((value) << PROV_DMA_CTRL_PERIPH_TX_CTRL_TX_REQ_Pos))  
#define PROV_DMA_CTRL_PERIPH_TX_CTRL_MASK     0xFFFFFFFEul    /**< \brief (PROV_DMA_CTRL_PERIPH_TX_CTRL) Register MASK */

/* -------- PROV_DMA_CTRL_CORE_IDLE : (PROV_DMA_CTRL Offset: 0x8d0) (R/  8) Indicates all channels have stopped and transactions have completed -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CORE_IDLE:1;               /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CORE_IDLE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CORE_IDLE_OFFSET        0x8D0          /**<  \brief (PROV_DMA_CTRL_CORE_IDLE offset) Indicates all channels have stopped and transactions have completed */
#define PROV_DMA_CTRL_CORE_IDLE_RESETVALUE    0x00ul         /**<  \brief (PROV_DMA_CTRL_CORE_IDLE reset_value) Indicates all channels have stopped and transactions have completed */

#define PROV_DMA_CTRL_CORE_IDLE_CORE_IDLE_Pos 0  /**< \brief (PROV_DMA_CTRL_CORE_IDLE)                                    */
#define PROV_DMA_CTRL_CORE_IDLE_CORE_IDLE     (0x1ul << PROV_DMA_CTRL_CORE_IDLE_CORE_IDLE_Pos)  
#define PROV_DMA_CTRL_CORE_IDLE_MASK          0x01ul    /**< \brief (PROV_DMA_CTRL_CORE_IDLE) Register MASK */

/* -------- PROV_DMA_CTRL_USER_DEF_STATUS : (PROV_DMA_CTRL Offset: 0x8e0) (R/  32) User Defined Configurations -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t INT_NUM:4;                 /*!< bit:   0..3  Number of bits in interrupt bus          */
    uint32_t :1;                        /*!< bit:      4  Reserved                                 */
    uint32_t DUAL_CORE:1;               /*!< bit:      5  If set the design has two cores          */
    uint32_t IC:1;                      /*!< bit:      6  If set an AHB matrix is used             */
    uint32_t IC_DUAL_PORT:1;            /*!< bit:      7  If set AHB matrix has two output ports   */
    uint32_t CLKGATE:1;                 /*!< bit:      8  If set design contains functional clock gates */
    uint32_t PORT0_MUX:1;               /*!< bit:      9  If set AHB port 0 is using an AHB mux    */
    uint32_t PORT1_MUX:1;               /*!< bit:     10  If set AHB port 1 is using an AHB mux    */
    uint32_t :20;                       /*!< bit: 11..30  Reserved                                 */
    uint32_t PROJ:1;                    /*!< bit:     31  User Defined Project                     */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_USER_DEF_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_USER_DEF_STATUS_OFFSET  0x8E0          /**<  \brief (PROV_DMA_CTRL_USER_DEF_STATUS offset) User Defined Configurations */
#define PROV_DMA_CTRL_USER_DEF_STATUS_RESETVALUE 0x80000001ul   /**<  \brief (PROV_DMA_CTRL_USER_DEF_STATUS reset_value) User Defined Configurations */

#define PROV_DMA_CTRL_USER_DEF_STATUS_INT_NUM_Pos 0  /**< \brief (PROV_DMA_CTRL_USER_DEF_STATUS) Number of bits in interrupt bus */
#define PROV_DMA_CTRL_USER_DEF_STATUS_INT_NUM_Msk (0xFul << PROV_DMA_CTRL_USER_DEF_STATUS_INT_NUM_Pos)
#define PROV_DMA_CTRL_USER_DEF_STATUS_INT_NUM(value) (PROV_DMA_CTRL_USER_DEF_STATUS_INT_NUM_Msk & ((value) << PROV_DMA_CTRL_USER_DEF_STATUS_INT_NUM_Pos))  
#define PROV_DMA_CTRL_USER_DEF_STATUS_DUAL_CORE_Pos 5  /**< \brief (PROV_DMA_CTRL_USER_DEF_STATUS) If set the design has two cores */
#define PROV_DMA_CTRL_USER_DEF_STATUS_DUAL_CORE (0x1ul << PROV_DMA_CTRL_USER_DEF_STATUS_DUAL_CORE_Pos)  
#define PROV_DMA_CTRL_USER_DEF_STATUS_IC_Pos  6  /**< \brief (PROV_DMA_CTRL_USER_DEF_STATUS) If set an AHB matrix is used */
#define PROV_DMA_CTRL_USER_DEF_STATUS_IC      (0x1ul << PROV_DMA_CTRL_USER_DEF_STATUS_IC_Pos)  
#define PROV_DMA_CTRL_USER_DEF_STATUS_IC_DUAL_PORT_Pos 7  /**< \brief (PROV_DMA_CTRL_USER_DEF_STATUS) If set AHB matrix has two output ports */
#define PROV_DMA_CTRL_USER_DEF_STATUS_IC_DUAL_PORT (0x1ul << PROV_DMA_CTRL_USER_DEF_STATUS_IC_DUAL_PORT_Pos)  
#define PROV_DMA_CTRL_USER_DEF_STATUS_CLKGATE_Pos 8  /**< \brief (PROV_DMA_CTRL_USER_DEF_STATUS) If set design contains functional clock gates */
#define PROV_DMA_CTRL_USER_DEF_STATUS_CLKGATE (0x1ul << PROV_DMA_CTRL_USER_DEF_STATUS_CLKGATE_Pos)  
#define PROV_DMA_CTRL_USER_DEF_STATUS_PORT0_MUX_Pos 9  /**< \brief (PROV_DMA_CTRL_USER_DEF_STATUS) If set AHB port 0 is using an AHB mux */
#define PROV_DMA_CTRL_USER_DEF_STATUS_PORT0_MUX (0x1ul << PROV_DMA_CTRL_USER_DEF_STATUS_PORT0_MUX_Pos)  
#define PROV_DMA_CTRL_USER_DEF_STATUS_PORT1_MUX_Pos 10  /**< \brief (PROV_DMA_CTRL_USER_DEF_STATUS) If set AHB port 1 is using an AHB mux */
#define PROV_DMA_CTRL_USER_DEF_STATUS_PORT1_MUX (0x1ul << PROV_DMA_CTRL_USER_DEF_STATUS_PORT1_MUX_Pos)  
#define PROV_DMA_CTRL_USER_DEF_STATUS_PROJ_Pos 31  /**< \brief (PROV_DMA_CTRL_USER_DEF_STATUS) User Defined Project         */
#define PROV_DMA_CTRL_USER_DEF_STATUS_PROJ    (0x1ul << PROV_DMA_CTRL_USER_DEF_STATUS_PROJ_Pos)  
#define PROV_DMA_CTRL_USER_DEF_STATUS_MASK    0x800007EFul    /**< \brief (PROV_DMA_CTRL_USER_DEF_STATUS) Register MASK */

/* -------- PROV_DMA_CTRL_CORE_DEF_STATUS0 : (PROV_DMA_CTRL Offset: 0x8f0) (R/  32) User Defined Core Configurations 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CH_NUM:4;                  /*!< bit:   0..3  Number of channels (reads 1, should read 4) */
    uint32_t FIFO_SIZE:4;               /*!< bit:   4..7  Log2 of FIFO size per channel            */
    uint32_t WCMD_DEPTH:4;              /*!< bit:  8..11  Log2 of maximum number of pending write commands */
    uint32_t RCMD_DEPTH:4;              /*!< bit: 12..15  Log2 of maximum number of pending read commands */
    uint32_t ADDR_BITS:6;               /*!< bit: 16..21  Number of bits in address buses          */
    uint32_t AHB_BUS_32:1;              /*!< bit:     22  If set AHB bus is 32 bit otherwise 64 bit */
    uint32_t :1;                        /*!< bit:     23  Reserved                                 */
    uint32_t BUFF_BITS:5;               /*!< bit: 24..28  Number of bits in BUFFER_SIZE            */
    uint32_t :3;                        /*!< bit: 29..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CORE_DEF_STATUS0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CORE_DEF_STATUS0_OFFSET 0x8F0          /**<  \brief (PROV_DMA_CTRL_CORE_DEF_STATUS0 offset) User Defined Core Configurations 0 */
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_RESETVALUE 0xA601151ul    /**<  \brief (PROV_DMA_CTRL_CORE_DEF_STATUS0 reset_value) User Defined Core Configurations 0 */

#define PROV_DMA_CTRL_CORE_DEF_STATUS0_CH_NUM_Pos 0  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS0) Number of channels (reads 1, should read 4) */
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_CH_NUM_Msk (0xFul << PROV_DMA_CTRL_CORE_DEF_STATUS0_CH_NUM_Pos)
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_CH_NUM(value) (PROV_DMA_CTRL_CORE_DEF_STATUS0_CH_NUM_Msk & ((value) << PROV_DMA_CTRL_CORE_DEF_STATUS0_CH_NUM_Pos))  
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_FIFO_SIZE_Pos 4  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS0) Log2 of FIFO size per channel */
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_FIFO_SIZE_Msk (0xFul << PROV_DMA_CTRL_CORE_DEF_STATUS0_FIFO_SIZE_Pos)
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_FIFO_SIZE(value) (PROV_DMA_CTRL_CORE_DEF_STATUS0_FIFO_SIZE_Msk & ((value) << PROV_DMA_CTRL_CORE_DEF_STATUS0_FIFO_SIZE_Pos))  
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_WCMD_DEPTH_Pos 8  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS0) Log2 of maximum number of pending write commands */
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_WCMD_DEPTH_Msk (0xFul << PROV_DMA_CTRL_CORE_DEF_STATUS0_WCMD_DEPTH_Pos)
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_WCMD_DEPTH(value) (PROV_DMA_CTRL_CORE_DEF_STATUS0_WCMD_DEPTH_Msk & ((value) << PROV_DMA_CTRL_CORE_DEF_STATUS0_WCMD_DEPTH_Pos))  
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_RCMD_DEPTH_Pos 12  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS0) Log2 of maximum number of pending read commands */
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_RCMD_DEPTH_Msk (0xFul << PROV_DMA_CTRL_CORE_DEF_STATUS0_RCMD_DEPTH_Pos)
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_RCMD_DEPTH(value) (PROV_DMA_CTRL_CORE_DEF_STATUS0_RCMD_DEPTH_Msk & ((value) << PROV_DMA_CTRL_CORE_DEF_STATUS0_RCMD_DEPTH_Pos))  
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_ADDR_BITS_Pos 16  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS0) Number of bits in address buses */
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_ADDR_BITS_Msk (0x3Ful << PROV_DMA_CTRL_CORE_DEF_STATUS0_ADDR_BITS_Pos)
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_ADDR_BITS(value) (PROV_DMA_CTRL_CORE_DEF_STATUS0_ADDR_BITS_Msk & ((value) << PROV_DMA_CTRL_CORE_DEF_STATUS0_ADDR_BITS_Pos))  
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_AHB_BUS_32_Pos 22  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS0) If set AHB bus is 32 bit otherwise 64 bit */
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_AHB_BUS_32 (0x1ul << PROV_DMA_CTRL_CORE_DEF_STATUS0_AHB_BUS_32_Pos)  
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_BUFF_BITS_Pos 24  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS0) Number of bits in BUFFER_SIZE */
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_BUFF_BITS_Msk (0x1Ful << PROV_DMA_CTRL_CORE_DEF_STATUS0_BUFF_BITS_Pos)
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_BUFF_BITS(value) (PROV_DMA_CTRL_CORE_DEF_STATUS0_BUFF_BITS_Msk & ((value) << PROV_DMA_CTRL_CORE_DEF_STATUS0_BUFF_BITS_Pos))  
#define PROV_DMA_CTRL_CORE_DEF_STATUS0_MASK   0x1F7FFFFFul    /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS0) Register MASK */

/* -------- PROV_DMA_CTRL_CORE_DEF_STATUS1 : (PROV_DMA_CTRL Offset: 0x8f4) (R/  16) User Defined Core Configurations 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t WDT:1;                     /*!< bit:      0  Set if core has watchdog timer           */
    uint16_t AHB_TIMEOUT:1;             /*!< bit:      1  Set if core supports timeouts on AHB read and write buses */
    uint16_t TOKENS:1;                  /*!< bit:      2  Set if core has tokens support           */
    uint16_t PRIO:1;                    /*!< bit:      3  Set if core has priority modes support   */
    uint16_t OUTS:1;                    /*!< bit:      4  Set if core supports outstanding mode    */
    uint16_t WAIT:1;                    /*!< bit:      5  Set if core supports scheduled channels  */
    uint16_t BLOCK:1;                   /*!< bit:      6  Set if core supports block transfer      */
    uint16_t JOINT:1;                   /*!< bit:      7  Set if core supports joint mode          */
    uint16_t INDEPENDENT:1;             /*!< bit:      8  Set if core supports independent mode    */
    uint16_t PERIPH:1;                  /*!< bit:      9  Set if core supports peripherals         */
    uint16_t LISTS:1;                   /*!< bit:     10  Set if core supports command lists       */
    uint16_t END:1;                     /*!< bit:     11  Set if core supports endianness swapping */
    uint16_t CLKDIV:1;                  /*!< bit:     12  Set if core supports clock division ratios */
    uint16_t :3;                        /*!< bit: 13..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} PROV_DMA_CTRL_CORE_DEF_STATUS1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PROV_DMA_CTRL_CORE_DEF_STATUS1_OFFSET 0x8F4          /**<  \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1 offset) User Defined Core Configurations 1 */
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_RESETVALUE 0xF87ul        /**<  \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1 reset_value) User Defined Core Configurations 1 */

#define PROV_DMA_CTRL_CORE_DEF_STATUS1_WDT_Pos 0  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1) Set if core has watchdog timer */
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_WDT    (0x1ul << PROV_DMA_CTRL_CORE_DEF_STATUS1_WDT_Pos)  
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_AHB_TIMEOUT_Pos 1  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1) Set if core supports timeouts on AHB read and write buses */
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_AHB_TIMEOUT (0x1ul << PROV_DMA_CTRL_CORE_DEF_STATUS1_AHB_TIMEOUT_Pos)  
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_TOKENS_Pos 2  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1) Set if core has tokens support */
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_TOKENS (0x1ul << PROV_DMA_CTRL_CORE_DEF_STATUS1_TOKENS_Pos)  
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_PRIO_Pos 3  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1) Set if core has priority modes support */
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_PRIO   (0x1ul << PROV_DMA_CTRL_CORE_DEF_STATUS1_PRIO_Pos)  
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_OUTS_Pos 4  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1) Set if core supports outstanding mode */
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_OUTS   (0x1ul << PROV_DMA_CTRL_CORE_DEF_STATUS1_OUTS_Pos)  
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_WAIT_Pos 5  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1) Set if core supports scheduled channels */
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_WAIT   (0x1ul << PROV_DMA_CTRL_CORE_DEF_STATUS1_WAIT_Pos)  
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_BLOCK_Pos 6  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1) Set if core supports block transfer */
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_BLOCK  (0x1ul << PROV_DMA_CTRL_CORE_DEF_STATUS1_BLOCK_Pos)  
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_JOINT_Pos 7  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1) Set if core supports joint mode */
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_JOINT  (0x1ul << PROV_DMA_CTRL_CORE_DEF_STATUS1_JOINT_Pos)  
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_INDEPENDENT_Pos 8  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1) Set if core supports independent mode */
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_INDEPENDENT (0x1ul << PROV_DMA_CTRL_CORE_DEF_STATUS1_INDEPENDENT_Pos)  
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_PERIPH_Pos 9  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1) Set if core supports peripherals */
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_PERIPH (0x1ul << PROV_DMA_CTRL_CORE_DEF_STATUS1_PERIPH_Pos)  
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_LISTS_Pos 10  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1) Set if core supports command lists */
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_LISTS  (0x1ul << PROV_DMA_CTRL_CORE_DEF_STATUS1_LISTS_Pos)  
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_END_Pos 11  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1) Set if core supports endianness swapping */
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_END    (0x1ul << PROV_DMA_CTRL_CORE_DEF_STATUS1_END_Pos)  
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_CLKDIV_Pos 12  /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1) Set if core supports clock division ratios */
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_CLKDIV (0x1ul << PROV_DMA_CTRL_CORE_DEF_STATUS1_CLKDIV_Pos)  
#define PROV_DMA_CTRL_CORE_DEF_STATUS1_MASK   0x1FFFul    /**< \brief (PROV_DMA_CTRL_CORE_DEF_STATUS1) Register MASK */

/** \brief PROV_DMA_CTRL hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* 4 Channel DMA Controller */
  __IO PROV_DMA_CTRL_CH0_CMD_REG0_Type CH0_CMD_REG0;   /**< \brief Offset: 0x00 (R/W  32) Channel 0 First Line Channel Command */
  __IO PROV_DMA_CTRL_CH0_CMD_REG1_Type CH0_CMD_REG1;   /**< \brief Offset: 0x04 (R/W  32) Channel 0 Second Line Channel Command */
  __IO PROV_DMA_CTRL_CH0_CMD_REG2_Type CH0_CMD_REG2;   /**< \brief Offset: 0x08 (R/W  16) Channel 0 Third Line Channel Command */
       RoReg8                         Reserved1[0x2];
  __IO PROV_DMA_CTRL_CH0_CMD_REG3_Type CH0_CMD_REG3;   /**< \brief Offset: 0x0C (R/W  32) Channel 0 Fourth Line Channel Command */
  __IO PROV_DMA_CTRL_CH0_STATIC_REG0_Type CH0_STATIC_REG0; /**< \brief Offset: 0x10 (R/W  32) Channel 0 Static Configuration Read */
  __IO PROV_DMA_CTRL_CH0_STATIC_REG1_Type CH0_STATIC_REG1; /**< \brief Offset: 0x14 (R/W  32) Channel 0 Static Configuration Write */
  __IO PROV_DMA_CTRL_CH0_STATIC_REG2_Type CH0_STATIC_REG2; /**< \brief Offset: 0x18 (R/W  32) Channel 0 Block Mode */
       RoReg8                         Reserved2[0x4];
  __IO PROV_DMA_CTRL_CH0_STATIC_REG4_Type CH0_STATIC_REG4; /**< \brief Offset: 0x20 (R/W  32) Channel 0 Static Configuration Peripheral */
       RoReg8                         Reserved3[0x8];
  __I  PROV_DMA_CTRL_CH0_RESRICT_REG_Type CH0_RESRICT_REG; /**< \brief Offset: 0x2C (R/   16) Channel 0 Restrictions Status Register */
       RoReg8                         Reserved4[0xA];
  __I  PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_Type CH0_FIFO_FULLNESS_REG; /**< \brief Offset: 0x38 (R/   32) Channel 0 FIFO Fullness Status Register */
       RoReg8                         Reserved5[0x4];
  __IO PROV_DMA_CTRL_CH0_CH_ENABLE_REG_Type CH0_CH_ENABLE_REG; /**< \brief Offset: 0x40 (R/W   8) Channel 0 Channel Enable Register */
       RoReg8                         Reserved6[0x3];
  __O  PROV_DMA_CTRL_CH0_CH_START_REG_Type CH0_CH_START_REG; /**< \brief Offset: 0x44 ( /W   8) Channel 0 Channel Start Register */
       RoReg8                         Reserved7[0x3];
  __I  PROV_DMA_CTRL_CH0_CH_ACTIVE_REG_Type CH0_CH_ACTIVE_REG; /**< \brief Offset: 0x48 (R/    8) Channel 0 Channel Active Status Register */
       RoReg8                         Reserved8[0x7];
  __I  PROV_DMA_CTRL_CH0_COUNT_REG_Type CH0_COUNT_REG;  /**< \brief Offset: 0x50 (R/   32) Channel 0 Buffer Counter Status Register */
       RoReg8                         Reserved9[0x4C];
  __IO PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_Type CH0_INT_RAWSTAT_REG; /**< \brief Offset: 0xA0 (R/W   8) Channel 0 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
       RoReg8                         Reserved10[0x3];
  __IO PROV_DMA_CTRL_CH0_INT_CLEAR_REG_Type CH0_INT_CLEAR_REG; /**< \brief Offset: 0xA4 (R/W   8) Channel 0 Interrupt Clear (Write 1 to clear) */
       RoReg8                         Reserved11[0x3];
  __IO PROV_DMA_CTRL_CH0_INT_ENABLE_REG_Type CH0_INT_ENABLE_REG; /**< \brief Offset: 0xA8 (R/W   8) Channel 0 Interrupt Enable */
       RoReg8                         Reserved12[0x3];
  __IO PROV_DMA_CTRL_CH0_INT_STATUS_REG_Type CH0_INT_STATUS_REG; /**< \brief Offset: 0xAC (R/W   8) Channel 0 Interrupt Status */
       RoReg8                         Reserved13[0x53];
  __IO PROV_DMA_CTRL_CH1_CMD_REG0_Type CH1_CMD_REG0;   /**< \brief Offset: 0x100 (R/W  32) Channel 1 First Line Channel Command */
  __IO PROV_DMA_CTRL_CH1_CMD_REG1_Type CH1_CMD_REG1;   /**< \brief Offset: 0x104 (R/W  32) Channel 1 Second Line Channel Command */
  __IO PROV_DMA_CTRL_CH1_CMD_REG2_Type CH1_CMD_REG2;   /**< \brief Offset: 0x108 (R/W  16) Channel 1 Third Line Channel Command */
       RoReg8                         Reserved14[0x2];
  __IO PROV_DMA_CTRL_CH1_CMD_REG3_Type CH1_CMD_REG3;   /**< \brief Offset: 0x10C (R/W  32) Channel 1 Fourth Line Channel Command */
  __IO PROV_DMA_CTRL_CH1_STATIC_REG0_Type CH1_STATIC_REG0; /**< \brief Offset: 0x110 (R/W  32) Channel 1 Static Configuration Read */
  __IO PROV_DMA_CTRL_CH1_STATIC_REG1_Type CH1_STATIC_REG1; /**< \brief Offset: 0x114 (R/W  32) Channel 1 Static Configuration Write */
  __IO PROV_DMA_CTRL_CH1_STATIC_REG2_Type CH1_STATIC_REG2; /**< \brief Offset: 0x118 (R/W  32) Channel 1 Block Mode */
       RoReg8                         Reserved15[0x4];
  __IO PROV_DMA_CTRL_CH1_STATIC_REG4_Type CH1_STATIC_REG4; /**< \brief Offset: 0x120 (R/W  32) Channel 1 Static Configuration Peripheral */
       RoReg8                         Reserved16[0x8];
  __I  PROV_DMA_CTRL_CH1_RESRICT_REG_Type CH1_RESRICT_REG; /**< \brief Offset: 0x12C (R/   16) Channel 1 Restrictions Status Register */
       RoReg8                         Reserved17[0xA];
  __I  PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_Type CH1_FIFO_FULLNESS_REG; /**< \brief Offset: 0x138 (R/   32) Channel 1 FIFO Fullness Status Register */
       RoReg8                         Reserved18[0x4];
  __IO PROV_DMA_CTRL_CH1_CH_ENABLE_REG_Type CH1_CH_ENABLE_REG; /**< \brief Offset: 0x140 (R/W   8) Channel 1 Channel Enable Register */
       RoReg8                         Reserved19[0x3];
  __O  PROV_DMA_CTRL_CH1_CH_START_REG_Type CH1_CH_START_REG; /**< \brief Offset: 0x144 ( /W   8) Channel 1 Channel Start Register */
       RoReg8                         Reserved20[0x3];
  __I  PROV_DMA_CTRL_CH1_CH_ACTIVE_REG_Type CH1_CH_ACTIVE_REG; /**< \brief Offset: 0x148 (R/    8) Channel 1 Channel Active Status Register */
       RoReg8                         Reserved21[0x7];
  __I  PROV_DMA_CTRL_CH1_COUNT_REG_Type CH1_COUNT_REG;  /**< \brief Offset: 0x150 (R/   32) Channel 1 Buffer Counter Status Register */
       RoReg8                         Reserved22[0x4C];
  __IO PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_Type CH1_INT_RAWSTAT_REG; /**< \brief Offset: 0x1A0 (R/W   8) Channel 1 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
       RoReg8                         Reserved23[0x3];
  __IO PROV_DMA_CTRL_CH1_INT_CLEAR_REG_Type CH1_INT_CLEAR_REG; /**< \brief Offset: 0x1A4 (R/W   8) Channel 1 Interrupt Clear (Write 1 to clear) */
       RoReg8                         Reserved24[0x3];
  __IO PROV_DMA_CTRL_CH1_INT_ENABLE_REG_Type CH1_INT_ENABLE_REG; /**< \brief Offset: 0x1A8 (R/W   8) Channel 1 Interrupt Enable */
       RoReg8                         Reserved25[0x3];
  __IO PROV_DMA_CTRL_CH1_INT_STATUS_REG_Type CH1_INT_STATUS_REG; /**< \brief Offset: 0x1AC (R/W   8) Channel 1 Interrupt Status */
       RoReg8                         Reserved26[0x53];
  __IO PROV_DMA_CTRL_CH2_CMD_REG0_Type CH2_CMD_REG0;   /**< \brief Offset: 0x200 (R/W  32) Channel 2 First Line Channel Command */
  __IO PROV_DMA_CTRL_CH2_CMD_REG1_Type CH2_CMD_REG1;   /**< \brief Offset: 0x204 (R/W  32) Channel 2 Second Line Channel Command */
  __IO PROV_DMA_CTRL_CH2_CMD_REG2_Type CH2_CMD_REG2;   /**< \brief Offset: 0x208 (R/W  16) Channel 2 Third Line Channel Command */
       RoReg8                         Reserved27[0x2];
  __IO PROV_DMA_CTRL_CH2_CMD_REG3_Type CH2_CMD_REG3;   /**< \brief Offset: 0x20C (R/W  32) Channel 2 Fourth Line Channel Command */
  __IO PROV_DMA_CTRL_CH2_STATIC_REG0_Type CH2_STATIC_REG0; /**< \brief Offset: 0x210 (R/W  32) Channel 2 Static Configuration Read */
  __IO PROV_DMA_CTRL_CH2_STATIC_REG1_Type CH2_STATIC_REG1; /**< \brief Offset: 0x214 (R/W  32) Channel 2 Static Configuration Write */
  __IO PROV_DMA_CTRL_CH2_STATIC_REG2_Type CH2_STATIC_REG2; /**< \brief Offset: 0x218 (R/W  32) Channel 2 Block Mode */
       RoReg8                         Reserved28[0x4];
  __IO PROV_DMA_CTRL_CH2_STATIC_REG4_Type CH2_STATIC_REG4; /**< \brief Offset: 0x220 (R/W  32) Channel 2 Static Configuration Peripheral */
       RoReg8                         Reserved29[0x8];
  __I  PROV_DMA_CTRL_CH2_RESRICT_REG_Type CH2_RESRICT_REG; /**< \brief Offset: 0x22C (R/   16) Channel 2 Restrictions Status Register */
       RoReg8                         Reserved30[0xA];
  __I  PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_Type CH2_FIFO_FULLNESS_REG; /**< \brief Offset: 0x238 (R/   32) Channel 2 FIFO Fullness Status Register */
       RoReg8                         Reserved31[0x4];
  __IO PROV_DMA_CTRL_CH2_CH_ENABLE_REG_Type CH2_CH_ENABLE_REG; /**< \brief Offset: 0x240 (R/W   8) Channel 2 Channel Enable Register */
       RoReg8                         Reserved32[0x3];
  __O  PROV_DMA_CTRL_CH2_CH_START_REG_Type CH2_CH_START_REG; /**< \brief Offset: 0x244 ( /W   8) Channel 2 Channel Start Register */
       RoReg8                         Reserved33[0x3];
  __I  PROV_DMA_CTRL_CH2_CH_ACTIVE_REG_Type CH2_CH_ACTIVE_REG; /**< \brief Offset: 0x248 (R/    8) Channel 2 Channel Active Status Register */
       RoReg8                         Reserved34[0x7];
  __I  PROV_DMA_CTRL_CH2_COUNT_REG_Type CH2_COUNT_REG;  /**< \brief Offset: 0x250 (R/   32) Channel 2 Buffer Counter Status Register */
       RoReg8                         Reserved35[0x4C];
  __IO PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_Type CH2_INT_RAWSTAT_REG; /**< \brief Offset: 0x2A0 (R/W   8) Channel 2 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
       RoReg8                         Reserved36[0x3];
  __IO PROV_DMA_CTRL_CH2_INT_CLEAR_REG_Type CH2_INT_CLEAR_REG; /**< \brief Offset: 0x2A4 (R/W   8) Channel 2 Interrupt Clear (Write 1 to clear) */
       RoReg8                         Reserved37[0x3];
  __IO PROV_DMA_CTRL_CH2_INT_ENABLE_REG_Type CH2_INT_ENABLE_REG; /**< \brief Offset: 0x2A8 (R/W   8) Channel 2 Interrupt Enable */
       RoReg8                         Reserved38[0x3];
  __IO PROV_DMA_CTRL_CH2_INT_STATUS_REG_Type CH2_INT_STATUS_REG; /**< \brief Offset: 0x2AC (R/W   8) Channel 2 Interrupt Status */
       RoReg8                         Reserved39[0x53];
  __IO PROV_DMA_CTRL_CH3_CMD_REG0_Type CH3_CMD_REG0;   /**< \brief Offset: 0x300 (R/W  32) Channel 3 First Line Channel Command */
  __IO PROV_DMA_CTRL_CH3_CMD_REG1_Type CH3_CMD_REG1;   /**< \brief Offset: 0x304 (R/W  32) Channel 3 Second Line Channel Command */
  __IO PROV_DMA_CTRL_CH3_CMD_REG2_Type CH3_CMD_REG2;   /**< \brief Offset: 0x308 (R/W  16) Channel 3 Third Line Channel Command */
       RoReg8                         Reserved40[0x2];
  __IO PROV_DMA_CTRL_CH3_CMD_REG3_Type CH3_CMD_REG3;   /**< \brief Offset: 0x30C (R/W  32) Channel 3 Fourth Line Channel Command */
  __IO PROV_DMA_CTRL_CH3_STATIC_REG0_Type CH3_STATIC_REG0; /**< \brief Offset: 0x310 (R/W  32) Channel 3 Static Configuration Read */
  __IO PROV_DMA_CTRL_CH3_STATIC_REG1_Type CH3_STATIC_REG1; /**< \brief Offset: 0x314 (R/W  32) Channel 3 Static Configuration Write */
  __IO PROV_DMA_CTRL_CH3_STATIC_REG2_Type CH3_STATIC_REG2; /**< \brief Offset: 0x318 (R/W  32) Channel 3 Block Mode */
       RoReg8                         Reserved41[0x4];
  __IO PROV_DMA_CTRL_CH3_STATIC_REG4_Type CH3_STATIC_REG4; /**< \brief Offset: 0x320 (R/W  32) Channel 3 Static Configuration Peripheral */
       RoReg8                         Reserved42[0x8];
  __I  PROV_DMA_CTRL_CH3_RESRICT_REG_Type CH3_RESRICT_REG; /**< \brief Offset: 0x32C (R/   16) Channel 3 Restrictions Status Register */
       RoReg8                         Reserved43[0xA];
  __I  PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_Type CH3_FIFO_FULLNESS_REG; /**< \brief Offset: 0x338 (R/   32) Channel 3 FIFO Fullness Status Register */
       RoReg8                         Reserved44[0x4];
  __IO PROV_DMA_CTRL_CH3_CH_ENABLE_REG_Type CH3_CH_ENABLE_REG; /**< \brief Offset: 0x340 (R/W   8) Channel 3 Channel Enable Register */
       RoReg8                         Reserved45[0x3];
  __O  PROV_DMA_CTRL_CH3_CH_START_REG_Type CH3_CH_START_REG; /**< \brief Offset: 0x344 ( /W   8) Channel 3 Channel Start Register */
       RoReg8                         Reserved46[0x3];
  __I  PROV_DMA_CTRL_CH3_CH_ACTIVE_REG_Type CH3_CH_ACTIVE_REG; /**< \brief Offset: 0x348 (R/    8) Channel 3 Channel Active Status Register */
       RoReg8                         Reserved47[0x7];
  __I  PROV_DMA_CTRL_CH3_COUNT_REG_Type CH3_COUNT_REG;  /**< \brief Offset: 0x350 (R/   32) Channel 3 Buffer Counter Status Register */
       RoReg8                         Reserved48[0x4C];
  __IO PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_Type CH3_INT_RAWSTAT_REG; /**< \brief Offset: 0x3A0 (R/W   8) Channel 3 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
       RoReg8                         Reserved49[0x3];
  __IO PROV_DMA_CTRL_CH3_INT_CLEAR_REG_Type CH3_INT_CLEAR_REG; /**< \brief Offset: 0x3A4 (R/W   8) Channel 3 Interrupt Clear (Write 1 to clear) */
       RoReg8                         Reserved50[0x3];
  __IO PROV_DMA_CTRL_CH3_INT_ENABLE_REG_Type CH3_INT_ENABLE_REG; /**< \brief Offset: 0x3A8 (R/W   8) Channel 3 Interrupt Enable */
       RoReg8                         Reserved51[0x3];
  __IO PROV_DMA_CTRL_CH3_INT_STATUS_REG_Type CH3_INT_STATUS_REG; /**< \brief Offset: 0x3AC (R/W   8) Channel 3 Interrupt Status */
       RoReg8                         Reserved52[0x453];
  __I  PROV_DMA_CTRL_CORE_INT_STATUS_Type CORE_INT_STATUS; /**< \brief Offset: 0x800 (R/    8) Indicates which channels caused interrupt */
       RoReg8                         Reserved53[0x2F];
  __IO PROV_DMA_CTRL_CORE_JOINT_MODE_Type CORE_JOINT_MODE; /**< \brief Offset: 0x830 (R/W   8) If set, core works in joint mode */
       RoReg8                         Reserved54[0x7];
  __IO PROV_DMA_CTRL_CORE_PRIORITY_Type CORE_PRIORITY;  /**< \brief Offset: 0x838 (R/W  16) Core Priority Channels */
       RoReg8                         Reserved55[0x6];
  __IO PROV_DMA_CTRL_CORE_CLKDIV_Type CORE_CLKDIV;    /**< \brief Offset: 0x840 (R/W   8) Ratio between main clock and core clock */
       RoReg8                         Reserved56[0x7];
  __O  PROV_DMA_CTRL_CORE_CH_START_Type CORE_CH_START;  /**< \brief Offset: 0x848 ( /W   8) Channel Start */
       RoReg8                         Reserved57[0x7];
  __IO PROV_DMA_CTRL_PERIPH_RX_CTRL_Type PERIPH_RX_CTRL; /**< \brief Offset: 0x850 (R/W  32) Direct control of peripheral RX request */
       RoReg8                         Reserved58[0xC];
  __IO PROV_DMA_CTRL_PERIPH_TX_CTRL_Type PERIPH_TX_CTRL; /**< \brief Offset: 0x860 (R/W  32) Direct control of peripheral TX request */
       RoReg8                         Reserved59[0x6C];
  __I  PROV_DMA_CTRL_CORE_IDLE_Type   CORE_IDLE;      /**< \brief Offset: 0x8D0 (R/    8) Indicates all channels have stopped and transactions have completed */
       RoReg8                         Reserved60[0xF];
  __I  PROV_DMA_CTRL_USER_DEF_STATUS_Type USER_DEF_STATUS; /**< \brief Offset: 0x8E0 (R/   32) User Defined Configurations */
       RoReg8                         Reserved61[0xC];
  __I  PROV_DMA_CTRL_CORE_DEF_STATUS0_Type CORE_DEF_STATUS0; /**< \brief Offset: 0x8F0 (R/   32) User Defined Core Configurations 0 */
  __I  PROV_DMA_CTRL_CORE_DEF_STATUS1_Type CORE_DEF_STATUS1; /**< \brief Offset: 0x8F4 (R/   16) User Defined Core Configurations 1 */
} ProvDmaCtrl;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_PROV_DMA_CTRL_COMPONENT_ */
