/**
 * \file
 *
 * \brief Component description for ARM_BPU
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

#ifndef _SAMB11_ARM_BPU_COMPONENT_
#define _SAMB11_ARM_BPU_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ARM_BPU */
/* ========================================================================== */
/** \addtogroup SAMB11_ARM_BPU ARM Breakpoint Control */
/*@{*/

#define ARM_BPU_ABP1234
#define REV_ARM_BPU                      0x100

/* -------- ARM_BPU_BP_CTRL : (ARM_BPU Offset: 0x00) (R/W  8) Break Point Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ENABLE:1;                  /*!< bit:      0  BPU is Enabled                           */
    uint8_t  KEY:1;                     /*!< bit:      1  Must Write this bit to a 1 for register write to be accepted */
    uint8_t  :2;                        /*!< bit:   2..3  Reserved                                 */
    uint8_t  NUM_CODE:4;                /*!< bit:   4..7  Number of breakpoint comparators         */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_BPU_BP_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_BPU_BP_CTRL_OFFSET                0x00           /**<  \brief (ARM_BPU_BP_CTRL offset) Break Point Control Register */
#define ARM_BPU_BP_CTRL_RESETVALUE            0x00ul         /**<  \brief (ARM_BPU_BP_CTRL reset_value) Break Point Control Register */

#define ARM_BPU_BP_CTRL_ENABLE_Pos            0  /**< \brief (ARM_BPU_BP_CTRL) BPU is Enabled                             */
#define ARM_BPU_BP_CTRL_ENABLE                (0x1ul << ARM_BPU_BP_CTRL_ENABLE_Pos)  
#define ARM_BPU_BP_CTRL_KEY_Pos               1  /**< \brief (ARM_BPU_BP_CTRL) Must Write this bit to a 1 for register write to be accepted */
#define ARM_BPU_BP_CTRL_KEY                   (0x1ul << ARM_BPU_BP_CTRL_KEY_Pos)  
#define ARM_BPU_BP_CTRL_NUM_CODE_Pos          4  /**< \brief (ARM_BPU_BP_CTRL) Number of breakpoint comparators           */
#define ARM_BPU_BP_CTRL_NUM_CODE_Msk          (0xFul << ARM_BPU_BP_CTRL_NUM_CODE_Pos)
#define ARM_BPU_BP_CTRL_NUM_CODE(value)       (ARM_BPU_BP_CTRL_NUM_CODE_Msk & ((value) << ARM_BPU_BP_CTRL_NUM_CODE_Pos))  
#define ARM_BPU_BP_CTRL_MASK                  0xF3ul    /**< \brief (ARM_BPU_BP_CTRL) Register MASK */

/* -------- ARM_BPU_BP_COMP0 : (ARM_BPU Offset: 0x08) (R/W  32) Break Point Compare Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t ENABLE:1;                  /*!< bit:      0  Comparator is enabled                    */
    uint32_t :1;                        /*!< bit:      1  Reserved                                 */
    uint32_t COMP:27;                   /*!< bit:  2..28  Bits 28:2 of the comparison address      */
    uint32_t :1;                        /*!< bit:     29  Reserved                                 */
    uint32_t BP_MATCH:2;                /*!< bit: 30..31  Behavior when the COMP address is matched */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_BPU_BP_COMP0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_BPU_BP_COMP0_OFFSET               0x08           /**<  \brief (ARM_BPU_BP_COMP0 offset) Break Point Compare Register 0 */
#define ARM_BPU_BP_COMP0_RESETVALUE           0x1FFFFFFFul   /**<  \brief (ARM_BPU_BP_COMP0 reset_value) Break Point Compare Register 0 */

