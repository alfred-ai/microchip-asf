/**
 * \file
 *
 * \brief Component description for ARM_DWT
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

#ifndef _SAMB11_ARM_DWT_COMPONENT_
#define _SAMB11_ARM_DWT_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ARM_DWT */
/* ========================================================================== */
/** \addtogroup SAMB11_ARM_DWT ARM DWT Control */
/*@{*/

#define ARM_DWT_ADWT1234
#define REV_ARM_DWT                      0x100

/* -------- ARM_DWT_DWT_CTRL : (ARM_DWT Offset: 0x00) (R/  32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :28;                       /*!< bit:  0..27  Reserved                                 */
    uint32_t NUMCOMP:4;                 /*!< bit: 28..31  Number of comparators available          */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_CTRL_OFFSET               0x00           /**<  \brief (ARM_DWT_DWT_CTRL offset) Control Register */
#define ARM_DWT_DWT_CTRL_RESETVALUE           0x00ul         /**<  \brief (ARM_DWT_DWT_CTRL reset_value) Control Register */

#define ARM_DWT_DWT_CTRL_NUMCOMP_Pos          28  /**< \brief (ARM_DWT_DWT_CTRL) Number of comparators available           */
#define ARM_DWT_DWT_CTRL_NUMCOMP_Msk          (0xFul << ARM_DWT_DWT_CTRL_NUMCOMP_Pos)
#define ARM_DWT_DWT_CTRL_NUMCOMP(value)       (ARM_DWT_DWT_CTRL_NUMCOMP_Msk & ((value) << ARM_DWT_DWT_CTRL_NUMCOMP_Pos))  
#define ARM_DWT_DWT_CTRL_MASK                 0xF0000000ul    /**< \brief (ARM_DWT_DWT_CTRL) Register MASK */

/* -------- ARM_DWT_DWT_PCSR : (ARM_DWT Offset: 0x1c) (R/  32) Program Counter Sample Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EIASAMPLE:32;              /*!< bit:  0..31  Executed Instruction Address sample value */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_PCSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_PCSR_OFFSET               0x1C           /**<  \brief (ARM_DWT_DWT_PCSR offset) Program Counter Sample Register */
#define ARM_DWT_DWT_PCSR_RESETVALUE           0x00ul         /**<  \brief (ARM_DWT_DWT_PCSR reset_value) Program Counter Sample Register */

#define ARM_DWT_DWT_PCSR_EIASAMPLE_Pos        0  /**< \brief (ARM_DWT_DWT_PCSR) Executed Instruction Address sample value */
#define ARM_DWT_DWT_PCSR_EIASAMPLE_Msk        (0xFFFFFFFFul << ARM_DWT_DWT_PCSR_EIASAMPLE_Pos)
#define ARM_DWT_DWT_PCSR_EIASAMPLE(value)     (ARM_DWT_DWT_PCSR_EIASAMPLE_Msk & ((value) << ARM_DWT_DWT_PCSR_EIASAMPLE_Pos))  
#define ARM_DWT_DWT_PCSR_MASK                 0xFFFFFFFFul    /**< \brief (ARM_DWT_DWT_PCSR) Register MASK */

/* -------- ARM_DWT_DWT_COMP0 : (ARM_DWT Offset: 0x20) (R/W  32) DWT Compare Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t COMP:32;                   /*!< bit:  0..31  Reference Value for Comparison           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_COMP0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_COMP0_OFFSET              0x20           /**<  \brief (ARM_DWT_DWT_COMP0 offset) DWT Compare Register 0 */
#define ARM_DWT_DWT_COMP0_RESETVALUE          0x00ul         /**<  \brief (ARM_DWT_DWT_COMP0 reset_value) DWT Compare Register 0 */

#define ARM_DWT_DWT_COMP0_COMP_Pos            0  /**< \brief (ARM_DWT_DWT_COMP0) Reference Value for Comparison           */
#define ARM_DWT_DWT_COMP0_COMP_Msk            (0xFFFFFFFFul << ARM_DWT_DWT_COMP0_COMP_Pos)
#define ARM_DWT_DWT_COMP0_COMP(value)         (ARM_DWT_DWT_COMP0_COMP_Msk & ((value) << ARM_DWT_DWT_COMP0_COMP_Pos))  
#define ARM_DWT_DWT_COMP0_MASK                0xFFFFFFFFul    /**< \brief (ARM_DWT_DWT_COMP0) Register MASK */

