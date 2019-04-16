/**
 * \file
 *
 * \brief Component description for TIMER
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

#ifndef _SAMB11_TIMER_COMPONENT_
#define _SAMB11_TIMER_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR TIMER */
/* ========================================================================== */
/** \addtogroup SAMB11_TIMER ARM General Purpose Timer */
/*@{*/

#define TIMER_T11234
#define REV_TIMER                        0x100

/* -------- TIMER_CTRL : (TIMER Offset: 0x00) (R/W  8) Timer Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ENABLE:1;                  /*!< bit:      0  Enable Timer Operation                   */
    uint8_t  EXTERNAL_INPUT_ENABLE:1;   /*!< bit:      1  Select external input as enable          */
    uint8_t  EXTERNAL_INPUT_CLOCK:1;    /*!< bit:      2  Select external input as clock           */
    uint8_t  INTERRUPT_ENABLE:1;        /*!< bit:      3  Enable Timer Interrupt                   */
    uint8_t  :4;                        /*!< bit:   4..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} TIMER_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_CTRL_OFFSET                     0x00           /**<  \brief (TIMER_CTRL offset) Timer Control */
#define TIMER_CTRL_RESETVALUE                 0x00ul         /**<  \brief (TIMER_CTRL reset_value) Timer Control */

#define TIMER_CTRL_ENABLE_Pos                 0  /**< \brief (TIMER_CTRL) Enable Timer Operation                          */
#define TIMER_CTRL_ENABLE                     (0x1ul << TIMER_CTRL_ENABLE_Pos)  
#define TIMER_CTRL_EXTERNAL_INPUT_ENABLE_Pos  1  /**< \brief (TIMER_CTRL) Select external input as enable                 */
#define TIMER_CTRL_EXTERNAL_INPUT_ENABLE      (0x1ul << TIMER_CTRL_EXTERNAL_INPUT_ENABLE_Pos)  
#define TIMER_CTRL_EXTERNAL_INPUT_CLOCK_Pos   2  /**< \brief (TIMER_CTRL) Select external input as clock                  */
#define TIMER_CTRL_EXTERNAL_INPUT_CLOCK       (0x1ul << TIMER_CTRL_EXTERNAL_INPUT_CLOCK_Pos)  
#define TIMER_CTRL_INTERRUPT_ENABLE_Pos       3  /**< \brief (TIMER_CTRL) Enable Timer Interrupt                          */
#define TIMER_CTRL_INTERRUPT_ENABLE           (0x1ul << TIMER_CTRL_INTERRUPT_ENABLE_Pos)  
#define TIMER_CTRL_MASK                       0x0Ful    /**< \brief (TIMER_CTRL) Register MASK */

/* -------- TIMER_VALUE : (TIMER Offset: 0x04) (R/W  32) Current Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t VALUE:32;                  /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} TIMER_VALUE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_VALUE_OFFSET                    0x04           /**<  \brief (TIMER_VALUE offset) Current Value */
#define TIMER_VALUE_RESETVALUE                0x00ul         /**<  \brief (TIMER_VALUE reset_value) Current Value */

#define TIMER_VALUE_VALUE_Pos                 0  /**< \brief (TIMER_VALUE)                                                */
#define TIMER_VALUE_VALUE_Msk                 (0xFFFFFFFFul << TIMER_VALUE_VALUE_Pos)
#define TIMER_VALUE_VALUE(value)              (TIMER_VALUE_VALUE_Msk & ((value) << TIMER_VALUE_VALUE_Pos))  
#define TIMER_VALUE_MASK                      0xFFFFFFFFul    /**< \brief (TIMER_VALUE) Register MASK */

/* -------- TIMER_RELOAD : (TIMER Offset: 0x08) (R/W  32) Reload Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RELOAD:32;                 /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} TIMER_RELOAD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_RELOAD_OFFSET                   0x08           /**<  \brief (TIMER_RELOAD offset) Reload Value */
#define TIMER_RELOAD_RESETVALUE               0x00ul         /**<  \brief (TIMER_RELOAD reset_value) Reload Value */

