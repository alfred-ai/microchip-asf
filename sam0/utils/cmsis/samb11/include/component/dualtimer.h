/**
 * \file
 *
 * \brief Component description for DUALTIMER
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

#ifndef _SAMB11_DUALTIMER_COMPONENT_
#define _SAMB11_DUALTIMER_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR DUALTIMER */
/* ========================================================================== */
/** \addtogroup SAMB11_DUALTIMER ARM General Purpose Dual Timer */
/*@{*/

#define DUALTIMER_DT1234
#define REV_DUALTIMER                    0x100

/* -------- DUALTIMER_TIMER1LOAD : (DUALTIMER Offset: 0x00) (R/W  32) Timer 1 Load Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t TIMER1LOAD:32;             /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMER1LOAD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMER1LOAD_OFFSET           0x00           /**<  \brief (DUALTIMER_TIMER1LOAD offset) Timer 1 Load Register */
#define DUALTIMER_TIMER1LOAD_RESETVALUE       0x00ul         /**<  \brief (DUALTIMER_TIMER1LOAD reset_value) Timer 1 Load Register */

#define DUALTIMER_TIMER1LOAD_TIMER1LOAD_Pos   0  /**< \brief (DUALTIMER_TIMER1LOAD)                                       */
#define DUALTIMER_TIMER1LOAD_TIMER1LOAD_Msk   (0xFFFFFFFFul << DUALTIMER_TIMER1LOAD_TIMER1LOAD_Pos)
#define DUALTIMER_TIMER1LOAD_TIMER1LOAD(value) (DUALTIMER_TIMER1LOAD_TIMER1LOAD_Msk & ((value) << DUALTIMER_TIMER1LOAD_TIMER1LOAD_Pos))  
#define DUALTIMER_TIMER1LOAD_MASK             0xFFFFFFFFul    /**< \brief (DUALTIMER_TIMER1LOAD) Register MASK */

/* -------- DUALTIMER_TIMER1VALUE : (DUALTIMER Offset: 0x04) (R/  32) Timer 1 Current Value Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t TIMER1VALUE:32;            /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMER1VALUE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMER1VALUE_OFFSET          0x04           /**<  \brief (DUALTIMER_TIMER1VALUE offset) Timer 1 Current Value Register */
#define DUALTIMER_TIMER1VALUE_RESETVALUE      0xFFFFFFFFul   /**<  \brief (DUALTIMER_TIMER1VALUE reset_value) Timer 1 Current Value Register */

#define DUALTIMER_TIMER1VALUE_TIMER1VALUE_Pos 0  /**< \brief (DUALTIMER_TIMER1VALUE)                                      */
#define DUALTIMER_TIMER1VALUE_TIMER1VALUE_Msk (0xFFFFFFFFul << DUALTIMER_TIMER1VALUE_TIMER1VALUE_Pos)
#define DUALTIMER_TIMER1VALUE_TIMER1VALUE(value) (DUALTIMER_TIMER1VALUE_TIMER1VALUE_Msk & ((value) << DUALTIMER_TIMER1VALUE_TIMER1VALUE_Pos))  
#define DUALTIMER_TIMER1VALUE_MASK            0xFFFFFFFFul    /**< \brief (DUALTIMER_TIMER1VALUE) Register MASK */

/* -------- DUALTIMER_TIMER1CONTROL : (DUALTIMER Offset: 0x08) (R/W  8) Timer 1 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ONE_SHOT_COUNT:1;          /*!< bit:      0  Mode Select                              */
    uint8_t  TIMER_SIZE:1;              /*!< bit:      1  Timer Size                               */
    uint8_t  TIMERPRE:2;                /*!< bit:   2..3  Prescale Bits                            */
    uint8_t  RESERVED4:1;               /*!< bit:      4  Reserved bit do not use                  */
    uint8_t  INTERRUPT_ENABLE:1;        /*!< bit:      5  Active High Interrupt Enable Bit         */
    uint8_t  TIMER_MODE:1;              /*!< bit:      6  Mode Bit                                 */
    uint8_t  TIMER_ENABLE:1;            /*!< bit:      7  Active High Timer Enable                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMER1CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMER1CONTROL_OFFSET        0x08           /**<  \brief (DUALTIMER_TIMER1CONTROL offset) Timer 1 Control Register */
#define DUALTIMER_TIMER1CONTROL_RESETVALUE    0x20ul         /**<  \brief (DUALTIMER_TIMER1CONTROL reset_value) Timer 1 Control Register */

