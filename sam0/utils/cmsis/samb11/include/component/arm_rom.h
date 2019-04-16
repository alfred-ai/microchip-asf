/**
 * \file
 *
 * \brief Component description for ARM_ROM
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

#ifndef _SAMB11_ARM_ROM_COMPONENT_
#define _SAMB11_ARM_ROM_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ARM_ROM */
/* ========================================================================== */
/** \addtogroup SAMB11_ARM_ROM ARM ROM */
/*@{*/

#define ARM_ROM_AR1234
#define REV_ARM_ROM                      0x100

/* -------- ARM_ROM_ROM_SCS : (ARM_ROM Offset: 0x00) (R/  32) Points to the SCS at 0xE000E000 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t ROM_SCS:32;                /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_ROM_ROM_SCS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_ROM_ROM_SCS_OFFSET                0x00           /**<  \brief (ARM_ROM_ROM_SCS offset) Points to the SCS at 0xE000E000 */
#define ARM_ROM_ROM_SCS_RESETVALUE            0xFFF0F003ul   /**<  \brief (ARM_ROM_ROM_SCS reset_value) Points to the SCS at 0xE000E000 */

#define ARM_ROM_ROM_SCS_ROM_SCS_Pos           0  /**< \brief (ARM_ROM_ROM_SCS)                                            */
#define ARM_ROM_ROM_SCS_ROM_SCS_Msk           (0xFFFFFFFFul << ARM_ROM_ROM_SCS_ROM_SCS_Pos)
#define ARM_ROM_ROM_SCS_ROM_SCS(value)        (ARM_ROM_ROM_SCS_ROM_SCS_Msk & ((value) << ARM_ROM_ROM_SCS_ROM_SCS_Pos))  
#define ARM_ROM_ROM_SCS_MASK                  0xFFFFFFFFul    /**< \brief (ARM_ROM_ROM_SCS) Register MASK */

/* -------- ARM_ROM_ROM_DWT : (ARM_ROM Offset: 0x10) (R/  32) Points to the DWT at 0xE0001000 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t ROM_DWT:32;                /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_ROM_ROM_DWT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_ROM_ROM_DWT_OFFSET                0x10           /**<  \brief (ARM_ROM_ROM_DWT offset) Points to the DWT at 0xE0001000 */
#define ARM_ROM_ROM_DWT_RESETVALUE            0xFFF02003ul   /**<  \brief (ARM_ROM_ROM_DWT reset_value) Points to the DWT at 0xE0001000 */

#define ARM_ROM_ROM_DWT_ROM_DWT_Pos           0  /**< \brief (ARM_ROM_ROM_DWT)                                            */
#define ARM_ROM_ROM_DWT_ROM_DWT_Msk           (0xFFFFFFFFul << ARM_ROM_ROM_DWT_ROM_DWT_Pos)
#define ARM_ROM_ROM_DWT_ROM_DWT(value)        (ARM_ROM_ROM_DWT_ROM_DWT_Msk & ((value) << ARM_ROM_ROM_DWT_ROM_DWT_Pos))  
#define ARM_ROM_ROM_DWT_MASK                  0xFFFFFFFFul    /**< \brief (ARM_ROM_ROM_DWT) Register MASK */

/* -------- ARM_ROM_ROM_BPU : (ARM_ROM Offset: 0x20) (R/  32) Points to the BPU at 0xE0002000 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t ROM_BPU:32;                /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_ROM_ROM_BPU_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_ROM_ROM_BPU_OFFSET                0x20           /**<  \brief (ARM_ROM_ROM_BPU offset) Points to the BPU at 0xE0002000 */
#define ARM_ROM_ROM_BPU_RESETVALUE            0xFFF03003ul   /**<  \brief (ARM_ROM_ROM_BPU reset_value) Points to the BPU at 0xE0002000 */

#define ARM_ROM_ROM_BPU_ROM_BPU_Pos           0  /**< \brief (ARM_ROM_ROM_BPU)                                            */
#define ARM_ROM_ROM_BPU_ROM_BPU_Msk           (0xFFFFFFFFul << ARM_ROM_ROM_BPU_ROM_BPU_Pos)
#define ARM_ROM_ROM_BPU_ROM_BPU(value)        (ARM_ROM_ROM_BPU_ROM_BPU_Msk & ((value) << ARM_ROM_ROM_BPU_ROM_BPU_Pos))  
#define ARM_ROM_ROM_BPU_MASK                  0xFFFFFFFFul    /**< \brief (ARM_ROM_ROM_BPU) Register MASK */