/* -------- ARM_DWT_DWT_MASK0 : (ARM_DWT Offset: 0x24) (R/W  8) DWT Mask Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  MASK_VALUE:5;              /*!< bit:   0..4  Size of the ignore mask applied to address range matching */
    uint8_t  :3;                        /*!< bit:   5..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_MASK0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_MASK0_OFFSET              0x24           /**<  \brief (ARM_DWT_DWT_MASK0 offset) DWT Mask Register 0 */
#define ARM_DWT_DWT_MASK0_RESETVALUE          0x00ul         /**<  \brief (ARM_DWT_DWT_MASK0 reset_value) DWT Mask Register 0 */

#define ARM_DWT_DWT_MASK0_MASK_VALUE_Pos      0  /**< \brief (ARM_DWT_DWT_MASK0) Size of the ignore mask applied to address range matching */
#define ARM_DWT_DWT_MASK0_MASK_VALUE_Msk      (0x1Ful << ARM_DWT_DWT_MASK0_MASK_VALUE_Pos)
#define ARM_DWT_DWT_MASK0_MASK_VALUE(value)   (ARM_DWT_DWT_MASK0_MASK_VALUE_Msk & ((value) << ARM_DWT_DWT_MASK0_MASK_VALUE_Pos))  
#define ARM_DWT_DWT_MASK0_MASK                0x1Ful    /**< \brief (ARM_DWT_DWT_MASK0) Register MASK */

/* -------- ARM_DWT_DWT_FUNCTION0 : (ARM_DWT Offset: 0x28) (R/  32) DWT Function Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FUNCTION:4;                /*!< bit:   0..3  Select action on comparator match        */
    uint32_t :20;                       /*!< bit:  4..23  Reserved                                 */
    uint32_t MATCHED:1;                 /*!< bit:     24  Comparator Match                         */
    uint32_t :7;                        /*!< bit: 25..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_FUNCTION0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_FUNCTION0_OFFSET          0x28           /**<  \brief (ARM_DWT_DWT_FUNCTION0 offset) DWT Function Register 0 */
#define ARM_DWT_DWT_FUNCTION0_RESETVALUE      0x00ul         /**<  \brief (ARM_DWT_DWT_FUNCTION0 reset_value) DWT Function Register 0 */

#define ARM_DWT_DWT_FUNCTION0_FUNCTION_Pos    0  /**< \brief (ARM_DWT_DWT_FUNCTION0) Select action on comparator match    */
#define ARM_DWT_DWT_FUNCTION0_FUNCTION_Msk    (0xFul << ARM_DWT_DWT_FUNCTION0_FUNCTION_Pos)
#define ARM_DWT_DWT_FUNCTION0_FUNCTION(value) (ARM_DWT_DWT_FUNCTION0_FUNCTION_Msk & ((value) << ARM_DWT_DWT_FUNCTION0_FUNCTION_Pos))  
#define   ARM_DWT_DWT_FUNCTION0_FUNCTION_0_Val        0X0ul  /**< \brief (ARM_DWT_DWT_FUNCTION0) Disabled  */
#define   ARM_DWT_DWT_FUNCTION0_FUNCTION_4_Val        0X4ul  /**< \brief (ARM_DWT_DWT_FUNCTION0) PC Watchpoint Event (Instruction)  */
#define   ARM_DWT_DWT_FUNCTION0_FUNCTION_5_Val        0X5ul  /**< \brief (ARM_DWT_DWT_FUNCTION0) Watchpoint Event Read Only (Data)  */
#define   ARM_DWT_DWT_FUNCTION0_FUNCTION_6_Val        0X6ul  /**< \brief (ARM_DWT_DWT_FUNCTION0) Watchpoint Event Write Only (Data)  */
#define   ARM_DWT_DWT_FUNCTION0_FUNCTION_7_Val        0X7ul  /**< \brief (ARM_DWT_DWT_FUNCTION0) Watchpoing Event Write-Read (Data)  */
#define ARM_DWT_DWT_FUNCTION0_FUNCTION_0      (ARM_DWT_DWT_FUNCTION0_FUNCTION_0_Val << ARM_DWT_DWT_FUNCTION0_FUNCTION_Pos)
#define ARM_DWT_DWT_FUNCTION0_FUNCTION_4      (ARM_DWT_DWT_FUNCTION0_FUNCTION_4_Val << ARM_DWT_DWT_FUNCTION0_FUNCTION_Pos)
#define ARM_DWT_DWT_FUNCTION0_FUNCTION_5      (ARM_DWT_DWT_FUNCTION0_FUNCTION_5_Val << ARM_DWT_DWT_FUNCTION0_FUNCTION_Pos)
#define ARM_DWT_DWT_FUNCTION0_FUNCTION_6      (ARM_DWT_DWT_FUNCTION0_FUNCTION_6_Val << ARM_DWT_DWT_FUNCTION0_FUNCTION_Pos)
#define ARM_DWT_DWT_FUNCTION0_FUNCTION_7      (ARM_DWT_DWT_FUNCTION0_FUNCTION_7_Val << ARM_DWT_DWT_FUNCTION0_FUNCTION_Pos)
#define ARM_DWT_DWT_FUNCTION0_MATCHED_Pos     24  /**< \brief (ARM_DWT_DWT_FUNCTION0) Comparator Match                     */
#define ARM_DWT_DWT_FUNCTION0_MATCHED         (0x1ul << ARM_DWT_DWT_FUNCTION0_MATCHED_Pos)  
#define ARM_DWT_DWT_FUNCTION0_MASK            0x100000Ful    /**< \brief (ARM_DWT_DWT_FUNCTION0) Register MASK */