#define DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_Pos 0  /**< \brief (DUALTIMER_TIMER1CONTROL) Mode Select                        */
#define DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_Msk (0x1ul << DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_Pos)
#define DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT(value) (DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_Msk & ((value) << DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_Pos))  
#define   DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_0_Val        0X0ul  /**< \brief (DUALTIMER_TIMER1CONTROL) Wrapping Mode  */
#define   DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_1_Val        0X1ul  /**< \brief (DUALTIMER_TIMER1CONTROL) One-Shot Mode  */
#define DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_0    (DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_0_Val << DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_Pos)
#define DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_1    (DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_1_Val << DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_Pos)
#define DUALTIMER_TIMER1CONTROL_TIMER_SIZE_Pos 1  /**< \brief (DUALTIMER_TIMER1CONTROL) Timer Size                         */
#define DUALTIMER_TIMER1CONTROL_TIMER_SIZE_Msk (0x1ul << DUALTIMER_TIMER1CONTROL_TIMER_SIZE_Pos)
#define DUALTIMER_TIMER1CONTROL_TIMER_SIZE(value) (DUALTIMER_TIMER1CONTROL_TIMER_SIZE_Msk & ((value) << DUALTIMER_TIMER1CONTROL_TIMER_SIZE_Pos))  
#define   DUALTIMER_TIMER1CONTROL_TIMER_SIZE_0_Val        0X0ul  /**< \brief (DUALTIMER_TIMER1CONTROL) 16-bit Counter  */
#define   DUALTIMER_TIMER1CONTROL_TIMER_SIZE_1_Val        0X1ul  /**< \brief (DUALTIMER_TIMER1CONTROL) 32-bit Counter  */
#define DUALTIMER_TIMER1CONTROL_TIMER_SIZE_0    (DUALTIMER_TIMER1CONTROL_TIMER_SIZE_0_Val << DUALTIMER_TIMER1CONTROL_TIMER_SIZE_Pos)
#define DUALTIMER_TIMER1CONTROL_TIMER_SIZE_1    (DUALTIMER_TIMER1CONTROL_TIMER_SIZE_1_Val << DUALTIMER_TIMER1CONTROL_TIMER_SIZE_Pos)
#define DUALTIMER_TIMER1CONTROL_TIMERPRE_Pos  2  /**< \brief (DUALTIMER_TIMER1CONTROL) Prescale Bits                      */
#define DUALTIMER_TIMER1CONTROL_TIMERPRE_Msk  (0x3ul << DUALTIMER_TIMER1CONTROL_TIMERPRE_Pos)
#define DUALTIMER_TIMER1CONTROL_TIMERPRE(value) (DUALTIMER_TIMER1CONTROL_TIMERPRE_Msk & ((value) << DUALTIMER_TIMER1CONTROL_TIMERPRE_Pos))  
#define   DUALTIMER_TIMER1CONTROL_TIMERPRE_0_Val        0X0ul  /**< \brief (DUALTIMER_TIMER1CONTROL) 0 Stages, Clock Divided by 1  */
#define   DUALTIMER_TIMER1CONTROL_TIMERPRE_1_Val        0X1ul  /**< \brief (DUALTIMER_TIMER1CONTROL) 4 Stages, Clock Divided by 16  */
#define   DUALTIMER_TIMER1CONTROL_TIMERPRE_2_Val        0X2ul  /**< \brief (DUALTIMER_TIMER1CONTROL) 8 Stages, Clock Divided by 256  */
#define   DUALTIMER_TIMER1CONTROL_TIMERPRE_3_Val        0X3ul  /**< \brief (DUALTIMER_TIMER1CONTROL) Undefined, do not use  */
#define DUALTIMER_TIMER1CONTROL_TIMERPRE_0    (DUALTIMER_TIMER1CONTROL_TIMERPRE_0_Val << DUALTIMER_TIMER1CONTROL_TIMERPRE_Pos)
#define DUALTIMER_TIMER1CONTROL_TIMERPRE_1    (DUALTIMER_TIMER1CONTROL_TIMERPRE_1_Val << DUALTIMER_TIMER1CONTROL_TIMERPRE_Pos)
#define DUALTIMER_TIMER1CONTROL_TIMERPRE_2    (DUALTIMER_TIMER1CONTROL_TIMERPRE_2_Val << DUALTIMER_TIMER1CONTROL_TIMERPRE_Pos)
#define DUALTIMER_TIMER1CONTROL_TIMERPRE_3    (DUALTIMER_TIMER1CONTROL_TIMERPRE_3_Val << DUALTIMER_TIMER1CONTROL_TIMERPRE_Pos)
#define DUALTIMER_TIMER1CONTROL_RESERVED4_Pos 4  /**< \brief (DUALTIMER_TIMER1CONTROL) Reserved bit do not use            */
#define DUALTIMER_TIMER1CONTROL_RESERVED4     (0x1ul << DUALTIMER_TIMER1CONTROL_RESERVED4_Pos)  
#define DUALTIMER_TIMER1CONTROL_INTERRUPT_ENABLE_Pos 5  /**< \brief (DUALTIMER_TIMER1CONTROL) Active High Interrupt Enable Bit   */
#define DUALTIMER_TIMER1CONTROL_INTERRUPT_ENABLE (0x1ul << DUALTIMER_TIMER1CONTROL_INTERRUPT_ENABLE_Pos)  
#define DUALTIMER_TIMER1CONTROL_TIMER_MODE_Pos 6  /**< \brief (DUALTIMER_TIMER1CONTROL) Mode Bit                           */
#define DUALTIMER_TIMER1CONTROL_TIMER_MODE_Msk (0x1ul << DUALTIMER_TIMER1CONTROL_TIMER_MODE_Pos)
#define DUALTIMER_TIMER1CONTROL_TIMER_MODE(value) (DUALTIMER_TIMER1CONTROL_TIMER_MODE_Msk & ((value) << DUALTIMER_TIMER1CONTROL_TIMER_MODE_Pos))  
#define   DUALTIMER_TIMER1CONTROL_TIMER_MODE_0_Val        0X0ul  /**< \brief (DUALTIMER_TIMER1CONTROL) Free-Running Mode  */
#define   DUALTIMER_TIMER1CONTROL_TIMER_MODE_1_Val        0X1ul  /**< \brief (DUALTIMER_TIMER1CONTROL) Periodic Mode  */
#define DUALTIMER_TIMER1CONTROL_TIMER_MODE_0    (DUALTIMER_TIMER1CONTROL_TIMER_MODE_0_Val << DUALTIMER_TIMER1CONTROL_TIMER_MODE_Pos)
#define DUALTIMER_TIMER1CONTROL_TIMER_MODE_1    (DUALTIMER_TIMER1CONTROL_TIMER_MODE_1_Val << DUALTIMER_TIMER1CONTROL_TIMER_MODE_Pos)
#define DUALTIMER_TIMER1CONTROL_TIMER_ENABLE_Pos 7  /**< \brief (DUALTIMER_TIMER1CONTROL) Active High Timer Enable           */
#define DUALTIMER_TIMER1CONTROL_TIMER_ENABLE  (0x1ul << DUALTIMER_TIMER1CONTROL_TIMER_ENABLE_Pos)  
#define DUALTIMER_TIMER1CONTROL_MASK          0xFFul    /**< \brief (DUALTIMER_TIMER1CONTROL) Register MASK */

/* -------- DUALTIMER_TIMER1INTCLR : (DUALTIMER Offset: 0x0c) (/W  8) Timer 1 Interrupt Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TIMER1INTCLR:1;            /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMER1INTCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMER1INTCLR_OFFSET         0x0C           /**<  \brief (DUALTIMER_TIMER1INTCLR offset) Timer 1 Interrupt Clear Register */
#define DUALTIMER_TIMER1INTCLR_RESETVALUE     0x00ul         /**<  \brief (DUALTIMER_TIMER1INTCLR reset_value) Timer 1 Interrupt Clear Register */

#define DUALTIMER_TIMER1INTCLR_TIMER1INTCLR_Pos 0  /**< \brief (DUALTIMER_TIMER1INTCLR)                                     */
#define DUALTIMER_TIMER1INTCLR_TIMER1INTCLR   (0x1ul << DUALTIMER_TIMER1INTCLR_TIMER1INTCLR_Pos)  
#define DUALTIMER_TIMER1INTCLR_MASK           0x01ul    /**< \brief (DUALTIMER_TIMER1INTCLR) Register MASK */

/* -------- DUALTIMER_TIMER1RIS : (DUALTIMER Offset: 0x10) (R/  8) Timer 1 Raw Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TIMER1RIS:1;               /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMER1RIS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMER1RIS_OFFSET            0x10           /**<  \brief (DUALTIMER_TIMER1RIS offset) Timer 1 Raw Interrupt Status Register */
#define DUALTIMER_TIMER1RIS_RESETVALUE        0x00ul         /**<  \brief (DUALTIMER_TIMER1RIS reset_value) Timer 1 Raw Interrupt Status Register */

#define DUALTIMER_TIMER1RIS_TIMER1RIS_Pos     0  /**< \brief (DUALTIMER_TIMER1RIS)                                        */
#define DUALTIMER_TIMER1RIS_TIMER1RIS         (0x1ul << DUALTIMER_TIMER1RIS_TIMER1RIS_Pos)  
#define DUALTIMER_TIMER1RIS_MASK              0x01ul    /**< \brief (DUALTIMER_TIMER1RIS) Register MASK */

/* -------- DUALTIMER_TIMER1MIS : (DUALTIMER Offset: 0x14) (R/  8) Timer 1 Masked Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TIMER1MIS:1;               /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMER1MIS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMER1MIS_OFFSET            0x14           /**<  \brief (DUALTIMER_TIMER1MIS offset) Timer 1 Masked Interrupt Status Register */
#define DUALTIMER_TIMER1MIS_RESETVALUE        0x00ul         /**<  \brief (DUALTIMER_TIMER1MIS reset_value) Timer 1 Masked Interrupt Status Register */

#define DUALTIMER_TIMER1MIS_TIMER1MIS_Pos     0  /**< \brief (DUALTIMER_TIMER1MIS)                                        */
#define DUALTIMER_TIMER1MIS_TIMER1MIS         (0x1ul << DUALTIMER_TIMER1MIS_TIMER1MIS_Pos)  
#define DUALTIMER_TIMER1MIS_MASK              0x01ul    /**< \brief (DUALTIMER_TIMER1MIS) Register MASK */

/* -------- DUALTIMER_TIMER1BGLOAD : (DUALTIMER Offset: 0x18) (R/W  32) Timer 1 Background Load Register (Reload Value for Period Mode) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t TIMER1BGLOAD:32;           /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMER1BGLOAD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMER1BGLOAD_OFFSET         0x18           /**<  \brief (DUALTIMER_TIMER1BGLOAD offset) Timer 1 Background Load Register (Reload Value for Period Mode) */
#define DUALTIMER_TIMER1BGLOAD_RESETVALUE     0x00ul         /**<  \brief (DUALTIMER_TIMER1BGLOAD reset_value) Timer 1 Background Load Register (Reload Value for Period Mode) */