#define ARM_BPU_BP_COMP0_ENABLE_Pos           0  /**< \brief (ARM_BPU_BP_COMP0) Comparator is enabled                     */
#define ARM_BPU_BP_COMP0_ENABLE               (0x1ul << ARM_BPU_BP_COMP0_ENABLE_Pos)  
#define ARM_BPU_BP_COMP0_COMP_Pos             2  /**< \brief (ARM_BPU_BP_COMP0) Bits 28:2 of the comparison address       */
#define ARM_BPU_BP_COMP0_COMP_Msk             (0x7FFFFFFul << ARM_BPU_BP_COMP0_COMP_Pos)
#define ARM_BPU_BP_COMP0_COMP(value)          (ARM_BPU_BP_COMP0_COMP_Msk & ((value) << ARM_BPU_BP_COMP0_COMP_Pos))  
#define ARM_BPU_BP_COMP0_BP_MATCH_Pos         30  /**< \brief (ARM_BPU_BP_COMP0) Behavior when the COMP address is matched */
#define ARM_BPU_BP_COMP0_BP_MATCH_Msk         (0x3ul << ARM_BPU_BP_COMP0_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP0_BP_MATCH(value)      (ARM_BPU_BP_COMP0_BP_MATCH_Msk & ((value) << ARM_BPU_BP_COMP0_BP_MATCH_Pos))  
#define   ARM_BPU_BP_COMP0_BP_MATCH_0_Val        0X0ul  /**< \brief (ARM_BPU_BP_COMP0) No Breakpoint Matching  */
#define   ARM_BPU_BP_COMP0_BP_MATCH_1_Val        0X1ul  /**< \brief (ARM_BPU_BP_COMP0) Breakpoint on lower halfword  */
#define   ARM_BPU_BP_COMP0_BP_MATCH_2_Val        0X2ul  /**< \brief (ARM_BPU_BP_COMP0) Breakpoint on upper halfword  */
#define   ARM_BPU_BP_COMP0_BP_MATCH_3_Val        0X3ul  /**< \brief (ARM_BPU_BP_COMP0) Breakpoint on both halfwords  */
#define ARM_BPU_BP_COMP0_BP_MATCH_0           (ARM_BPU_BP_COMP0_BP_MATCH_0_Val << ARM_BPU_BP_COMP0_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP0_BP_MATCH_1           (ARM_BPU_BP_COMP0_BP_MATCH_1_Val << ARM_BPU_BP_COMP0_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP0_BP_MATCH_2           (ARM_BPU_BP_COMP0_BP_MATCH_2_Val << ARM_BPU_BP_COMP0_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP0_BP_MATCH_3           (ARM_BPU_BP_COMP0_BP_MATCH_3_Val << ARM_BPU_BP_COMP0_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP0_MASK                 0xDFFFFFFDul    /**< \brief (ARM_BPU_BP_COMP0) Register MASK */

/* -------- ARM_BPU_BP_COMP1 : (ARM_BPU Offset: 0x0c) (R/W  32) Break Point Compare Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t ENABLE:1;                  /*!< bit:      0  Comparator is enabled                    */
    uint32_t :1;                        /*!< bit:      1  Reserved                                 */
    uint32_t COMP:27;                   /*!< bit:  2..28  Bits 28:2 of the comparison address      */
    uint32_t :1;                        /*!< bit:     29  Reserved                                 */
    uint32_t BP_MATCH:2;                /*!< bit: 30..31  Behavior when the COMP address is matched */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_BPU_BP_COMP1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_BPU_BP_COMP1_OFFSET               0x0C           /**<  \brief (ARM_BPU_BP_COMP1 offset) Break Point Compare Register 1 */
#define ARM_BPU_BP_COMP1_RESETVALUE           0x1FFFFFFFul   /**<  \brief (ARM_BPU_BP_COMP1 reset_value) Break Point Compare Register 1 */

#define ARM_BPU_BP_COMP1_ENABLE_Pos           0  /**< \brief (ARM_BPU_BP_COMP1) Comparator is enabled                     */
#define ARM_BPU_BP_COMP1_ENABLE               (0x1ul << ARM_BPU_BP_COMP1_ENABLE_Pos)  
#define ARM_BPU_BP_COMP1_COMP_Pos             2  /**< \brief (ARM_BPU_BP_COMP1) Bits 28:2 of the comparison address       */
#define ARM_BPU_BP_COMP1_COMP_Msk             (0x7FFFFFFul << ARM_BPU_BP_COMP1_COMP_Pos)
#define ARM_BPU_BP_COMP1_COMP(value)          (ARM_BPU_BP_COMP1_COMP_Msk & ((value) << ARM_BPU_BP_COMP1_COMP_Pos))  
#define ARM_BPU_BP_COMP1_BP_MATCH_Pos         30  /**< \brief (ARM_BPU_BP_COMP1) Behavior when the COMP address is matched */
#define ARM_BPU_BP_COMP1_BP_MATCH_Msk         (0x3ul << ARM_BPU_BP_COMP1_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP1_BP_MATCH(value)      (ARM_BPU_BP_COMP1_BP_MATCH_Msk & ((value) << ARM_BPU_BP_COMP1_BP_MATCH_Pos))  
#define   ARM_BPU_BP_COMP1_BP_MATCH_0_Val        0X0ul  /**< \brief (ARM_BPU_BP_COMP1) No Breakpoint Matching  */
#define   ARM_BPU_BP_COMP1_BP_MATCH_1_Val        0X1ul  /**< \brief (ARM_BPU_BP_COMP1) Breakpoint on lower halfword  */
#define   ARM_BPU_BP_COMP1_BP_MATCH_2_Val        0X2ul  /**< \brief (ARM_BPU_BP_COMP1) Breakpoint on upper halfword  */
#define   ARM_BPU_BP_COMP1_BP_MATCH_3_Val        0X3ul  /**< \brief (ARM_BPU_BP_COMP1) Breakpoint on both halfwords  */
#define ARM_BPU_BP_COMP1_BP_MATCH_0           (ARM_BPU_BP_COMP1_BP_MATCH_0_Val << ARM_BPU_BP_COMP1_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP1_BP_MATCH_1           (ARM_BPU_BP_COMP1_BP_MATCH_1_Val << ARM_BPU_BP_COMP1_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP1_BP_MATCH_2           (ARM_BPU_BP_COMP1_BP_MATCH_2_Val << ARM_BPU_BP_COMP1_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP1_BP_MATCH_3           (ARM_BPU_BP_COMP1_BP_MATCH_3_Val << ARM_BPU_BP_COMP1_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP1_MASK                 0xDFFFFFFDul    /**< \brief (ARM_BPU_BP_COMP1) Register MASK */