/* -------- ARM_DWT_DWT_COMP1 : (ARM_DWT Offset: 0x30) (R/W  32) DWT Compare Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t COMP:32;                   /*!< bit:  0..31  Reference Value for Comparison           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_COMP1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_COMP1_OFFSET              0x30           /**<  \brief (ARM_DWT_DWT_COMP1 offset) DWT Compare Register 1 */
#define ARM_DWT_DWT_COMP1_RESETVALUE          0x00ul         /**<  \brief (ARM_DWT_DWT_COMP1 reset_value) DWT Compare Register 1 */

#define ARM_DWT_DWT_COMP1_COMP_Pos            0  /**< \brief (ARM_DWT_DWT_COMP1) Reference Value for Comparison           */
#define ARM_DWT_DWT_COMP1_COMP_Msk            (0xFFFFFFFFul << ARM_DWT_DWT_COMP1_COMP_Pos)
#define ARM_DWT_DWT_COMP1_COMP(value)         (ARM_DWT_DWT_COMP1_COMP_Msk & ((value) << ARM_DWT_DWT_COMP1_COMP_Pos))  
#define ARM_DWT_DWT_COMP1_MASK                0xFFFFFFFFul    /**< \brief (ARM_DWT_DWT_COMP1) Register MASK */

/* -------- ARM_DWT_DWT_MASK1 : (ARM_DWT Offset: 0x34) (R/W  8) DWT Mask Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  MASK_VALUE:5;              /*!< bit:   0..4  Size of the ignore mask applied to address range matching */
    uint8_t  :3;                        /*!< bit:   5..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_MASK1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_MASK1_OFFSET              0x34           /**<  \brief (ARM_DWT_DWT_MASK1 offset) DWT Mask Register 1 */
#define ARM_DWT_DWT_MASK1_RESETVALUE          0x00ul         /**<  \brief (ARM_DWT_DWT_MASK1 reset_value) DWT Mask Register 1 */

#define ARM_DWT_DWT_MASK1_MASK_VALUE_Pos      0  /**< \brief (ARM_DWT_DWT_MASK1) Size of the ignore mask applied to address range matching */
#define ARM_DWT_DWT_MASK1_MASK_VALUE_Msk      (0x1Ful << ARM_DWT_DWT_MASK1_MASK_VALUE_Pos)
#define ARM_DWT_DWT_MASK1_MASK_VALUE(value)   (ARM_DWT_DWT_MASK1_MASK_VALUE_Msk & ((value) << ARM_DWT_DWT_MASK1_MASK_VALUE_Pos))  
#define ARM_DWT_DWT_MASK1_MASK                0x1Ful    /**< \brief (ARM_DWT_DWT_MASK1) Register MASK */

/* -------- ARM_DWT_DWT_FUNCTION1 : (ARM_DWT Offset: 0x38) (R/  32) DWT Function Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FUNCTION:4;                /*!< bit:   0..3  Select action on comparator match        */
    uint32_t :20;                       /*!< bit:  4..23  Reserved                                 */
    uint32_t MATCHED:1;                 /*!< bit:     24  Comparator Match                         */
    uint32_t :7;                        /*!< bit: 25..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_FUNCTION1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_FUNCTION1_OFFSET          0x38           /**<  \brief (ARM_DWT_DWT_FUNCTION1 offset) DWT Function Register 1 */