#define DUALTIMER_TIMER1BGLOAD_TIMER1BGLOAD_Pos 0  /**< \brief (DUALTIMER_TIMER1BGLOAD)                                     */
#define DUALTIMER_TIMER1BGLOAD_TIMER1BGLOAD_Msk (0xFFFFFFFFul << DUALTIMER_TIMER1BGLOAD_TIMER1BGLOAD_Pos)
#define DUALTIMER_TIMER1BGLOAD_TIMER1BGLOAD(value) (DUALTIMER_TIMER1BGLOAD_TIMER1BGLOAD_Msk & ((value) << DUALTIMER_TIMER1BGLOAD_TIMER1BGLOAD_Pos))  
#define DUALTIMER_TIMER1BGLOAD_MASK           0xFFFFFFFFul    /**< \brief (DUALTIMER_TIMER1BGLOAD) Register MASK */

/* -------- DUALTIMER_TIMER2LOAD : (DUALTIMER Offset: 0x20) (R/W  32) Timer 2 Load Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t TIMER2LOAD:32;             /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMER2LOAD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMER2LOAD_OFFSET           0x20           /**<  \brief (DUALTIMER_TIMER2LOAD offset) Timer 2 Load Register */
#define DUALTIMER_TIMER2LOAD_RESETVALUE       0x00ul         /**<  \brief (DUALTIMER_TIMER2LOAD reset_value) Timer 2 Load Register */

#define DUALTIMER_TIMER2LOAD_TIMER2LOAD_Pos   0  /**< \brief (DUALTIMER_TIMER2LOAD)                                       */
#define DUALTIMER_TIMER2LOAD_TIMER2LOAD_Msk   (0xFFFFFFFFul << DUALTIMER_TIMER2LOAD_TIMER2LOAD_Pos)
#define DUALTIMER_TIMER2LOAD_TIMER2LOAD(value) (DUALTIMER_TIMER2LOAD_TIMER2LOAD_Msk & ((value) << DUALTIMER_TIMER2LOAD_TIMER2LOAD_Pos))  
#define DUALTIMER_TIMER2LOAD_MASK             0xFFFFFFFFul    /**< \brief (DUALTIMER_TIMER2LOAD) Register MASK */

/* -------- DUALTIMER_TIMER2VALUE : (DUALTIMER Offset: 0x24) (R/  32) Timer 2 Current Value Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t TIMER2VALUE:32;            /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMER2VALUE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMER2VALUE_OFFSET          0x24           /**<  \brief (DUALTIMER_TIMER2VALUE offset) Timer 2 Current Value Register */
#define DUALTIMER_TIMER2VALUE_RESETVALUE      0xFFFFFFFFul   /**<  \brief (DUALTIMER_TIMER2VALUE reset_value) Timer 2 Current Value Register */

#define DUALTIMER_TIMER2VALUE_TIMER2VALUE_Pos 0  /**< \brief (DUALTIMER_TIMER2VALUE)                                      */
#define DUALTIMER_TIMER2VALUE_TIMER2VALUE_Msk (0xFFFFFFFFul << DUALTIMER_TIMER2VALUE_TIMER2VALUE_Pos)
#define DUALTIMER_TIMER2VALUE_TIMER2VALUE(value) (DUALTIMER_TIMER2VALUE_TIMER2VALUE_Msk & ((value) << DUALTIMER_TIMER2VALUE_TIMER2VALUE_Pos))  
#define DUALTIMER_TIMER2VALUE_MASK            0xFFFFFFFFul    /**< \brief (DUALTIMER_TIMER2VALUE) Register MASK */

/* -------- DUALTIMER_TIMER2CONTROL : (DUALTIMER Offset: 0x28) (R/W  8) Timer 2 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ONE_SHOT_COUNT:1;          /*!< bit:      0  Mode Select                              */
    uint8_t  TIMER_SIZE:1;              /*!< bit:      1  Timer Size                               */
    uint8_t  TIMERPRE:2;                /*!< bit:   2..3  Prescale Bits                            */
    uint8_t  RESERVED4:1;               /*!< bit:      4  Reserved bit do not use                  */
    uint8_t  INTERRUPT_ENABLE:1;        /*!< bit:      5  Active High Interrupt Enable Bit         */
    uint8_t  TIMER_MODE:1;              /*!< bit:      6  Mode Bit                                 */
    uint8_t  TIMER_ENABLE:1;            /*!< bit:      7  Active High Timer Enable                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMER2CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMER2CONTROL_OFFSET        0x28           /**<  \brief (DUALTIMER_TIMER2CONTROL offset) Timer 2 Control Register */
#define DUALTIMER_TIMER2CONTROL_RESETVALUE    0x20ul         /**<  \brief (DUALTIMER_TIMER2CONTROL reset_value) Timer 2 Control Register */