/* -------- ARM_ROM_ROM_EOT : (ARM_ROM Offset: 0x30) (R/  32) End of Table Marker -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t ROM_EOT:32;                /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_ROM_ROM_EOT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_ROM_ROM_EOT_OFFSET                0x30           /**<  \brief (ARM_ROM_ROM_EOT offset) End of Table Marker */
#define ARM_ROM_ROM_EOT_RESETVALUE            0x00ul         /**<  \brief (ARM_ROM_ROM_EOT reset_value) End of Table Marker */

#define ARM_ROM_ROM_EOT_ROM_EOT_Pos           0  /**< \brief (ARM_ROM_ROM_EOT)                                            */
#define ARM_ROM_ROM_EOT_ROM_EOT_Msk           (0xFFFFFFFFul << ARM_ROM_ROM_EOT_ROM_EOT_Pos)
#define ARM_ROM_ROM_EOT_ROM_EOT(value)        (ARM_ROM_ROM_EOT_ROM_EOT_Msk & ((value) << ARM_ROM_ROM_EOT_ROM_EOT_Pos))  
#define ARM_ROM_ROM_EOT_MASK                  0xFFFFFFFFul    /**< \brief (ARM_ROM_ROM_EOT) Register MASK */

/* -------- ARM_ROM_ROM_CSMT : (ARM_ROM Offset: 0xfcc) (R/  8) System Memory accessible through DAP -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ROM_CSMT:1;                /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_ROM_ROM_CSMT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_ROM_ROM_CSMT_OFFSET               0xFCC          /**<  \brief (ARM_ROM_ROM_CSMT offset) System Memory accessible through DAP */
#define ARM_ROM_ROM_CSMT_RESETVALUE           0x01ul         /**<  \brief (ARM_ROM_ROM_CSMT reset_value) System Memory accessible through DAP */

#define ARM_ROM_ROM_CSMT_ROM_CSMT_Pos         0  /**< \brief (ARM_ROM_ROM_CSMT)                                           */
#define ARM_ROM_ROM_CSMT_ROM_CSMT             (0x1ul << ARM_ROM_ROM_CSMT_ROM_CSMT_Pos)  
#define ARM_ROM_ROM_CSMT_MASK                 0x01ul    /**< \brief (ARM_ROM_ROM_CSMT) Register MASK */

/* -------- ARM_ROM_ROM_PID4 : (ARM_ROM Offset: 0xfd0) (R/  8) Peripheral ID Register 4 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_C_CODE:4;           /*!< bit:   0..3  JEP106 C Code                            */
    uint8_t  BLOCK_COUNT:4;             /*!< bit:   4..7  Block Count                              */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_ROM_ROM_PID4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_ROM_ROM_PID4_OFFSET               0xFD0          /**<  \brief (ARM_ROM_ROM_PID4 offset) Peripheral ID Register 4 */
#define ARM_ROM_ROM_PID4_RESETVALUE           0x04ul         /**<  \brief (ARM_ROM_ROM_PID4 reset_value) Peripheral ID Register 4 */

#define ARM_ROM_ROM_PID4_JEP106_C_CODE_Pos    0  /**< \brief (ARM_ROM_ROM_PID4) JEP106 C Code                             */
#define ARM_ROM_ROM_PID4_JEP106_C_CODE_Msk    (0xFul << ARM_ROM_ROM_PID4_JEP106_C_CODE_Pos)
#define ARM_ROM_ROM_PID4_JEP106_C_CODE(value) (ARM_ROM_ROM_PID4_JEP106_C_CODE_Msk & ((value) << ARM_ROM_ROM_PID4_JEP106_C_CODE_Pos))  
#define ARM_ROM_ROM_PID4_BLOCK_COUNT_Pos      4  /**< \brief (ARM_ROM_ROM_PID4) Block Count                               */
#define ARM_ROM_ROM_PID4_BLOCK_COUNT_Msk      (0xFul << ARM_ROM_ROM_PID4_BLOCK_COUNT_Pos)
#define ARM_ROM_ROM_PID4_BLOCK_COUNT(value)   (ARM_ROM_ROM_PID4_BLOCK_COUNT_Msk & ((value) << ARM_ROM_ROM_PID4_BLOCK_COUNT_Pos))  
#define ARM_ROM_ROM_PID4_MASK                 0xFFul    /**< \brief (ARM_ROM_ROM_PID4) Register MASK */

