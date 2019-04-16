/**
 * \file
 *
 * \brief Component description for WDT
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

#ifndef _SAMB11_WDT_COMPONENT_
#define _SAMB11_WDT_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR WDT */
/* ========================================================================== */
/** \addtogroup SAMB11_WDT Watchdog0 Timer */
/*@{*/

#define WDT_W1234
#define REV_WDT                          0x100

/* -------- WDT_WDOGLOAD : (WDT Offset: 0x00) (R/W  32) Watchdog Load Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t WDOGLOAD:32;               /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} WDT_WDOGLOAD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGLOAD_OFFSET                   0x00           /**<  \brief (WDT_WDOGLOAD offset) Watchdog Load Register */
#define WDT_WDOGLOAD_RESETVALUE               0xFFFFFFFFul   /**<  \brief (WDT_WDOGLOAD reset_value) Watchdog Load Register */

#define WDT_WDOGLOAD_WDOGLOAD_Pos             0  /**< \brief (WDT_WDOGLOAD)                                               */
#define WDT_WDOGLOAD_WDOGLOAD_Msk             (0xFFFFFFFFul << WDT_WDOGLOAD_WDOGLOAD_Pos)
#define WDT_WDOGLOAD_WDOGLOAD(value)          (WDT_WDOGLOAD_WDOGLOAD_Msk & ((value) << WDT_WDOGLOAD_WDOGLOAD_Pos))  
#define WDT_WDOGLOAD_MASK                     0xFFFFFFFFul    /**< \brief (WDT_WDOGLOAD) Register MASK */

/* -------- WDT_WDOGVALUE : (WDT Offset: 0x04) (R/  32) Watchdog Value Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t WDOGVALUE:32;              /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} WDT_WDOGVALUE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGVALUE_OFFSET                  0x04           /**<  \brief (WDT_WDOGVALUE offset) Watchdog Value Register */
#define WDT_WDOGVALUE_RESETVALUE              0xFFFFFFFFul   /**<  \brief (WDT_WDOGVALUE reset_value) Watchdog Value Register */

#define WDT_WDOGVALUE_WDOGVALUE_Pos           0  /**< \brief (WDT_WDOGVALUE)                                              */
#define WDT_WDOGVALUE_WDOGVALUE_Msk           (0xFFFFFFFFul << WDT_WDOGVALUE_WDOGVALUE_Pos)
#define WDT_WDOGVALUE_WDOGVALUE(value)        (WDT_WDOGVALUE_WDOGVALUE_Msk & ((value) << WDT_WDOGVALUE_WDOGVALUE_Pos))  
#define WDT_WDOGVALUE_MASK                    0xFFFFFFFFul    /**< \brief (WDT_WDOGVALUE) Register MASK */

/* -------- WDT_WDOGCONTROL : (WDT Offset: 0x08) (R/W  8) Watchdog Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  INTEN:1;                   /*!< bit:      0  Active High Enable Interrupt Event       */
    uint8_t  RESEN:1;                   /*!< bit:      1  Active High Enable Watchdog Reset Output */
    uint8_t  :6;                        /*!< bit:   2..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGCONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGCONTROL_OFFSET                0x08           /**<  \brief (WDT_WDOGCONTROL offset) Watchdog Control Register */
#define WDT_WDOGCONTROL_RESETVALUE            0x00ul         /**<  \brief (WDT_WDOGCONTROL reset_value) Watchdog Control Register */

#define WDT_WDOGCONTROL_INTEN_Pos             0  /**< \brief (WDT_WDOGCONTROL) Active High Enable Interrupt Event         */
#define WDT_WDOGCONTROL_INTEN                 (0x1ul << WDT_WDOGCONTROL_INTEN_Pos)  
#define WDT_WDOGCONTROL_RESEN_Pos             1  /**< \brief (WDT_WDOGCONTROL) Active High Enable Watchdog Reset Output   */
#define WDT_WDOGCONTROL_RESEN                 (0x1ul << WDT_WDOGCONTROL_RESEN_Pos)  
#define WDT_WDOGCONTROL_MASK                  0x03ul    /**< \brief (WDT_WDOGCONTROL) Register MASK */