#define ARM_DWT_DWT_FUNCTION1_RESETVALUE      0x00ul         /**<  \brief (ARM_DWT_DWT_FUNCTION1 reset_value) DWT Function Register 1 */

#define ARM_DWT_DWT_FUNCTION1_FUNCTION_Pos    0  /**< \brief (ARM_DWT_DWT_FUNCTION1) Select action on comparator match    */
#define ARM_DWT_DWT_FUNCTION1_FUNCTION_Msk    (0xFul << ARM_DWT_DWT_FUNCTION1_FUNCTION_Pos)
#define ARM_DWT_DWT_FUNCTION1_FUNCTION(value) (ARM_DWT_DWT_FUNCTION1_FUNCTION_Msk & ((value) << ARM_DWT_DWT_FUNCTION1_FUNCTION_Pos))  
#define   ARM_DWT_DWT_FUNCTION1_FUNCTION_0_Val        0X0ul  /**< \brief (ARM_DWT_DWT_FUNCTION1) Disabled  */
#define   ARM_DWT_DWT_FUNCTION1_FUNCTION_4_Val        0X4ul  /**< \brief (ARM_DWT_DWT_FUNCTION1) PC Watchpoint Event (Instruction)  */
#define   ARM_DWT_DWT_FUNCTION1_FUNCTION_5_Val        0X5ul  /**< \brief (ARM_DWT_DWT_FUNCTION1) Watchpoint Event Read Only (Data)  */
#define   ARM_DWT_DWT_FUNCTION1_FUNCTION_6_Val        0X6ul  /**< \brief (ARM_DWT_DWT_FUNCTION1) Watchpoint Event Write Only (Data)  */
#define   ARM_DWT_DWT_FUNCTION1_FUNCTION_7_Val        0X7ul  /**< \brief (ARM_DWT_DWT_FUNCTION1) Watchpoing Event Write-Read (Data)  */
#define ARM_DWT_DWT_FUNCTION1_FUNCTION_0      (ARM_DWT_DWT_FUNCTION1_FUNCTION_0_Val << ARM_DWT_DWT_FUNCTION1_FUNCTION_Pos)
#define ARM_DWT_DWT_FUNCTION1_FUNCTION_4      (ARM_DWT_DWT_FUNCTION1_FUNCTION_4_Val << ARM_DWT_DWT_FUNCTION1_FUNCTION_Pos)
#define ARM_DWT_DWT_FUNCTION1_FUNCTION_5      (ARM_DWT_DWT_FUNCTION1_FUNCTION_5_Val << ARM_DWT_DWT_FUNCTION1_FUNCTION_Pos)
#define ARM_DWT_DWT_FUNCTION1_FUNCTION_6      (ARM_DWT_DWT_FUNCTION1_FUNCTION_6_Val << ARM_DWT_DWT_FUNCTION1_FUNCTION_Pos)
#define ARM_DWT_DWT_FUNCTION1_FUNCTION_7      (ARM_DWT_DWT_FUNCTION1_FUNCTION_7_Val << ARM_DWT_DWT_FUNCTION1_FUNCTION_Pos)
#define ARM_DWT_DWT_FUNCTION1_MATCHED_Pos     24  /**< \brief (ARM_DWT_DWT_FUNCTION1) Comparator Match                     */
#define ARM_DWT_DWT_FUNCTION1_MATCHED         (0x1ul << ARM_DWT_DWT_FUNCTION1_MATCHED_Pos)  
#define ARM_DWT_DWT_FUNCTION1_MASK            0x100000Ful    /**< \brief (ARM_DWT_DWT_FUNCTION1) Register MASK */

/* -------- ARM_DWT_DWT_PID4 : (ARM_DWT Offset: 0xfd0) (R/  8) Peripheral ID Register 4 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_C_CODE:4;           /*!< bit:   0..3  JEP106 C Code                            */
    uint8_t  BLOCK_COUNT:4;             /*!< bit:   4..7  Block Count                              */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_PID4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_PID4_OFFSET               0xFD0          /**<  \brief (ARM_DWT_DWT_PID4 offset) Peripheral ID Register 4 */
#define ARM_DWT_DWT_PID4_RESETVALUE           0x04ul         /**<  \brief (ARM_DWT_DWT_PID4 reset_value) Peripheral ID Register 4 */