#define DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_Pos 0  /**< \brief (DUALTIMER_TIMER2CONTROL) Mode Select                        */
#define DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_Msk (0x1ul << DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_Pos)
#define DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT(value) (DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_Msk & ((value) << DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_Pos))  
#define   DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_0_Val        0X0ul  /**< \brief (DUALTIMER_TIMER2CONTROL) Wrapping Mode  */
#define   DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_1_Val        0X1ul  /**< \brief (DUALTIMER_TIMER2CONTROL) One-Shot Mode  */
#define DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_0    (DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_0_Val << DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_Pos)
#define DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_1    (DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_1_Val << DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_Pos)
#define DUALTIMER_TIMER2CONTROL_TIMER_SIZE_Pos 1  /**< \brief (DUALTIMER_TIMER2CONTROL) Timer Size                         */
#define DUALTIMER_TIMER2CONTROL_TIMER_SIZE_Msk (0x1ul << DUALTIMER_TIMER2CONTROL_TIMER_SIZE_Pos)
#define DUALTIMER_TIMER2CONTROL_TIMER_SIZE(value) (DUALTIMER_TIMER2CONTROL_TIMER_SIZE_Msk & ((value) << DUALTIMER_TIMER2CONTROL_TIMER_SIZE_Pos))  
#define   DUALTIMER_TIMER2CONTROL_TIMER_SIZE_0_Val        0X0ul  /**< \brief (DUALTIMER_TIMER2CONTROL) 16-bit Counter  */
#define   DUALTIMER_TIMER2CONTROL_TIMER_SIZE_1_Val        0X1ul  /**< \brief (DUALTIMER_TIMER2CONTROL) 32-bit Counter  */
#define DUALTIMER_TIMER2CONTROL_TIMER_SIZE_0    (DUALTIMER_TIMER2CONTROL_TIMER_SIZE_0_Val << DUALTIMER_TIMER2CONTROL_TIMER_SIZE_Pos)
#define DUALTIMER_TIMER2CONTROL_TIMER_SIZE_1    (DUALTIMER_TIMER2CONTROL_TIMER_SIZE_1_Val << DUALTIMER_TIMER2CONTROL_TIMER_SIZE_Pos)
#define DUALTIMER_TIMER2CONTROL_TIMERPRE_Pos  2  /**< \brief (DUALTIMER_TIMER2CONTROL) Prescale Bits                      */
#define DUALTIMER_TIMER2CONTROL_TIMERPRE_Msk  (0x3ul << DUALTIMER_TIMER2CONTROL_TIMERPRE_Pos)
#define DUALTIMER_TIMER2CONTROL_TIMERPRE(value) (DUALTIMER_TIMER2CONTROL_TIMERPRE_Msk & ((value) << DUALTIMER_TIMER2CONTROL_TIMERPRE_Pos))  
#define   DUALTIMER_TIMER2CONTROL_TIMERPRE_0_Val        0X0ul  /**< \brief (DUALTIMER_TIMER2CONTROL) 0 Stages, Clock Divided by 1  */
#define   DUALTIMER_TIMER2CONTROL_TIMERPRE_1_Val        0X1ul  /**< \brief (DUALTIMER_TIMER2CONTROL) 4 Stages, Clock Divided by 16  */
#define   DUALTIMER_TIMER2CONTROL_TIMERPRE_2_Val        0X2ul  /**< \brief (DUALTIMER_TIMER2CONTROL) 8 Stages, Clock Divided by 256  */
#define   DUALTIMER_TIMER2CONTROL_TIMERPRE_3_Val        0X3ul  /**< \brief (DUALTIMER_TIMER2CONTROL) Undefined, do not use  */
#define DUALTIMER_TIMER2CONTROL_TIMERPRE_0    (DUALTIMER_TIMER2CONTROL_TIMERPRE_0_Val << DUALTIMER_TIMER2CONTROL_TIMERPRE_Pos)
#define DUALTIMER_TIMER2CONTROL_TIMERPRE_1    (DUALTIMER_TIMER2CONTROL_TIMERPRE_1_Val << DUALTIMER_TIMER2CONTROL_TIMERPRE_Pos)
#define DUALTIMER_TIMER2CONTROL_TIMERPRE_2    (DUALTIMER_TIMER2CONTROL_TIMERPRE_2_Val << DUALTIMER_TIMER2CONTROL_TIMERPRE_Pos)
#define DUALTIMER_TIMER2CONTROL_TIMERPRE_3    (DUALTIMER_TIMER2CONTROL_TIMERPRE_3_Val << DUALTIMER_TIMER2CONTROL_TIMERPRE_Pos)
#define DUALTIMER_TIMER2CONTROL_RESERVED4_Pos 4  /**< \brief (DUALTIMER_TIMER2CONTROL) Reserved bit do not use            */
#define DUALTIMER_TIMER2CONTROL_RESERVED4     (0x1ul << DUALTIMER_TIMER2CONTROL_RESERVED4_Pos)  
#define DUALTIMER_TIMER2CONTROL_INTERRUPT_ENABLE_Pos 5  /**< \brief (DUALTIMER_TIMER2CONTROL) Active High Interrupt Enable Bit   */
#define DUALTIMER_TIMER2CONTROL_INTERRUPT_ENABLE (0x1ul << DUALTIMER_TIMER2CONTROL_INTERRUPT_ENABLE_Pos)  
#define DUALTIMER_TIMER2CONTROL_TIMER_MODE_Pos 6  /**< \brief (DUALTIMER_TIMER2CONTROL) Mode Bit                           */
#define DUALTIMER_TIMER2CONTROL_TIMER_MODE_Msk (0x1ul << DUALTIMER_TIMER2CONTROL_TIMER_MODE_Pos)
#define DUALTIMER_TIMER2CONTROL_TIMER_MODE(value) (DUALTIMER_TIMER2CONTROL_TIMER_MODE_Msk & ((value) << DUALTIMER_TIMER2CONTROL_TIMER_MODE_Pos))  
#define   DUALTIMER_TIMER2CONTROL_TIMER_MODE_0_Val        0X0ul  /**< \brief (DUALTIMER_TIMER2CONTROL) Free-Running Mode  */
#define   DUALTIMER_TIMER2CONTROL_TIMER_MODE_1_Val        0X1ul  /**< \brief (DUALTIMER_TIMER2CONTROL) Periodic Mode  */
#define DUALTIMER_TIMER2CONTROL_TIMER_MODE_0    (DUALTIMER_TIMER2CONTROL_TIMER_MODE_0_Val << DUALTIMER_TIMER2CONTROL_TIMER_MODE_Pos)
#define DUALTIMER_TIMER2CONTROL_TIMER_MODE_1    (DUALTIMER_TIMER2CONTROL_TIMER_MODE_1_Val << DUALTIMER_TIMER2CONTROL_TIMER_MODE_Pos)
#define DUALTIMER_TIMER2CONTROL_TIMER_ENABLE_Pos 7  /**< \brief (DUALTIMER_TIMER2CONTROL) Active High Timer Enable           */
#define DUALTIMER_TIMER2CONTROL_TIMER_ENABLE  (0x1ul << DUALTIMER_TIMER2CONTROL_TIMER_ENABLE_Pos)  
#define DUALTIMER_TIMER2CONTROL_MASK          0xFFul    /**< \brief (DUALTIMER_TIMER2CONTROL) Register MASK */

/* -------- DUALTIMER_TIMER2INTCLR : (DUALTIMER Offset: 0x2c) (/W  8) Timer 2 Interrupt Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TIMER2INTCLR:1;            /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMER2INTCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMER2INTCLR_OFFSET         0x2C           /**<  \brief (DUALTIMER_TIMER2INTCLR offset) Timer 2 Interrupt Clear Register */
#define DUALTIMER_TIMER2INTCLR_RESETVALUE     0x00ul         /**<  \brief (DUALTIMER_TIMER2INTCLR reset_value) Timer 2 Interrupt Clear Register */

#define DUALTIMER_TIMER2INTCLR_TIMER2INTCLR_Pos 0  /**< \brief (DUALTIMER_TIMER2INTCLR)                                     */
#define DUALTIMER_TIMER2INTCLR_TIMER2INTCLR   (0x1ul << DUALTIMER_TIMER2INTCLR_TIMER2INTCLR_Pos)  
#define DUALTIMER_TIMER2INTCLR_MASK           0x01ul    /**< \brief (DUALTIMER_TIMER2INTCLR) Register MASK */

/* -------- DUALTIMER_TIMER2RIS : (DUALTIMER Offset: 0x30) (R/  8) Timer 2 Raw Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TIMER2RIS:1;               /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMER2RIS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMER2RIS_OFFSET            0x30           /**<  \brief (DUALTIMER_TIMER2RIS offset) Timer 2 Raw Interrupt Status Register */
#define DUALTIMER_TIMER2RIS_RESETVALUE        0x00ul         /**<  \brief (DUALTIMER_TIMER2RIS reset_value) Timer 2 Raw Interrupt Status Register */

#define DUALTIMER_TIMER2RIS_TIMER2RIS_Pos     0  /**< \brief (DUALTIMER_TIMER2RIS)                                        */
#define DUALTIMER_TIMER2RIS_TIMER2RIS         (0x1ul << DUALTIMER_TIMER2RIS_TIMER2RIS_Pos)  
#define DUALTIMER_TIMER2RIS_MASK              0x01ul    /**< \brief (DUALTIMER_TIMER2RIS) Register MASK */

/* -------- DUALTIMER_TIMER2MIS : (DUALTIMER Offset: 0x34) (R/  8) Timer 2 Masked Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TIMER2MIS:1;               /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMER2MIS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMER2MIS_OFFSET            0x34           /**<  \brief (DUALTIMER_TIMER2MIS offset) Timer 2 Masked Interrupt Status Register */
#define DUALTIMER_TIMER2MIS_RESETVALUE        0x00ul         /**<  \brief (DUALTIMER_TIMER2MIS reset_value) Timer 2 Masked Interrupt Status Register */

#define DUALTIMER_TIMER2MIS_TIMER2MIS_Pos     0  /**< \brief (DUALTIMER_TIMER2MIS)                                        */
#define DUALTIMER_TIMER2MIS_TIMER2MIS         (0x1ul << DUALTIMER_TIMER2MIS_TIMER2MIS_Pos)  
#define DUALTIMER_TIMER2MIS_MASK              0x01ul    /**< \brief (DUALTIMER_TIMER2MIS) Register MASK */