/* -------- WDT_WDOGINTCLR : (WDT Offset: 0x0c) (/W  8) Watchdog Clear Interrupt Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  WDOGINTCLR:1;              /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGINTCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGINTCLR_OFFSET                 0x0C           /**<  \brief (WDT_WDOGINTCLR offset) Watchdog Clear Interrupt Register */
#define WDT_WDOGINTCLR_RESETVALUE             0x00ul         /**<  \brief (WDT_WDOGINTCLR reset_value) Watchdog Clear Interrupt Register */

#define WDT_WDOGINTCLR_WDOGINTCLR_Pos         0  /**< \brief (WDT_WDOGINTCLR)                                             */
#define WDT_WDOGINTCLR_WDOGINTCLR             (0x1ul << WDT_WDOGINTCLR_WDOGINTCLR_Pos)  
#define WDT_WDOGINTCLR_MASK                   0x01ul    /**< \brief (WDT_WDOGINTCLR) Register MASK */

/* -------- WDT_WDOGRIS : (WDT Offset: 0x10) (R/  8) Watchdog Raw Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  WDOGRIS:1;                 /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGRIS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGRIS_OFFSET                    0x10           /**<  \brief (WDT_WDOGRIS offset) Watchdog Raw Interrupt Status Register */
#define WDT_WDOGRIS_RESETVALUE                0x00ul         /**<  \brief (WDT_WDOGRIS reset_value) Watchdog Raw Interrupt Status Register */

#define WDT_WDOGRIS_WDOGRIS_Pos               0  /**< \brief (WDT_WDOGRIS)                                                */
#define WDT_WDOGRIS_WDOGRIS                   (0x1ul << WDT_WDOGRIS_WDOGRIS_Pos)  
#define WDT_WDOGRIS_MASK                      0x01ul    /**< \brief (WDT_WDOGRIS) Register MASK */

/* -------- WDT_WDOGMIS : (WDT Offset: 0x14) (R/  8) Watchdog Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  WDOGMIS:1;                 /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGMIS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGMIS_OFFSET                    0x14           /**<  \brief (WDT_WDOGMIS offset) Watchdog Interrupt Status Register */
#define WDT_WDOGMIS_RESETVALUE                0x00ul         /**<  \brief (WDT_WDOGMIS reset_value) Watchdog Interrupt Status Register */

#define WDT_WDOGMIS_WDOGMIS_Pos               0  /**< \brief (WDT_WDOGMIS)                                                */
#define WDT_WDOGMIS_WDOGMIS                   (0x1ul << WDT_WDOGMIS_WDOGMIS_Pos)  
#define WDT_WDOGMIS_MASK                      0x01ul    /**< \brief (WDT_WDOGMIS) Register MASK */

/* -------- WDT_WDOGLOCK : (WDT Offset: 0xc00) (R/W  32) Watchdog Lock Register (Write 0x1ACCE551 to enable write access to all other registers) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t ENABLE_STATUS:1;           /*!< bit:      0  Read back of 1 indicates that write access is enabled */
    uint32_t ENABLE_REGISTER_WRITES:31;  /*!< bit:  1..31  Read back all 0s, write 0x1ACCE551 to enable write access to all other registers */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} WDT_WDOGLOCK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGLOCK_OFFSET                   0xC00          /**<  \brief (WDT_WDOGLOCK offset) Watchdog Lock Register (Write 0x1ACCE551 to enable write access to all other registers) */
#define WDT_WDOGLOCK_RESETVALUE               0x00ul         /**<  \brief (WDT_WDOGLOCK reset_value) Watchdog Lock Register (Write 0x1ACCE551 to enable write access to all other registers) */

#define WDT_WDOGLOCK_ENABLE_STATUS_Pos        0  /**< \brief (WDT_WDOGLOCK) Read back of 1 indicates that write access is enabled */
#define WDT_WDOGLOCK_ENABLE_STATUS            (0x1ul << WDT_WDOGLOCK_ENABLE_STATUS_Pos)  
#define WDT_WDOGLOCK_ENABLE_REGISTER_WRITES_Pos 1  /**< \brief (WDT_WDOGLOCK) Read back all 0s, write 0x1ACCE551 to enable write access to all other registers */
#define WDT_WDOGLOCK_ENABLE_REGISTER_WRITES_Msk (0x7FFFFFFFul << WDT_WDOGLOCK_ENABLE_REGISTER_WRITES_Pos)
#define WDT_WDOGLOCK_ENABLE_REGISTER_WRITES(value) (WDT_WDOGLOCK_ENABLE_REGISTER_WRITES_Msk & ((value) << WDT_WDOGLOCK_ENABLE_REGISTER_WRITES_Pos))  
#define WDT_WDOGLOCK_MASK                     0xFFFFFFFFul    /**< \brief (WDT_WDOGLOCK) Register MASK */