#define ARM_DWT_DWT_PID4_JEP106_C_CODE_Pos    0  /**< \brief (ARM_DWT_DWT_PID4) JEP106 C Code                             */
#define ARM_DWT_DWT_PID4_JEP106_C_CODE_Msk    (0xFul << ARM_DWT_DWT_PID4_JEP106_C_CODE_Pos)
#define ARM_DWT_DWT_PID4_JEP106_C_CODE(value) (ARM_DWT_DWT_PID4_JEP106_C_CODE_Msk & ((value) << ARM_DWT_DWT_PID4_JEP106_C_CODE_Pos))  
#define ARM_DWT_DWT_PID4_BLOCK_COUNT_Pos      4  /**< \brief (ARM_DWT_DWT_PID4) Block Count                               */
#define ARM_DWT_DWT_PID4_BLOCK_COUNT_Msk      (0xFul << ARM_DWT_DWT_PID4_BLOCK_COUNT_Pos)
#define ARM_DWT_DWT_PID4_BLOCK_COUNT(value)   (ARM_DWT_DWT_PID4_BLOCK_COUNT_Msk & ((value) << ARM_DWT_DWT_PID4_BLOCK_COUNT_Pos))  
#define ARM_DWT_DWT_PID4_MASK                 0xFFul    /**< \brief (ARM_DWT_DWT_PID4) Register MASK */

/* -------- ARM_DWT_DWT_PID0 : (ARM_DWT Offset: 0xfe0) (R/  8) Peripheral ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:8;             /*!< bit:   0..7  Part Number Bits 7:0                     */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_PID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_PID0_OFFSET               0xFE0          /**<  \brief (ARM_DWT_DWT_PID0 offset) Peripheral ID Register 0 */
#define ARM_DWT_DWT_PID0_RESETVALUE           0x0Aul         /**<  \brief (ARM_DWT_DWT_PID0 reset_value) Peripheral ID Register 0 */

#define ARM_DWT_DWT_PID0_PART_NUMBER_Pos      0  /**< \brief (ARM_DWT_DWT_PID0) Part Number Bits 7:0                      */
#define ARM_DWT_DWT_PID0_PART_NUMBER_Msk      (0xFFul << ARM_DWT_DWT_PID0_PART_NUMBER_Pos)
#define ARM_DWT_DWT_PID0_PART_NUMBER(value)   (ARM_DWT_DWT_PID0_PART_NUMBER_Msk & ((value) << ARM_DWT_DWT_PID0_PART_NUMBER_Pos))  
#define ARM_DWT_DWT_PID0_MASK                 0xFFul    /**< \brief (ARM_DWT_DWT_PID0) Register MASK */

/* -------- ARM_DWT_DWT_PID1 : (ARM_DWT Offset: 0xfe4) (R/  8) Peripheral ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:4;             /*!< bit:   0..3  Part Number Bits 11:8                    */
    uint8_t  JEP106_ID_3_0:4;           /*!< bit:   4..7  JEP106 ID Code Bits 3:0                  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_PID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_PID1_OFFSET               0xFE4          /**<  \brief (ARM_DWT_DWT_PID1 offset) Peripheral ID Register 1 */
#define ARM_DWT_DWT_PID1_RESETVALUE           0xB0ul         /**<  \brief (ARM_DWT_DWT_PID1 reset_value) Peripheral ID Register 1 */

#define ARM_DWT_DWT_PID1_PART_NUMBER_Pos      0  /**< \brief (ARM_DWT_DWT_PID1) Part Number Bits 11:8                     */
#define ARM_DWT_DWT_PID1_PART_NUMBER_Msk      (0xFul << ARM_DWT_DWT_PID1_PART_NUMBER_Pos)
#define ARM_DWT_DWT_PID1_PART_NUMBER(value)   (ARM_DWT_DWT_PID1_PART_NUMBER_Msk & ((value) << ARM_DWT_DWT_PID1_PART_NUMBER_Pos))  
#define ARM_DWT_DWT_PID1_JEP106_ID_3_0_Pos    4  /**< \brief (ARM_DWT_DWT_PID1) JEP106 ID Code Bits 3:0                   */
#define ARM_DWT_DWT_PID1_JEP106_ID_3_0_Msk    (0xFul << ARM_DWT_DWT_PID1_JEP106_ID_3_0_Pos)
#define ARM_DWT_DWT_PID1_JEP106_ID_3_0(value) (ARM_DWT_DWT_PID1_JEP106_ID_3_0_Msk & ((value) << ARM_DWT_DWT_PID1_JEP106_ID_3_0_Pos))  
#define ARM_DWT_DWT_PID1_MASK                 0xFFul    /**< \brief (ARM_DWT_DWT_PID1) Register MASK */