/* -------- DUALTIMER_TIMER2BGLOAD : (DUALTIMER Offset: 0x38) (R/W  32) Timer 2 Background Load Register (Reload Value for Period Mode) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t TIMER2BGLOAD:32;           /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMER2BGLOAD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMER2BGLOAD_OFFSET         0x38           /**<  \brief (DUALTIMER_TIMER2BGLOAD offset) Timer 2 Background Load Register (Reload Value for Period Mode) */
#define DUALTIMER_TIMER2BGLOAD_RESETVALUE     0x00ul         /**<  \brief (DUALTIMER_TIMER2BGLOAD reset_value) Timer 2 Background Load Register (Reload Value for Period Mode) */

#define DUALTIMER_TIMER2BGLOAD_TIMER2BGLOAD_Pos 0  /**< \brief (DUALTIMER_TIMER2BGLOAD)                                     */
#define DUALTIMER_TIMER2BGLOAD_TIMER2BGLOAD_Msk (0xFFFFFFFFul << DUALTIMER_TIMER2BGLOAD_TIMER2BGLOAD_Pos)
#define DUALTIMER_TIMER2BGLOAD_TIMER2BGLOAD(value) (DUALTIMER_TIMER2BGLOAD_TIMER2BGLOAD_Msk & ((value) << DUALTIMER_TIMER2BGLOAD_TIMER2BGLOAD_Pos))  
#define DUALTIMER_TIMER2BGLOAD_MASK           0xFFFFFFFFul    /**< \brief (DUALTIMER_TIMER2BGLOAD) Register MASK */

/* -------- DUALTIMER_TIMERITCR : (DUALTIMER Offset: 0xf00) (R/W  8) Integration Test Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TIMERITCR:1;               /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMERITCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMERITCR_OFFSET            0xF00          /**<  \brief (DUALTIMER_TIMERITCR offset) Integration Test Control Register */
#define DUALTIMER_TIMERITCR_RESETVALUE        0x00ul         /**<  \brief (DUALTIMER_TIMERITCR reset_value) Integration Test Control Register */

#define DUALTIMER_TIMERITCR_TIMERITCR_Pos     0  /**< \brief (DUALTIMER_TIMERITCR)                                        */
#define DUALTIMER_TIMERITCR_TIMERITCR         (0x1ul << DUALTIMER_TIMERITCR_TIMERITCR_Pos)  
#define DUALTIMER_TIMERITCR_MASK              0x01ul    /**< \brief (DUALTIMER_TIMERITCR) Register MASK */

/* -------- DUALTIMER_TIMERITOP : (DUALTIMER Offset: 0xf04) (/W  8) Integration Test Output Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  INT_TEST_TIMINT1_VALUE:1;  /*!< bit:      0  Value Output on TIMINT1 in Integration Test Mode */
    uint8_t  INT_TEST_TIMING2_VALUE:1;  /*!< bit:      1  Value Output on TIMINT2 in Integration Test Mode */
    uint8_t  :6;                        /*!< bit:   2..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMERITOP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMERITOP_OFFSET            0xF04          /**<  \brief (DUALTIMER_TIMERITOP offset) Integration Test Output Set Register */
#define DUALTIMER_TIMERITOP_RESETVALUE        0x00ul         /**<  \brief (DUALTIMER_TIMERITOP reset_value) Integration Test Output Set Register */

#define DUALTIMER_TIMERITOP_INT_TEST_TIMINT1_VALUE_Pos 0  /**< \brief (DUALTIMER_TIMERITOP) Value Output on TIMINT1 in Integration Test Mode */
#define DUALTIMER_TIMERITOP_INT_TEST_TIMINT1_VALUE (0x1ul << DUALTIMER_TIMERITOP_INT_TEST_TIMINT1_VALUE_Pos)  
#define DUALTIMER_TIMERITOP_INT_TEST_TIMING2_VALUE_Pos 1  /**< \brief (DUALTIMER_TIMERITOP) Value Output on TIMINT2 in Integration Test Mode */
#define DUALTIMER_TIMERITOP_INT_TEST_TIMING2_VALUE (0x1ul << DUALTIMER_TIMERITOP_INT_TEST_TIMING2_VALUE_Pos)  
#define DUALTIMER_TIMERITOP_MASK              0x03ul    /**< \brief (DUALTIMER_TIMERITOP) Register MASK */

/* -------- DUALTIMER_TIMERPERIPHID4 : (DUALTIMER Offset: 0xfd0) (R/  8) Peripheral ID Register 4 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_C_CODE:4;           /*!< bit:   0..3  JEP106 C Code                            */
    uint8_t  BLOCK_COUNT:4;             /*!< bit:   4..7  Block Count                              */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMERPERIPHID4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMERPERIPHID4_OFFSET       0xFD0          /**<  \brief (DUALTIMER_TIMERPERIPHID4 offset) Peripheral ID Register 4 */
#define DUALTIMER_TIMERPERIPHID4_RESETVALUE   0x04ul         /**<  \brief (DUALTIMER_TIMERPERIPHID4 reset_value) Peripheral ID Register 4 */

#define DUALTIMER_TIMERPERIPHID4_JEP106_C_CODE_Pos 0  /**< \brief (DUALTIMER_TIMERPERIPHID4) JEP106 C Code                     */
#define DUALTIMER_TIMERPERIPHID4_JEP106_C_CODE_Msk (0xFul << DUALTIMER_TIMERPERIPHID4_JEP106_C_CODE_Pos)
#define DUALTIMER_TIMERPERIPHID4_JEP106_C_CODE(value) (DUALTIMER_TIMERPERIPHID4_JEP106_C_CODE_Msk & ((value) << DUALTIMER_TIMERPERIPHID4_JEP106_C_CODE_Pos))  
#define DUALTIMER_TIMERPERIPHID4_BLOCK_COUNT_Pos 4  /**< \brief (DUALTIMER_TIMERPERIPHID4) Block Count                       */
#define DUALTIMER_TIMERPERIPHID4_BLOCK_COUNT_Msk (0xFul << DUALTIMER_TIMERPERIPHID4_BLOCK_COUNT_Pos)
#define DUALTIMER_TIMERPERIPHID4_BLOCK_COUNT(value) (DUALTIMER_TIMERPERIPHID4_BLOCK_COUNT_Msk & ((value) << DUALTIMER_TIMERPERIPHID4_BLOCK_COUNT_Pos))  
#define DUALTIMER_TIMERPERIPHID4_MASK         0xFFul    /**< \brief (DUALTIMER_TIMERPERIPHID4) Register MASK */

/* -------- DUALTIMER_TIMERPERIPHID5 : (DUALTIMER Offset: 0xfd4) (R/  8) Peripheral ID Register 5 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TIMERPERIPHID5:8;          /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMERPERIPHID5_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMERPERIPHID5_OFFSET       0xFD4          /**<  \brief (DUALTIMER_TIMERPERIPHID5 offset) Peripheral ID Register 5 */
#define DUALTIMER_TIMERPERIPHID5_RESETVALUE   0x00ul         /**<  \brief (DUALTIMER_TIMERPERIPHID5 reset_value) Peripheral ID Register 5 */

#define DUALTIMER_TIMERPERIPHID5_TIMERPERIPHID5_Pos 0  /**< \brief (DUALTIMER_TIMERPERIPHID5)                                   */
#define DUALTIMER_TIMERPERIPHID5_TIMERPERIPHID5_Msk (0xFFul << DUALTIMER_TIMERPERIPHID5_TIMERPERIPHID5_Pos)
#define DUALTIMER_TIMERPERIPHID5_TIMERPERIPHID5(value) (DUALTIMER_TIMERPERIPHID5_TIMERPERIPHID5_Msk & ((value) << DUALTIMER_TIMERPERIPHID5_TIMERPERIPHID5_Pos))  
#define DUALTIMER_TIMERPERIPHID5_MASK         0xFFul    /**< \brief (DUALTIMER_TIMERPERIPHID5) Register MASK */