/* -------- ARM_BPU_BP_COMP2 : (ARM_BPU Offset: 0x10) (R/W  32) Break Point Compare Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t ENABLE:1;                  /*!< bit:      0  Comparator is enabled                    */
    uint32_t :1;                        /*!< bit:      1  Reserved                                 */
    uint32_t COMP:27;                   /*!< bit:  2..28  Bits 28:2 of the comparison address      */
    uint32_t :1;                        /*!< bit:     29  Reserved                                 */
    uint32_t BP_MATCH:2;                /*!< bit: 30..31  Behavior when the COMP address is matched */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_BPU_BP_COMP2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_BPU_BP_COMP2_OFFSET               0x10           /**<  \brief (ARM_BPU_BP_COMP2 offset) Break Point Compare Register 2 */
#define ARM_BPU_BP_COMP2_RESETVALUE           0x1FFFFFFFul   /**<  \brief (ARM_BPU_BP_COMP2 reset_value) Break Point Compare Register 2 */

#define ARM_BPU_BP_COMP2_ENABLE_Pos           0  /**< \brief (ARM_BPU_BP_COMP2) Comparator is enabled                     */
#define ARM_BPU_BP_COMP2_ENABLE               (0x1ul << ARM_BPU_BP_COMP2_ENABLE_Pos)  
#define ARM_BPU_BP_COMP2_COMP_Pos             2  /**< \brief (ARM_BPU_BP_COMP2) Bits 28:2 of the comparison address       */
#define ARM_BPU_BP_COMP2_COMP_Msk             (0x7FFFFFFul << ARM_BPU_BP_COMP2_COMP_Pos)
#define ARM_BPU_BP_COMP2_COMP(value)          (ARM_BPU_BP_COMP2_COMP_Msk & ((value) << ARM_BPU_BP_COMP2_COMP_Pos))  
#define ARM_BPU_BP_COMP2_BP_MATCH_Pos         30  /**< \brief (ARM_BPU_BP_COMP2) Behavior when the COMP address is matched */
#define ARM_BPU_BP_COMP2_BP_MATCH_Msk         (0x3ul << ARM_BPU_BP_COMP2_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP2_BP_MATCH(value)      (ARM_BPU_BP_COMP2_BP_MATCH_Msk & ((value) << ARM_BPU_BP_COMP2_BP_MATCH_Pos))  
#define   ARM_BPU_BP_COMP2_BP_MATCH_0_Val        0X0ul  /**< \brief (ARM_BPU_BP_COMP2) No Breakpoint Matching  */
#define   ARM_BPU_BP_COMP2_BP_MATCH_1_Val        0X1ul  /**< \brief (ARM_BPU_BP_COMP2) Breakpoint on lower halfword  */
#define   ARM_BPU_BP_COMP2_BP_MATCH_2_Val        0X2ul  /**< \brief (ARM_BPU_BP_COMP2) Breakpoint on upper halfword  */
#define   ARM_BPU_BP_COMP2_BP_MATCH_3_Val        0X3ul  /**< \brief (ARM_BPU_BP_COMP2) Breakpoint on both halfwords  */
#define ARM_BPU_BP_COMP2_BP_MATCH_0           (ARM_BPU_BP_COMP2_BP_MATCH_0_Val << ARM_BPU_BP_COMP2_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP2_BP_MATCH_1           (ARM_BPU_BP_COMP2_BP_MATCH_1_Val << ARM_BPU_BP_COMP2_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP2_BP_MATCH_2           (ARM_BPU_BP_COMP2_BP_MATCH_2_Val << ARM_BPU_BP_COMP2_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP2_BP_MATCH_3           (ARM_BPU_BP_COMP2_BP_MATCH_3_Val << ARM_BPU_BP_COMP2_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP2_MASK                 0xDFFFFFFDul    /**< \brief (ARM_BPU_BP_COMP2) Register MASK */