#define TIMER_RELOAD_RELOAD_Pos               0  /**< \brief (TIMER_RELOAD)                                               */
#define TIMER_RELOAD_RELOAD_Msk               (0xFFFFFFFFul << TIMER_RELOAD_RELOAD_Pos)
#define TIMER_RELOAD_RELOAD(value)            (TIMER_RELOAD_RELOAD_Msk & ((value) << TIMER_RELOAD_RELOAD_Pos))  
#define TIMER_RELOAD_MASK                     0xFFFFFFFFul    /**< \brief (TIMER_RELOAD) Register MASK */

/* -------- TIMER_INTSTATUSCLEAR : (TIMER Offset: 0x0c) (R/W  8) Timer Interrupt, write 1 to clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  INTSTATUSCLEAR:1;          /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} TIMER_INTSTATUSCLEAR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_INTSTATUSCLEAR_OFFSET           0x0C           /**<  \brief (TIMER_INTSTATUSCLEAR offset) Timer Interrupt, write 1 to clear */
#define TIMER_INTSTATUSCLEAR_RESETVALUE       0x00ul         /**<  \brief (TIMER_INTSTATUSCLEAR reset_value) Timer Interrupt, write 1 to clear */

#define TIMER_INTSTATUSCLEAR_INTSTATUSCLEAR_Pos 0  /**< \brief (TIMER_INTSTATUSCLEAR)                                       */
#define TIMER_INTSTATUSCLEAR_INTSTATUSCLEAR   (0x1ul << TIMER_INTSTATUSCLEAR_INTSTATUSCLEAR_Pos)  
#define TIMER_INTSTATUSCLEAR_MASK             0x01ul    /**< \brief (TIMER_INTSTATUSCLEAR) Register MASK */

/* -------- TIMER_PID4 : (TIMER Offset: 0xfd0) (R/  8) Peripheral ID Register 4 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_C_CODE:4;           /*!< bit:   0..3  JEP 106 C Code                           */
    uint8_t  BLOCK_COUNT:4;             /*!< bit:   4..7  Block Count                              */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} TIMER_PID4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_PID4_OFFSET                     0xFD0          /**<  \brief (TIMER_PID4 offset) Peripheral ID Register 4 */
#define TIMER_PID4_RESETVALUE                 0x04ul         /**<  \brief (TIMER_PID4 reset_value) Peripheral ID Register 4 */

#define TIMER_PID4_JEP106_C_CODE_Pos          0  /**< \brief (TIMER_PID4) JEP 106 C Code                                  */
#define TIMER_PID4_JEP106_C_CODE_Msk          (0xFul << TIMER_PID4_JEP106_C_CODE_Pos)
#define TIMER_PID4_JEP106_C_CODE(value)       (TIMER_PID4_JEP106_C_CODE_Msk & ((value) << TIMER_PID4_JEP106_C_CODE_Pos))  
#define TIMER_PID4_BLOCK_COUNT_Pos            4  /**< \brief (TIMER_PID4) Block Count                                     */
#define TIMER_PID4_BLOCK_COUNT_Msk            (0xFul << TIMER_PID4_BLOCK_COUNT_Pos)
#define TIMER_PID4_BLOCK_COUNT(value)         (TIMER_PID4_BLOCK_COUNT_Msk & ((value) << TIMER_PID4_BLOCK_COUNT_Pos))  
#define TIMER_PID4_MASK                       0xFFul    /**< \brief (TIMER_PID4) Register MASK */

/* -------- TIMER_PID5 : (TIMER Offset: 0xfd4) (R/  8) Peripheral ID Register 5 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PID5:8;                    /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} TIMER_PID5_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_PID5_OFFSET                     0xFD4          /**<  \brief (TIMER_PID5 offset) Peripheral ID Register 5 */
#define TIMER_PID5_RESETVALUE                 0x00ul         /**<  \brief (TIMER_PID5 reset_value) Peripheral ID Register 5 */

