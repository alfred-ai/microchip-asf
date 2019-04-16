/**
 * \file
 *
 * \brief Component description for ARM_SYSCTRL
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

#ifndef _SAMB11_ARM_SYSCTRL_COMPONENT_
#define _SAMB11_ARM_SYSCTRL_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ARM_SYSCTRL */
/* ========================================================================== */
/** \addtogroup SAMB11_ARM_SYSCTRL ARM System Control */
/*@{*/

#define ARM_SYSCTRL_ASC1234
#define REV_ARM_SYSCTRL                  0x100

/* -------- ARM_SYSCTRL_ACTLR : (ARM_SYSCTRL Offset: 0x08) (R/  32) Auxiliary Control Register (not implemented) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t ACTLR:32;                  /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_ACTLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_ACTLR_OFFSET              0x08           /**<  \brief (ARM_SYSCTRL_ACTLR offset) Auxiliary Control Register (not implemented) */
#define ARM_SYSCTRL_ACTLR_RESETVALUE          0x00ul         /**<  \brief (ARM_SYSCTRL_ACTLR reset_value) Auxiliary Control Register (not implemented) */

#define ARM_SYSCTRL_ACTLR_ACTLR_Pos           0  /**< \brief (ARM_SYSCTRL_ACTLR)                                          */
#define ARM_SYSCTRL_ACTLR_ACTLR_Msk           (0xFFFFFFFFul << ARM_SYSCTRL_ACTLR_ACTLR_Pos)
#define ARM_SYSCTRL_ACTLR_ACTLR(value)        (ARM_SYSCTRL_ACTLR_ACTLR_Msk & ((value) << ARM_SYSCTRL_ACTLR_ACTLR_Pos))  
#define ARM_SYSCTRL_ACTLR_MASK                0xFFFFFFFFul    /**< \brief (ARM_SYSCTRL_ACTLR) Register MASK */

/* -------- ARM_SYSCTRL_SYST_CSR : (ARM_SYSCTRL Offset: 0x10) (R/W  32) SysTick Control and Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t ENABLE:1;                  /*!< bit:      0  Indicates the enabled status of the SysTick counter */
    uint32_t TICKINT:1;                 /*!< bit:      1  Indicates whether counting to 0 causes the status of the SysTick exception to change to pending */
    uint32_t CLKSOURCE:1;               /*!< bit:      2  SysTick uses the processor clock (writes are ignored) */
    uint32_t :13;                       /*!< bit:  3..15  Reserved                                 */
    uint32_t COUNTFLAG:1;               /*!< bit:     16  If 1 then the timer has counted to 0     */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SYST_CSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SYST_CSR_OFFSET           0x10           /**<  \brief (ARM_SYSCTRL_SYST_CSR offset) SysTick Control and Status Register */
#define ARM_SYSCTRL_SYST_CSR_RESETVALUE       0x04ul         /**<  \brief (ARM_SYSCTRL_SYST_CSR reset_value) SysTick Control and Status Register */

#define ARM_SYSCTRL_SYST_CSR_ENABLE_Pos       0  /**< \brief (ARM_SYSCTRL_SYST_CSR) Indicates the enabled status of the SysTick counter */
#define ARM_SYSCTRL_SYST_CSR_ENABLE_Msk       (0x1ul << ARM_SYSCTRL_SYST_CSR_ENABLE_Pos)
#define ARM_SYSCTRL_SYST_CSR_ENABLE(value)    (ARM_SYSCTRL_SYST_CSR_ENABLE_Msk & ((value) << ARM_SYSCTRL_SYST_CSR_ENABLE_Pos))  
#define   ARM_SYSCTRL_SYST_CSR_ENABLE_0_Val        0X0ul  /**< \brief (ARM_SYSCTRL_SYST_CSR) Counter Disabled  */
#define   ARM_SYSCTRL_SYST_CSR_ENABLE_1_Val        0X1ul  /**< \brief (ARM_SYSCTRL_SYST_CSR) Counter Operating  */
#define ARM_SYSCTRL_SYST_CSR_ENABLE_0         (ARM_SYSCTRL_SYST_CSR_ENABLE_0_Val << ARM_SYSCTRL_SYST_CSR_ENABLE_Pos)
#define ARM_SYSCTRL_SYST_CSR_ENABLE_1         (ARM_SYSCTRL_SYST_CSR_ENABLE_1_Val << ARM_SYSCTRL_SYST_CSR_ENABLE_Pos)
#define ARM_SYSCTRL_SYST_CSR_TICKINT_Pos      1  /**< \brief (ARM_SYSCTRL_SYST_CSR) Indicates whether counting to 0 causes the status of the SysTick exception to change to pending */
#define ARM_SYSCTRL_SYST_CSR_TICKINT_Msk      (0x1ul << ARM_SYSCTRL_SYST_CSR_TICKINT_Pos)
#define ARM_SYSCTRL_SYST_CSR_TICKINT(value)   (ARM_SYSCTRL_SYST_CSR_TICKINT_Msk & ((value) << ARM_SYSCTRL_SYST_CSR_TICKINT_Pos))  
#define   ARM_SYSCTRL_SYST_CSR_TICKINT_0_Val        0X0ul  /**< \brief (ARM_SYSCTRL_SYST_CSR) Count to 0 does not affect the SysTick exception status  */
#define   ARM_SYSCTRL_SYST_CSR_TICKINT_1_Val        0X1ul  /**< \brief (ARM_SYSCTRL_SYST_CSR) Count to 0 changes the SysTick excpetion status to pending  */
#define ARM_SYSCTRL_SYST_CSR_TICKINT_0        (ARM_SYSCTRL_SYST_CSR_TICKINT_0_Val << ARM_SYSCTRL_SYST_CSR_TICKINT_Pos)
#define ARM_SYSCTRL_SYST_CSR_TICKINT_1        (ARM_SYSCTRL_SYST_CSR_TICKINT_1_Val << ARM_SYSCTRL_SYST_CSR_TICKINT_Pos)
#define ARM_SYSCTRL_SYST_CSR_CLKSOURCE_Pos    2  /**< \brief (ARM_SYSCTRL_SYST_CSR) SysTick uses the processor clock (writes are ignored) */
#define ARM_SYSCTRL_SYST_CSR_CLKSOURCE        (0x1ul << ARM_SYSCTRL_SYST_CSR_CLKSOURCE_Pos)  
#define ARM_SYSCTRL_SYST_CSR_COUNTFLAG_Pos    16  /**< \brief (ARM_SYSCTRL_SYST_CSR) If 1 then the timer has counted to 0  */
#define ARM_SYSCTRL_SYST_CSR_COUNTFLAG        (0x1ul << ARM_SYSCTRL_SYST_CSR_COUNTFLAG_Pos)  
#define ARM_SYSCTRL_SYST_CSR_MASK             0x10007ul    /**< \brief (ARM_SYSCTRL_SYST_CSR) Register MASK */

/* -------- ARM_SYSCTRL_SYST_RVR : (ARM_SYSCTRL Offset: 0x14) (R/W  32) SysTick Reload Value Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t SYST_RVR:24;               /*!< bit:  0..23                                           */
    uint32_t :8;                        /*!< bit: 24..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SYST_RVR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SYST_RVR_OFFSET           0x14           /**<  \brief (ARM_SYSCTRL_SYST_RVR offset) SysTick Reload Value Register */
#define ARM_SYSCTRL_SYST_RVR_RESETVALUE       0x00ul         /**<  \brief (ARM_SYSCTRL_SYST_RVR reset_value) SysTick Reload Value Register */

#define ARM_SYSCTRL_SYST_RVR_SYST_RVR_Pos     0  /**< \brief (ARM_SYSCTRL_SYST_RVR)                                       */
#define ARM_SYSCTRL_SYST_RVR_SYST_RVR_Msk     (0xFFFFFFul << ARM_SYSCTRL_SYST_RVR_SYST_RVR_Pos)
#define ARM_SYSCTRL_SYST_RVR_SYST_RVR(value)  (ARM_SYSCTRL_SYST_RVR_SYST_RVR_Msk & ((value) << ARM_SYSCTRL_SYST_RVR_SYST_RVR_Pos))  
#define ARM_SYSCTRL_SYST_RVR_MASK             0xFFFFFFul    /**< \brief (ARM_SYSCTRL_SYST_RVR) Register MASK */

/* -------- ARM_SYSCTRL_SYST_CVR : (ARM_SYSCTRL Offset: 0x18) (R/W  32) SysTick Current Value Register (Any Write Clears to 0) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t SYST_CVR:24;               /*!< bit:  0..23                                           */
    uint32_t :8;                        /*!< bit: 24..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SYST_CVR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SYST_CVR_OFFSET           0x18           /**<  \brief (ARM_SYSCTRL_SYST_CVR offset) SysTick Current Value Register (Any Write Clears to 0) */
#define ARM_SYSCTRL_SYST_CVR_RESETVALUE       0x00ul         /**<  \brief (ARM_SYSCTRL_SYST_CVR reset_value) SysTick Current Value Register (Any Write Clears to 0) */

#define ARM_SYSCTRL_SYST_CVR_SYST_CVR_Pos     0  /**< \brief (ARM_SYSCTRL_SYST_CVR)                                       */
#define ARM_SYSCTRL_SYST_CVR_SYST_CVR_Msk     (0xFFFFFFul << ARM_SYSCTRL_SYST_CVR_SYST_CVR_Pos)
#define ARM_SYSCTRL_SYST_CVR_SYST_CVR(value)  (ARM_SYSCTRL_SYST_CVR_SYST_CVR_Msk & ((value) << ARM_SYSCTRL_SYST_CVR_SYST_CVR_Pos))  
#define ARM_SYSCTRL_SYST_CVR_MASK             0xFFFFFFul    /**< \brief (ARM_SYSCTRL_SYST_CVR) Register MASK */

/* -------- ARM_SYSCTRL_SYST_CALIB : (ARM_SYSCTRL Offset: 0x1c) (R/  32) SysTick Calibration Value Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t TENMS:24;                  /*!< bit:  0..23  Holds a reload value to be used for 10ms timing. If 0 then calibration value is not known. */
    uint32_t :6;                        /*!< bit: 24..29  Reserved                                 */
    uint32_t SKEW:1;                    /*!< bit:     30  If 1 then 10ms calibration value is inexact */
    uint32_t NOREF:1;                   /*!< bit:     31  If 1 then reference clock is not implemented */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SYST_CALIB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SYST_CALIB_OFFSET         0x1C           /**<  \brief (ARM_SYSCTRL_SYST_CALIB offset) SysTick Calibration Value Register */
#define ARM_SYSCTRL_SYST_CALIB_RESETVALUE     0x00ul         /**<  \brief (ARM_SYSCTRL_SYST_CALIB reset_value) SysTick Calibration Value Register */

#define ARM_SYSCTRL_SYST_CALIB_TENMS_Pos      0  /**< \brief (ARM_SYSCTRL_SYST_CALIB) Holds a reload value to be used for 10ms timing. If 0 then calibration value is not known. */
#define ARM_SYSCTRL_SYST_CALIB_TENMS_Msk      (0xFFFFFFul << ARM_SYSCTRL_SYST_CALIB_TENMS_Pos)
#define ARM_SYSCTRL_SYST_CALIB_TENMS(value)   (ARM_SYSCTRL_SYST_CALIB_TENMS_Msk & ((value) << ARM_SYSCTRL_SYST_CALIB_TENMS_Pos))  
#define ARM_SYSCTRL_SYST_CALIB_SKEW_Pos       30  /**< \brief (ARM_SYSCTRL_SYST_CALIB) If 1 then 10ms calibration value is inexact */
#define ARM_SYSCTRL_SYST_CALIB_SKEW           (0x1ul << ARM_SYSCTRL_SYST_CALIB_SKEW_Pos)  
#define ARM_SYSCTRL_SYST_CALIB_NOREF_Pos      31  /**< \brief (ARM_SYSCTRL_SYST_CALIB) If 1 then reference clock is not implemented */
#define ARM_SYSCTRL_SYST_CALIB_NOREF          (0x1ul << ARM_SYSCTRL_SYST_CALIB_NOREF_Pos)  
#define ARM_SYSCTRL_SYST_CALIB_MASK           0xC0FFFFFFul    /**< \brief (ARM_SYSCTRL_SYST_CALIB) Register MASK */

/* -------- ARM_SYSCTRL_NVIC_ISER : (ARM_SYSCTRL Offset: 0x100) (R/W  32) Interrupt Set-Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t SETENA:32;                 /*!< bit:  0..31  Write 1 to enable the associated interrupt */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_NVIC_ISER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_NVIC_ISER_OFFSET          0x100          /**<  \brief (ARM_SYSCTRL_NVIC_ISER offset) Interrupt Set-Enable Register */
#define ARM_SYSCTRL_NVIC_ISER_RESETVALUE      0x00ul         /**<  \brief (ARM_SYSCTRL_NVIC_ISER reset_value) Interrupt Set-Enable Register */

#define ARM_SYSCTRL_NVIC_ISER_SETENA_Pos      0  /**< \brief (ARM_SYSCTRL_NVIC_ISER) Write 1 to enable the associated interrupt */
#define ARM_SYSCTRL_NVIC_ISER_SETENA_Msk      (0xFFFFFFFFul << ARM_SYSCTRL_NVIC_ISER_SETENA_Pos)
#define ARM_SYSCTRL_NVIC_ISER_SETENA(value)   (ARM_SYSCTRL_NVIC_ISER_SETENA_Msk & ((value) << ARM_SYSCTRL_NVIC_ISER_SETENA_Pos))  
#define ARM_SYSCTRL_NVIC_ISER_MASK            0xFFFFFFFFul    /**< \brief (ARM_SYSCTRL_NVIC_ISER) Register MASK */