/* -------- ARM_BPU_BP_COMP3 : (ARM_BPU Offset: 0x14) (R/W  32) Break Point Compare Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t ENABLE:1;                  /*!< bit:      0  Comparator is enabled                    */
    uint32_t :1;                        /*!< bit:      1  Reserved                                 */
    uint32_t COMP:27;                   /*!< bit:  2..28  Bits 28:2 of the comparison address      */
    uint32_t :1;                        /*!< bit:     29  Reserved                                 */
    uint32_t BP_MATCH:2;                /*!< bit: 30..31  Behavior when the COMP address is matched */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_BPU_BP_COMP3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_BPU_BP_COMP3_OFFSET               0x14           /**<  \brief (ARM_BPU_BP_COMP3 offset) Break Point Compare Register 3 */
#define ARM_BPU_BP_COMP3_RESETVALUE           0x1FFFFFFFul   /**<  \brief (ARM_BPU_BP_COMP3 reset_value) Break Point Compare Register 3 */

#define ARM_BPU_BP_COMP3_ENABLE_Pos           0  /**< \brief (ARM_BPU_BP_COMP3) Comparator is enabled                     */
#define ARM_BPU_BP_COMP3_ENABLE               (0x1ul << ARM_BPU_BP_COMP3_ENABLE_Pos)  
#define ARM_BPU_BP_COMP3_COMP_Pos             2  /**< \brief (ARM_BPU_BP_COMP3) Bits 28:2 of the comparison address       */
#define ARM_BPU_BP_COMP3_COMP_Msk             (0x7FFFFFFul << ARM_BPU_BP_COMP3_COMP_Pos)
#define ARM_BPU_BP_COMP3_COMP(value)          (ARM_BPU_BP_COMP3_COMP_Msk & ((value) << ARM_BPU_BP_COMP3_COMP_Pos))  
#define ARM_BPU_BP_COMP3_BP_MATCH_Pos         30  /**< \brief (ARM_BPU_BP_COMP3) Behavior when the COMP address is matched */
#define ARM_BPU_BP_COMP3_BP_MATCH_Msk         (0x3ul << ARM_BPU_BP_COMP3_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP3_BP_MATCH(value)      (ARM_BPU_BP_COMP3_BP_MATCH_Msk & ((value) << ARM_BPU_BP_COMP3_BP_MATCH_Pos))  
#define   ARM_BPU_BP_COMP3_BP_MATCH_0_Val        0X0ul  /**< \brief (ARM_BPU_BP_COMP3) No Breakpoint Matching  */
#define   ARM_BPU_BP_COMP3_BP_MATCH_1_Val        0X1ul  /**< \brief (ARM_BPU_BP_COMP3) Breakpoint on lower halfword  */
#define   ARM_BPU_BP_COMP3_BP_MATCH_2_Val        0X2ul  /**< \brief (ARM_BPU_BP_COMP3) Breakpoint on upper halfword  */
#define   ARM_BPU_BP_COMP3_BP_MATCH_3_Val        0X3ul  /**< \brief (ARM_BPU_BP_COMP3) Breakpoint on both halfwords  */
#define ARM_BPU_BP_COMP3_BP_MATCH_0           (ARM_BPU_BP_COMP3_BP_MATCH_0_Val << ARM_BPU_BP_COMP3_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP3_BP_MATCH_1           (ARM_BPU_BP_COMP3_BP_MATCH_1_Val << ARM_BPU_BP_COMP3_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP3_BP_MATCH_2           (ARM_BPU_BP_COMP3_BP_MATCH_2_Val << ARM_BPU_BP_COMP3_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP3_BP_MATCH_3           (ARM_BPU_BP_COMP3_BP_MATCH_3_Val << ARM_BPU_BP_COMP3_BP_MATCH_Pos)
#define ARM_BPU_BP_COMP3_MASK                 0xDFFFFFFDul    /**< \brief (ARM_BPU_BP_COMP3) Register MASK */