/* -------- WDT_WDOGITCR : (WDT Offset: 0xf00) (R/W  8) Watchdog Integration Test Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ENABLE:1;                  /*!< bit:      0  Set HIGH to place watchdog into integration test mode */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGITCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGITCR_OFFSET                   0xF00          /**<  \brief (WDT_WDOGITCR offset) Watchdog Integration Test Control Register */
#define WDT_WDOGITCR_RESETVALUE               0x00ul         /**<  \brief (WDT_WDOGITCR reset_value) Watchdog Integration Test Control Register */

#define WDT_WDOGITCR_ENABLE_Pos               0  /**< \brief (WDT_WDOGITCR) Set HIGH to place watchdog into integration test mode */
#define WDT_WDOGITCR_ENABLE                   (0x1ul << WDT_WDOGITCR_ENABLE_Pos)  
#define WDT_WDOGITCR_MASK                     0x01ul    /**< \brief (WDT_WDOGITCR) Register MASK */

/* -------- WDT_WDOGITOP : (WDT Offset: 0xf04) (R/W  8) Watchdog Integration Test Output Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  WDOGRES_VALUE:1;           /*!< bit:      0  Value output on WDOGRES when in Integration Test Mode */
    uint8_t  WDOGINT_VALUE:1;           /*!< bit:      1  Value output on WDOGINT when in Integration Test Mode */
    uint8_t  :6;                        /*!< bit:   2..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGITOP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGITOP_OFFSET                   0xF04          /**<  \brief (WDT_WDOGITOP offset) Watchdog Integration Test Output Set Register */
#define WDT_WDOGITOP_RESETVALUE               0x00ul         /**<  \brief (WDT_WDOGITOP reset_value) Watchdog Integration Test Output Set Register */

#define WDT_WDOGITOP_WDOGRES_VALUE_Pos        0  /**< \brief (WDT_WDOGITOP) Value output on WDOGRES when in Integration Test Mode */
#define WDT_WDOGITOP_WDOGRES_VALUE            (0x1ul << WDT_WDOGITOP_WDOGRES_VALUE_Pos)  
#define WDT_WDOGITOP_WDOGINT_VALUE_Pos        1  /**< \brief (WDT_WDOGITOP) Value output on WDOGINT when in Integration Test Mode */
#define WDT_WDOGITOP_WDOGINT_VALUE            (0x1ul << WDT_WDOGITOP_WDOGINT_VALUE_Pos)  
#define WDT_WDOGITOP_MASK                     0x03ul    /**< \brief (WDT_WDOGITOP) Register MASK */

/* -------- WDT_WDOGPERIPHID4 : (WDT Offset: 0xfd0) (R/  8) Peripheral ID Register 4 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_C_CODE:4;           /*!< bit:   0..3  JEP106 C Code                            */
    uint8_t  BLOCK_COUNT:4;             /*!< bit:   4..7  Block Count                              */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGPERIPHID4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGPERIPHID4_OFFSET              0xFD0          /**<  \brief (WDT_WDOGPERIPHID4 offset) Peripheral ID Register 4 */
#define WDT_WDOGPERIPHID4_RESETVALUE          0x04ul         /**<  \brief (WDT_WDOGPERIPHID4 reset_value) Peripheral ID Register 4 */

#define WDT_WDOGPERIPHID4_JEP106_C_CODE_Pos   0  /**< \brief (WDT_WDOGPERIPHID4) JEP106 C Code                            */
#define WDT_WDOGPERIPHID4_JEP106_C_CODE_Msk   (0xFul << WDT_WDOGPERIPHID4_JEP106_C_CODE_Pos)
#define WDT_WDOGPERIPHID4_JEP106_C_CODE(value) (WDT_WDOGPERIPHID4_JEP106_C_CODE_Msk & ((value) << WDT_WDOGPERIPHID4_JEP106_C_CODE_Pos))  
#define WDT_WDOGPERIPHID4_BLOCK_COUNT_Pos     4  /**< \brief (WDT_WDOGPERIPHID4) Block Count                              */
#define WDT_WDOGPERIPHID4_BLOCK_COUNT_Msk     (0xFul << WDT_WDOGPERIPHID4_BLOCK_COUNT_Pos)
#define WDT_WDOGPERIPHID4_BLOCK_COUNT(value)  (WDT_WDOGPERIPHID4_BLOCK_COUNT_Msk & ((value) << WDT_WDOGPERIPHID4_BLOCK_COUNT_Pos))  
#define WDT_WDOGPERIPHID4_MASK                0xFFul    /**< \brief (WDT_WDOGPERIPHID4) Register MASK */