/* -------- ARM_ROM_ROM_PID0 : (ARM_ROM Offset: 0xfe0) (R/  8) Peripheral ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:8;             /*!< bit:   0..7  Part Number Bits 7:0                     */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_ROM_ROM_PID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_ROM_ROM_PID0_OFFSET               0xFE0          /**<  \brief (ARM_ROM_ROM_PID0 offset) Peripheral ID Register 0 */
#define ARM_ROM_ROM_PID0_RESETVALUE           0x71ul         /**<  \brief (ARM_ROM_ROM_PID0 reset_value) Peripheral ID Register 0 */

#define ARM_ROM_ROM_PID0_PART_NUMBER_Pos      0  /**< \brief (ARM_ROM_ROM_PID0) Part Number Bits 7:0                      */
#define ARM_ROM_ROM_PID0_PART_NUMBER_Msk      (0xFFul << ARM_ROM_ROM_PID0_PART_NUMBER_Pos)
#define ARM_ROM_ROM_PID0_PART_NUMBER(value)   (ARM_ROM_ROM_PID0_PART_NUMBER_Msk & ((value) << ARM_ROM_ROM_PID0_PART_NUMBER_Pos))  
#define ARM_ROM_ROM_PID0_MASK                 0xFFul    /**< \brief (ARM_ROM_ROM_PID0) Register MASK */

/* -------- ARM_ROM_ROM_PID1 : (ARM_ROM Offset: 0xfe4) (R/  8) Peripheral ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:4;             /*!< bit:   0..3  Part Number Bits 11:8                    */
    uint8_t  JEP106_ID_3_0:4;           /*!< bit:   4..7  JEP106 ID Code Bits 6:4                  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_ROM_ROM_PID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_ROM_ROM_PID1_OFFSET               0xFE4          /**<  \brief (ARM_ROM_ROM_PID1 offset) Peripheral ID Register 1 */
#define ARM_ROM_ROM_PID1_RESETVALUE           0xB4ul         /**<  \brief (ARM_ROM_ROM_PID1 reset_value) Peripheral ID Register 1 */

#define ARM_ROM_ROM_PID1_PART_NUMBER_Pos      0  /**< \brief (ARM_ROM_ROM_PID1) Part Number Bits 11:8                     */
#define ARM_ROM_ROM_PID1_PART_NUMBER_Msk      (0xFul << ARM_ROM_ROM_PID1_PART_NUMBER_Pos)
#define ARM_ROM_ROM_PID1_PART_NUMBER(value)   (ARM_ROM_ROM_PID1_PART_NUMBER_Msk & ((value) << ARM_ROM_ROM_PID1_PART_NUMBER_Pos))  
#define ARM_ROM_ROM_PID1_JEP106_ID_3_0_Pos    4  /**< \brief (ARM_ROM_ROM_PID1) JEP106 ID Code Bits 6:4                   */
#define ARM_ROM_ROM_PID1_JEP106_ID_3_0_Msk    (0xFul << ARM_ROM_ROM_PID1_JEP106_ID_3_0_Pos)
#define ARM_ROM_ROM_PID1_JEP106_ID_3_0(value) (ARM_ROM_ROM_PID1_JEP106_ID_3_0_Msk & ((value) << ARM_ROM_ROM_PID1_JEP106_ID_3_0_Pos))  
#define ARM_ROM_ROM_PID1_MASK                 0xFFul    /**< \brief (ARM_ROM_ROM_PID1) Register MASK */