/* -------- DUALTIMER_TIMERPERIPHID6 : (DUALTIMER Offset: 0xfd8) (R/  8) Peripheral ID Register 6 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TIMERPERIPHID6:8;          /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMERPERIPHID6_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMERPERIPHID6_OFFSET       0xFD8          /**<  \brief (DUALTIMER_TIMERPERIPHID6 offset) Peripheral ID Register 6 */
#define DUALTIMER_TIMERPERIPHID6_RESETVALUE   0x00ul         /**<  \brief (DUALTIMER_TIMERPERIPHID6 reset_value) Peripheral ID Register 6 */

#define DUALTIMER_TIMERPERIPHID6_TIMERPERIPHID6_Pos 0  /**< \brief (DUALTIMER_TIMERPERIPHID6)                                   */
#define DUALTIMER_TIMERPERIPHID6_TIMERPERIPHID6_Msk (0xFFul << DUALTIMER_TIMERPERIPHID6_TIMERPERIPHID6_Pos)
#define DUALTIMER_TIMERPERIPHID6_TIMERPERIPHID6(value) (DUALTIMER_TIMERPERIPHID6_TIMERPERIPHID6_Msk & ((value) << DUALTIMER_TIMERPERIPHID6_TIMERPERIPHID6_Pos))  
#define DUALTIMER_TIMERPERIPHID6_MASK         0xFFul    /**< \brief (DUALTIMER_TIMERPERIPHID6) Register MASK */

/* -------- DUALTIMER_TIMERPERIPHID7 : (DUALTIMER Offset: 0xfdc) (R/  8) Peripheral ID Register 7 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TIMERPERIPHID7:8;          /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMERPERIPHID7_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMERPERIPHID7_OFFSET       0xFDC          /**<  \brief (DUALTIMER_TIMERPERIPHID7 offset) Peripheral ID Register 7 */
#define DUALTIMER_TIMERPERIPHID7_RESETVALUE   0x00ul         /**<  \brief (DUALTIMER_TIMERPERIPHID7 reset_value) Peripheral ID Register 7 */

#define DUALTIMER_TIMERPERIPHID7_TIMERPERIPHID7_Pos 0  /**< \brief (DUALTIMER_TIMERPERIPHID7)                                   */
#define DUALTIMER_TIMERPERIPHID7_TIMERPERIPHID7_Msk (0xFFul << DUALTIMER_TIMERPERIPHID7_TIMERPERIPHID7_Pos)
#define DUALTIMER_TIMERPERIPHID7_TIMERPERIPHID7(value) (DUALTIMER_TIMERPERIPHID7_TIMERPERIPHID7_Msk & ((value) << DUALTIMER_TIMERPERIPHID7_TIMERPERIPHID7_Pos))  
#define DUALTIMER_TIMERPERIPHID7_MASK         0xFFul    /**< \brief (DUALTIMER_TIMERPERIPHID7) Register MASK */

/* -------- DUALTIMER_TIMERPERIPHID0 : (DUALTIMER Offset: 0xfe0) (R/  8) Peripheral ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:8;             /*!< bit:   0..7  Part Number Bits 7:0                     */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMERPERIPHID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMERPERIPHID0_OFFSET       0xFE0          /**<  \brief (DUALTIMER_TIMERPERIPHID0 offset) Peripheral ID Register 0 */
#define DUALTIMER_TIMERPERIPHID0_RESETVALUE   0x23ul         /**<  \brief (DUALTIMER_TIMERPERIPHID0 reset_value) Peripheral ID Register 0 */

#define DUALTIMER_TIMERPERIPHID0_PART_NUMBER_Pos 0  /**< \brief (DUALTIMER_TIMERPERIPHID0) Part Number Bits 7:0              */
#define DUALTIMER_TIMERPERIPHID0_PART_NUMBER_Msk (0xFFul << DUALTIMER_TIMERPERIPHID0_PART_NUMBER_Pos)
#define DUALTIMER_TIMERPERIPHID0_PART_NUMBER(value) (DUALTIMER_TIMERPERIPHID0_PART_NUMBER_Msk & ((value) << DUALTIMER_TIMERPERIPHID0_PART_NUMBER_Pos))  
#define DUALTIMER_TIMERPERIPHID0_MASK         0xFFul    /**< \brief (DUALTIMER_TIMERPERIPHID0) Register MASK */

/* -------- DUALTIMER_TIMERPERIPHID1 : (DUALTIMER Offset: 0xfe4) (R/  8) Peripheral ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:4;             /*!< bit:   0..3  Part Number Bits 11:8                    */
    uint8_t  JEP106_ID_3_0:4;           /*!< bit:   4..7  JEP106 ID Bits 3:0                       */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMERPERIPHID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMERPERIPHID1_OFFSET       0xFE4          /**<  \brief (DUALTIMER_TIMERPERIPHID1 offset) Peripheral ID Register 1 */
#define DUALTIMER_TIMERPERIPHID1_RESETVALUE   0xB8ul         /**<  \brief (DUALTIMER_TIMERPERIPHID1 reset_value) Peripheral ID Register 1 */

#define DUALTIMER_TIMERPERIPHID1_PART_NUMBER_Pos 0  /**< \brief (DUALTIMER_TIMERPERIPHID1) Part Number Bits 11:8             */
#define DUALTIMER_TIMERPERIPHID1_PART_NUMBER_Msk (0xFul << DUALTIMER_TIMERPERIPHID1_PART_NUMBER_Pos)
#define DUALTIMER_TIMERPERIPHID1_PART_NUMBER(value) (DUALTIMER_TIMERPERIPHID1_PART_NUMBER_Msk & ((value) << DUALTIMER_TIMERPERIPHID1_PART_NUMBER_Pos))  
#define DUALTIMER_TIMERPERIPHID1_JEP106_ID_3_0_Pos 4  /**< \brief (DUALTIMER_TIMERPERIPHID1) JEP106 ID Bits 3:0                */
#define DUALTIMER_TIMERPERIPHID1_JEP106_ID_3_0_Msk (0xFul << DUALTIMER_TIMERPERIPHID1_JEP106_ID_3_0_Pos)
#define DUALTIMER_TIMERPERIPHID1_JEP106_ID_3_0(value) (DUALTIMER_TIMERPERIPHID1_JEP106_ID_3_0_Msk & ((value) << DUALTIMER_TIMERPERIPHID1_JEP106_ID_3_0_Pos))  
#define DUALTIMER_TIMERPERIPHID1_MASK         0xFFul    /**< \brief (DUALTIMER_TIMERPERIPHID1) Register MASK */

/* -------- DUALTIMER_TIMERPERIPHID2 : (DUALTIMER Offset: 0xfe8) (R/  8) Peripheral ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_ID_6_4:3;           /*!< bit:   0..2  JEP106 ID Bits 6:4                       */
    uint8_t  JEDEC_USED:1;              /*!< bit:      3  JEDEC Used                               */
    uint8_t  REVISION:4;                /*!< bit:   4..7  Revision                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMERPERIPHID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMERPERIPHID2_OFFSET       0xFE8          /**<  \brief (DUALTIMER_TIMERPERIPHID2 offset) Peripheral ID Register 2 */
#define DUALTIMER_TIMERPERIPHID2_RESETVALUE   0x1Bul         /**<  \brief (DUALTIMER_TIMERPERIPHID2 reset_value) Peripheral ID Register 2 */