/* -------- WDT_WDOGPERIPHID5 : (WDT Offset: 0xfd4) (R/  8) Peripheral ID Register 5 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  WDOGPERIPHID5:8;           /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGPERIPHID5_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGPERIPHID5_OFFSET              0xFD4          /**<  \brief (WDT_WDOGPERIPHID5 offset) Peripheral ID Register 5 */
#define WDT_WDOGPERIPHID5_RESETVALUE          0x00ul         /**<  \brief (WDT_WDOGPERIPHID5 reset_value) Peripheral ID Register 5 */

#define WDT_WDOGPERIPHID5_WDOGPERIPHID5_Pos   0  /**< \brief (WDT_WDOGPERIPHID5)                                          */
#define WDT_WDOGPERIPHID5_WDOGPERIPHID5_Msk   (0xFFul << WDT_WDOGPERIPHID5_WDOGPERIPHID5_Pos)
#define WDT_WDOGPERIPHID5_WDOGPERIPHID5(value) (WDT_WDOGPERIPHID5_WDOGPERIPHID5_Msk & ((value) << WDT_WDOGPERIPHID5_WDOGPERIPHID5_Pos))  
#define WDT_WDOGPERIPHID5_MASK                0xFFul    /**< \brief (WDT_WDOGPERIPHID5) Register MASK */

/* -------- WDT_WDOGPERIPHID6 : (WDT Offset: 0xfd8) (R/  8) Peripheral ID Register 6 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  WDOGPERIPHID6:8;           /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGPERIPHID6_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGPERIPHID6_OFFSET              0xFD8          /**<  \brief (WDT_WDOGPERIPHID6 offset) Peripheral ID Register 6 */
#define WDT_WDOGPERIPHID6_RESETVALUE          0x00ul         /**<  \brief (WDT_WDOGPERIPHID6 reset_value) Peripheral ID Register 6 */

#define WDT_WDOGPERIPHID6_WDOGPERIPHID6_Pos   0  /**< \brief (WDT_WDOGPERIPHID6)                                          */
#define WDT_WDOGPERIPHID6_WDOGPERIPHID6_Msk   (0xFFul << WDT_WDOGPERIPHID6_WDOGPERIPHID6_Pos)
#define WDT_WDOGPERIPHID6_WDOGPERIPHID6(value) (WDT_WDOGPERIPHID6_WDOGPERIPHID6_Msk & ((value) << WDT_WDOGPERIPHID6_WDOGPERIPHID6_Pos))  
#define WDT_WDOGPERIPHID6_MASK                0xFFul    /**< \brief (WDT_WDOGPERIPHID6) Register MASK */

/* -------- WDT_WDOGPERIPHID7 : (WDT Offset: 0xfdc) (R/  8) Peripheral ID Register 7 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  WDOGPERIPHID7:8;           /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGPERIPHID7_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGPERIPHID7_OFFSET              0xFDC          /**<  \brief (WDT_WDOGPERIPHID7 offset) Peripheral ID Register 7 */
#define WDT_WDOGPERIPHID7_RESETVALUE          0x00ul         /**<  \brief (WDT_WDOGPERIPHID7 reset_value) Peripheral ID Register 7 */

#define WDT_WDOGPERIPHID7_WDOGPERIPHID7_Pos   0  /**< \brief (WDT_WDOGPERIPHID7)                                          */
#define WDT_WDOGPERIPHID7_WDOGPERIPHID7_Msk   (0xFFul << WDT_WDOGPERIPHID7_WDOGPERIPHID7_Pos)
#define WDT_WDOGPERIPHID7_WDOGPERIPHID7(value) (WDT_WDOGPERIPHID7_WDOGPERIPHID7_Msk & ((value) << WDT_WDOGPERIPHID7_WDOGPERIPHID7_Pos))  
#define WDT_WDOGPERIPHID7_MASK                0xFFul    /**< \brief (WDT_WDOGPERIPHID7) Register MASK */