#define TIMER_PID5_PID5_Pos                   0  /**< \brief (TIMER_PID5)                                                 */
#define TIMER_PID5_PID5_Msk                   (0xFFul << TIMER_PID5_PID5_Pos)
#define TIMER_PID5_PID5(value)                (TIMER_PID5_PID5_Msk & ((value) << TIMER_PID5_PID5_Pos))  
#define TIMER_PID5_MASK                       0xFFul    /**< \brief (TIMER_PID5) Register MASK */

/* -------- TIMER_PID6 : (TIMER Offset: 0xfd8) (R/  8) Peripheral ID Register 6 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PID6:8;                    /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} TIMER_PID6_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_PID6_OFFSET                     0xFD8          /**<  \brief (TIMER_PID6 offset) Peripheral ID Register 6 */
#define TIMER_PID6_RESETVALUE                 0x00ul         /**<  \brief (TIMER_PID6 reset_value) Peripheral ID Register 6 */

#define TIMER_PID6_PID6_Pos                   0  /**< \brief (TIMER_PID6)                                                 */
#define TIMER_PID6_PID6_Msk                   (0xFFul << TIMER_PID6_PID6_Pos)
#define TIMER_PID6_PID6(value)                (TIMER_PID6_PID6_Msk & ((value) << TIMER_PID6_PID6_Pos))  
#define TIMER_PID6_MASK                       0xFFul    /**< \brief (TIMER_PID6) Register MASK */

/* -------- TIMER_PID7 : (TIMER Offset: 0xfdc) (R/  8) Peripheral ID Register 7 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PID7:8;                    /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} TIMER_PID7_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_PID7_OFFSET                     0xFDC          /**<  \brief (TIMER_PID7 offset) Peripheral ID Register 7 */
#define TIMER_PID7_RESETVALUE                 0x00ul         /**<  \brief (TIMER_PID7 reset_value) Peripheral ID Register 7 */

#define TIMER_PID7_PID7_Pos                   0  /**< \brief (TIMER_PID7)                                                 */
#define TIMER_PID7_PID7_Msk                   (0xFFul << TIMER_PID7_PID7_Pos)
#define TIMER_PID7_PID7(value)                (TIMER_PID7_PID7_Msk & ((value) << TIMER_PID7_PID7_Pos))  
#define TIMER_PID7_MASK                       0xFFul    /**< \brief (TIMER_PID7) Register MASK */

/* -------- TIMER_PID0 : (TIMER Offset: 0xfe0) (R/  8) Peripheral ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:8;             /*!< bit:   0..7  Part Number Bits 7:0                     */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} TIMER_PID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_PID0_OFFSET                     0xFE0          /**<  \brief (TIMER_PID0 offset) Peripheral ID Register 0 */
#define TIMER_PID0_RESETVALUE                 0x22ul         /**<  \brief (TIMER_PID0 reset_value) Peripheral ID Register 0 */

#define TIMER_PID0_PART_NUMBER_Pos            0  /**< \brief (TIMER_PID0) Part Number Bits 7:0                            */
#define TIMER_PID0_PART_NUMBER_Msk            (0xFFul << TIMER_PID0_PART_NUMBER_Pos)
#define TIMER_PID0_PART_NUMBER(value)         (TIMER_PID0_PART_NUMBER_Msk & ((value) << TIMER_PID0_PART_NUMBER_Pos))  
#define TIMER_PID0_MASK                       0xFFul    /**< \brief (TIMER_PID0) Register MASK */

/* -------- TIMER_PID1 : (TIMER Offset: 0xfe4) (R/  8) Peripheral ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:4;             /*!< bit:   0..3  Part Number Bits 11:8                    */
    uint8_t  JEP106_ID_3_0:4;           /*!< bit:   4..7  JEP106 ID Bits 3:0                       */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} TIMER_PID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_PID1_OFFSET                     0xFE4          /**<  \brief (TIMER_PID1 offset) Peripheral ID Register 1 */