#define DUALTIMER_TIMERPERIPHID2_JEP106_ID_6_4_Pos 0  /**< \brief (DUALTIMER_TIMERPERIPHID2) JEP106 ID Bits 6:4                */
#define DUALTIMER_TIMERPERIPHID2_JEP106_ID_6_4_Msk (0x7ul << DUALTIMER_TIMERPERIPHID2_JEP106_ID_6_4_Pos)
#define DUALTIMER_TIMERPERIPHID2_JEP106_ID_6_4(value) (DUALTIMER_TIMERPERIPHID2_JEP106_ID_6_4_Msk & ((value) << DUALTIMER_TIMERPERIPHID2_JEP106_ID_6_4_Pos))  
#define DUALTIMER_TIMERPERIPHID2_JEDEC_USED_Pos 3  /**< \brief (DUALTIMER_TIMERPERIPHID2) JEDEC Used                        */
#define DUALTIMER_TIMERPERIPHID2_JEDEC_USED   (0x1ul << DUALTIMER_TIMERPERIPHID2_JEDEC_USED_Pos)  
#define DUALTIMER_TIMERPERIPHID2_REVISION_Pos 4  /**< \brief (DUALTIMER_TIMERPERIPHID2) Revision                          */
#define DUALTIMER_TIMERPERIPHID2_REVISION_Msk (0xFul << DUALTIMER_TIMERPERIPHID2_REVISION_Pos)
#define DUALTIMER_TIMERPERIPHID2_REVISION(value) (DUALTIMER_TIMERPERIPHID2_REVISION_Msk & ((value) << DUALTIMER_TIMERPERIPHID2_REVISION_Pos))  
#define DUALTIMER_TIMERPERIPHID2_MASK         0xFFul    /**< \brief (DUALTIMER_TIMERPERIPHID2) Register MASK */

/* -------- DUALTIMER_TIMERPERIPHID3 : (DUALTIMER Offset: 0xfec) (R/  8) Peripheral ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CUSTOMER_MOD_NUMBER:4;     /*!< bit:   0..3  Customer Modification Number             */
    uint8_t  ECO_REV_NUMBER:4;          /*!< bit:   4..7  ECO Revision Number                      */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMERPERIPHID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMERPERIPHID3_OFFSET       0xFEC          /**<  \brief (DUALTIMER_TIMERPERIPHID3 offset) Peripheral ID Register 3 */
#define DUALTIMER_TIMERPERIPHID3_RESETVALUE   0x00ul         /**<  \brief (DUALTIMER_TIMERPERIPHID3 reset_value) Peripheral ID Register 3 */

#define DUALTIMER_TIMERPERIPHID3_CUSTOMER_MOD_NUMBER_Pos 0  /**< \brief (DUALTIMER_TIMERPERIPHID3) Customer Modification Number      */
#define DUALTIMER_TIMERPERIPHID3_CUSTOMER_MOD_NUMBER_Msk (0xFul << DUALTIMER_TIMERPERIPHID3_CUSTOMER_MOD_NUMBER_Pos)
#define DUALTIMER_TIMERPERIPHID3_CUSTOMER_MOD_NUMBER(value) (DUALTIMER_TIMERPERIPHID3_CUSTOMER_MOD_NUMBER_Msk & ((value) << DUALTIMER_TIMERPERIPHID3_CUSTOMER_MOD_NUMBER_Pos))  
#define DUALTIMER_TIMERPERIPHID3_ECO_REV_NUMBER_Pos 4  /**< \brief (DUALTIMER_TIMERPERIPHID3) ECO Revision Number               */
#define DUALTIMER_TIMERPERIPHID3_ECO_REV_NUMBER_Msk (0xFul << DUALTIMER_TIMERPERIPHID3_ECO_REV_NUMBER_Pos)
#define DUALTIMER_TIMERPERIPHID3_ECO_REV_NUMBER(value) (DUALTIMER_TIMERPERIPHID3_ECO_REV_NUMBER_Msk & ((value) << DUALTIMER_TIMERPERIPHID3_ECO_REV_NUMBER_Pos))  
#define DUALTIMER_TIMERPERIPHID3_MASK         0xFFul    /**< \brief (DUALTIMER_TIMERPERIPHID3) Register MASK */

/* -------- DUALTIMER_TIMERPCELLID0 : (DUALTIMER Offset: 0xff0) (R/  8) Component ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TIMERPCELLID0:8;           /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMERPCELLID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMERPCELLID0_OFFSET        0xFF0          /**<  \brief (DUALTIMER_TIMERPCELLID0 offset) Component ID Register 0 */
#define DUALTIMER_TIMERPCELLID0_RESETVALUE    0x0Dul         /**<  \brief (DUALTIMER_TIMERPCELLID0 reset_value) Component ID Register 0 */

#define DUALTIMER_TIMERPCELLID0_TIMERPCELLID0_Pos 0  /**< \brief (DUALTIMER_TIMERPCELLID0)                                    */
#define DUALTIMER_TIMERPCELLID0_TIMERPCELLID0_Msk (0xFFul << DUALTIMER_TIMERPCELLID0_TIMERPCELLID0_Pos)
#define DUALTIMER_TIMERPCELLID0_TIMERPCELLID0(value) (DUALTIMER_TIMERPCELLID0_TIMERPCELLID0_Msk & ((value) << DUALTIMER_TIMERPCELLID0_TIMERPCELLID0_Pos))  
#define DUALTIMER_TIMERPCELLID0_MASK          0xFFul    /**< \brief (DUALTIMER_TIMERPCELLID0) Register MASK */

/* -------- DUALTIMER_TIMERPCELLID1 : (DUALTIMER Offset: 0xff4) (R/  8) Component ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TIMERPCELLID1:8;           /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMERPCELLID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMERPCELLID1_OFFSET        0xFF4          /**<  \brief (DUALTIMER_TIMERPCELLID1 offset) Component ID Register 1 */
#define DUALTIMER_TIMERPCELLID1_RESETVALUE    0xF0ul         /**<  \brief (DUALTIMER_TIMERPCELLID1 reset_value) Component ID Register 1 */

#define DUALTIMER_TIMERPCELLID1_TIMERPCELLID1_Pos 0  /**< \brief (DUALTIMER_TIMERPCELLID1)                                    */
#define DUALTIMER_TIMERPCELLID1_TIMERPCELLID1_Msk (0xFFul << DUALTIMER_TIMERPCELLID1_TIMERPCELLID1_Pos)
#define DUALTIMER_TIMERPCELLID1_TIMERPCELLID1(value) (DUALTIMER_TIMERPCELLID1_TIMERPCELLID1_Msk & ((value) << DUALTIMER_TIMERPCELLID1_TIMERPCELLID1_Pos))  
#define DUALTIMER_TIMERPCELLID1_MASK          0xFFul    /**< \brief (DUALTIMER_TIMERPCELLID1) Register MASK */

/* -------- DUALTIMER_TIMERPCELLID2 : (DUALTIMER Offset: 0xff8) (R/  8) Component ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TIMERPCELLID2:8;           /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMERPCELLID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMERPCELLID2_OFFSET        0xFF8          /**<  \brief (DUALTIMER_TIMERPCELLID2 offset) Component ID Register 2 */
#define DUALTIMER_TIMERPCELLID2_RESETVALUE    0x05ul         /**<  \brief (DUALTIMER_TIMERPCELLID2 reset_value) Component ID Register 2 */

#define DUALTIMER_TIMERPCELLID2_TIMERPCELLID2_Pos 0  /**< \brief (DUALTIMER_TIMERPCELLID2)                                    */
#define DUALTIMER_TIMERPCELLID2_TIMERPCELLID2_Msk (0xFFul << DUALTIMER_TIMERPCELLID2_TIMERPCELLID2_Pos)
#define DUALTIMER_TIMERPCELLID2_TIMERPCELLID2(value) (DUALTIMER_TIMERPCELLID2_TIMERPCELLID2_Msk & ((value) << DUALTIMER_TIMERPCELLID2_TIMERPCELLID2_Pos))  
#define DUALTIMER_TIMERPCELLID2_MASK          0xFFul    /**< \brief (DUALTIMER_TIMERPCELLID2) Register MASK */