/* -------- ARM_DWT_DWT_PID2 : (ARM_DWT Offset: 0xfe8) (R/  8) Peripheral ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_ID_6_4:3;           /*!< bit:   0..2  JEP106 ID Code Bits 6:4                  */
    uint8_t  JEDEC_USED:1;              /*!< bit:      3  JEDEC Used                               */
    uint8_t  REVISION:4;                /*!< bit:   4..7  Revision                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_PID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_PID2_OFFSET               0xFE8          /**<  \brief (ARM_DWT_DWT_PID2 offset) Peripheral ID Register 2 */
#define ARM_DWT_DWT_PID2_RESETVALUE           0x0Bul         /**<  \brief (ARM_DWT_DWT_PID2 reset_value) Peripheral ID Register 2 */

#define ARM_DWT_DWT_PID2_JEP106_ID_6_4_Pos    0  /**< \brief (ARM_DWT_DWT_PID2) JEP106 ID Code Bits 6:4                   */
#define ARM_DWT_DWT_PID2_JEP106_ID_6_4_Msk    (0x7ul << ARM_DWT_DWT_PID2_JEP106_ID_6_4_Pos)
#define ARM_DWT_DWT_PID2_JEP106_ID_6_4(value) (ARM_DWT_DWT_PID2_JEP106_ID_6_4_Msk & ((value) << ARM_DWT_DWT_PID2_JEP106_ID_6_4_Pos))  
#define ARM_DWT_DWT_PID2_JEDEC_USED_Pos       3  /**< \brief (ARM_DWT_DWT_PID2) JEDEC Used                                */
#define ARM_DWT_DWT_PID2_JEDEC_USED           (0x1ul << ARM_DWT_DWT_PID2_JEDEC_USED_Pos)  
#define ARM_DWT_DWT_PID2_REVISION_Pos         4  /**< \brief (ARM_DWT_DWT_PID2) Revision                                  */
#define ARM_DWT_DWT_PID2_REVISION_Msk         (0xFul << ARM_DWT_DWT_PID2_REVISION_Pos)
#define ARM_DWT_DWT_PID2_REVISION(value)      (ARM_DWT_DWT_PID2_REVISION_Msk & ((value) << ARM_DWT_DWT_PID2_REVISION_Pos))  
#define ARM_DWT_DWT_PID2_MASK                 0xFFul    /**< \brief (ARM_DWT_DWT_PID2) Register MASK */

/* -------- ARM_DWT_DWT_PID3 : (ARM_DWT Offset: 0xfec) (R/  8) Peripheral ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CUSTOMER_MOD_NUMBER:4;     /*!< bit:   0..3  Customer Modification Number             */
    uint8_t  ECO_REV_NUMBER:4;          /*!< bit:   4..7  ECO Revision Number                      */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_PID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_PID3_OFFSET               0xFEC          /**<  \brief (ARM_DWT_DWT_PID3 offset) Peripheral ID Register 3 */
#define ARM_DWT_DWT_PID3_RESETVALUE           0x00ul         /**<  \brief (ARM_DWT_DWT_PID3 reset_value) Peripheral ID Register 3 */

#define ARM_DWT_DWT_PID3_CUSTOMER_MOD_NUMBER_Pos 0  /**< \brief (ARM_DWT_DWT_PID3) Customer Modification Number              */
#define ARM_DWT_DWT_PID3_CUSTOMER_MOD_NUMBER_Msk (0xFul << ARM_DWT_DWT_PID3_CUSTOMER_MOD_NUMBER_Pos)
#define ARM_DWT_DWT_PID3_CUSTOMER_MOD_NUMBER(value) (ARM_DWT_DWT_PID3_CUSTOMER_MOD_NUMBER_Msk & ((value) << ARM_DWT_DWT_PID3_CUSTOMER_MOD_NUMBER_Pos))  
#define ARM_DWT_DWT_PID3_ECO_REV_NUMBER_Pos   4  /**< \brief (ARM_DWT_DWT_PID3) ECO Revision Number                       */
#define ARM_DWT_DWT_PID3_ECO_REV_NUMBER_Msk   (0xFul << ARM_DWT_DWT_PID3_ECO_REV_NUMBER_Pos)
#define ARM_DWT_DWT_PID3_ECO_REV_NUMBER(value) (ARM_DWT_DWT_PID3_ECO_REV_NUMBER_Msk & ((value) << ARM_DWT_DWT_PID3_ECO_REV_NUMBER_Pos))  
#define ARM_DWT_DWT_PID3_MASK                 0xFFul    /**< \brief (ARM_DWT_DWT_PID3) Register MASK */