/* -------- ARM_SYSCTRL_NVIC_ICER : (ARM_SYSCTRL Offset: 0x180) (R/W  32) Interrupt Clear Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CLRENA:32;                 /*!< bit:  0..31  Write 1 to disable the associated interrupt */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_NVIC_ICER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_NVIC_ICER_OFFSET          0x180          /**<  \brief (ARM_SYSCTRL_NVIC_ICER offset) Interrupt Clear Enable Register */
#define ARM_SYSCTRL_NVIC_ICER_RESETVALUE      0x00ul         /**<  \brief (ARM_SYSCTRL_NVIC_ICER reset_value) Interrupt Clear Enable Register */

#define ARM_SYSCTRL_NVIC_ICER_CLRENA_Pos      0  /**< \brief (ARM_SYSCTRL_NVIC_ICER) Write 1 to disable the associated interrupt */
#define ARM_SYSCTRL_NVIC_ICER_CLRENA_Msk      (0xFFFFFFFFul << ARM_SYSCTRL_NVIC_ICER_CLRENA_Pos)
#define ARM_SYSCTRL_NVIC_ICER_CLRENA(value)   (ARM_SYSCTRL_NVIC_ICER_CLRENA_Msk & ((value) << ARM_SYSCTRL_NVIC_ICER_CLRENA_Pos))  
#define ARM_SYSCTRL_NVIC_ICER_MASK            0xFFFFFFFFul    /**< \brief (ARM_SYSCTRL_NVIC_ICER) Register MASK */

/* -------- ARM_SYSCTRL_NVIC_ISPR : (ARM_SYSCTRL Offset: 0x200) (R/W  32) Interrupt Set-Pending Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t SETPEND:32;                /*!< bit:  0..31  Change the state of the associated interrupt to pending */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_NVIC_ISPR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_NVIC_ISPR_OFFSET          0x200          /**<  \brief (ARM_SYSCTRL_NVIC_ISPR offset) Interrupt Set-Pending Register */
#define ARM_SYSCTRL_NVIC_ISPR_RESETVALUE      0x00ul         /**<  \brief (ARM_SYSCTRL_NVIC_ISPR reset_value) Interrupt Set-Pending Register */

#define ARM_SYSCTRL_NVIC_ISPR_SETPEND_Pos     0  /**< \brief (ARM_SYSCTRL_NVIC_ISPR) Change the state of the associated interrupt to pending */
#define ARM_SYSCTRL_NVIC_ISPR_SETPEND_Msk     (0xFFFFFFFFul << ARM_SYSCTRL_NVIC_ISPR_SETPEND_Pos)
#define ARM_SYSCTRL_NVIC_ISPR_SETPEND(value)  (ARM_SYSCTRL_NVIC_ISPR_SETPEND_Msk & ((value) << ARM_SYSCTRL_NVIC_ISPR_SETPEND_Pos))  
#define ARM_SYSCTRL_NVIC_ISPR_MASK            0xFFFFFFFFul    /**< \brief (ARM_SYSCTRL_NVIC_ISPR) Register MASK */

/* -------- ARM_SYSCTRL_NVIC_ICPR : (ARM_SYSCTRL Offset: 0x280) (R/W  32) Interrupt Clear-Pending Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CLRPEND:32;                /*!< bit:  0..31  Change the state of the associated interrupt to not pending */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_NVIC_ICPR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_NVIC_ICPR_OFFSET          0x280          /**<  \brief (ARM_SYSCTRL_NVIC_ICPR offset) Interrupt Clear-Pending Register */
#define ARM_SYSCTRL_NVIC_ICPR_RESETVALUE      0x00ul         /**<  \brief (ARM_SYSCTRL_NVIC_ICPR reset_value) Interrupt Clear-Pending Register */

#define ARM_SYSCTRL_NVIC_ICPR_CLRPEND_Pos     0  /**< \brief (ARM_SYSCTRL_NVIC_ICPR) Change the state of the associated interrupt to not pending */
#define ARM_SYSCTRL_NVIC_ICPR_CLRPEND_Msk     (0xFFFFFFFFul << ARM_SYSCTRL_NVIC_ICPR_CLRPEND_Pos)
#define ARM_SYSCTRL_NVIC_ICPR_CLRPEND(value)  (ARM_SYSCTRL_NVIC_ICPR_CLRPEND_Msk & ((value) << ARM_SYSCTRL_NVIC_ICPR_CLRPEND_Pos))  
#define ARM_SYSCTRL_NVIC_ICPR_MASK            0xFFFFFFFFul    /**< \brief (ARM_SYSCTRL_NVIC_ICPR) Register MASK */

/* -------- ARM_SYSCTRL_NVIC_IPR0 : (ARM_SYSCTRL Offset: 0x400) (R/W  32) Interrupt Priority Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :6;                        /*!< bit:   0..5  Reserved                                 */
    uint32_t PRI_N0:2;                  /*!< bit:   6..7  Priority of Interrupt 0                  */
    uint32_t :6;                        /*!< bit:  8..13  Reserved                                 */
    uint32_t PRI_N1:2;                  /*!< bit: 14..15  Priority of Interrupt 1                  */
    uint32_t :6;                        /*!< bit: 16..21  Reserved                                 */
    uint32_t PRI_N2:2;                  /*!< bit: 22..23  Priority of Interrupt 2                  */
    uint32_t :6;                        /*!< bit: 24..29  Reserved                                 */
    uint32_t PRI_N3:2;                  /*!< bit: 30..31  Priority of Interrupt 3                  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_NVIC_IPR0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_NVIC_IPR0_OFFSET          0x400          /**<  \brief (ARM_SYSCTRL_NVIC_IPR0 offset) Interrupt Priority Register 0 */
#define ARM_SYSCTRL_NVIC_IPR0_RESETVALUE      0x00ul         /**<  \brief (ARM_SYSCTRL_NVIC_IPR0 reset_value) Interrupt Priority Register 0 */

#define ARM_SYSCTRL_NVIC_IPR0_PRI_N0_Pos      6  /**< \brief (ARM_SYSCTRL_NVIC_IPR0) Priority of Interrupt 0              */
#define ARM_SYSCTRL_NVIC_IPR0_PRI_N0_Msk      (0x3ul << ARM_SYSCTRL_NVIC_IPR0_PRI_N0_Pos)
#define ARM_SYSCTRL_NVIC_IPR0_PRI_N0(value)   (ARM_SYSCTRL_NVIC_IPR0_PRI_N0_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR0_PRI_N0_Pos))  
#define ARM_SYSCTRL_NVIC_IPR0_PRI_N1_Pos      14  /**< \brief (ARM_SYSCTRL_NVIC_IPR0) Priority of Interrupt 1              */
#define ARM_SYSCTRL_NVIC_IPR0_PRI_N1_Msk      (0x3ul << ARM_SYSCTRL_NVIC_IPR0_PRI_N1_Pos)
#define ARM_SYSCTRL_NVIC_IPR0_PRI_N1(value)   (ARM_SYSCTRL_NVIC_IPR0_PRI_N1_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR0_PRI_N1_Pos))  
#define ARM_SYSCTRL_NVIC_IPR0_PRI_N2_Pos      22  /**< \brief (ARM_SYSCTRL_NVIC_IPR0) Priority of Interrupt 2              */
#define ARM_SYSCTRL_NVIC_IPR0_PRI_N2_Msk      (0x3ul << ARM_SYSCTRL_NVIC_IPR0_PRI_N2_Pos)
#define ARM_SYSCTRL_NVIC_IPR0_PRI_N2(value)   (ARM_SYSCTRL_NVIC_IPR0_PRI_N2_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR0_PRI_N2_Pos))  
#define ARM_SYSCTRL_NVIC_IPR0_PRI_N3_Pos      30  /**< \brief (ARM_SYSCTRL_NVIC_IPR0) Priority of Interrupt 3              */
#define ARM_SYSCTRL_NVIC_IPR0_PRI_N3_Msk      (0x3ul << ARM_SYSCTRL_NVIC_IPR0_PRI_N3_Pos)
#define ARM_SYSCTRL_NVIC_IPR0_PRI_N3(value)   (ARM_SYSCTRL_NVIC_IPR0_PRI_N3_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR0_PRI_N3_Pos))  
#define ARM_SYSCTRL_NVIC_IPR0_MASK            0xC0C0C0C0ul    /**< \brief (ARM_SYSCTRL_NVIC_IPR0) Register MASK */

/* -------- ARM_SYSCTRL_NVIC_IPR1 : (ARM_SYSCTRL Offset: 0x404) (R/W  32) Interrupt Priority Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :6;                        /*!< bit:   0..5  Reserved                                 */
    uint32_t PRI_N4:2;                  /*!< bit:   6..7  Priority of Interrupt 4                  */
    uint32_t :6;                        /*!< bit:  8..13  Reserved                                 */
    uint32_t PRI_N5:2;                  /*!< bit: 14..15  Priority of Interrupt 5                  */
    uint32_t :6;                        /*!< bit: 16..21  Reserved                                 */
    uint32_t PRI_N6:2;                  /*!< bit: 22..23  Priority of Interrupt 6                  */
    uint32_t :6;                        /*!< bit: 24..29  Reserved                                 */
    uint32_t PRI_N7:2;                  /*!< bit: 30..31  Priority of Interrupt 7                  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_NVIC_IPR1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_NVIC_IPR1_OFFSET          0x404          /**<  \brief (ARM_SYSCTRL_NVIC_IPR1 offset) Interrupt Priority Register 1 */
#define ARM_SYSCTRL_NVIC_IPR1_RESETVALUE      0x00ul         /**<  \brief (ARM_SYSCTRL_NVIC_IPR1 reset_value) Interrupt Priority Register 1 */

#define ARM_SYSCTRL_NVIC_IPR1_PRI_N4_Pos      6  /**< \brief (ARM_SYSCTRL_NVIC_IPR1) Priority of Interrupt 4              */
#define ARM_SYSCTRL_NVIC_IPR1_PRI_N4_Msk      (0x3ul << ARM_SYSCTRL_NVIC_IPR1_PRI_N4_Pos)
#define ARM_SYSCTRL_NVIC_IPR1_PRI_N4(value)   (ARM_SYSCTRL_NVIC_IPR1_PRI_N4_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR1_PRI_N4_Pos))  
#define ARM_SYSCTRL_NVIC_IPR1_PRI_N5_Pos      14  /**< \brief (ARM_SYSCTRL_NVIC_IPR1) Priority of Interrupt 5              */
#define ARM_SYSCTRL_NVIC_IPR1_PRI_N5_Msk      (0x3ul << ARM_SYSCTRL_NVIC_IPR1_PRI_N5_Pos)
#define ARM_SYSCTRL_NVIC_IPR1_PRI_N5(value)   (ARM_SYSCTRL_NVIC_IPR1_PRI_N5_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR1_PRI_N5_Pos))  
#define ARM_SYSCTRL_NVIC_IPR1_PRI_N6_Pos      22  /**< \brief (ARM_SYSCTRL_NVIC_IPR1) Priority of Interrupt 6              */
#define ARM_SYSCTRL_NVIC_IPR1_PRI_N6_Msk      (0x3ul << ARM_SYSCTRL_NVIC_IPR1_PRI_N6_Pos)
#define ARM_SYSCTRL_NVIC_IPR1_PRI_N6(value)   (ARM_SYSCTRL_NVIC_IPR1_PRI_N6_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR1_PRI_N6_Pos))  
#define ARM_SYSCTRL_NVIC_IPR1_PRI_N7_Pos      30  /**< \brief (ARM_SYSCTRL_NVIC_IPR1) Priority of Interrupt 7              */
#define ARM_SYSCTRL_NVIC_IPR1_PRI_N7_Msk      (0x3ul << ARM_SYSCTRL_NVIC_IPR1_PRI_N7_Pos)
#define ARM_SYSCTRL_NVIC_IPR1_PRI_N7(value)   (ARM_SYSCTRL_NVIC_IPR1_PRI_N7_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR1_PRI_N7_Pos))  
#define ARM_SYSCTRL_NVIC_IPR1_MASK            0xC0C0C0C0ul    /**< \brief (ARM_SYSCTRL_NVIC_IPR1) Register MASK */

/* -------- ARM_SYSCTRL_NVIC_IPR2 : (ARM_SYSCTRL Offset: 0x408) (R/W  32) Interrupt Priority Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :6;                        /*!< bit:   0..5  Reserved                                 */
    uint32_t PRI_N8:2;                  /*!< bit:   6..7  Priority of Interrupt 8                  */
    uint32_t :6;                        /*!< bit:  8..13  Reserved                                 */
    uint32_t PRI_N9:2;                  /*!< bit: 14..15  Priority of Interrupt 9                  */
    uint32_t :6;                        /*!< bit: 16..21  Reserved                                 */
    uint32_t PRI_N10:2;                 /*!< bit: 22..23  Priority of Interrupt 10                 */
    uint32_t :6;                        /*!< bit: 24..29  Reserved                                 */
    uint32_t PRI_N11:2;                 /*!< bit: 30..31  Priority of Interrupt 11                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_NVIC_IPR2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_NVIC_IPR2_OFFSET          0x408          /**<  \brief (ARM_SYSCTRL_NVIC_IPR2 offset) Interrupt Priority Register 2 */