/* -------- ARM_ROM_ROM_PID2 : (ARM_ROM Offset: 0xfe8) (R/  8) Peripheral ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_ID_6_4:3;           /*!< bit:   0..2  JEP106 ID Code Bits 6:4                  */
    uint8_t  JEDEC_USED:1;              /*!< bit:      3  JEDEC Used                               */
    uint8_t  REVISION:4;                /*!< bit:   4..7  Revision                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_ROM_ROM_PID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_ROM_ROM_PID2_OFFSET               0xFE8          /**<  \brief (ARM_ROM_ROM_PID2 offset) Peripheral ID Register 2 */
#define ARM_ROM_ROM_PID2_RESETVALUE           0x0Bul         /**<  \brief (ARM_ROM_ROM_PID2 reset_value) Peripheral ID Register 2 */

#define ARM_ROM_ROM_PID2_JEP106_ID_6_4_Pos    0  /**< \brief (ARM_ROM_ROM_PID2) JEP106 ID Code Bits 6:4                   */
#define ARM_ROM_ROM_PID2_JEP106_ID_6_4_Msk    (0x7ul << ARM_ROM_ROM_PID2_JEP106_ID_6_4_Pos)
#define ARM_ROM_ROM_PID2_JEP106_ID_6_4(value) (ARM_ROM_ROM_PID2_JEP106_ID_6_4_Msk & ((value) << ARM_ROM_ROM_PID2_JEP106_ID_6_4_Pos))  
#define ARM_ROM_ROM_PID2_JEDEC_USED_Pos       3  /**< \brief (ARM_ROM_ROM_PID2) JEDEC Used                                */
#define ARM_ROM_ROM_PID2_JEDEC_USED           (0x1ul << ARM_ROM_ROM_PID2_JEDEC_USED_Pos)  
#define ARM_ROM_ROM_PID2_REVISION_Pos         4  /**< \brief (ARM_ROM_ROM_PID2) Revision                                  */
#define ARM_ROM_ROM_PID2_REVISION_Msk         (0xFul << ARM_ROM_ROM_PID2_REVISION_Pos)
#define ARM_ROM_ROM_PID2_REVISION(value)      (ARM_ROM_ROM_PID2_REVISION_Msk & ((value) << ARM_ROM_ROM_PID2_REVISION_Pos))  
#define ARM_ROM_ROM_PID2_MASK                 0xFFul    /**< \brief (ARM_ROM_ROM_PID2) Register MASK */

/* -------- ARM_ROM_ROM_PID3 : (ARM_ROM Offset: 0xfec) (R/  8) Peripheral ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CUSTOMER_MOD_NUMBER:4;     /*!< bit:   0..3  Customer Modification Number             */
    uint8_t  ECO_REV_NUMBER:4;          /*!< bit:   4..7  ECO Revision Number                      */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_ROM_ROM_PID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_ROM_ROM_PID3_OFFSET               0xFEC          /**<  \brief (ARM_ROM_ROM_PID3 offset) Peripheral ID Register 3 */
#define ARM_ROM_ROM_PID3_RESETVALUE           0x00ul         /**<  \brief (ARM_ROM_ROM_PID3 reset_value) Peripheral ID Register 3 */

#define ARM_ROM_ROM_PID3_CUSTOMER_MOD_NUMBER_Pos 0  /**< \brief (ARM_ROM_ROM_PID3) Customer Modification Number              */
#define ARM_ROM_ROM_PID3_CUSTOMER_MOD_NUMBER_Msk (0xFul << ARM_ROM_ROM_PID3_CUSTOMER_MOD_NUMBER_Pos)
#define ARM_ROM_ROM_PID3_CUSTOMER_MOD_NUMBER(value) (ARM_ROM_ROM_PID3_CUSTOMER_MOD_NUMBER_Msk & ((value) << ARM_ROM_ROM_PID3_CUSTOMER_MOD_NUMBER_Pos))  
#define ARM_ROM_ROM_PID3_ECO_REV_NUMBER_Pos   4  /**< \brief (ARM_ROM_ROM_PID3) ECO Revision Number                       */
#define ARM_ROM_ROM_PID3_ECO_REV_NUMBER_Msk   (0xFul << ARM_ROM_ROM_PID3_ECO_REV_NUMBER_Pos)
#define ARM_ROM_ROM_PID3_ECO_REV_NUMBER(value) (ARM_ROM_ROM_PID3_ECO_REV_NUMBER_Msk & ((value) << ARM_ROM_ROM_PID3_ECO_REV_NUMBER_Pos))  
#define ARM_ROM_ROM_PID3_MASK                 0xFFul    /**< \brief (ARM_ROM_ROM_PID3) Register MASK */