/* -------- ARM_BPU_BP_PID4 : (ARM_BPU Offset: 0xfd0) (R/  8) Peripheral ID Register 4 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_C_CODE:4;           /*!< bit:   0..3  JEP106 C Code                            */
    uint8_t  BLOCK_COUNT:4;             /*!< bit:   4..7  Block Count                              */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_BPU_BP_PID4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_BPU_BP_PID4_OFFSET                0xFD0          /**<  \brief (ARM_BPU_BP_PID4 offset) Peripheral ID Register 4 */
#define ARM_BPU_BP_PID4_RESETVALUE            0x04ul         /**<  \brief (ARM_BPU_BP_PID4 reset_value) Peripheral ID Register 4 */

#define ARM_BPU_BP_PID4_JEP106_C_CODE_Pos     0  /**< \brief (ARM_BPU_BP_PID4) JEP106 C Code                              */
#define ARM_BPU_BP_PID4_JEP106_C_CODE_Msk     (0xFul << ARM_BPU_BP_PID4_JEP106_C_CODE_Pos)
#define ARM_BPU_BP_PID4_JEP106_C_CODE(value)  (ARM_BPU_BP_PID4_JEP106_C_CODE_Msk & ((value) << ARM_BPU_BP_PID4_JEP106_C_CODE_Pos))  
#define ARM_BPU_BP_PID4_BLOCK_COUNT_Pos       4  /**< \brief (ARM_BPU_BP_PID4) Block Count                                */
#define ARM_BPU_BP_PID4_BLOCK_COUNT_Msk       (0xFul << ARM_BPU_BP_PID4_BLOCK_COUNT_Pos)
#define ARM_BPU_BP_PID4_BLOCK_COUNT(value)    (ARM_BPU_BP_PID4_BLOCK_COUNT_Msk & ((value) << ARM_BPU_BP_PID4_BLOCK_COUNT_Pos))  
#define ARM_BPU_BP_PID4_MASK                  0xFFul    /**< \brief (ARM_BPU_BP_PID4) Register MASK */

/* -------- ARM_BPU_BP_PID0 : (ARM_BPU Offset: 0xfe0) (R/  8) Peripheral ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:8;             /*!< bit:   0..7  Part Number Bits 7:0                     */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_BPU_BP_PID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_BPU_BP_PID0_OFFSET                0xFE0          /**<  \brief (ARM_BPU_BP_PID0 offset) Peripheral ID Register 0 */
#define ARM_BPU_BP_PID0_RESETVALUE            0x0Bul         /**<  \brief (ARM_BPU_BP_PID0 reset_value) Peripheral ID Register 0 */

#define ARM_BPU_BP_PID0_PART_NUMBER_Pos       0  /**< \brief (ARM_BPU_BP_PID0) Part Number Bits 7:0                       */
#define ARM_BPU_BP_PID0_PART_NUMBER_Msk       (0xFFul << ARM_BPU_BP_PID0_PART_NUMBER_Pos)
#define ARM_BPU_BP_PID0_PART_NUMBER(value)    (ARM_BPU_BP_PID0_PART_NUMBER_Msk & ((value) << ARM_BPU_BP_PID0_PART_NUMBER_Pos))  
#define ARM_BPU_BP_PID0_MASK                  0xFFul    /**< \brief (ARM_BPU_BP_PID0) Register MASK */

/* -------- ARM_BPU_BP_PID1 : (ARM_BPU Offset: 0xfe4) (R/  8) Peripheral ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:4;             /*!< bit:   0..3  Part Number Bits 11:8                    */
    uint8_t  JEP106_ID_3_0:4;           /*!< bit:   4..7  JEP106 ID Code Bits 3:0                  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_BPU_BP_PID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_BPU_BP_PID1_OFFSET                0xFE4          /**<  \brief (ARM_BPU_BP_PID1 offset) Peripheral ID Register 1 */
#define ARM_BPU_BP_PID1_RESETVALUE            0xB0ul         /**<  \brief (ARM_BPU_BP_PID1 reset_value) Peripheral ID Register 1 */