#define ARM_SYSCTRL_NVIC_IPR2_RESETVALUE      0x00ul         /**<  \brief (ARM_SYSCTRL_NVIC_IPR2 reset_value) Interrupt Priority Register 2 */

#define ARM_SYSCTRL_NVIC_IPR2_PRI_N8_Pos      6  /**< \brief (ARM_SYSCTRL_NVIC_IPR2) Priority of Interrupt 8              */
#define ARM_SYSCTRL_NVIC_IPR2_PRI_N8_Msk      (0x3ul << ARM_SYSCTRL_NVIC_IPR2_PRI_N8_Pos)
#define ARM_SYSCTRL_NVIC_IPR2_PRI_N8(value)   (ARM_SYSCTRL_NVIC_IPR2_PRI_N8_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR2_PRI_N8_Pos))  
#define ARM_SYSCTRL_NVIC_IPR2_PRI_N9_Pos      14  /**< \brief (ARM_SYSCTRL_NVIC_IPR2) Priority of Interrupt 9              */
#define ARM_SYSCTRL_NVIC_IPR2_PRI_N9_Msk      (0x3ul << ARM_SYSCTRL_NVIC_IPR2_PRI_N9_Pos)
#define ARM_SYSCTRL_NVIC_IPR2_PRI_N9(value)   (ARM_SYSCTRL_NVIC_IPR2_PRI_N9_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR2_PRI_N9_Pos))  
#define ARM_SYSCTRL_NVIC_IPR2_PRI_N10_Pos     22  /**< \brief (ARM_SYSCTRL_NVIC_IPR2) Priority of Interrupt 10             */
#define ARM_SYSCTRL_NVIC_IPR2_PRI_N10_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR2_PRI_N10_Pos)
#define ARM_SYSCTRL_NVIC_IPR2_PRI_N10(value)  (ARM_SYSCTRL_NVIC_IPR2_PRI_N10_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR2_PRI_N10_Pos))  
#define ARM_SYSCTRL_NVIC_IPR2_PRI_N11_Pos     30  /**< \brief (ARM_SYSCTRL_NVIC_IPR2) Priority of Interrupt 11             */
#define ARM_SYSCTRL_NVIC_IPR2_PRI_N11_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR2_PRI_N11_Pos)
#define ARM_SYSCTRL_NVIC_IPR2_PRI_N11(value)  (ARM_SYSCTRL_NVIC_IPR2_PRI_N11_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR2_PRI_N11_Pos))  
#define ARM_SYSCTRL_NVIC_IPR2_MASK            0xC0C0C0C0ul    /**< \brief (ARM_SYSCTRL_NVIC_IPR2) Register MASK */

/* -------- ARM_SYSCTRL_NVIC_IPR3 : (ARM_SYSCTRL Offset: 0x40c) (R/W  32) Interrupt Priority Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :6;                        /*!< bit:   0..5  Reserved                                 */
    uint32_t PRI_N12:2;                 /*!< bit:   6..7  Priority of Interrupt 12                 */
    uint32_t :6;                        /*!< bit:  8..13  Reserved                                 */
    uint32_t PRI_N13:2;                 /*!< bit: 14..15  Priority of Interrupt 13                 */
    uint32_t :6;                        /*!< bit: 16..21  Reserved                                 */
    uint32_t PRI_N14:2;                 /*!< bit: 22..23  Priority of Interrupt 14                 */
    uint32_t :6;                        /*!< bit: 24..29  Reserved                                 */
    uint32_t PRI_N15:2;                 /*!< bit: 30..31  Priority of Interrupt 15                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_NVIC_IPR3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_NVIC_IPR3_OFFSET          0x40C          /**<  \brief (ARM_SYSCTRL_NVIC_IPR3 offset) Interrupt Priority Register 3 */
#define ARM_SYSCTRL_NVIC_IPR3_RESETVALUE      0x00ul         /**<  \brief (ARM_SYSCTRL_NVIC_IPR3 reset_value) Interrupt Priority Register 3 */

#define ARM_SYSCTRL_NVIC_IPR3_PRI_N12_Pos     6  /**< \brief (ARM_SYSCTRL_NVIC_IPR3) Priority of Interrupt 12             */
#define ARM_SYSCTRL_NVIC_IPR3_PRI_N12_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR3_PRI_N12_Pos)
#define ARM_SYSCTRL_NVIC_IPR3_PRI_N12(value)  (ARM_SYSCTRL_NVIC_IPR3_PRI_N12_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR3_PRI_N12_Pos))  
#define ARM_SYSCTRL_NVIC_IPR3_PRI_N13_Pos     14  /**< \brief (ARM_SYSCTRL_NVIC_IPR3) Priority of Interrupt 13             */
#define ARM_SYSCTRL_NVIC_IPR3_PRI_N13_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR3_PRI_N13_Pos)
#define ARM_SYSCTRL_NVIC_IPR3_PRI_N13(value)  (ARM_SYSCTRL_NVIC_IPR3_PRI_N13_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR3_PRI_N13_Pos))  
#define ARM_SYSCTRL_NVIC_IPR3_PRI_N14_Pos     22  /**< \brief (ARM_SYSCTRL_NVIC_IPR3) Priority of Interrupt 14             */
#define ARM_SYSCTRL_NVIC_IPR3_PRI_N14_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR3_PRI_N14_Pos)
#define ARM_SYSCTRL_NVIC_IPR3_PRI_N14(value)  (ARM_SYSCTRL_NVIC_IPR3_PRI_N14_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR3_PRI_N14_Pos))  
#define ARM_SYSCTRL_NVIC_IPR3_PRI_N15_Pos     30  /**< \brief (ARM_SYSCTRL_NVIC_IPR3) Priority of Interrupt 15             */
#define ARM_SYSCTRL_NVIC_IPR3_PRI_N15_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR3_PRI_N15_Pos)
#define ARM_SYSCTRL_NVIC_IPR3_PRI_N15(value)  (ARM_SYSCTRL_NVIC_IPR3_PRI_N15_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR3_PRI_N15_Pos))  
#define ARM_SYSCTRL_NVIC_IPR3_MASK            0xC0C0C0C0ul    /**< \brief (ARM_SYSCTRL_NVIC_IPR3) Register MASK */

/* -------- ARM_SYSCTRL_NVIC_IPR4 : (ARM_SYSCTRL Offset: 0x410) (R/W  32) Interrupt Priority Register 4 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :5;                        /*!< bit:   0..4  Reserved                                 */
    uint32_t PRI_N16:3;                 /*!< bit:   5..7  Priority of Interrupt 16                 */
    uint32_t :6;                        /*!< bit:  8..13  Reserved                                 */
    uint32_t PRI_N17:2;                 /*!< bit: 14..15  Priority of Interrupt 17                 */
    uint32_t :6;                        /*!< bit: 16..21  Reserved                                 */
    uint32_t PRI_N18:2;                 /*!< bit: 22..23  Priority of Interrupt 18                 */
    uint32_t :6;                        /*!< bit: 24..29  Reserved                                 */
    uint32_t PRI_N19:2;                 /*!< bit: 30..31  Priority of Interrupt 19                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_NVIC_IPR4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_NVIC_IPR4_OFFSET          0x410          /**<  \brief (ARM_SYSCTRL_NVIC_IPR4 offset) Interrupt Priority Register 4 */
#define ARM_SYSCTRL_NVIC_IPR4_RESETVALUE      0x00ul         /**<  \brief (ARM_SYSCTRL_NVIC_IPR4 reset_value) Interrupt Priority Register 4 */

#define ARM_SYSCTRL_NVIC_IPR4_PRI_N16_Pos     5  /**< \brief (ARM_SYSCTRL_NVIC_IPR4) Priority of Interrupt 16             */
#define ARM_SYSCTRL_NVIC_IPR4_PRI_N16_Msk     (0x7ul << ARM_SYSCTRL_NVIC_IPR4_PRI_N16_Pos)
#define ARM_SYSCTRL_NVIC_IPR4_PRI_N16(value)  (ARM_SYSCTRL_NVIC_IPR4_PRI_N16_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR4_PRI_N16_Pos))  
#define ARM_SYSCTRL_NVIC_IPR4_PRI_N17_Pos     14  /**< \brief (ARM_SYSCTRL_NVIC_IPR4) Priority of Interrupt 17             */
#define ARM_SYSCTRL_NVIC_IPR4_PRI_N17_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR4_PRI_N17_Pos)
#define ARM_SYSCTRL_NVIC_IPR4_PRI_N17(value)  (ARM_SYSCTRL_NVIC_IPR4_PRI_N17_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR4_PRI_N17_Pos))  
#define ARM_SYSCTRL_NVIC_IPR4_PRI_N18_Pos     22  /**< \brief (ARM_SYSCTRL_NVIC_IPR4) Priority of Interrupt 18             */
#define ARM_SYSCTRL_NVIC_IPR4_PRI_N18_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR4_PRI_N18_Pos)
#define ARM_SYSCTRL_NVIC_IPR4_PRI_N18(value)  (ARM_SYSCTRL_NVIC_IPR4_PRI_N18_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR4_PRI_N18_Pos))  
#define ARM_SYSCTRL_NVIC_IPR4_PRI_N19_Pos     30  /**< \brief (ARM_SYSCTRL_NVIC_IPR4) Priority of Interrupt 19             */
#define ARM_SYSCTRL_NVIC_IPR4_PRI_N19_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR4_PRI_N19_Pos)
#define ARM_SYSCTRL_NVIC_IPR4_PRI_N19(value)  (ARM_SYSCTRL_NVIC_IPR4_PRI_N19_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR4_PRI_N19_Pos))  
#define ARM_SYSCTRL_NVIC_IPR4_MASK            0xC0C0C0E0ul    /**< \brief (ARM_SYSCTRL_NVIC_IPR4) Register MASK */

/* -------- ARM_SYSCTRL_NVIC_IPR5 : (ARM_SYSCTRL Offset: 0x414) (R/W  32) Interrupt Priority Register 5 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :5;                        /*!< bit:   0..4  Reserved                                 */
    uint32_t PRI_N20:3;                 /*!< bit:   5..7  Priority of Interrupt 20                 */
    uint32_t :6;                        /*!< bit:  8..13  Reserved                                 */
    uint32_t PRI_N21:2;                 /*!< bit: 14..15  Priority of Interrupt 21                 */
    uint32_t :6;                        /*!< bit: 16..21  Reserved                                 */
    uint32_t PRI_N22:2;                 /*!< bit: 22..23  Priority of Interrupt 22                 */
    uint32_t :6;                        /*!< bit: 24..29  Reserved                                 */
    uint32_t PRI_N23:2;                 /*!< bit: 30..31  Priority of Interrupt 23                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_NVIC_IPR5_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_NVIC_IPR5_OFFSET          0x414          /**<  \brief (ARM_SYSCTRL_NVIC_IPR5 offset) Interrupt Priority Register 5 */
#define ARM_SYSCTRL_NVIC_IPR5_RESETVALUE      0x00ul         /**<  \brief (ARM_SYSCTRL_NVIC_IPR5 reset_value) Interrupt Priority Register 5 */

#define ARM_SYSCTRL_NVIC_IPR5_PRI_N20_Pos     5  /**< \brief (ARM_SYSCTRL_NVIC_IPR5) Priority of Interrupt 20             */
#define ARM_SYSCTRL_NVIC_IPR5_PRI_N20_Msk     (0x7ul << ARM_SYSCTRL_NVIC_IPR5_PRI_N20_Pos)
#define ARM_SYSCTRL_NVIC_IPR5_PRI_N20(value)  (ARM_SYSCTRL_NVIC_IPR5_PRI_N20_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR5_PRI_N20_Pos))  
#define ARM_SYSCTRL_NVIC_IPR5_PRI_N21_Pos     14  /**< \brief (ARM_SYSCTRL_NVIC_IPR5) Priority of Interrupt 21             */
#define ARM_SYSCTRL_NVIC_IPR5_PRI_N21_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR5_PRI_N21_Pos)
#define ARM_SYSCTRL_NVIC_IPR5_PRI_N21(value)  (ARM_SYSCTRL_NVIC_IPR5_PRI_N21_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR5_PRI_N21_Pos))  
#define ARM_SYSCTRL_NVIC_IPR5_PRI_N22_Pos     22  /**< \brief (ARM_SYSCTRL_NVIC_IPR5) Priority of Interrupt 22             */
#define ARM_SYSCTRL_NVIC_IPR5_PRI_N22_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR5_PRI_N22_Pos)
#define ARM_SYSCTRL_NVIC_IPR5_PRI_N22(value)  (ARM_SYSCTRL_NVIC_IPR5_PRI_N22_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR5_PRI_N22_Pos))  
#define ARM_SYSCTRL_NVIC_IPR5_PRI_N23_Pos     30  /**< \brief (ARM_SYSCTRL_NVIC_IPR5) Priority of Interrupt 23             */
#define ARM_SYSCTRL_NVIC_IPR5_PRI_N23_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR5_PRI_N23_Pos)
#define ARM_SYSCTRL_NVIC_IPR5_PRI_N23(value)  (ARM_SYSCTRL_NVIC_IPR5_PRI_N23_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR5_PRI_N23_Pos))  
#define ARM_SYSCTRL_NVIC_IPR5_MASK            0xC0C0C0E0ul    /**< \brief (ARM_SYSCTRL_NVIC_IPR5) Register MASK */