/* -------- ARM_ROM_ROM_CID0 : (ARM_ROM Offset: 0xff0) (R/  8) Component ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ROM_CID0:8;                /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_ROM_ROM_CID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_ROM_ROM_CID0_OFFSET               0xFF0          /**<  \brief (ARM_ROM_ROM_CID0 offset) Component ID Register 0 */
#define ARM_ROM_ROM_CID0_RESETVALUE           0x0Dul         /**<  \brief (ARM_ROM_ROM_CID0 reset_value) Component ID Register 0 */

#define ARM_ROM_ROM_CID0_ROM_CID0_Pos         0  /**< \brief (ARM_ROM_ROM_CID0)                                           */
#define ARM_ROM_ROM_CID0_ROM_CID0_Msk         (0xFFul << ARM_ROM_ROM_CID0_ROM_CID0_Pos)
#define ARM_ROM_ROM_CID0_ROM_CID0(value)      (ARM_ROM_ROM_CID0_ROM_CID0_Msk & ((value) << ARM_ROM_ROM_CID0_ROM_CID0_Pos))  
#define ARM_ROM_ROM_CID0_MASK                 0xFFul    /**< \brief (ARM_ROM_ROM_CID0) Register MASK */

/* -------- ARM_ROM_ROM_CID1 : (ARM_ROM Offset: 0xff4) (R/  8) Component ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ROM_CID1:8;                /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_ROM_ROM_CID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_ROM_ROM_CID1_OFFSET               0xFF4          /**<  \brief (ARM_ROM_ROM_CID1 offset) Component ID Register 1 */
#define ARM_ROM_ROM_CID1_RESETVALUE           0x10ul         /**<  \brief (ARM_ROM_ROM_CID1 reset_value) Component ID Register 1 */

#define ARM_ROM_ROM_CID1_ROM_CID1_Pos         0  /**< \brief (ARM_ROM_ROM_CID1)                                           */
#define ARM_ROM_ROM_CID1_ROM_CID1_Msk         (0xFFul << ARM_ROM_ROM_CID1_ROM_CID1_Pos)
#define ARM_ROM_ROM_CID1_ROM_CID1(value)      (ARM_ROM_ROM_CID1_ROM_CID1_Msk & ((value) << ARM_ROM_ROM_CID1_ROM_CID1_Pos))  
#define ARM_ROM_ROM_CID1_MASK                 0xFFul    /**< \brief (ARM_ROM_ROM_CID1) Register MASK */

/* -------- ARM_ROM_ROM_CID2 : (ARM_ROM Offset: 0xff8) (R/  8) Component ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ROM_CID2:8;                /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_ROM_ROM_CID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_ROM_ROM_CID2_OFFSET               0xFF8          /**<  \brief (ARM_ROM_ROM_CID2 offset) Component ID Register 2 */
#define ARM_ROM_ROM_CID2_RESETVALUE           0x05ul         /**<  \brief (ARM_ROM_ROM_CID2 reset_value) Component ID Register 2 */

#define ARM_ROM_ROM_CID2_ROM_CID2_Pos         0  /**< \brief (ARM_ROM_ROM_CID2)                                           */
#define ARM_ROM_ROM_CID2_ROM_CID2_Msk         (0xFFul << ARM_ROM_ROM_CID2_ROM_CID2_Pos)
#define ARM_ROM_ROM_CID2_ROM_CID2(value)      (ARM_ROM_ROM_CID2_ROM_CID2_Msk & ((value) << ARM_ROM_ROM_CID2_ROM_CID2_Pos))  
#define ARM_ROM_ROM_CID2_MASK                 0xFFul    /**< \brief (ARM_ROM_ROM_CID2) Register MASK */