#define TIMER_PID1_RESETVALUE                 0xB8ul         /**<  \brief (TIMER_PID1 reset_value) Peripheral ID Register 1 */

#define TIMER_PID1_PART_NUMBER_Pos            0  /**< \brief (TIMER_PID1) Part Number Bits 11:8                           */
#define TIMER_PID1_PART_NUMBER_Msk            (0xFul << TIMER_PID1_PART_NUMBER_Pos)
#define TIMER_PID1_PART_NUMBER(value)         (TIMER_PID1_PART_NUMBER_Msk & ((value) << TIMER_PID1_PART_NUMBER_Pos))  
#define TIMER_PID1_JEP106_ID_3_0_Pos          4  /**< \brief (TIMER_PID1) JEP106 ID Bits 3:0                              */
#define TIMER_PID1_JEP106_ID_3_0_Msk          (0xFul << TIMER_PID1_JEP106_ID_3_0_Pos)
#define TIMER_PID1_JEP106_ID_3_0(value)       (TIMER_PID1_JEP106_ID_3_0_Msk & ((value) << TIMER_PID1_JEP106_ID_3_0_Pos))  
#define TIMER_PID1_MASK                       0xFFul    /**< \brief (TIMER_PID1) Register MASK */

/* -------- TIMER_PID2 : (TIMER Offset: 0xfe8) (R/  8) Peripheral ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_ID_6_4:3;           /*!< bit:   0..2  JEP106 ID Bits 6:4                       */
    uint8_t  JEDEC_USED:1;              /*!< bit:      3  JEDEC Used                               */
    uint8_t  REVISION:4;                /*!< bit:   4..7  Revision                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} TIMER_PID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_PID2_OFFSET                     0xFE8          /**<  \brief (TIMER_PID2 offset) Peripheral ID Register 2 */
#define TIMER_PID2_RESETVALUE                 0x1Bul         /**<  \brief (TIMER_PID2 reset_value) Peripheral ID Register 2 */

#define TIMER_PID2_JEP106_ID_6_4_Pos          0  /**< \brief (TIMER_PID2) JEP106 ID Bits 6:4                              */
#define TIMER_PID2_JEP106_ID_6_4_Msk          (0x7ul << TIMER_PID2_JEP106_ID_6_4_Pos)
#define TIMER_PID2_JEP106_ID_6_4(value)       (TIMER_PID2_JEP106_ID_6_4_Msk & ((value) << TIMER_PID2_JEP106_ID_6_4_Pos))  
#define TIMER_PID2_JEDEC_USED_Pos             3  /**< \brief (TIMER_PID2) JEDEC Used                                      */
#define TIMER_PID2_JEDEC_USED                 (0x1ul << TIMER_PID2_JEDEC_USED_Pos)  
#define TIMER_PID2_REVISION_Pos               4  /**< \brief (TIMER_PID2) Revision                                        */
#define TIMER_PID2_REVISION_Msk               (0xFul << TIMER_PID2_REVISION_Pos)
#define TIMER_PID2_REVISION(value)            (TIMER_PID2_REVISION_Msk & ((value) << TIMER_PID2_REVISION_Pos))  
#define TIMER_PID2_MASK                       0xFFul    /**< \brief (TIMER_PID2) Register MASK */

/* -------- TIMER_PID3 : (TIMER Offset: 0xfec) (R/  8) Peripheral ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CUSTOMER_MOD_NUMBER:4;     /*!< bit:   0..3  Customer Modification Number             */
    uint8_t  ECO_REV_NUMBER:4;          /*!< bit:   4..7  ECO Revision Number                      */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} TIMER_PID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_PID3_OFFSET                     0xFEC          /**<  \brief (TIMER_PID3 offset) Peripheral ID Register 3 */
#define TIMER_PID3_RESETVALUE                 0x00ul         /**<  \brief (TIMER_PID3 reset_value) Peripheral ID Register 3 */