/* -------- ARM_SYSCTRL_NVIC_IPR6 : (ARM_SYSCTRL Offset: 0x418) (R/W  32) Interrupt Priority Register 6 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :5;                        /*!< bit:   0..4  Reserved                                 */
    uint32_t PRI_N24:3;                 /*!< bit:   5..7  Priority of Interrupt 24                 */
    uint32_t :6;                        /*!< bit:  8..13  Reserved                                 */
    uint32_t PRI_N25:2;                 /*!< bit: 14..15  Priority of Interrupt 25                 */
    uint32_t :6;                        /*!< bit: 16..21  Reserved                                 */
    uint32_t PRI_N26:2;                 /*!< bit: 22..23  Priority of Interrupt 26                 */
    uint32_t :6;                        /*!< bit: 24..29  Reserved                                 */
    uint32_t PRI_N27:2;                 /*!< bit: 30..31  Priority of Interrupt 27                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_NVIC_IPR6_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_NVIC_IPR6_OFFSET          0x418          /**<  \brief (ARM_SYSCTRL_NVIC_IPR6 offset) Interrupt Priority Register 6 */
#define ARM_SYSCTRL_NVIC_IPR6_RESETVALUE      0x00ul         /**<  \brief (ARM_SYSCTRL_NVIC_IPR6 reset_value) Interrupt Priority Register 6 */

#define ARM_SYSCTRL_NVIC_IPR6_PRI_N24_Pos     5  /**< \brief (ARM_SYSCTRL_NVIC_IPR6) Priority of Interrupt 24             */
#define ARM_SYSCTRL_NVIC_IPR6_PRI_N24_Msk     (0x7ul << ARM_SYSCTRL_NVIC_IPR6_PRI_N24_Pos)
#define ARM_SYSCTRL_NVIC_IPR6_PRI_N24(value)  (ARM_SYSCTRL_NVIC_IPR6_PRI_N24_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR6_PRI_N24_Pos))  
#define ARM_SYSCTRL_NVIC_IPR6_PRI_N25_Pos     14  /**< \brief (ARM_SYSCTRL_NVIC_IPR6) Priority of Interrupt 25             */
#define ARM_SYSCTRL_NVIC_IPR6_PRI_N25_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR6_PRI_N25_Pos)
#define ARM_SYSCTRL_NVIC_IPR6_PRI_N25(value)  (ARM_SYSCTRL_NVIC_IPR6_PRI_N25_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR6_PRI_N25_Pos))  
#define ARM_SYSCTRL_NVIC_IPR6_PRI_N26_Pos     22  /**< \brief (ARM_SYSCTRL_NVIC_IPR6) Priority of Interrupt 26             */
#define ARM_SYSCTRL_NVIC_IPR6_PRI_N26_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR6_PRI_N26_Pos)
#define ARM_SYSCTRL_NVIC_IPR6_PRI_N26(value)  (ARM_SYSCTRL_NVIC_IPR6_PRI_N26_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR6_PRI_N26_Pos))  
#define ARM_SYSCTRL_NVIC_IPR6_PRI_N27_Pos     30  /**< \brief (ARM_SYSCTRL_NVIC_IPR6) Priority of Interrupt 27             */
#define ARM_SYSCTRL_NVIC_IPR6_PRI_N27_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR6_PRI_N27_Pos)
#define ARM_SYSCTRL_NVIC_IPR6_PRI_N27(value)  (ARM_SYSCTRL_NVIC_IPR6_PRI_N27_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR6_PRI_N27_Pos))  
#define ARM_SYSCTRL_NVIC_IPR6_MASK            0xC0C0C0E0ul    /**< \brief (ARM_SYSCTRL_NVIC_IPR6) Register MASK */

/* -------- ARM_SYSCTRL_NVIC_IPR7 : (ARM_SYSCTRL Offset: 0x41c) (R/W  32) Interrupt Priority Register 7 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :5;                        /*!< bit:   0..4  Reserved                                 */
    uint32_t PRI_N28:3;                 /*!< bit:   5..7  Priority of Interrupt 28                 */
    uint32_t :6;                        /*!< bit:  8..13  Reserved                                 */
    uint32_t PRI_N29:2;                 /*!< bit: 14..15  Priority of Interrupt 29                 */
    uint32_t :6;                        /*!< bit: 16..21  Reserved                                 */
    uint32_t PRI_N30:2;                 /*!< bit: 22..23  Priority of Interrupt 30                 */
    uint32_t :6;                        /*!< bit: 24..29  Reserved                                 */
    uint32_t PRI_N31:2;                 /*!< bit: 30..31  Priority of Interrupt 31                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_NVIC_IPR7_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_NVIC_IPR7_OFFSET          0x41C          /**<  \brief (ARM_SYSCTRL_NVIC_IPR7 offset) Interrupt Priority Register 7 */
#define ARM_SYSCTRL_NVIC_IPR7_RESETVALUE      0x00ul         /**<  \brief (ARM_SYSCTRL_NVIC_IPR7 reset_value) Interrupt Priority Register 7 */

#define ARM_SYSCTRL_NVIC_IPR7_PRI_N28_Pos     5  /**< \brief (ARM_SYSCTRL_NVIC_IPR7) Priority of Interrupt 28             */
#define ARM_SYSCTRL_NVIC_IPR7_PRI_N28_Msk     (0x7ul << ARM_SYSCTRL_NVIC_IPR7_PRI_N28_Pos)
#define ARM_SYSCTRL_NVIC_IPR7_PRI_N28(value)  (ARM_SYSCTRL_NVIC_IPR7_PRI_N28_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR7_PRI_N28_Pos))  
#define ARM_SYSCTRL_NVIC_IPR7_PRI_N29_Pos     14  /**< \brief (ARM_SYSCTRL_NVIC_IPR7) Priority of Interrupt 29             */
#define ARM_SYSCTRL_NVIC_IPR7_PRI_N29_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR7_PRI_N29_Pos)
#define ARM_SYSCTRL_NVIC_IPR7_PRI_N29(value)  (ARM_SYSCTRL_NVIC_IPR7_PRI_N29_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR7_PRI_N29_Pos))  
#define ARM_SYSCTRL_NVIC_IPR7_PRI_N30_Pos     22  /**< \brief (ARM_SYSCTRL_NVIC_IPR7) Priority of Interrupt 30             */
#define ARM_SYSCTRL_NVIC_IPR7_PRI_N30_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR7_PRI_N30_Pos)
#define ARM_SYSCTRL_NVIC_IPR7_PRI_N30(value)  (ARM_SYSCTRL_NVIC_IPR7_PRI_N30_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR7_PRI_N30_Pos))  
#define ARM_SYSCTRL_NVIC_IPR7_PRI_N31_Pos     30  /**< \brief (ARM_SYSCTRL_NVIC_IPR7) Priority of Interrupt 31             */
#define ARM_SYSCTRL_NVIC_IPR7_PRI_N31_Msk     (0x3ul << ARM_SYSCTRL_NVIC_IPR7_PRI_N31_Pos)
#define ARM_SYSCTRL_NVIC_IPR7_PRI_N31(value)  (ARM_SYSCTRL_NVIC_IPR7_PRI_N31_Msk & ((value) << ARM_SYSCTRL_NVIC_IPR7_PRI_N31_Pos))  
#define ARM_SYSCTRL_NVIC_IPR7_MASK            0xC0C0C0E0ul    /**< \brief (ARM_SYSCTRL_NVIC_IPR7) Register MASK */

/* -------- ARM_SYSCTRL_CPUID : (ARM_SYSCTRL Offset: 0xd00) (R/  32) CPU Identification Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CPUID:32;                  /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_CPUID_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_CPUID_OFFSET              0xD00          /**<  \brief (ARM_SYSCTRL_CPUID offset) CPU Identification Register */
#define ARM_SYSCTRL_CPUID_RESETVALUE          0x410CC200ul   /**<  \brief (ARM_SYSCTRL_CPUID reset_value) CPU Identification Register */

#define ARM_SYSCTRL_CPUID_CPUID_Pos           0  /**< \brief (ARM_SYSCTRL_CPUID)                                          */
#define ARM_SYSCTRL_CPUID_CPUID_Msk           (0xFFFFFFFFul << ARM_SYSCTRL_CPUID_CPUID_Pos)
#define ARM_SYSCTRL_CPUID_CPUID(value)        (ARM_SYSCTRL_CPUID_CPUID_Msk & ((value) << ARM_SYSCTRL_CPUID_CPUID_Pos))  
#define ARM_SYSCTRL_CPUID_MASK                0xFFFFFFFFul    /**< \brief (ARM_SYSCTRL_CPUID) Register MASK */

/* -------- ARM_SYSCTRL_ICSR : (ARM_SYSCTRL Offset: 0xd04) (R/  32) Interrupt Control State Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t VECTACTIVE:9;              /*!< bit:   0..8  Exception number for the current executing exception */
    uint32_t :3;                        /*!< bit:  9..11  Reserved                                 */
    uint32_t VECTPENDING:9;             /*!< bit: 12..20  Exception number for highest priority pending exception */
    uint32_t :1;                        /*!< bit:     21  Reserved                                 */
    uint32_t ISRPENDING:1;              /*!< bit:     22  If 1, Interrupt is pending               */
    uint32_t ISRPREEMPT:1;              /*!< bit:     23  If 1, will service a pending exception   */
    uint32_t :1;                        /*!< bit:     24  Reserved                                 */
    uint32_t PENDSTCLR:1;               /*!< bit:     25  Clear Pending SysTick                    */
    uint32_t PENDSTSET:1;               /*!< bit:     26  Set pending SysTick                      */
    uint32_t PENDSVCLR:1;               /*!< bit:     27  Clearing pending PendSV                  */
    uint32_t PENDSVSET:1;               /*!< bit:     28  Set pending PendSV interrupt             */
    uint32_t :2;                        /*!< bit: 29..30  Reserved                                 */
    uint32_t NMIPENDSET:1;              /*!< bit:     31  Activate NMI Exception                   */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_ICSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_ICSR_OFFSET               0xD04          /**<  \brief (ARM_SYSCTRL_ICSR offset) Interrupt Control State Register */
#define ARM_SYSCTRL_ICSR_RESETVALUE           0x00ul         /**<  \brief (ARM_SYSCTRL_ICSR reset_value) Interrupt Control State Register */

#define ARM_SYSCTRL_ICSR_VECTACTIVE_Pos       0  /**< \brief (ARM_SYSCTRL_ICSR) Exception number for the current executing exception */
#define ARM_SYSCTRL_ICSR_VECTACTIVE_Msk       (0x1FFul << ARM_SYSCTRL_ICSR_VECTACTIVE_Pos)
#define ARM_SYSCTRL_ICSR_VECTACTIVE(value)    (ARM_SYSCTRL_ICSR_VECTACTIVE_Msk & ((value) << ARM_SYSCTRL_ICSR_VECTACTIVE_Pos))  
#define ARM_SYSCTRL_ICSR_VECTPENDING_Pos      12  /**< \brief (ARM_SYSCTRL_ICSR) Exception number for highest priority pending exception */
#define ARM_SYSCTRL_ICSR_VECTPENDING_Msk      (0x1FFul << ARM_SYSCTRL_ICSR_VECTPENDING_Pos)
#define ARM_SYSCTRL_ICSR_VECTPENDING(value)   (ARM_SYSCTRL_ICSR_VECTPENDING_Msk & ((value) << ARM_SYSCTRL_ICSR_VECTPENDING_Pos))  
#define ARM_SYSCTRL_ICSR_ISRPENDING_Pos       22  /**< \brief (ARM_SYSCTRL_ICSR) If 1, Interrupt is pending                */
#define ARM_SYSCTRL_ICSR_ISRPENDING           (0x1ul << ARM_SYSCTRL_ICSR_ISRPENDING_Pos)  
#define ARM_SYSCTRL_ICSR_ISRPREEMPT_Pos       23  /**< \brief (ARM_SYSCTRL_ICSR) If 1, will service a pending exception    */
#define ARM_SYSCTRL_ICSR_ISRPREEMPT           (0x1ul << ARM_SYSCTRL_ICSR_ISRPREEMPT_Pos)  
#define ARM_SYSCTRL_ICSR_PENDSTCLR_Pos        25  /**< \brief (ARM_SYSCTRL_ICSR) Clear Pending SysTick                     */
#define ARM_SYSCTRL_ICSR_PENDSTCLR            (0x1ul << ARM_SYSCTRL_ICSR_PENDSTCLR_Pos)  
#define ARM_SYSCTRL_ICSR_PENDSTSET_Pos        26  /**< \brief (ARM_SYSCTRL_ICSR) Set pending SysTick                       */
#define ARM_SYSCTRL_ICSR_PENDSTSET            (0x1ul << ARM_SYSCTRL_ICSR_PENDSTSET_Pos)  
#define ARM_SYSCTRL_ICSR_PENDSVCLR_Pos        27  /**< \brief (ARM_SYSCTRL_ICSR) Clearing pending PendSV                   */
#define ARM_SYSCTRL_ICSR_PENDSVCLR            (0x1ul << ARM_SYSCTRL_ICSR_PENDSVCLR_Pos)  
#define ARM_SYSCTRL_ICSR_PENDSVSET_Pos        28  /**< \brief (ARM_SYSCTRL_ICSR) Set pending PendSV interrupt              */
#define ARM_SYSCTRL_ICSR_PENDSVSET            (0x1ul << ARM_SYSCTRL_ICSR_PENDSVSET_Pos)  
#define ARM_SYSCTRL_ICSR_NMIPENDSET_Pos       31  /**< \brief (ARM_SYSCTRL_ICSR) Activate NMI Exception                    */
#define ARM_SYSCTRL_ICSR_NMIPENDSET           (0x1ul << ARM_SYSCTRL_ICSR_NMIPENDSET_Pos)  
#define ARM_SYSCTRL_ICSR_MASK                 0x9EDFF1FFul    /**< \brief (ARM_SYSCTRL_ICSR) Register MASK */