/* -------- WDT_WDOGPERIPHID0 : (WDT Offset: 0xfe0) (R/  8) Peripheral ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:8;             /*!< bit:   0..7  Part Number Bits 7:0                     */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGPERIPHID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGPERIPHID0_OFFSET              0xFE0          /**<  \brief (WDT_WDOGPERIPHID0 offset) Peripheral ID Register 0 */
#define WDT_WDOGPERIPHID0_RESETVALUE          0x24ul         /**<  \brief (WDT_WDOGPERIPHID0 reset_value) Peripheral ID Register 0 */

#define WDT_WDOGPERIPHID0_PART_NUMBER_Pos     0  /**< \brief (WDT_WDOGPERIPHID0) Part Number Bits 7:0                     */
#define WDT_WDOGPERIPHID0_PART_NUMBER_Msk     (0xFFul << WDT_WDOGPERIPHID0_PART_NUMBER_Pos)
#define WDT_WDOGPERIPHID0_PART_NUMBER(value)  (WDT_WDOGPERIPHID0_PART_NUMBER_Msk & ((value) << WDT_WDOGPERIPHID0_PART_NUMBER_Pos))  
#define WDT_WDOGPERIPHID0_MASK                0xFFul    /**< \brief (WDT_WDOGPERIPHID0) Register MASK */

/* -------- WDT_WDOGPERIPHID1 : (WDT Offset: 0xfe4) (R/  8) Peripheral ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:4;             /*!< bit:   0..3  Part Number Bits 11:8                    */
    uint8_t  JEP106_ID_3_0:4;           /*!< bit:   4..7  JEP106 ID Bits 3:0                       */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGPERIPHID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGPERIPHID1_OFFSET              0xFE4          /**<  \brief (WDT_WDOGPERIPHID1 offset) Peripheral ID Register 1 */
#define WDT_WDOGPERIPHID1_RESETVALUE          0xB8ul         /**<  \brief (WDT_WDOGPERIPHID1 reset_value) Peripheral ID Register 1 */

#define WDT_WDOGPERIPHID1_PART_NUMBER_Pos     0  /**< \brief (WDT_WDOGPERIPHID1) Part Number Bits 11:8                    */
#define WDT_WDOGPERIPHID1_PART_NUMBER_Msk     (0xFul << WDT_WDOGPERIPHID1_PART_NUMBER_Pos)
#define WDT_WDOGPERIPHID1_PART_NUMBER(value)  (WDT_WDOGPERIPHID1_PART_NUMBER_Msk & ((value) << WDT_WDOGPERIPHID1_PART_NUMBER_Pos))  
#define WDT_WDOGPERIPHID1_JEP106_ID_3_0_Pos   4  /**< \brief (WDT_WDOGPERIPHID1) JEP106 ID Bits 3:0                       */
#define WDT_WDOGPERIPHID1_JEP106_ID_3_0_Msk   (0xFul << WDT_WDOGPERIPHID1_JEP106_ID_3_0_Pos)
#define WDT_WDOGPERIPHID1_JEP106_ID_3_0(value) (WDT_WDOGPERIPHID1_JEP106_ID_3_0_Msk & ((value) << WDT_WDOGPERIPHID1_JEP106_ID_3_0_Pos))  
#define WDT_WDOGPERIPHID1_MASK                0xFFul    /**< \brief (WDT_WDOGPERIPHID1) Register MASK */

/* -------- WDT_WDOGPERIPHID2 : (WDT Offset: 0xfe8) (R/  8) Peripheral ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_ID_6_4:3;           /*!< bit:   0..2  JEP106 ID Bits 6:4                       */
    uint8_t  JEDEC_USED:1;              /*!< bit:      3  JEDEC Used                               */
    uint8_t  REVISION:4;                /*!< bit:   4..7  Revision                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGPERIPHID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGPERIPHID2_OFFSET              0xFE8          /**<  \brief (WDT_WDOGPERIPHID2 offset) Peripheral ID Register 2 */
#define WDT_WDOGPERIPHID2_RESETVALUE          0x1Bul         /**<  \brief (WDT_WDOGPERIPHID2 reset_value) Peripheral ID Register 2 */