#define TIMER_PID3_CUSTOMER_MOD_NUMBER_Pos    0  /**< \brief (TIMER_PID3) Customer Modification Number                    */
#define TIMER_PID3_CUSTOMER_MOD_NUMBER_Msk    (0xFul << TIMER_PID3_CUSTOMER_MOD_NUMBER_Pos)
#define TIMER_PID3_CUSTOMER_MOD_NUMBER(value) (TIMER_PID3_CUSTOMER_MOD_NUMBER_Msk & ((value) << TIMER_PID3_CUSTOMER_MOD_NUMBER_Pos))  
#define TIMER_PID3_ECO_REV_NUMBER_Pos         4  /**< \brief (TIMER_PID3) ECO Revision Number                             */
#define TIMER_PID3_ECO_REV_NUMBER_Msk         (0xFul << TIMER_PID3_ECO_REV_NUMBER_Pos)
#define TIMER_PID3_ECO_REV_NUMBER(value)      (TIMER_PID3_ECO_REV_NUMBER_Msk & ((value) << TIMER_PID3_ECO_REV_NUMBER_Pos))  
#define TIMER_PID3_MASK                       0xFFul    /**< \brief (TIMER_PID3) Register MASK */

/* -------- TIMER_CID0 : (TIMER Offset: 0xff0) (R/  8) Component ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CID0:8;                    /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} TIMER_CID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_CID0_OFFSET                     0xFF0          /**<  \brief (TIMER_CID0 offset) Component ID Register 0 */
#define TIMER_CID0_RESETVALUE                 0x0Dul         /**<  \brief (TIMER_CID0 reset_value) Component ID Register 0 */

#define TIMER_CID0_CID0_Pos                   0  /**< \brief (TIMER_CID0)                                                 */
#define TIMER_CID0_CID0_Msk                   (0xFFul << TIMER_CID0_CID0_Pos)
#define TIMER_CID0_CID0(value)                (TIMER_CID0_CID0_Msk & ((value) << TIMER_CID0_CID0_Pos))  
#define TIMER_CID0_MASK                       0xFFul    /**< \brief (TIMER_CID0) Register MASK */

/* -------- TIMER_CID1 : (TIMER Offset: 0xff4) (R/  8) Component ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CID1:8;                    /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} TIMER_CID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_CID1_OFFSET                     0xFF4          /**<  \brief (TIMER_CID1 offset) Component ID Register 1 */
#define TIMER_CID1_RESETVALUE                 0xF0ul         /**<  \brief (TIMER_CID1 reset_value) Component ID Register 1 */

#define TIMER_CID1_CID1_Pos                   0  /**< \brief (TIMER_CID1)                                                 */
#define TIMER_CID1_CID1_Msk                   (0xFFul << TIMER_CID1_CID1_Pos)
#define TIMER_CID1_CID1(value)                (TIMER_CID1_CID1_Msk & ((value) << TIMER_CID1_CID1_Pos))  
#define TIMER_CID1_MASK                       0xFFul    /**< \brief (TIMER_CID1) Register MASK */

/* -------- TIMER_CID2 : (TIMER Offset: 0xff8) (R/  8) Component ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CID2:8;                    /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} TIMER_CID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_CID2_OFFSET                     0xFF8          /**<  \brief (TIMER_CID2 offset) Component ID Register 2 */
#define TIMER_CID2_RESETVALUE                 0x05ul         /**<  \brief (TIMER_CID2 reset_value) Component ID Register 2 */

#define TIMER_CID2_CID2_Pos                   0  /**< \brief (TIMER_CID2)                                                 */
#define TIMER_CID2_CID2_Msk                   (0xFFul << TIMER_CID2_CID2_Pos)
#define TIMER_CID2_CID2(value)                (TIMER_CID2_CID2_Msk & ((value) << TIMER_CID2_CID2_Pos))  
#define TIMER_CID2_MASK                       0xFFul    /**< \brief (TIMER_CID2) Register MASK */