/* -------- ARM_SYSCTRL_AIRCR : (ARM_SYSCTRL Offset: 0xd0c) (R/  32) Application Interrupt and Reset Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :1;                        /*!< bit:      0  Reserved                                 */
    uint32_t VECTCLRACTIVE:1;           /*!< bit:      1  Clears all active state information for fixed and configurable exceptions */
    uint32_t SYSRESETREQ:1;             /*!< bit:      2  Active High System Reset Request         */
    uint32_t :12;                       /*!< bit:  3..14  Reserved                                 */
    uint32_t ENDIANNESS:1;              /*!< bit:     15  If 1 then big endian                     */
    uint32_t VECTKEY:16;                /*!< bit: 16..31  Vector Key, must write 0x05FA to this otherwise the write is UNPREDICTABLE */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_AIRCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_AIRCR_OFFSET              0xD0C          /**<  \brief (ARM_SYSCTRL_AIRCR offset) Application Interrupt and Reset Control Register */
#define ARM_SYSCTRL_AIRCR_RESETVALUE          0x00ul         /**<  \brief (ARM_SYSCTRL_AIRCR reset_value) Application Interrupt and Reset Control Register */

#define ARM_SYSCTRL_AIRCR_VECTCLRACTIVE_Pos   1  /**< \brief (ARM_SYSCTRL_AIRCR) Clears all active state information for fixed and configurable exceptions */
#define ARM_SYSCTRL_AIRCR_VECTCLRACTIVE       (0x1ul << ARM_SYSCTRL_AIRCR_VECTCLRACTIVE_Pos)  
#define ARM_SYSCTRL_AIRCR_SYSRESETREQ_Pos     2  /**< \brief (ARM_SYSCTRL_AIRCR) Active High System Reset Request         */
#define ARM_SYSCTRL_AIRCR_SYSRESETREQ         (0x1ul << ARM_SYSCTRL_AIRCR_SYSRESETREQ_Pos)  
#define ARM_SYSCTRL_AIRCR_ENDIANNESS_Pos      15  /**< \brief (ARM_SYSCTRL_AIRCR) If 1 then big endian                     */
#define ARM_SYSCTRL_AIRCR_ENDIANNESS          (0x1ul << ARM_SYSCTRL_AIRCR_ENDIANNESS_Pos)  
#define ARM_SYSCTRL_AIRCR_VECTKEY_Pos         16  /**< \brief (ARM_SYSCTRL_AIRCR) Vector Key, must write 0x05FA to this otherwise the write is UNPREDICTABLE */
#define ARM_SYSCTRL_AIRCR_VECTKEY_Msk         (0xFFFFul << ARM_SYSCTRL_AIRCR_VECTKEY_Pos)
#define ARM_SYSCTRL_AIRCR_VECTKEY(value)      (ARM_SYSCTRL_AIRCR_VECTKEY_Msk & ((value) << ARM_SYSCTRL_AIRCR_VECTKEY_Pos))  
#define ARM_SYSCTRL_AIRCR_MASK                0xFFFF8006ul    /**< \brief (ARM_SYSCTRL_AIRCR) Register MASK */

/* -------- ARM_SYSCTRL_SCR : (ARM_SYSCTRL Offset: 0xd10) (R/W  8) System Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  :1;                        /*!< bit:      0  Reserved                                 */
    uint8_t  SLEEPONEXIT:1;             /*!< bit:      1  Enter sleep state on exit from an ISR    */
    uint8_t  SLEEPDEEP:1;               /*!< bit:      2  Selected sleep state is deep sleep       */
    uint8_t  :1;                        /*!< bit:      3  Reserved                                 */
    uint8_t  SEVONPEND:1;               /*!< bit:      4  Transitions from inactive to pending are wakeup events */
    uint8_t  :3;                        /*!< bit:   5..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SCR_OFFSET                0xD10          /**<  \brief (ARM_SYSCTRL_SCR offset) System Control Register */
#define ARM_SYSCTRL_SCR_RESETVALUE            0x00ul         /**<  \brief (ARM_SYSCTRL_SCR reset_value) System Control Register */

#define ARM_SYSCTRL_SCR_SLEEPONEXIT_Pos       1  /**< \brief (ARM_SYSCTRL_SCR) Enter sleep state on exit from an ISR      */
#define ARM_SYSCTRL_SCR_SLEEPONEXIT           (0x1ul << ARM_SYSCTRL_SCR_SLEEPONEXIT_Pos)  
#define ARM_SYSCTRL_SCR_SLEEPDEEP_Pos         2  /**< \brief (ARM_SYSCTRL_SCR) Selected sleep state is deep sleep         */
#define ARM_SYSCTRL_SCR_SLEEPDEEP             (0x1ul << ARM_SYSCTRL_SCR_SLEEPDEEP_Pos)  
#define ARM_SYSCTRL_SCR_SEVONPEND_Pos         4  /**< \brief (ARM_SYSCTRL_SCR) Transitions from inactive to pending are wakeup events */
#define ARM_SYSCTRL_SCR_SEVONPEND             (0x1ul << ARM_SYSCTRL_SCR_SEVONPEND_Pos)  
#define ARM_SYSCTRL_SCR_MASK                  0x16ul    /**< \brief (ARM_SYSCTRL_SCR) Register MASK */

/* -------- ARM_SYSCTRL_CCR : (ARM_SYSCTRL Offset: 0xd14) (R/  16) Configuration and Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t :3;                        /*!< bit:   0..2  Reserved                                 */
    uint16_t UNALIGN_TRP:1;             /*!< bit:      3  Unaligned work and halfword accesses generate a HardFault exception */
    uint16_t :5;                        /*!< bit:   4..8  Reserved                                 */
    uint16_t STKALIGN:1;                /*!< bit:      9  On exception entry, SP used prior to exception is adjusted to be 8-byte aligned and context to restore it is saved */
    uint16_t :6;                        /*!< bit: 10..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_CCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_CCR_OFFSET                0xD14          /**<  \brief (ARM_SYSCTRL_CCR offset) Configuration and Control Register */
#define ARM_SYSCTRL_CCR_RESETVALUE            0x00ul         /**<  \brief (ARM_SYSCTRL_CCR reset_value) Configuration and Control Register */

#define ARM_SYSCTRL_CCR_UNALIGN_TRP_Pos       3  /**< \brief (ARM_SYSCTRL_CCR) Unaligned work and halfword accesses generate a HardFault exception */
#define ARM_SYSCTRL_CCR_UNALIGN_TRP           (0x1ul << ARM_SYSCTRL_CCR_UNALIGN_TRP_Pos)  
#define ARM_SYSCTRL_CCR_STKALIGN_Pos          9  /**< \brief (ARM_SYSCTRL_CCR) On exception entry, SP used prior to exception is adjusted to be 8-byte aligned and context to restore it is saved */
#define ARM_SYSCTRL_CCR_STKALIGN              (0x1ul << ARM_SYSCTRL_CCR_STKALIGN_Pos)  
#define ARM_SYSCTRL_CCR_MASK                  0x208ul    /**< \brief (ARM_SYSCTRL_CCR) Register MASK */

/* -------- ARM_SYSCTRL_SHPR2 : (ARM_SYSCTRL Offset: 0xd1c) (R/W  32) System Handler Priority Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :30;                       /*!< bit:  0..29  Reserved                                 */
    uint32_t PRI_11:2;                  /*!< bit: 30..31  Priority of system handler 11, SVCall    */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SHPR2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SHPR2_OFFSET              0xD1C          /**<  \brief (ARM_SYSCTRL_SHPR2 offset) System Handler Priority Register 2 */
#define ARM_SYSCTRL_SHPR2_RESETVALUE          0x00ul         /**<  \brief (ARM_SYSCTRL_SHPR2 reset_value) System Handler Priority Register 2 */

#define ARM_SYSCTRL_SHPR2_PRI_11_Pos          30  /**< \brief (ARM_SYSCTRL_SHPR2) Priority of system handler 11, SVCall    */
#define ARM_SYSCTRL_SHPR2_PRI_11_Msk          (0x3ul << ARM_SYSCTRL_SHPR2_PRI_11_Pos)
#define ARM_SYSCTRL_SHPR2_PRI_11(value)       (ARM_SYSCTRL_SHPR2_PRI_11_Msk & ((value) << ARM_SYSCTRL_SHPR2_PRI_11_Pos))  
#define ARM_SYSCTRL_SHPR2_MASK                0xC0000000ul    /**< \brief (ARM_SYSCTRL_SHPR2) Register MASK */

/* -------- ARM_SYSCTRL_SHPR3 : (ARM_SYSCTRL Offset: 0xd20) (R/W  32) System Handler Priority Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :2;                        /*!< bit:   0..1  Reserved                                 */
    uint32_t PRI_14:22;                 /*!< bit:  2..23  Priority of system handler 14, PendSV    */
    uint32_t :6;                        /*!< bit: 24..29  Reserved                                 */
    uint32_t PRI_15:2;                  /*!< bit: 30..31  Priority of system handler 15, SysTick   */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SHPR3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SHPR3_OFFSET              0xD20          /**<  \brief (ARM_SYSCTRL_SHPR3 offset) System Handler Priority Register 3 */
#define ARM_SYSCTRL_SHPR3_RESETVALUE          0x00ul         /**<  \brief (ARM_SYSCTRL_SHPR3 reset_value) System Handler Priority Register 3 */

#define ARM_SYSCTRL_SHPR3_PRI_14_Pos          2  /**< \brief (ARM_SYSCTRL_SHPR3) Priority of system handler 14, PendSV    */
#define ARM_SYSCTRL_SHPR3_PRI_14_Msk          (0x3FFFFFul << ARM_SYSCTRL_SHPR3_PRI_14_Pos)
#define ARM_SYSCTRL_SHPR3_PRI_14(value)       (ARM_SYSCTRL_SHPR3_PRI_14_Msk & ((value) << ARM_SYSCTRL_SHPR3_PRI_14_Pos))  
#define ARM_SYSCTRL_SHPR3_PRI_15_Pos          30  /**< \brief (ARM_SYSCTRL_SHPR3) Priority of system handler 15, SysTick   */
#define ARM_SYSCTRL_SHPR3_PRI_15_Msk          (0x3ul << ARM_SYSCTRL_SHPR3_PRI_15_Pos)
#define ARM_SYSCTRL_SHPR3_PRI_15(value)       (ARM_SYSCTRL_SHPR3_PRI_15_Msk & ((value) << ARM_SYSCTRL_SHPR3_PRI_15_Pos))  
#define ARM_SYSCTRL_SHPR3_MASK                0xC0FFFFFCul    /**< \brief (ARM_SYSCTRL_SHPR3) Register MASK */

/* -------- ARM_SYSCTRL_SHCSR : (ARM_SYSCTRL Offset: 0xd24) (R/W  16) System Handler Control and State Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t :15;                       /*!< bit:  0..14  Reserved                                 */
    uint16_t SVCALLPENDED:1;            /*!< bit:     15  SVCall is pending                        */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SHCSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SHCSR_OFFSET              0xD24          /**<  \brief (ARM_SYSCTRL_SHCSR offset) System Handler Control and State Register */
#define ARM_SYSCTRL_SHCSR_RESETVALUE          0x00ul         /**<  \brief (ARM_SYSCTRL_SHCSR reset_value) System Handler Control and State Register */

#define ARM_SYSCTRL_SHCSR_SVCALLPENDED_Pos    15  /**< \brief (ARM_SYSCTRL_SHCSR) SVCall is pending                        */
#define ARM_SYSCTRL_SHCSR_SVCALLPENDED        (0x1ul << ARM_SYSCTRL_SHCSR_SVCALLPENDED_Pos)  
#define ARM_SYSCTRL_SHCSR_MASK                0x8000ul    /**< \brief (ARM_SYSCTRL_SHCSR) Register MASK */

/* -------- ARM_SYSCTRL_DFSR : (ARM_SYSCTRL Offset: 0xd30) (R/W  8) Debug Fault Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  HALTED:1;                  /*!< bit:      0  Halt Request Debug Event Active          */
    uint8_t  BKPT:1;                    /*!< bit:      1  At least one breakpoint debug event      */
    uint8_t  DWTTRAP:1;                 /*!< bit:      2  At least one debug event generated by DWT */
    uint8_t  VCATCH:1;                  /*!< bit:      3  Vector catch debug event generated       */
    uint8_t  EXTERNAL:1;                /*!< bit:      4  EDBGRQ debug event                       */
    uint8_t  :3;                        /*!< bit:   5..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_DFSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_DFSR_OFFSET               0xD30          /**<  \brief (ARM_SYSCTRL_DFSR offset) Debug Fault Status Register */
#define ARM_SYSCTRL_DFSR_RESETVALUE           0x00ul         /**<  \brief (ARM_SYSCTRL_DFSR reset_value) Debug Fault Status Register */