#define WDT_WDOGPERIPHID2_JEP106_ID_6_4_Pos   0  /**< \brief (WDT_WDOGPERIPHID2) JEP106 ID Bits 6:4                       */
#define WDT_WDOGPERIPHID2_JEP106_ID_6_4_Msk   (0x7ul << WDT_WDOGPERIPHID2_JEP106_ID_6_4_Pos)
#define WDT_WDOGPERIPHID2_JEP106_ID_6_4(value) (WDT_WDOGPERIPHID2_JEP106_ID_6_4_Msk & ((value) << WDT_WDOGPERIPHID2_JEP106_ID_6_4_Pos))  
#define WDT_WDOGPERIPHID2_JEDEC_USED_Pos      3  /**< \brief (WDT_WDOGPERIPHID2) JEDEC Used                               */
#define WDT_WDOGPERIPHID2_JEDEC_USED          (0x1ul << WDT_WDOGPERIPHID2_JEDEC_USED_Pos)  
#define WDT_WDOGPERIPHID2_REVISION_Pos        4  /**< \brief (WDT_WDOGPERIPHID2) Revision                                 */
#define WDT_WDOGPERIPHID2_REVISION_Msk        (0xFul << WDT_WDOGPERIPHID2_REVISION_Pos)
#define WDT_WDOGPERIPHID2_REVISION(value)     (WDT_WDOGPERIPHID2_REVISION_Msk & ((value) << WDT_WDOGPERIPHID2_REVISION_Pos))  
#define WDT_WDOGPERIPHID2_MASK                0xFFul    /**< \brief (WDT_WDOGPERIPHID2) Register MASK */

/* -------- WDT_WDOGPERIPHID3 : (WDT Offset: 0xfec) (R/  8) Peripheral ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CUSTOMER_MOD_NUMBER:4;     /*!< bit:   0..3  Customer Modification Number             */
    uint8_t  ECO_REV_NUMBER:4;          /*!< bit:   4..7  ECO Revision Number                      */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGPERIPHID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGPERIPHID3_OFFSET              0xFEC          /**<  \brief (WDT_WDOGPERIPHID3 offset) Peripheral ID Register 3 */
#define WDT_WDOGPERIPHID3_RESETVALUE          0x00ul         /**<  \brief (WDT_WDOGPERIPHID3 reset_value) Peripheral ID Register 3 */

#define WDT_WDOGPERIPHID3_CUSTOMER_MOD_NUMBER_Pos 0  /**< \brief (WDT_WDOGPERIPHID3) Customer Modification Number             */
#define WDT_WDOGPERIPHID3_CUSTOMER_MOD_NUMBER_Msk (0xFul << WDT_WDOGPERIPHID3_CUSTOMER_MOD_NUMBER_Pos)
#define WDT_WDOGPERIPHID3_CUSTOMER_MOD_NUMBER(value) (WDT_WDOGPERIPHID3_CUSTOMER_MOD_NUMBER_Msk & ((value) << WDT_WDOGPERIPHID3_CUSTOMER_MOD_NUMBER_Pos))  
#define WDT_WDOGPERIPHID3_ECO_REV_NUMBER_Pos  4  /**< \brief (WDT_WDOGPERIPHID3) ECO Revision Number                      */
#define WDT_WDOGPERIPHID3_ECO_REV_NUMBER_Msk  (0xFul << WDT_WDOGPERIPHID3_ECO_REV_NUMBER_Pos)
#define WDT_WDOGPERIPHID3_ECO_REV_NUMBER(value) (WDT_WDOGPERIPHID3_ECO_REV_NUMBER_Msk & ((value) << WDT_WDOGPERIPHID3_ECO_REV_NUMBER_Pos))  
#define WDT_WDOGPERIPHID3_MASK                0xFFul    /**< \brief (WDT_WDOGPERIPHID3) Register MASK */

/* -------- WDT_WDOGPCELLID0 : (WDT Offset: 0xff0) (R/  8) Component ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  WDOGPCELLID0:8;            /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGPCELLID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGPCELLID0_OFFSET               0xFF0          /**<  \brief (WDT_WDOGPCELLID0 offset) Component ID Register 0 */
#define WDT_WDOGPCELLID0_RESETVALUE           0x0Dul         /**<  \brief (WDT_WDOGPCELLID0 reset_value) Component ID Register 0 */