/* -------- ARM_DWT_DWT_CID0 : (ARM_DWT Offset: 0xff0) (R/  8) Component ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  DWT_CID0:8;                /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_CID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_CID0_OFFSET               0xFF0          /**<  \brief (ARM_DWT_DWT_CID0 offset) Component ID Register 0 */
#define ARM_DWT_DWT_CID0_RESETVALUE           0x0Dul         /**<  \brief (ARM_DWT_DWT_CID0 reset_value) Component ID Register 0 */

#define ARM_DWT_DWT_CID0_DWT_CID0_Pos         0  /**< \brief (ARM_DWT_DWT_CID0)                                           */
#define ARM_DWT_DWT_CID0_DWT_CID0_Msk         (0xFFul << ARM_DWT_DWT_CID0_DWT_CID0_Pos)
#define ARM_DWT_DWT_CID0_DWT_CID0(value)      (ARM_DWT_DWT_CID0_DWT_CID0_Msk & ((value) << ARM_DWT_DWT_CID0_DWT_CID0_Pos))  
#define ARM_DWT_DWT_CID0_MASK                 0xFFul    /**< \brief (ARM_DWT_DWT_CID0) Register MASK */

/* -------- ARM_DWT_DWT_CID1 : (ARM_DWT Offset: 0xff4) (R/  8) Component ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  DWT_CID1:8;                /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_CID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_CID1_OFFSET               0xFF4          /**<  \brief (ARM_DWT_DWT_CID1 offset) Component ID Register 1 */
#define ARM_DWT_DWT_CID1_RESETVALUE           0xE0ul         /**<  \brief (ARM_DWT_DWT_CID1 reset_value) Component ID Register 1 */

#define ARM_DWT_DWT_CID1_DWT_CID1_Pos         0  /**< \brief (ARM_DWT_DWT_CID1)                                           */
#define ARM_DWT_DWT_CID1_DWT_CID1_Msk         (0xFFul << ARM_DWT_DWT_CID1_DWT_CID1_Pos)
#define ARM_DWT_DWT_CID1_DWT_CID1(value)      (ARM_DWT_DWT_CID1_DWT_CID1_Msk & ((value) << ARM_DWT_DWT_CID1_DWT_CID1_Pos))  
#define ARM_DWT_DWT_CID1_MASK                 0xFFul    /**< \brief (ARM_DWT_DWT_CID1) Register MASK */

/* -------- ARM_DWT_DWT_CID2 : (ARM_DWT Offset: 0xff8) (R/  8) Component ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  DWT_CID2:8;                /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_CID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_CID2_OFFSET               0xFF8          /**<  \brief (ARM_DWT_DWT_CID2 offset) Component ID Register 2 */
#define ARM_DWT_DWT_CID2_RESETVALUE           0x05ul         /**<  \brief (ARM_DWT_DWT_CID2 reset_value) Component ID Register 2 */

#define ARM_DWT_DWT_CID2_DWT_CID2_Pos         0  /**< \brief (ARM_DWT_DWT_CID2)                                           */
#define ARM_DWT_DWT_CID2_DWT_CID2_Msk         (0xFFul << ARM_DWT_DWT_CID2_DWT_CID2_Pos)
#define ARM_DWT_DWT_CID2_DWT_CID2(value)      (ARM_DWT_DWT_CID2_DWT_CID2_Msk & ((value) << ARM_DWT_DWT_CID2_DWT_CID2_Pos))  
#define ARM_DWT_DWT_CID2_MASK                 0xFFul    /**< \brief (ARM_DWT_DWT_CID2) Register MASK */

/* -------- ARM_DWT_DWT_CID3 : (ARM_DWT Offset: 0xffc) (R/  8) Component ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  DWT_CID3:8;                /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_DWT_DWT_CID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_DWT_DWT_CID3_OFFSET               0xFFC          /**<  \brief (ARM_DWT_DWT_CID3 offset) Component ID Register 3 */
#define ARM_DWT_DWT_CID3_RESETVALUE           0xB1ul         /**<  \brief (ARM_DWT_DWT_CID3 reset_value) Component ID Register 3 */