#define ARM_SYSCTRL_DFSR_HALTED_Pos           0  /**< \brief (ARM_SYSCTRL_DFSR) Halt Request Debug Event Active           */
#define ARM_SYSCTRL_DFSR_HALTED               (0x1ul << ARM_SYSCTRL_DFSR_HALTED_Pos)  
#define ARM_SYSCTRL_DFSR_BKPT_Pos             1  /**< \brief (ARM_SYSCTRL_DFSR) At least one breakpoint debug event       */
#define ARM_SYSCTRL_DFSR_BKPT                 (0x1ul << ARM_SYSCTRL_DFSR_BKPT_Pos)  
#define ARM_SYSCTRL_DFSR_DWTTRAP_Pos          2  /**< \brief (ARM_SYSCTRL_DFSR) At least one debug event generated by DWT */
#define ARM_SYSCTRL_DFSR_DWTTRAP              (0x1ul << ARM_SYSCTRL_DFSR_DWTTRAP_Pos)  
#define ARM_SYSCTRL_DFSR_VCATCH_Pos           3  /**< \brief (ARM_SYSCTRL_DFSR) Vector catch debug event generated        */
#define ARM_SYSCTRL_DFSR_VCATCH               (0x1ul << ARM_SYSCTRL_DFSR_VCATCH_Pos)  
#define ARM_SYSCTRL_DFSR_EXTERNAL_Pos         4  /**< \brief (ARM_SYSCTRL_DFSR) EDBGRQ debug event                        */
#define ARM_SYSCTRL_DFSR_EXTERNAL             (0x1ul << ARM_SYSCTRL_DFSR_EXTERNAL_Pos)  
#define ARM_SYSCTRL_DFSR_MASK                 0x1Ful    /**< \brief (ARM_SYSCTRL_DFSR) Register MASK */

/* -------- ARM_SYSCTRL_DHCSR : (ARM_SYSCTRL Offset: 0xdf0) (R/W  32) Debug Halting Control and Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t C_DEBUGEN:1;               /*!< bit:      0  Halting Debug Enabled (Must write 0xA05F to bits 31:16 to access) */
    uint32_t C_HALT:1;                  /*!< bit:      1  Request a running processor to halt (Must write 0xA05F to bits 31:16 to access) */
    uint32_t C_STEP:1;                  /*!< bit:      2  Single-Stepping Enabled (Must write 0xA05F to bits 31:16 to access) */
    uint32_t C_MASKINTS:1;              /*!< bit:      3  Mask PendSV, SysTick and external configurable interrupts (Must write 0xA05F to bits 31:16 to access) */
    uint32_t :12;                       /*!< bit:  4..15  Reserved                                 */
    uint32_t S_REGRDY:1;                /*!< bit:     16  Transfer to or from the DCRDR is complete */
    uint32_t S_HALT:1;                  /*!< bit:     17  In Debug State                           */
    uint32_t S_SLEEP:1;                 /*!< bit:     18  Sleeping                                 */
    uint32_t S_LOCKUP:1;                /*!< bit:     19  Locked Up                                */
    uint32_t :4;                        /*!< bit: 20..23  Reserved                                 */
    uint32_t S_RETIRE_ST:1;             /*!< bit:     24  At least one instruction has completed since last DHCSR read */
    uint32_t S_RESET_ST:1;              /*!< bit:     25  At least one reset since last DHCSR read */
    uint32_t :6;                        /*!< bit: 26..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_DHCSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_DHCSR_OFFSET              0xDF0          /**<  \brief (ARM_SYSCTRL_DHCSR offset) Debug Halting Control and Status Register */
#define ARM_SYSCTRL_DHCSR_RESETVALUE          0x00ul         /**<  \brief (ARM_SYSCTRL_DHCSR reset_value) Debug Halting Control and Status Register */

#define ARM_SYSCTRL_DHCSR_C_DEBUGEN_Pos       0  /**< \brief (ARM_SYSCTRL_DHCSR) Halting Debug Enabled (Must write 0xA05F to bits 31:16 to access) */
#define ARM_SYSCTRL_DHCSR_C_DEBUGEN           (0x1ul << ARM_SYSCTRL_DHCSR_C_DEBUGEN_Pos)  
#define ARM_SYSCTRL_DHCSR_C_HALT_Pos          1  /**< \brief (ARM_SYSCTRL_DHCSR) Request a running processor to halt (Must write 0xA05F to bits 31:16 to access) */
#define ARM_SYSCTRL_DHCSR_C_HALT              (0x1ul << ARM_SYSCTRL_DHCSR_C_HALT_Pos)  
#define ARM_SYSCTRL_DHCSR_C_STEP_Pos          2  /**< \brief (ARM_SYSCTRL_DHCSR) Single-Stepping Enabled (Must write 0xA05F to bits 31:16 to access) */
#define ARM_SYSCTRL_DHCSR_C_STEP              (0x1ul << ARM_SYSCTRL_DHCSR_C_STEP_Pos)  
#define ARM_SYSCTRL_DHCSR_C_MASKINTS_Pos      3  /**< \brief (ARM_SYSCTRL_DHCSR) Mask PendSV, SysTick and external configurable interrupts (Must write 0xA05F to bits 31:16 to access) */
#define ARM_SYSCTRL_DHCSR_C_MASKINTS          (0x1ul << ARM_SYSCTRL_DHCSR_C_MASKINTS_Pos)  
#define ARM_SYSCTRL_DHCSR_S_REGRDY_Pos        16  /**< \brief (ARM_SYSCTRL_DHCSR) Transfer to or from the DCRDR is complete */
#define ARM_SYSCTRL_DHCSR_S_REGRDY            (0x1ul << ARM_SYSCTRL_DHCSR_S_REGRDY_Pos)  
#define ARM_SYSCTRL_DHCSR_S_HALT_Pos          17  /**< \brief (ARM_SYSCTRL_DHCSR) In Debug State                           */
#define ARM_SYSCTRL_DHCSR_S_HALT              (0x1ul << ARM_SYSCTRL_DHCSR_S_HALT_Pos)  
#define ARM_SYSCTRL_DHCSR_S_SLEEP_Pos         18  /**< \brief (ARM_SYSCTRL_DHCSR) Sleeping                                 */
#define ARM_SYSCTRL_DHCSR_S_SLEEP             (0x1ul << ARM_SYSCTRL_DHCSR_S_SLEEP_Pos)  
#define ARM_SYSCTRL_DHCSR_S_LOCKUP_Pos        19  /**< \brief (ARM_SYSCTRL_DHCSR) Locked Up                                */
#define ARM_SYSCTRL_DHCSR_S_LOCKUP            (0x1ul << ARM_SYSCTRL_DHCSR_S_LOCKUP_Pos)  
#define ARM_SYSCTRL_DHCSR_S_RETIRE_ST_Pos     24  /**< \brief (ARM_SYSCTRL_DHCSR) At least one instruction has completed since last DHCSR read */
#define ARM_SYSCTRL_DHCSR_S_RETIRE_ST         (0x1ul << ARM_SYSCTRL_DHCSR_S_RETIRE_ST_Pos)  
#define ARM_SYSCTRL_DHCSR_S_RESET_ST_Pos      25  /**< \brief (ARM_SYSCTRL_DHCSR) At least one reset since last DHCSR read */
#define ARM_SYSCTRL_DHCSR_S_RESET_ST          (0x1ul << ARM_SYSCTRL_DHCSR_S_RESET_ST_Pos)  
#define ARM_SYSCTRL_DHCSR_MASK                0x30F000Ful    /**< \brief (ARM_SYSCTRL_DHCSR) Register MASK */

/* -------- ARM_SYSCTRL_DCRSR : (ARM_SYSCTRL Offset: 0xdf4) (R/W  32) Debug Core Register Selector Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t REGSEL:5;                  /*!< bit:   0..4  Specifies the ARM core register or special purpose register to transfer */
    uint32_t :11;                       /*!< bit:  5..15  Reserved                                 */
    uint32_t REGWNR:1;                  /*!< bit:     16  If 1 then transfer is a write            */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_DCRSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_DCRSR_OFFSET              0xDF4          /**<  \brief (ARM_SYSCTRL_DCRSR offset) Debug Core Register Selector Register */
#define ARM_SYSCTRL_DCRSR_RESETVALUE          0x00ul         /**<  \brief (ARM_SYSCTRL_DCRSR reset_value) Debug Core Register Selector Register */

#define ARM_SYSCTRL_DCRSR_REGSEL_Pos          0  /**< \brief (ARM_SYSCTRL_DCRSR) Specifies the ARM core register or special purpose register to transfer */
#define ARM_SYSCTRL_DCRSR_REGSEL_Msk          (0x1Ful << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL(value)       (ARM_SYSCTRL_DCRSR_REGSEL_Msk & ((value) << ARM_SYSCTRL_DCRSR_REGSEL_Pos))  
#define   ARM_SYSCTRL_DCRSR_REGSEL_0_Val        0X0ul  /**< \brief (ARM_SYSCTRL_DCRSR) ARM Core Register R0  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_1_Val        0X1ul  /**< \brief (ARM_SYSCTRL_DCRSR) ARM Core Register R1  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_2_Val        0X2ul  /**< \brief (ARM_SYSCTRL_DCRSR) ARM Core Register R2  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_3_Val        0X3ul  /**< \brief (ARM_SYSCTRL_DCRSR) ARM Core Register R3  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_4_Val        0X4ul  /**< \brief (ARM_SYSCTRL_DCRSR) ARM Core Register R4  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_5_Val        0X5ul  /**< \brief (ARM_SYSCTRL_DCRSR) ARM Core Register R5  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_6_Val        0X6ul  /**< \brief (ARM_SYSCTRL_DCRSR) ARM Core Register R6  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_7_Val        0X7ul  /**< \brief (ARM_SYSCTRL_DCRSR) ARM Core Register R7  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_8_Val        0X8ul  /**< \brief (ARM_SYSCTRL_DCRSR) ARM Core Register R8  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_9_Val        0X9ul  /**< \brief (ARM_SYSCTRL_DCRSR) ARM Core Register R9  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_10_Val        0XAul  /**< \brief (ARM_SYSCTRL_DCRSR) ARM Core Register R10  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_11_Val        0XBul  /**< \brief (ARM_SYSCTRL_DCRSR) ARM Core Register R11  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_12_Val        0XCul  /**< \brief (ARM_SYSCTRL_DCRSR) ARM Core Register R12  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_13_Val        0XDul  /**< \brief (ARM_SYSCTRL_DCRSR) Current SP  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_14_Val        0XEul  /**< \brief (ARM_SYSCTRL_DCRSR) LR  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_15_Val        0XFul  /**< \brief (ARM_SYSCTRL_DCRSR) DebugReturnAddress  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_16_Val       0X10ul  /**< \brief (ARM_SYSCTRL_DCRSR) xPSR  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_17_Val       0X11ul  /**< \brief (ARM_SYSCTRL_DCRSR) MSP  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_18_Val       0X12ul  /**< \brief (ARM_SYSCTRL_DCRSR) PSP  */
#define   ARM_SYSCTRL_DCRSR_REGSEL_20_Val       0X14ul  /**< \brief (ARM_SYSCTRL_DCRSR) CONTROL and PRIMASK  */
#define ARM_SYSCTRL_DCRSR_REGSEL_0            (ARM_SYSCTRL_DCRSR_REGSEL_0_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_1            (ARM_SYSCTRL_DCRSR_REGSEL_1_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_2            (ARM_SYSCTRL_DCRSR_REGSEL_2_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_3            (ARM_SYSCTRL_DCRSR_REGSEL_3_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_4            (ARM_SYSCTRL_DCRSR_REGSEL_4_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_5            (ARM_SYSCTRL_DCRSR_REGSEL_5_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_6            (ARM_SYSCTRL_DCRSR_REGSEL_6_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_7            (ARM_SYSCTRL_DCRSR_REGSEL_7_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_8            (ARM_SYSCTRL_DCRSR_REGSEL_8_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_9            (ARM_SYSCTRL_DCRSR_REGSEL_9_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_10           (ARM_SYSCTRL_DCRSR_REGSEL_10_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_11           (ARM_SYSCTRL_DCRSR_REGSEL_11_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_12           (ARM_SYSCTRL_DCRSR_REGSEL_12_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_13           (ARM_SYSCTRL_DCRSR_REGSEL_13_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_14           (ARM_SYSCTRL_DCRSR_REGSEL_14_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_15           (ARM_SYSCTRL_DCRSR_REGSEL_15_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_16           (ARM_SYSCTRL_DCRSR_REGSEL_16_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_17           (ARM_SYSCTRL_DCRSR_REGSEL_17_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_18           (ARM_SYSCTRL_DCRSR_REGSEL_18_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGSEL_20           (ARM_SYSCTRL_DCRSR_REGSEL_20_Val << ARM_SYSCTRL_DCRSR_REGSEL_Pos)
#define ARM_SYSCTRL_DCRSR_REGWNR_Pos          16  /**< \brief (ARM_SYSCTRL_DCRSR) If 1 then transfer is a write            */
#define ARM_SYSCTRL_DCRSR_REGWNR              (0x1ul << ARM_SYSCTRL_DCRSR_REGWNR_Pos)  
#define ARM_SYSCTRL_DCRSR_MASK                0x1001Ful    /**< \brief (ARM_SYSCTRL_DCRSR) Register MASK */

/* -------- ARM_SYSCTRL_DCRDR : (ARM_SYSCTRL Offset: 0xdf8) (R/W  32) Debug Core Register Data Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t DBGTMP:32;                 /*!< bit:  0..31  Data Temporary Cache                     */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_DCRDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_DCRDR_OFFSET              0xDF8          /**<  \brief (ARM_SYSCTRL_DCRDR offset) Debug Core Register Data Register */
#define ARM_SYSCTRL_DCRDR_RESETVALUE          0x00ul         /**<  \brief (ARM_SYSCTRL_DCRDR reset_value) Debug Core Register Data Register */