/* -------- ARM_ROM_ROM_CID3 : (ARM_ROM Offset: 0xffc) (R/  8) Component ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ROM_CID3:8;                /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_ROM_ROM_CID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_ROM_ROM_CID3_OFFSET               0xFFC          /**<  \brief (ARM_ROM_ROM_CID3 offset) Component ID Register 3 */
#define ARM_ROM_ROM_CID3_RESETVALUE           0xB1ul         /**<  \brief (ARM_ROM_ROM_CID3 reset_value) Component ID Register 3 */

#define ARM_ROM_ROM_CID3_ROM_CID3_Pos         0  /**< \brief (ARM_ROM_ROM_CID3)                                           */
#define ARM_ROM_ROM_CID3_ROM_CID3_Msk         (0xFFul << ARM_ROM_ROM_CID3_ROM_CID3_Pos)
#define ARM_ROM_ROM_CID3_ROM_CID3(value)      (ARM_ROM_ROM_CID3_ROM_CID3_Msk & ((value) << ARM_ROM_ROM_CID3_ROM_CID3_Pos))  
#define ARM_ROM_ROM_CID3_MASK                 0xFFul    /**< \brief (ARM_ROM_ROM_CID3) Register MASK */

/** \brief ARM_ROM hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* ARM ROM */
  __I  ARM_ROM_ROM_SCS_Type           ROM_SCS;        /**< \brief Offset: 0x00 (R/   32) Points to the SCS at 0xE000E000 */
       RoReg8                         Reserved1[0xC];
  __I  ARM_ROM_ROM_DWT_Type           ROM_DWT;        /**< \brief Offset: 0x10 (R/   32) Points to the DWT at 0xE0001000 */
       RoReg8                         Reserved2[0xC];
  __I  ARM_ROM_ROM_BPU_Type           ROM_BPU;        /**< \brief Offset: 0x20 (R/   32) Points to the BPU at 0xE0002000 */
       RoReg8                         Reserved3[0xC];
  __I  ARM_ROM_ROM_EOT_Type           ROM_EOT;        /**< \brief Offset: 0x30 (R/   32) End of Table Marker */
       RoReg8                         Reserved4[0xF98];
  __I  ARM_ROM_ROM_CSMT_Type          ROM_CSMT;       /**< \brief Offset: 0xFCC (R/    8) System Memory accessible through DAP */
       RoReg8                         Reserved5[0x3];
  __I  ARM_ROM_ROM_PID4_Type          ROM_PID4;       /**< \brief Offset: 0xFD0 (R/    8) Peripheral ID Register 4 */
       RoReg8                         Reserved6[0xF];
  __I  ARM_ROM_ROM_PID0_Type          ROM_PID0;       /**< \brief Offset: 0xFE0 (R/    8) Peripheral ID Register 0 */
       RoReg8                         Reserved7[0x3];
  __I  ARM_ROM_ROM_PID1_Type          ROM_PID1;       /**< \brief Offset: 0xFE4 (R/    8) Peripheral ID Register 1 */
       RoReg8                         Reserved8[0x3];
  __I  ARM_ROM_ROM_PID2_Type          ROM_PID2;       /**< \brief Offset: 0xFE8 (R/    8) Peripheral ID Register 2 */
       RoReg8                         Reserved9[0x3];
  __I  ARM_ROM_ROM_PID3_Type          ROM_PID3;       /**< \brief Offset: 0xFEC (R/    8) Peripheral ID Register 3 */
       RoReg8                         Reserved10[0x3];
  __I  ARM_ROM_ROM_CID0_Type          ROM_CID0;       /**< \brief Offset: 0xFF0 (R/    8) Component ID Register 0 */
       RoReg8                         Reserved11[0x3];
  __I  ARM_ROM_ROM_CID1_Type          ROM_CID1;       /**< \brief Offset: 0xFF4 (R/    8) Component ID Register 1 */
       RoReg8                         Reserved12[0x3];
  __I  ARM_ROM_ROM_CID2_Type          ROM_CID2;       /**< \brief Offset: 0xFF8 (R/    8) Component ID Register 2 */
       RoReg8                         Reserved13[0x3];
  __I  ARM_ROM_ROM_CID3_Type          ROM_CID3;       /**< \brief Offset: 0xFFC (R/    8) Component ID Register 3 */
} ArmRom;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_ARM_ROM_COMPONENT_ */