/* -------- DUALTIMER_TIMERPCELLID3 : (DUALTIMER Offset: 0xffc) (R/  8) Component ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TIMERPCELLID3:8;           /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} DUALTIMER_TIMERPCELLID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DUALTIMER_TIMERPCELLID3_OFFSET        0xFFC          /**<  \brief (DUALTIMER_TIMERPCELLID3 offset) Component ID Register 3 */
#define DUALTIMER_TIMERPCELLID3_RESETVALUE    0xB1ul         /**<  \brief (DUALTIMER_TIMERPCELLID3 reset_value) Component ID Register 3 */

#define DUALTIMER_TIMERPCELLID3_TIMERPCELLID3_Pos 0  /**< \brief (DUALTIMER_TIMERPCELLID3)                                    */
#define DUALTIMER_TIMERPCELLID3_TIMERPCELLID3_Msk (0xFFul << DUALTIMER_TIMERPCELLID3_TIMERPCELLID3_Pos)
#define DUALTIMER_TIMERPCELLID3_TIMERPCELLID3(value) (DUALTIMER_TIMERPCELLID3_TIMERPCELLID3_Msk & ((value) << DUALTIMER_TIMERPCELLID3_TIMERPCELLID3_Pos))  
#define DUALTIMER_TIMERPCELLID3_MASK          0xFFul    /**< \brief (DUALTIMER_TIMERPCELLID3) Register MASK */

/** \brief DUALTIMER hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* ARM General Purpose Dual Timer */
  __IO DUALTIMER_TIMER1LOAD_Type      TIMER1LOAD;     /**< \brief Offset: 0x00 (R/W  32) Timer 1 Load Register */
  __I  DUALTIMER_TIMER1VALUE_Type     TIMER1VALUE;    /**< \brief Offset: 0x04 (R/   32) Timer 1 Current Value Register */
  __IO DUALTIMER_TIMER1CONTROL_Type   TIMER1CONTROL;  /**< \brief Offset: 0x08 (R/W   8) Timer 1 Control Register */
       RoReg8                         Reserved1[0x3];
  __O  DUALTIMER_TIMER1INTCLR_Type    TIMER1INTCLR;   /**< \brief Offset: 0x0C ( /W   8) Timer 1 Interrupt Clear Register */
       RoReg8                         Reserved2[0x3];
  __I  DUALTIMER_TIMER1RIS_Type       TIMER1RIS;      /**< \brief Offset: 0x10 (R/    8) Timer 1 Raw Interrupt Status Register */
       RoReg8                         Reserved3[0x3];
  __I  DUALTIMER_TIMER1MIS_Type       TIMER1MIS;      /**< \brief Offset: 0x14 (R/    8) Timer 1 Masked Interrupt Status Register */
       RoReg8                         Reserved4[0x3];
  __IO DUALTIMER_TIMER1BGLOAD_Type    TIMER1BGLOAD;   /**< \brief Offset: 0x18 (R/W  32) Timer 1 Background Load Register (Reload Value for Period Mode) */
       RoReg8                         Reserved5[0x4];
  __IO DUALTIMER_TIMER2LOAD_Type      TIMER2LOAD;     /**< \brief Offset: 0x20 (R/W  32) Timer 2 Load Register */
  __I  DUALTIMER_TIMER2VALUE_Type     TIMER2VALUE;    /**< \brief Offset: 0x24 (R/   32) Timer 2 Current Value Register */
  __IO DUALTIMER_TIMER2CONTROL_Type   TIMER2CONTROL;  /**< \brief Offset: 0x28 (R/W   8) Timer 2 Control Register */
       RoReg8                         Reserved6[0x3];
  __O  DUALTIMER_TIMER2INTCLR_Type    TIMER2INTCLR;   /**< \brief Offset: 0x2C ( /W   8) Timer 2 Interrupt Clear Register */
       RoReg8                         Reserved7[0x3];
  __I  DUALTIMER_TIMER2RIS_Type       TIMER2RIS;      /**< \brief Offset: 0x30 (R/    8) Timer 2 Raw Interrupt Status Register */
       RoReg8                         Reserved8[0x3];
  __I  DUALTIMER_TIMER2MIS_Type       TIMER2MIS;      /**< \brief Offset: 0x34 (R/    8) Timer 2 Masked Interrupt Status Register */
       RoReg8                         Reserved9[0x3];
  __IO DUALTIMER_TIMER2BGLOAD_Type    TIMER2BGLOAD;   /**< \brief Offset: 0x38 (R/W  32) Timer 2 Background Load Register (Reload Value for Period Mode) */
       RoReg8                         Reserved10[0xEC4];
  __IO DUALTIMER_TIMERITCR_Type       TIMERITCR;      /**< \brief Offset: 0xF00 (R/W   8) Integration Test Control Register */
       RoReg8                         Reserved11[0x3];
  __O  DUALTIMER_TIMERITOP_Type       TIMERITOP;      /**< \brief Offset: 0xF04 ( /W   8) Integration Test Output Set Register */
       RoReg8                         Reserved12[0xCB];
  __I  DUALTIMER_TIMERPERIPHID4_Type  TIMERPERIPHID4; /**< \brief Offset: 0xFD0 (R/    8) Peripheral ID Register 4 */
       RoReg8                         Reserved13[0x3];
  __I  DUALTIMER_TIMERPERIPHID5_Type  TIMERPERIPHID5; /**< \brief Offset: 0xFD4 (R/    8) Peripheral ID Register 5 */
       RoReg8                         Reserved14[0x3];
  __I  DUALTIMER_TIMERPERIPHID6_Type  TIMERPERIPHID6; /**< \brief Offset: 0xFD8 (R/    8) Peripheral ID Register 6 */
       RoReg8                         Reserved15[0x3];
  __I  DUALTIMER_TIMERPERIPHID7_Type  TIMERPERIPHID7; /**< \brief Offset: 0xFDC (R/    8) Peripheral ID Register 7 */
       RoReg8                         Reserved16[0x3];
  __I  DUALTIMER_TIMERPERIPHID0_Type  TIMERPERIPHID0; /**< \brief Offset: 0xFE0 (R/    8) Peripheral ID Register 0 */
       RoReg8                         Reserved17[0x3];
  __I  DUALTIMER_TIMERPERIPHID1_Type  TIMERPERIPHID1; /**< \brief Offset: 0xFE4 (R/    8) Peripheral ID Register 1 */
       RoReg8                         Reserved18[0x3];
  __I  DUALTIMER_TIMERPERIPHID2_Type  TIMERPERIPHID2; /**< \brief Offset: 0xFE8 (R/    8) Peripheral ID Register 2 */
       RoReg8                         Reserved19[0x3];
  __I  DUALTIMER_TIMERPERIPHID3_Type  TIMERPERIPHID3; /**< \brief Offset: 0xFEC (R/    8) Peripheral ID Register 3 */
       RoReg8                         Reserved20[0x3];
  __I  DUALTIMER_TIMERPCELLID0_Type   TIMERPCELLID0;  /**< \brief Offset: 0xFF0 (R/    8) Component ID Register 0 */
       RoReg8                         Reserved21[0x3];
  __I  DUALTIMER_TIMERPCELLID1_Type   TIMERPCELLID1;  /**< \brief Offset: 0xFF4 (R/    8) Component ID Register 1 */
       RoReg8                         Reserved22[0x3];
  __I  DUALTIMER_TIMERPCELLID2_Type   TIMERPCELLID2;  /**< \brief Offset: 0xFF8 (R/    8) Component ID Register 2 */
       RoReg8                         Reserved23[0x3];
  __I  DUALTIMER_TIMERPCELLID3_Type   TIMERPCELLID3;  /**< \brief Offset: 0xFFC (R/    8) Component ID Register 3 */
} Dualtimer;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_DUALTIMER_COMPONENT_ */