#define ARM_SYSCTRL_DCRDR_DBGTMP_Pos          0  /**< \brief (ARM_SYSCTRL_DCRDR) Data Temporary Cache                     */
#define ARM_SYSCTRL_DCRDR_DBGTMP_Msk          (0xFFFFFFFFul << ARM_SYSCTRL_DCRDR_DBGTMP_Pos)
#define ARM_SYSCTRL_DCRDR_DBGTMP(value)       (ARM_SYSCTRL_DCRDR_DBGTMP_Msk & ((value) << ARM_SYSCTRL_DCRDR_DBGTMP_Pos))  
#define ARM_SYSCTRL_DCRDR_MASK                0xFFFFFFFFul    /**< \brief (ARM_SYSCTRL_DCRDR) Register MASK */

/* -------- ARM_SYSCTRL_DEMCR : (ARM_SYSCTRL Offset: 0xdfc) (R/W  32) Debug Exception and Monitor Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t VC_CORERESET:1;            /*!< bit:      0  Reset Vector Catch Enabled               */
    uint32_t :9;                        /*!< bit:   1..9  Reserved                                 */
    uint32_t VC_HARDERR:1;              /*!< bit:     10  Halting Debug Trap Enabled               */
    uint32_t :13;                       /*!< bit: 11..23  Reserved                                 */
    uint32_t DWTENA:1;                  /*!< bit:     24  DWT Enabled                              */
    uint32_t :7;                        /*!< bit: 25..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_DEMCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_DEMCR_OFFSET              0xDFC          /**<  \brief (ARM_SYSCTRL_DEMCR offset) Debug Exception and Monitor Control Register */
#define ARM_SYSCTRL_DEMCR_RESETVALUE          0x00ul         /**<  \brief (ARM_SYSCTRL_DEMCR reset_value) Debug Exception and Monitor Control Register */

#define ARM_SYSCTRL_DEMCR_VC_CORERESET_Pos    0  /**< \brief (ARM_SYSCTRL_DEMCR) Reset Vector Catch Enabled               */
#define ARM_SYSCTRL_DEMCR_VC_CORERESET        (0x1ul << ARM_SYSCTRL_DEMCR_VC_CORERESET_Pos)  
#define ARM_SYSCTRL_DEMCR_VC_HARDERR_Pos      10  /**< \brief (ARM_SYSCTRL_DEMCR) Halting Debug Trap Enabled               */
#define ARM_SYSCTRL_DEMCR_VC_HARDERR          (0x1ul << ARM_SYSCTRL_DEMCR_VC_HARDERR_Pos)  
#define ARM_SYSCTRL_DEMCR_DWTENA_Pos          24  /**< \brief (ARM_SYSCTRL_DEMCR) DWT Enabled                              */
#define ARM_SYSCTRL_DEMCR_DWTENA              (0x1ul << ARM_SYSCTRL_DEMCR_DWTENA_Pos)  
#define ARM_SYSCTRL_DEMCR_MASK                0x1000401ul    /**< \brief (ARM_SYSCTRL_DEMCR) Register MASK */

/* -------- ARM_SYSCTRL_SCS_PID4 : (ARM_SYSCTRL Offset: 0xfd0) (R/  8) Peripheral ID Register 4 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_C_CODE:4;           /*!< bit:   0..3  JEP106 C Code                            */
    uint8_t  BLOCK_COUNT:4;             /*!< bit:   4..7  Block Count                              */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SCS_PID4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SCS_PID4_OFFSET           0xFD0          /**<  \brief (ARM_SYSCTRL_SCS_PID4 offset) Peripheral ID Register 4 */
#define ARM_SYSCTRL_SCS_PID4_RESETVALUE       0x04ul         /**<  \brief (ARM_SYSCTRL_SCS_PID4 reset_value) Peripheral ID Register 4 */

#define ARM_SYSCTRL_SCS_PID4_JEP106_C_CODE_Pos 0  /**< \brief (ARM_SYSCTRL_SCS_PID4) JEP106 C Code                         */
#define ARM_SYSCTRL_SCS_PID4_JEP106_C_CODE_Msk (0xFul << ARM_SYSCTRL_SCS_PID4_JEP106_C_CODE_Pos)
#define ARM_SYSCTRL_SCS_PID4_JEP106_C_CODE(value) (ARM_SYSCTRL_SCS_PID4_JEP106_C_CODE_Msk & ((value) << ARM_SYSCTRL_SCS_PID4_JEP106_C_CODE_Pos))  
#define ARM_SYSCTRL_SCS_PID4_BLOCK_COUNT_Pos  4  /**< \brief (ARM_SYSCTRL_SCS_PID4) Block Count                           */
#define ARM_SYSCTRL_SCS_PID4_BLOCK_COUNT_Msk  (0xFul << ARM_SYSCTRL_SCS_PID4_BLOCK_COUNT_Pos)
#define ARM_SYSCTRL_SCS_PID4_BLOCK_COUNT(value) (ARM_SYSCTRL_SCS_PID4_BLOCK_COUNT_Msk & ((value) << ARM_SYSCTRL_SCS_PID4_BLOCK_COUNT_Pos))  
#define ARM_SYSCTRL_SCS_PID4_MASK             0xFFul    /**< \brief (ARM_SYSCTRL_SCS_PID4) Register MASK */

/* -------- ARM_SYSCTRL_SCS_PID0 : (ARM_SYSCTRL Offset: 0xfe0) (R/  8) Peripheral ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:8;             /*!< bit:   0..7  Part Number Bits 7:0                     */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SCS_PID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SCS_PID0_OFFSET           0xFE0          /**<  \brief (ARM_SYSCTRL_SCS_PID0 offset) Peripheral ID Register 0 */
#define ARM_SYSCTRL_SCS_PID0_RESETVALUE       0x08ul         /**<  \brief (ARM_SYSCTRL_SCS_PID0 reset_value) Peripheral ID Register 0 */

#define ARM_SYSCTRL_SCS_PID0_PART_NUMBER_Pos  0  /**< \brief (ARM_SYSCTRL_SCS_PID0) Part Number Bits 7:0                  */
#define ARM_SYSCTRL_SCS_PID0_PART_NUMBER_Msk  (0xFFul << ARM_SYSCTRL_SCS_PID0_PART_NUMBER_Pos)
#define ARM_SYSCTRL_SCS_PID0_PART_NUMBER(value) (ARM_SYSCTRL_SCS_PID0_PART_NUMBER_Msk & ((value) << ARM_SYSCTRL_SCS_PID0_PART_NUMBER_Pos))  
#define ARM_SYSCTRL_SCS_PID0_MASK             0xFFul    /**< \brief (ARM_SYSCTRL_SCS_PID0) Register MASK */

/* -------- ARM_SYSCTRL_SCS_PID1 : (ARM_SYSCTRL Offset: 0xfe4) (R/  8) Peripheral ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:4;             /*!< bit:   0..3  Part Number Bits 11:8                    */
    uint8_t  JEP106_ID_3_0:4;           /*!< bit:   4..7  JEP106 ID Code Bits 3:0                  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SCS_PID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SCS_PID1_OFFSET           0xFE4          /**<  \brief (ARM_SYSCTRL_SCS_PID1 offset) Peripheral ID Register 1 */
#define ARM_SYSCTRL_SCS_PID1_RESETVALUE       0xB0ul         /**<  \brief (ARM_SYSCTRL_SCS_PID1 reset_value) Peripheral ID Register 1 */

#define ARM_SYSCTRL_SCS_PID1_PART_NUMBER_Pos  0  /**< \brief (ARM_SYSCTRL_SCS_PID1) Part Number Bits 11:8                 */
#define ARM_SYSCTRL_SCS_PID1_PART_NUMBER_Msk  (0xFul << ARM_SYSCTRL_SCS_PID1_PART_NUMBER_Pos)
#define ARM_SYSCTRL_SCS_PID1_PART_NUMBER(value) (ARM_SYSCTRL_SCS_PID1_PART_NUMBER_Msk & ((value) << ARM_SYSCTRL_SCS_PID1_PART_NUMBER_Pos))  
#define ARM_SYSCTRL_SCS_PID1_JEP106_ID_3_0_Pos 4  /**< \brief (ARM_SYSCTRL_SCS_PID1) JEP106 ID Code Bits 3:0               */
#define ARM_SYSCTRL_SCS_PID1_JEP106_ID_3_0_Msk (0xFul << ARM_SYSCTRL_SCS_PID1_JEP106_ID_3_0_Pos)
#define ARM_SYSCTRL_SCS_PID1_JEP106_ID_3_0(value) (ARM_SYSCTRL_SCS_PID1_JEP106_ID_3_0_Msk & ((value) << ARM_SYSCTRL_SCS_PID1_JEP106_ID_3_0_Pos))  
#define ARM_SYSCTRL_SCS_PID1_MASK             0xFFul    /**< \brief (ARM_SYSCTRL_SCS_PID1) Register MASK */

/* -------- ARM_SYSCTRL_SCS_PID2 : (ARM_SYSCTRL Offset: 0xfe8) (R/  8) Peripheral ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_ID_6_4:3;           /*!< bit:   0..2  JEP106 ID Code Bits 6:4                  */
    uint8_t  JEDEC_USED:1;              /*!< bit:      3  JEDEC Used                               */
    uint8_t  REVISION:4;                /*!< bit:   4..7  Revision                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SCS_PID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SCS_PID2_OFFSET           0xFE8          /**<  \brief (ARM_SYSCTRL_SCS_PID2 offset) Peripheral ID Register 2 */
#define ARM_SYSCTRL_SCS_PID2_RESETVALUE       0x0Bul         /**<  \brief (ARM_SYSCTRL_SCS_PID2 reset_value) Peripheral ID Register 2 */

#define ARM_SYSCTRL_SCS_PID2_JEP106_ID_6_4_Pos 0  /**< \brief (ARM_SYSCTRL_SCS_PID2) JEP106 ID Code Bits 6:4               */
#define ARM_SYSCTRL_SCS_PID2_JEP106_ID_6_4_Msk (0x7ul << ARM_SYSCTRL_SCS_PID2_JEP106_ID_6_4_Pos)
#define ARM_SYSCTRL_SCS_PID2_JEP106_ID_6_4(value) (ARM_SYSCTRL_SCS_PID2_JEP106_ID_6_4_Msk & ((value) << ARM_SYSCTRL_SCS_PID2_JEP106_ID_6_4_Pos))  
#define ARM_SYSCTRL_SCS_PID2_JEDEC_USED_Pos   3  /**< \brief (ARM_SYSCTRL_SCS_PID2) JEDEC Used                            */
#define ARM_SYSCTRL_SCS_PID2_JEDEC_USED       (0x1ul << ARM_SYSCTRL_SCS_PID2_JEDEC_USED_Pos)  
#define ARM_SYSCTRL_SCS_PID2_REVISION_Pos     4  /**< \brief (ARM_SYSCTRL_SCS_PID2) Revision                              */
#define ARM_SYSCTRL_SCS_PID2_REVISION_Msk     (0xFul << ARM_SYSCTRL_SCS_PID2_REVISION_Pos)
#define ARM_SYSCTRL_SCS_PID2_REVISION(value)  (ARM_SYSCTRL_SCS_PID2_REVISION_Msk & ((value) << ARM_SYSCTRL_SCS_PID2_REVISION_Pos))  
#define ARM_SYSCTRL_SCS_PID2_MASK             0xFFul    /**< \brief (ARM_SYSCTRL_SCS_PID2) Register MASK */

/* -------- ARM_SYSCTRL_SCS_PID3 : (ARM_SYSCTRL Offset: 0xfec) (R/  8) Peripheral ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CUSTOMER_MOD_NUMBER:4;     /*!< bit:   0..3  Customer Modification Number             */
    uint8_t  ECO_REV_NUMBER:4;          /*!< bit:   4..7  ECO Revision Number                      */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SCS_PID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SCS_PID3_OFFSET           0xFEC          /**<  \brief (ARM_SYSCTRL_SCS_PID3 offset) Peripheral ID Register 3 */
#define ARM_SYSCTRL_SCS_PID3_RESETVALUE       0x00ul         /**<  \brief (ARM_SYSCTRL_SCS_PID3 reset_value) Peripheral ID Register 3 */

#define ARM_SYSCTRL_SCS_PID3_CUSTOMER_MOD_NUMBER_Pos 0  /**< \brief (ARM_SYSCTRL_SCS_PID3) Customer Modification Number          */
#define ARM_SYSCTRL_SCS_PID3_CUSTOMER_MOD_NUMBER_Msk (0xFul << ARM_SYSCTRL_SCS_PID3_CUSTOMER_MOD_NUMBER_Pos)
#define ARM_SYSCTRL_SCS_PID3_CUSTOMER_MOD_NUMBER(value) (ARM_SYSCTRL_SCS_PID3_CUSTOMER_MOD_NUMBER_Msk & ((value) << ARM_SYSCTRL_SCS_PID3_CUSTOMER_MOD_NUMBER_Pos))  
#define ARM_SYSCTRL_SCS_PID3_ECO_REV_NUMBER_Pos 4  /**< \brief (ARM_SYSCTRL_SCS_PID3) ECO Revision Number                   */
#define ARM_SYSCTRL_SCS_PID3_ECO_REV_NUMBER_Msk (0xFul << ARM_SYSCTRL_SCS_PID3_ECO_REV_NUMBER_Pos)
#define ARM_SYSCTRL_SCS_PID3_ECO_REV_NUMBER(value) (ARM_SYSCTRL_SCS_PID3_ECO_REV_NUMBER_Msk & ((value) << ARM_SYSCTRL_SCS_PID3_ECO_REV_NUMBER_Pos))  
#define ARM_SYSCTRL_SCS_PID3_MASK             0xFFul    /**< \brief (ARM_SYSCTRL_SCS_PID3) Register MASK */