#define ARM_BPU_BP_PID1_PART_NUMBER_Pos       0  /**< \brief (ARM_BPU_BP_PID1) Part Number Bits 11:8                      */
#define ARM_BPU_BP_PID1_PART_NUMBER_Msk       (0xFul << ARM_BPU_BP_PID1_PART_NUMBER_Pos)
#define ARM_BPU_BP_PID1_PART_NUMBER(value)    (ARM_BPU_BP_PID1_PART_NUMBER_Msk & ((value) << ARM_BPU_BP_PID1_PART_NUMBER_Pos))  
#define ARM_BPU_BP_PID1_JEP106_ID_3_0_Pos     4  /**< \brief (ARM_BPU_BP_PID1) JEP106 ID Code Bits 3:0                    */
#define ARM_BPU_BP_PID1_JEP106_ID_3_0_Msk     (0xFul << ARM_BPU_BP_PID1_JEP106_ID_3_0_Pos)
#define ARM_BPU_BP_PID1_JEP106_ID_3_0(value)  (ARM_BPU_BP_PID1_JEP106_ID_3_0_Msk & ((value) << ARM_BPU_BP_PID1_JEP106_ID_3_0_Pos))  
#define ARM_BPU_BP_PID1_MASK                  0xFFul    /**< \brief (ARM_BPU_BP_PID1) Register MASK */

/* -------- ARM_BPU_BP_PID2 : (ARM_BPU Offset: 0xfe8) (R/  8) Peripheral ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_ID_6_4:3;           /*!< bit:   0..2  JEP106 ID Code Bits 6:4                  */
    uint8_t  JEDEC_USED:1;              /*!< bit:      3  JEDEC Used                               */
    uint8_t  REVISION:4;                /*!< bit:   4..7  Revision                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_BPU_BP_PID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_BPU_BP_PID2_OFFSET                0xFE8          /**<  \brief (ARM_BPU_BP_PID2 offset) Peripheral ID Register 2 */
#define ARM_BPU_BP_PID2_RESETVALUE            0x0Bul         /**<  \brief (ARM_BPU_BP_PID2 reset_value) Peripheral ID Register 2 */

#define ARM_BPU_BP_PID2_JEP106_ID_6_4_Pos     0  /**< \brief (ARM_BPU_BP_PID2) JEP106 ID Code Bits 6:4                    */
#define ARM_BPU_BP_PID2_JEP106_ID_6_4_Msk     (0x7ul << ARM_BPU_BP_PID2_JEP106_ID_6_4_Pos)
#define ARM_BPU_BP_PID2_JEP106_ID_6_4(value)  (ARM_BPU_BP_PID2_JEP106_ID_6_4_Msk & ((value) << ARM_BPU_BP_PID2_JEP106_ID_6_4_Pos))  
#define ARM_BPU_BP_PID2_JEDEC_USED_Pos        3  /**< \brief (ARM_BPU_BP_PID2) JEDEC Used                                 */
#define ARM_BPU_BP_PID2_JEDEC_USED            (0x1ul << ARM_BPU_BP_PID2_JEDEC_USED_Pos)  
#define ARM_BPU_BP_PID2_REVISION_Pos          4  /**< \brief (ARM_BPU_BP_PID2) Revision                                   */
#define ARM_BPU_BP_PID2_REVISION_Msk          (0xFul << ARM_BPU_BP_PID2_REVISION_Pos)
#define ARM_BPU_BP_PID2_REVISION(value)       (ARM_BPU_BP_PID2_REVISION_Msk & ((value) << ARM_BPU_BP_PID2_REVISION_Pos))  
#define ARM_BPU_BP_PID2_MASK                  0xFFul    /**< \brief (ARM_BPU_BP_PID2) Register MASK */

/* -------- ARM_BPU_BP_PID3 : (ARM_BPU Offset: 0xfec) (R/  8) Peripheral ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CUSTOMER_MOD_NUMBER:4;     /*!< bit:   0..3  Customer Modification Number             */
    uint8_t  ECO_REV_NUMBER:4;          /*!< bit:   4..7  ECO Revision Number                      */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_BPU_BP_PID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_BPU_BP_PID3_OFFSET                0xFEC          /**<  \brief (ARM_BPU_BP_PID3 offset) Peripheral ID Register 3 */
#define ARM_BPU_BP_PID3_RESETVALUE            0x00ul         /**<  \brief (ARM_BPU_BP_PID3 reset_value) Peripheral ID Register 3 */