#define ARM_DWT_DWT_CID3_DWT_CID3_Pos         0  /**< \brief (ARM_DWT_DWT_CID3)                                           */
#define ARM_DWT_DWT_CID3_DWT_CID3_Msk         (0xFFul << ARM_DWT_DWT_CID3_DWT_CID3_Pos)
#define ARM_DWT_DWT_CID3_DWT_CID3(value)      (ARM_DWT_DWT_CID3_DWT_CID3_Msk & ((value) << ARM_DWT_DWT_CID3_DWT_CID3_Pos))  
#define ARM_DWT_DWT_CID3_MASK                 0xFFul    /**< \brief (ARM_DWT_DWT_CID3) Register MASK */

/** \brief ARM_DWT hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* ARM DWT Control */
  __I  ARM_DWT_DWT_CTRL_Type          DWT_CTRL;       /**< \brief Offset: 0x00 (R/   32) Control Register */
       RoReg8                         Reserved1[0x18];
  __I  ARM_DWT_DWT_PCSR_Type          DWT_PCSR;       /**< \brief Offset: 0x1C (R/   32) Program Counter Sample Register */
  __IO ARM_DWT_DWT_COMP0_Type         DWT_COMP0;      /**< \brief Offset: 0x20 (R/W  32) DWT Compare Register 0 */
  __IO ARM_DWT_DWT_MASK0_Type         DWT_MASK0;      /**< \brief Offset: 0x24 (R/W   8) DWT Mask Register 0 */
       RoReg8                         Reserved2[0x3];
  __I  ARM_DWT_DWT_FUNCTION0_Type     DWT_FUNCTION0;  /**< \brief Offset: 0x28 (R/   32) DWT Function Register 0 */
       RoReg8                         Reserved3[0x4];
  __IO ARM_DWT_DWT_COMP1_Type         DWT_COMP1;      /**< \brief Offset: 0x30 (R/W  32) DWT Compare Register 1 */
  __IO ARM_DWT_DWT_MASK1_Type         DWT_MASK1;      /**< \brief Offset: 0x34 (R/W   8) DWT Mask Register 1 */
       RoReg8                         Reserved4[0x3];
  __I  ARM_DWT_DWT_FUNCTION1_Type     DWT_FUNCTION1;  /**< \brief Offset: 0x38 (R/   32) DWT Function Register 1 */
       RoReg8                         Reserved5[0xF94];
  __I  ARM_DWT_DWT_PID4_Type          DWT_PID4;       /**< \brief Offset: 0xFD0 (R/    8) Peripheral ID Register 4 */
       RoReg8                         Reserved6[0xF];
  __I  ARM_DWT_DWT_PID0_Type          DWT_PID0;       /**< \brief Offset: 0xFE0 (R/    8) Peripheral ID Register 0 */
       RoReg8                         Reserved7[0x3];
  __I  ARM_DWT_DWT_PID1_Type          DWT_PID1;       /**< \brief Offset: 0xFE4 (R/    8) Peripheral ID Register 1 */
       RoReg8                         Reserved8[0x3];
  __I  ARM_DWT_DWT_PID2_Type          DWT_PID2;       /**< \brief Offset: 0xFE8 (R/    8) Peripheral ID Register 2 */
       RoReg8                         Reserved9[0x3];
  __I  ARM_DWT_DWT_PID3_Type          DWT_PID3;       /**< \brief Offset: 0xFEC (R/    8) Peripheral ID Register 3 */
       RoReg8                         Reserved10[0x3];
  __I  ARM_DWT_DWT_CID0_Type          DWT_CID0;       /**< \brief Offset: 0xFF0 (R/    8) Component ID Register 0 */
       RoReg8                         Reserved11[0x3];
  __I  ARM_DWT_DWT_CID1_Type          DWT_CID1;       /**< \brief Offset: 0xFF4 (R/    8) Component ID Register 1 */
       RoReg8                         Reserved12[0x3];
  __I  ARM_DWT_DWT_CID2_Type          DWT_CID2;       /**< \brief Offset: 0xFF8 (R/    8) Component ID Register 2 */
       RoReg8                         Reserved13[0x3];
  __I  ARM_DWT_DWT_CID3_Type          DWT_CID3;       /**< \brief Offset: 0xFFC (R/    8) Component ID Register 3 */
} ArmDwt;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_ARM_DWT_COMPONENT_ */