/* -------- ARM_SYSCTRL_SCS_CID0 : (ARM_SYSCTRL Offset: 0xff0) (R/  8) Component ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  SCS_CID0:8;                /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SCS_CID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SCS_CID0_OFFSET           0xFF0          /**<  \brief (ARM_SYSCTRL_SCS_CID0 offset) Component ID Register 0 */
#define ARM_SYSCTRL_SCS_CID0_RESETVALUE       0x0Dul         /**<  \brief (ARM_SYSCTRL_SCS_CID0 reset_value) Component ID Register 0 */

#define ARM_SYSCTRL_SCS_CID0_SCS_CID0_Pos     0  /**< \brief (ARM_SYSCTRL_SCS_CID0)                                       */
#define ARM_SYSCTRL_SCS_CID0_SCS_CID0_Msk     (0xFFul << ARM_SYSCTRL_SCS_CID0_SCS_CID0_Pos)
#define ARM_SYSCTRL_SCS_CID0_SCS_CID0(value)  (ARM_SYSCTRL_SCS_CID0_SCS_CID0_Msk & ((value) << ARM_SYSCTRL_SCS_CID0_SCS_CID0_Pos))  
#define ARM_SYSCTRL_SCS_CID0_MASK             0xFFul    /**< \brief (ARM_SYSCTRL_SCS_CID0) Register MASK */

/* -------- ARM_SYSCTRL_SCS_CID1 : (ARM_SYSCTRL Offset: 0xff4) (R/  8) Component ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  SCS_CID1:8;                /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SCS_CID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SCS_CID1_OFFSET           0xFF4          /**<  \brief (ARM_SYSCTRL_SCS_CID1 offset) Component ID Register 1 */
#define ARM_SYSCTRL_SCS_CID1_RESETVALUE       0xE0ul         /**<  \brief (ARM_SYSCTRL_SCS_CID1 reset_value) Component ID Register 1 */

#define ARM_SYSCTRL_SCS_CID1_SCS_CID1_Pos     0  /**< \brief (ARM_SYSCTRL_SCS_CID1)                                       */
#define ARM_SYSCTRL_SCS_CID1_SCS_CID1_Msk     (0xFFul << ARM_SYSCTRL_SCS_CID1_SCS_CID1_Pos)
#define ARM_SYSCTRL_SCS_CID1_SCS_CID1(value)  (ARM_SYSCTRL_SCS_CID1_SCS_CID1_Msk & ((value) << ARM_SYSCTRL_SCS_CID1_SCS_CID1_Pos))  
#define ARM_SYSCTRL_SCS_CID1_MASK             0xFFul    /**< \brief (ARM_SYSCTRL_SCS_CID1) Register MASK */

/* -------- ARM_SYSCTRL_SCS_CID2 : (ARM_SYSCTRL Offset: 0xff8) (R/  8) Component ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  SCS_CID2:8;                /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SCS_CID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SCS_CID2_OFFSET           0xFF8          /**<  \brief (ARM_SYSCTRL_SCS_CID2 offset) Component ID Register 2 */
#define ARM_SYSCTRL_SCS_CID2_RESETVALUE       0x05ul         /**<  \brief (ARM_SYSCTRL_SCS_CID2 reset_value) Component ID Register 2 */

#define ARM_SYSCTRL_SCS_CID2_SCS_CID2_Pos     0  /**< \brief (ARM_SYSCTRL_SCS_CID2)                                       */
#define ARM_SYSCTRL_SCS_CID2_SCS_CID2_Msk     (0xFFul << ARM_SYSCTRL_SCS_CID2_SCS_CID2_Pos)
#define ARM_SYSCTRL_SCS_CID2_SCS_CID2(value)  (ARM_SYSCTRL_SCS_CID2_SCS_CID2_Msk & ((value) << ARM_SYSCTRL_SCS_CID2_SCS_CID2_Pos))  
#define ARM_SYSCTRL_SCS_CID2_MASK             0xFFul    /**< \brief (ARM_SYSCTRL_SCS_CID2) Register MASK */

/* -------- ARM_SYSCTRL_SCS_CID3 : (ARM_SYSCTRL Offset: 0xffc) (R/  8) Component ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  SCS_CID3:8;                /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} ARM_SYSCTRL_SCS_CID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ARM_SYSCTRL_SCS_CID3_OFFSET           0xFFC          /**<  \brief (ARM_SYSCTRL_SCS_CID3 offset) Component ID Register 3 */
#define ARM_SYSCTRL_SCS_CID3_RESETVALUE       0xB1ul         /**<  \brief (ARM_SYSCTRL_SCS_CID3 reset_value) Component ID Register 3 */

#define ARM_SYSCTRL_SCS_CID3_SCS_CID3_Pos     0  /**< \brief (ARM_SYSCTRL_SCS_CID3)                                       */
#define ARM_SYSCTRL_SCS_CID3_SCS_CID3_Msk     (0xFFul << ARM_SYSCTRL_SCS_CID3_SCS_CID3_Pos)
#define ARM_SYSCTRL_SCS_CID3_SCS_CID3(value)  (ARM_SYSCTRL_SCS_CID3_SCS_CID3_Msk & ((value) << ARM_SYSCTRL_SCS_CID3_SCS_CID3_Pos))  
#define ARM_SYSCTRL_SCS_CID3_MASK             0xFFul    /**< \brief (ARM_SYSCTRL_SCS_CID3) Register MASK */

/** \brief ARM_SYSCTRL hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* ARM System Control */
       RoReg8                         Reserved1[0x8];
  __I  ARM_SYSCTRL_ACTLR_Type         ACTLR;          /**< \brief Offset: 0x08 (R/   32) Auxiliary Control Register (not implemented) */
       RoReg8                         Reserved2[0x4];
  __IO ARM_SYSCTRL_SYST_CSR_Type      SYST_CSR;       /**< \brief Offset: 0x10 (R/W  32) SysTick Control and Status Register */
  __IO ARM_SYSCTRL_SYST_RVR_Type      SYST_RVR;       /**< \brief Offset: 0x14 (R/W  32) SysTick Reload Value Register */
  __IO ARM_SYSCTRL_SYST_CVR_Type      SYST_CVR;       /**< \brief Offset: 0x18 (R/W  32) SysTick Current Value Register (Any Write Clears to 0) */
  __I  ARM_SYSCTRL_SYST_CALIB_Type    SYST_CALIB;     /**< \brief Offset: 0x1C (R/   32) SysTick Calibration Value Register */
       RoReg8                         Reserved3[0xE0];
  __IO ARM_SYSCTRL_NVIC_ISER_Type     NVIC_ISER;      /**< \brief Offset: 0x100 (R/W  32) Interrupt Set-Enable Register */
       RoReg8                         Reserved4[0x7C];
  __IO ARM_SYSCTRL_NVIC_ICER_Type     NVIC_ICER;      /**< \brief Offset: 0x180 (R/W  32) Interrupt Clear Enable Register */
       RoReg8                         Reserved5[0x7C];
  __IO ARM_SYSCTRL_NVIC_ISPR_Type     NVIC_ISPR;      /**< \brief Offset: 0x200 (R/W  32) Interrupt Set-Pending Register */
       RoReg8                         Reserved6[0x7C];
  __IO ARM_SYSCTRL_NVIC_ICPR_Type     NVIC_ICPR;      /**< \brief Offset: 0x280 (R/W  32) Interrupt Clear-Pending Register */
       RoReg8                         Reserved7[0x17C];
  __IO ARM_SYSCTRL_NVIC_IPR0_Type     NVIC_IPR0;      /**< \brief Offset: 0x400 (R/W  32) Interrupt Priority Register 0 */
  __IO ARM_SYSCTRL_NVIC_IPR1_Type     NVIC_IPR1;      /**< \brief Offset: 0x404 (R/W  32) Interrupt Priority Register 1 */
  __IO ARM_SYSCTRL_NVIC_IPR2_Type     NVIC_IPR2;      /**< \brief Offset: 0x408 (R/W  32) Interrupt Priority Register 2 */
  __IO ARM_SYSCTRL_NVIC_IPR3_Type     NVIC_IPR3;      /**< \brief Offset: 0x40C (R/W  32) Interrupt Priority Register 3 */
  __IO ARM_SYSCTRL_NVIC_IPR4_Type     NVIC_IPR4;      /**< \brief Offset: 0x410 (R/W  32) Interrupt Priority Register 4 */
  __IO ARM_SYSCTRL_NVIC_IPR5_Type     NVIC_IPR5;      /**< \brief Offset: 0x414 (R/W  32) Interrupt Priority Register 5 */
  __IO ARM_SYSCTRL_NVIC_IPR6_Type     NVIC_IPR6;      /**< \brief Offset: 0x418 (R/W  32) Interrupt Priority Register 6 */
  __IO ARM_SYSCTRL_NVIC_IPR7_Type     NVIC_IPR7;      /**< \brief Offset: 0x41C (R/W  32) Interrupt Priority Register 7 */
       RoReg8                         Reserved8[0x8E0];
  __I  ARM_SYSCTRL_CPUID_Type         CPUID;          /**< \brief Offset: 0xD00 (R/   32) CPU Identification Register */
  __I  ARM_SYSCTRL_ICSR_Type          ICSR;           /**< \brief Offset: 0xD04 (R/   32) Interrupt Control State Register */
       RoReg8                         Reserved9[0x4];
  __I  ARM_SYSCTRL_AIRCR_Type         AIRCR;          /**< \brief Offset: 0xD0C (R/   32) Application Interrupt and Reset Control Register */
  __IO ARM_SYSCTRL_SCR_Type           SCR;            /**< \brief Offset: 0xD10 (R/W   8) System Control Register */
       RoReg8                         Reserved10[0x3];
  __I  ARM_SYSCTRL_CCR_Type           CCR;            /**< \brief Offset: 0xD14 (R/   16) Configuration and Control Register */
       RoReg8                         Reserved11[0x6];
  __IO ARM_SYSCTRL_SHPR2_Type         SHPR2;          /**< \brief Offset: 0xD1C (R/W  32) System Handler Priority Register 2 */
  __IO ARM_SYSCTRL_SHPR3_Type         SHPR3;          /**< \brief Offset: 0xD20 (R/W  32) System Handler Priority Register 3 */
  __IO ARM_SYSCTRL_SHCSR_Type         SHCSR;          /**< \brief Offset: 0xD24 (R/W  16) System Handler Control and State Register */
       RoReg8                         Reserved12[0xA];
  __IO ARM_SYSCTRL_DFSR_Type          DFSR;           /**< \brief Offset: 0xD30 (R/W   8) Debug Fault Status Register */
       RoReg8                         Reserved13[0xBF];
  __IO ARM_SYSCTRL_DHCSR_Type         DHCSR;          /**< \brief Offset: 0xDF0 (R/W  32) Debug Halting Control and Status Register */
  __IO ARM_SYSCTRL_DCRSR_Type         DCRSR;          /**< \brief Offset: 0xDF4 (R/W  32) Debug Core Register Selector Register */
  __IO ARM_SYSCTRL_DCRDR_Type         DCRDR;          /**< \brief Offset: 0xDF8 (R/W  32) Debug Core Register Data Register */
  __IO ARM_SYSCTRL_DEMCR_Type         DEMCR;          /**< \brief Offset: 0xDFC (R/W  32) Debug Exception and Monitor Control Register */
       RoReg8                         Reserved14[0x1D0];
  __I  ARM_SYSCTRL_SCS_PID4_Type      SCS_PID4;       /**< \brief Offset: 0xFD0 (R/    8) Peripheral ID Register 4 */
       RoReg8                         Reserved15[0xF];
  __I  ARM_SYSCTRL_SCS_PID0_Type      SCS_PID0;       /**< \brief Offset: 0xFE0 (R/    8) Peripheral ID Register 0 */
       RoReg8                         Reserved16[0x3];
  __I  ARM_SYSCTRL_SCS_PID1_Type      SCS_PID1;       /**< \brief Offset: 0xFE4 (R/    8) Peripheral ID Register 1 */
       RoReg8                         Reserved17[0x3];
  __I  ARM_SYSCTRL_SCS_PID2_Type      SCS_PID2;       /**< \brief Offset: 0xFE8 (R/    8) Peripheral ID Register 2 */
       RoReg8                         Reserved18[0x3];
  __I  ARM_SYSCTRL_SCS_PID3_Type      SCS_PID3;       /**< \brief Offset: 0xFEC (R/    8) Peripheral ID Register 3 */
       RoReg8                         Reserved19[0x3];
  __I  ARM_SYSCTRL_SCS_CID0_Type      SCS_CID0;       /**< \brief Offset: 0xFF0 (R/    8) Component ID Register 0 */
       RoReg8                         Reserved20[0x3];
  __I  ARM_SYSCTRL_SCS_CID1_Type      SCS_CID1;       /**< \brief Offset: 0xFF4 (R/    8) Component ID Register 1 */
       RoReg8                         Reserved21[0x3];
  __I  ARM_SYSCTRL_SCS_CID2_Type      SCS_CID2;       /**< \brief Offset: 0xFF8 (R/    8) Component ID Register 2 */
       RoReg8                         Reserved22[0x3];
  __I  ARM_SYSCTRL_SCS_CID3_Type      SCS_CID3;       /**< \brief Offset: 0xFFC (R/    8) Component ID Register 3 */
} ArmSysctrl;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_ARM_SYSCTRL_COMPONENT_ */