#define ARM_BPU_BP_PID3_CUSTOMER_MOD_NUMBER_Pos 0  /**< \brief (ARM_BPU_BP_PID3) Customer Modification Number               */
#define ARM_BPU_BP_PID3_CUSTOMER_MOD_NUMBER_Msk (0xFul << ARM_BPU_BP_PID3_CUSTOMER_MOD_NUMBER_Pos)
#define ARM_BPU_BP_PID3_CUSTOMER_MOD_NUMBER(value) (ARM_BPU_BP_PID3_CUSTOMER_MOD_NUMBER_Msk & ((value) << ARM_BPU_BP_PID3_CUSTOMER_MOD_NUMBER_Pos))  
#define ARM_BPU_BP_PID3_ECO_REV_NUMBER_Pos    4  /**< \brief (ARM_BPU_BP_PID3) ECO Revision Number                        */
#define ARM_BPU_BP_PID3_ECO_REV_NUMBER_Msk    (0xFul << ARM_BPU_BP_PID3_ECO_REV_NUMBER_Pos)
#define ARM_BPU_BP_PID3_ECO_REV_NUMBER(value) (ARM_BPU_BP_PID3_ECO_REV_NUMBER_Msk & ((value) << ARM_BPU_BP_PID3_ECO_REV_NUMBER_Pos))  
#define ARM_BPU_BP_PID3_MASK                  0xFFul    /**< \brief (ARM_BPU_BP_PID3) Register MASK */

/* -------- ARM_BPU_BP_CID0 : (ARM_BPU Offset: 0xff0) (R/  8) Component ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  BP_CID0:8;                 /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_BPU_BP_CID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_BPU_BP_CID0_OFFSET                0xFF0          /**<  \brief (ARM_BPU_BP_CID0 offset) Component ID Register 0 */
#define ARM_BPU_BP_CID0_RESETVALUE            0x0Dul         /**<  \brief (ARM_BPU_BP_CID0 reset_value) Component ID Register 0 */

#define ARM_BPU_BP_CID0_BP_CID0_Pos           0  /**< \brief (ARM_BPU_BP_CID0)                                            */
#define ARM_BPU_BP_CID0_BP_CID0_Msk           (0xFFul << ARM_BPU_BP_CID0_BP_CID0_Pos)
#define ARM_BPU_BP_CID0_BP_CID0(value)        (ARM_BPU_BP_CID0_BP_CID0_Msk & ((value) << ARM_BPU_BP_CID0_BP_CID0_Pos))  
#define ARM_BPU_BP_CID0_MASK                  0xFFul    /**< \brief (ARM_BPU_BP_CID0) Register MASK */

/* -------- ARM_BPU_BP_CID1 : (ARM_BPU Offset: 0xff4) (R/  8) Component ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  BP_CID1:8;                 /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_BPU_BP_CID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_BPU_BP_CID1_OFFSET                0xFF4          /**<  \brief (ARM_BPU_BP_CID1 offset) Component ID Register 1 */
#define ARM_BPU_BP_CID1_RESETVALUE            0xE0ul         /**<  \brief (ARM_BPU_BP_CID1 reset_value) Component ID Register 1 */

#define ARM_BPU_BP_CID1_BP_CID1_Pos           0  /**< \brief (ARM_BPU_BP_CID1)                                            */
#define ARM_BPU_BP_CID1_BP_CID1_Msk           (0xFFul << ARM_BPU_BP_CID1_BP_CID1_Pos)
#define ARM_BPU_BP_CID1_BP_CID1(value)        (ARM_BPU_BP_CID1_BP_CID1_Msk & ((value) << ARM_BPU_BP_CID1_BP_CID1_Pos))  
#define ARM_BPU_BP_CID1_MASK                  0xFFul    /**< \brief (ARM_BPU_BP_CID1) Register MASK */

/* -------- ARM_BPU_BP_CID2 : (ARM_BPU Offset: 0xff8) (R/  8) Component ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  BP_CID2:8;                 /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_BPU_BP_CID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_BPU_BP_CID2_OFFSET                0xFF8          /**<  \brief (ARM_BPU_BP_CID2 offset) Component ID Register 2 */
#define ARM_BPU_BP_CID2_RESETVALUE            0x05ul         /**<  \brief (ARM_BPU_BP_CID2 reset_value) Component ID Register 2 */