/* -------- TIMER_CID3 : (TIMER Offset: 0xffc) (R/  8) Component ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CID3:8;                    /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} TIMER_CID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TIMER_CID3_OFFSET                     0xFFC          /**<  \brief (TIMER_CID3 offset) Component ID Register 3 */
#define TIMER_CID3_RESETVALUE                 0xB1ul         /**<  \brief (TIMER_CID3 reset_value) Component ID Register 3 */

#define TIMER_CID3_CID3_Pos                   0  /**< \brief (TIMER_CID3)                                                 */
#define TIMER_CID3_CID3_Msk                   (0xFFul << TIMER_CID3_CID3_Pos)
#define TIMER_CID3_CID3(value)                (TIMER_CID3_CID3_Msk & ((value) << TIMER_CID3_CID3_Pos))  
#define TIMER_CID3_MASK                       0xFFul    /**< \brief (TIMER_CID3) Register MASK */

/** \brief TIMER hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* ARM General Purpose Timer */
  __IO TIMER_CTRL_Type                CTRL;           /**< \brief Offset: 0x00 (R/W   8) Timer Control */
       RoReg8                         Reserved1[0x3];
  __IO TIMER_VALUE_Type               VALUE;          /**< \brief Offset: 0x04 (R/W  32) Current Value */
  __IO TIMER_RELOAD_Type              RELOAD;         /**< \brief Offset: 0x08 (R/W  32) Reload Value */
  __IO TIMER_INTSTATUSCLEAR_Type      INTSTATUSCLEAR; /**< \brief Offset: 0x0C (R/W   8) Timer Interrupt, write 1 to clear */
       RoReg8                         Reserved2[0xFC3];
  __I  TIMER_PID4_Type                PID4;           /**< \brief Offset: 0xFD0 (R/    8) Peripheral ID Register 4 */
       RoReg8                         Reserved3[0x3];
  __I  TIMER_PID5_Type                PID5;           /**< \brief Offset: 0xFD4 (R/    8) Peripheral ID Register 5 */
       RoReg8                         Reserved4[0x3];
  __I  TIMER_PID6_Type                PID6;           /**< \brief Offset: 0xFD8 (R/    8) Peripheral ID Register 6 */
       RoReg8                         Reserved5[0x3];
  __I  TIMER_PID7_Type                PID7;           /**< \brief Offset: 0xFDC (R/    8) Peripheral ID Register 7 */
       RoReg8                         Reserved6[0x3];
  __I  TIMER_PID0_Type                PID0;           /**< \brief Offset: 0xFE0 (R/    8) Peripheral ID Register 0 */
       RoReg8                         Reserved7[0x3];
  __I  TIMER_PID1_Type                PID1;           /**< \brief Offset: 0xFE4 (R/    8) Peripheral ID Register 1 */
       RoReg8                         Reserved8[0x3];
  __I  TIMER_PID2_Type                PID2;           /**< \brief Offset: 0xFE8 (R/    8) Peripheral ID Register 2 */
       RoReg8                         Reserved9[0x3];
  __I  TIMER_PID3_Type                PID3;           /**< \brief Offset: 0xFEC (R/    8) Peripheral ID Register 3 */
       RoReg8                         Reserved10[0x3];
  __I  TIMER_CID0_Type                CID0;           /**< \brief Offset: 0xFF0 (R/    8) Component ID Register 0 */
       RoReg8                         Reserved11[0x3];
  __I  TIMER_CID1_Type                CID1;           /**< \brief Offset: 0xFF4 (R/    8) Component ID Register 1 */
       RoReg8                         Reserved12[0x3];
  __I  TIMER_CID2_Type                CID2;           /**< \brief Offset: 0xFF8 (R/    8) Component ID Register 2 */
       RoReg8                         Reserved13[0x3];
  __I  TIMER_CID3_Type                CID3;           /**< \brief Offset: 0xFFC (R/    8) Component ID Register 3 */
} Timer;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_TIMER_COMPONENT_ */