#define WDT_WDOGPCELLID0_WDOGPCELLID0_Pos     0  /**< \brief (WDT_WDOGPCELLID0)                                           */
#define WDT_WDOGPCELLID0_WDOGPCELLID0_Msk     (0xFFul << WDT_WDOGPCELLID0_WDOGPCELLID0_Pos)
#define WDT_WDOGPCELLID0_WDOGPCELLID0(value)  (WDT_WDOGPCELLID0_WDOGPCELLID0_Msk & ((value) << WDT_WDOGPCELLID0_WDOGPCELLID0_Pos))  
#define WDT_WDOGPCELLID0_MASK                 0xFFul    /**< \brief (WDT_WDOGPCELLID0) Register MASK */

/* -------- WDT_WDOGPCELLID1 : (WDT Offset: 0xff4) (R/  8) Component ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  WDOGPCELLID1:8;            /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGPCELLID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGPCELLID1_OFFSET               0xFF4          /**<  \brief (WDT_WDOGPCELLID1 offset) Component ID Register 1 */
#define WDT_WDOGPCELLID1_RESETVALUE           0xF0ul         /**<  \brief (WDT_WDOGPCELLID1 reset_value) Component ID Register 1 */

#define WDT_WDOGPCELLID1_WDOGPCELLID1_Pos     0  /**< \brief (WDT_WDOGPCELLID1)                                           */
#define WDT_WDOGPCELLID1_WDOGPCELLID1_Msk     (0xFFul << WDT_WDOGPCELLID1_WDOGPCELLID1_Pos)
#define WDT_WDOGPCELLID1_WDOGPCELLID1(value)  (WDT_WDOGPCELLID1_WDOGPCELLID1_Msk & ((value) << WDT_WDOGPCELLID1_WDOGPCELLID1_Pos))  
#define WDT_WDOGPCELLID1_MASK                 0xFFul    /**< \brief (WDT_WDOGPCELLID1) Register MASK */

/* -------- WDT_WDOGPCELLID2 : (WDT Offset: 0xff8) (R/  8) Component ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  WDOGPCELLID2:8;            /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGPCELLID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGPCELLID2_OFFSET               0xFF8          /**<  \brief (WDT_WDOGPCELLID2 offset) Component ID Register 2 */
#define WDT_WDOGPCELLID2_RESETVALUE           0x05ul         /**<  \brief (WDT_WDOGPCELLID2 reset_value) Component ID Register 2 */

#define WDT_WDOGPCELLID2_WDOGPCELLID2_Pos     0  /**< \brief (WDT_WDOGPCELLID2)                                           */
#define WDT_WDOGPCELLID2_WDOGPCELLID2_Msk     (0xFFul << WDT_WDOGPCELLID2_WDOGPCELLID2_Pos)
#define WDT_WDOGPCELLID2_WDOGPCELLID2(value)  (WDT_WDOGPCELLID2_WDOGPCELLID2_Msk & ((value) << WDT_WDOGPCELLID2_WDOGPCELLID2_Pos))  
#define WDT_WDOGPCELLID2_MASK                 0xFFul    /**< \brief (WDT_WDOGPCELLID2) Register MASK */

/* -------- WDT_WDOGPCELLID3 : (WDT Offset: 0xffc) (R/  8) Component ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  WDOGPCELLID3:8;            /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} WDT_WDOGPCELLID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_WDOGPCELLID3_OFFSET               0xFFC          /**<  \brief (WDT_WDOGPCELLID3 offset) Component ID Register 3 */
#define WDT_WDOGPCELLID3_RESETVALUE           0xB1ul         /**<  \brief (WDT_WDOGPCELLID3 reset_value) Component ID Register 3 */

#define WDT_WDOGPCELLID3_WDOGPCELLID3_Pos     0  /**< \brief (WDT_WDOGPCELLID3)                                           */
#define WDT_WDOGPCELLID3_WDOGPCELLID3_Msk     (0xFFul << WDT_WDOGPCELLID3_WDOGPCELLID3_Pos)
#define WDT_WDOGPCELLID3_WDOGPCELLID3(value)  (WDT_WDOGPCELLID3_WDOGPCELLID3_Msk & ((value) << WDT_WDOGPCELLID3_WDOGPCELLID3_Pos))  
#define WDT_WDOGPCELLID3_MASK                 0xFFul    /**< \brief (WDT_WDOGPCELLID3) Register MASK */