#define ARM_BPU_BP_CID2_BP_CID2_Pos           0  /**< \brief (ARM_BPU_BP_CID2)                                            */
#define ARM_BPU_BP_CID2_BP_CID2_Msk           (0xFFul << ARM_BPU_BP_CID2_BP_CID2_Pos)
#define ARM_BPU_BP_CID2_BP_CID2(value)        (ARM_BPU_BP_CID2_BP_CID2_Msk & ((value) << ARM_BPU_BP_CID2_BP_CID2_Pos))  
#define ARM_BPU_BP_CID2_MASK                  0xFFul    /**< \brief (ARM_BPU_BP_CID2) Register MASK */

/* -------- ARM_BPU_BP_CID3 : (ARM_BPU Offset: 0xffc) (R/  8) Component ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  BP_CID3:8;                 /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_BPU_BP_CID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_BPU_BP_CID3_OFFSET                0xFFC          /**<  \brief (ARM_BPU_BP_CID3 offset) Component ID Register 3 */
#define ARM_BPU_BP_CID3_RESETVALUE            0xB1ul         /**<  \brief (ARM_BPU_BP_CID3 reset_value) Component ID Register 3 */

#define ARM_BPU_BP_CID3_BP_CID3_Pos           0  /**< \brief (ARM_BPU_BP_CID3)                                            */
#define ARM_BPU_BP_CID3_BP_CID3_Msk           (0xFFul << ARM_BPU_BP_CID3_BP_CID3_Pos)
#define ARM_BPU_BP_CID3_BP_CID3(value)        (ARM_BPU_BP_CID3_BP_CID3_Msk & ((value) << ARM_BPU_BP_CID3_BP_CID3_Pos))  
#define ARM_BPU_BP_CID3_MASK                  0xFFul    /**< \brief (ARM_BPU_BP_CID3) Register MASK */

/** \brief ARM_BPU hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* ARM Breakpoint Control */
  __IO ARM_BPU_BP_CTRL_Type           BP_CTRL;        /**< \brief Offset: 0x00 (R/W   8) Break Point Control Register */
       RoReg8                         Reserved1[0x7];
  __IO ARM_BPU_BP_COMP0_Type          BP_COMP0;       /**< \brief Offset: 0x08 (R/W  32) Break Point Compare Register 0 */
  __IO ARM_BPU_BP_COMP1_Type          BP_COMP1;       /**< \brief Offset: 0x0C (R/W  32) Break Point Compare Register 1 */
  __IO ARM_BPU_BP_COMP2_Type          BP_COMP2;       /**< \brief Offset: 0x10 (R/W  32) Break Point Compare Register 2 */
  __IO ARM_BPU_BP_COMP3_Type          BP_COMP3;       /**< \brief Offset: 0x14 (R/W  32) Break Point Compare Register 3 */
       RoReg8                         Reserved2[0xFB8];
  __I  ARM_BPU_BP_PID4_Type           BP_PID4;        /**< \brief Offset: 0xFD0 (R/    8) Peripheral ID Register 4 */
       RoReg8                         Reserved3[0xF];
  __I  ARM_BPU_BP_PID0_Type           BP_PID0;        /**< \brief Offset: 0xFE0 (R/    8) Peripheral ID Register 0 */
       RoReg8                         Reserved4[0x3];
  __I  ARM_BPU_BP_PID1_Type           BP_PID1;        /**< \brief Offset: 0xFE4 (R/    8) Peripheral ID Register 1 */
       RoReg8                         Reserved5[0x3];
  __I  ARM_BPU_BP_PID2_Type           BP_PID2;        /**< \brief Offset: 0xFE8 (R/    8) Peripheral ID Register 2 */
       RoReg8                         Reserved6[0x3];
  __I  ARM_BPU_BP_PID3_Type           BP_PID3;        /**< \brief Offset: 0xFEC (R/    8) Peripheral ID Register 3 */
       RoReg8                         Reserved7[0x3];
  __I  ARM_BPU_BP_CID0_Type           BP_CID0;        /**< \brief Offset: 0xFF0 (R/    8) Component ID Register 0 */
       RoReg8                         Reserved8[0x3];
  __I  ARM_BPU_BP_CID1_Type           BP_CID1;        /**< \brief Offset: 0xFF4 (R/    8) Component ID Register 1 */
       RoReg8                         Reserved9[0x3];
  __I  ARM_BPU_BP_CID2_Type           BP_CID2;        /**< \brief Offset: 0xFF8 (R/    8) Component ID Register 2 */
       RoReg8                         Reserved10[0x3];
  __I  ARM_BPU_BP_CID3_Type           BP_CID3;        /**< \brief Offset: 0xFFC (R/    8) Component ID Register 3 */
} ArmBpu;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_ARM_BPU_COMPONENT_ */