/** \brief WDT hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* Watchdog0 Timer */
  __IO WDT_WDOGLOAD_Type              WDOGLOAD;       /**< \brief Offset: 0x00 (R/W  32) Watchdog Load Register */
  __I  WDT_WDOGVALUE_Type             WDOGVALUE;      /**< \brief Offset: 0x04 (R/   32) Watchdog Value Register */
  __IO WDT_WDOGCONTROL_Type           WDOGCONTROL;    /**< \brief Offset: 0x08 (R/W   8) Watchdog Control Register */
       RoReg8                         Reserved1[0x3];
  __O  WDT_WDOGINTCLR_Type            WDOGINTCLR;     /**< \brief Offset: 0x0C ( /W   8) Watchdog Clear Interrupt Register */
       RoReg8                         Reserved2[0x3];
  __I  WDT_WDOGRIS_Type               WDOGRIS;        /**< \brief Offset: 0x10 (R/    8) Watchdog Raw Interrupt Status Register */
       RoReg8                         Reserved3[0x3];
  __I  WDT_WDOGMIS_Type               WDOGMIS;        /**< \brief Offset: 0x14 (R/    8) Watchdog Interrupt Status Register */
       RoReg8                         Reserved4[0xBEB];
  __IO WDT_WDOGLOCK_Type              WDOGLOCK;       /**< \brief Offset: 0xC00 (R/W  32) Watchdog Lock Register (Write 0x1ACCE551 to enable write access to all other registers) */
       RoReg8                         Reserved5[0x2FC];
  __IO WDT_WDOGITCR_Type              WDOGITCR;       /**< \brief Offset: 0xF00 (R/W   8) Watchdog Integration Test Control Register */
       RoReg8                         Reserved6[0x3];
  __IO WDT_WDOGITOP_Type              WDOGITOP;       /**< \brief Offset: 0xF04 (R/W   8) Watchdog Integration Test Output Set Register */
       RoReg8                         Reserved7[0xCB];
  __I  WDT_WDOGPERIPHID4_Type         WDOGPERIPHID4;  /**< \brief Offset: 0xFD0 (R/    8) Peripheral ID Register 4 */
       RoReg8                         Reserved8[0x3];
  __I  WDT_WDOGPERIPHID5_Type         WDOGPERIPHID5;  /**< \brief Offset: 0xFD4 (R/    8) Peripheral ID Register 5 */
       RoReg8                         Reserved9[0x3];
  __I  WDT_WDOGPERIPHID6_Type         WDOGPERIPHID6;  /**< \brief Offset: 0xFD8 (R/    8) Peripheral ID Register 6 */
       RoReg8                         Reserved10[0x3];
  __I  WDT_WDOGPERIPHID7_Type         WDOGPERIPHID7;  /**< \brief Offset: 0xFDC (R/    8) Peripheral ID Register 7 */
       RoReg8                         Reserved11[0x3];
  __I  WDT_WDOGPERIPHID0_Type         WDOGPERIPHID0;  /**< \brief Offset: 0xFE0 (R/    8) Peripheral ID Register 0 */
       RoReg8                         Reserved12[0x3];
  __I  WDT_WDOGPERIPHID1_Type         WDOGPERIPHID1;  /**< \brief Offset: 0xFE4 (R/    8) Peripheral ID Register 1 */
       RoReg8                         Reserved13[0x3];
  __I  WDT_WDOGPERIPHID2_Type         WDOGPERIPHID2;  /**< \brief Offset: 0xFE8 (R/    8) Peripheral ID Register 2 */
       RoReg8                         Reserved14[0x3];
  __I  WDT_WDOGPERIPHID3_Type         WDOGPERIPHID3;  /**< \brief Offset: 0xFEC (R/    8) Peripheral ID Register 3 */
       RoReg8                         Reserved15[0x3];
  __I  WDT_WDOGPCELLID0_Type          WDOGPCELLID0;   /**< \brief Offset: 0xFF0 (R/    8) Component ID Register 0 */
       RoReg8                         Reserved16[0x3];
  __I  WDT_WDOGPCELLID1_Type          WDOGPCELLID1;   /**< \brief Offset: 0xFF4 (R/    8) Component ID Register 1 */
       RoReg8                         Reserved17[0x3];
  __I  WDT_WDOGPCELLID2_Type          WDOGPCELLID2;   /**< \brief Offset: 0xFF8 (R/    8) Component ID Register 2 */
       RoReg8                         Reserved18[0x3];
  __I  WDT_WDOGPCELLID3_Type          WDOGPCELLID3;   /**< \brief Offset: 0xFFC (R/    8) Component ID Register 3 */
} Wdt;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_WDT_COMPONENT_ */
