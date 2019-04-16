/**
 * \file
 *
 * \brief Component description for AON_SLEEP_TIMER
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

#ifndef _SAMB11_AON_SLEEP_TIMER_COMPONENT_
#define _SAMB11_AON_SLEEP_TIMER_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR AON_SLEEP_TIMER */
/* ========================================================================== */
/** \addtogroup SAMB11_AON_SLEEP_TIMER Always On Sleep Timer */
/*@{*/

#define AON_SLEEP_TIMER_AONST1234
#define REV_AON_SLEEP_TIMER              0x100

/* -------- AON_SLEEP_TIMER_CONTROL : (AON_SLEEP_TIMER Offset: 0x00) (R/W  32) Control for the Always On Sleep Timer -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RELOAD_ENABLE:1;           /*!< bit:      0  Active High Reload Enable                */
    uint32_t SINGLE_COUNT_ENABLE:1;     /*!< bit:      1  Rising Edge Single Count Enable          */
    uint32_t :2;                        /*!< bit:   2..3  Reserved                                 */
    uint32_t IRQ_CLEAR:1;               /*!< bit:      4  Clears the interrupt. Auto clear. Must only be set after receiving the IRQ. */
    uint32_t :3;                        /*!< bit:   5..7  Reserved                                 */
    uint32_t SLP_TIMER_CLK_RELOAD_DLY:2;  /*!< bit:   8..9  Current Status of slp_timer_clk_reload on the sleep clock */
    uint32_t :2;                        /*!< bit: 10..11  Reserved                                 */
    uint32_t SLP_TIMER_SINGLE_COUNT_ENABLE_DLY:3;  /*!< bit: 12..14  Current status of slp_timer_clk_single_count_enable on the sleep clock */
    uint32_t :15;                       /*!< bit: 15..29  Reserved                                 */
    uint32_t SLEEP_TIMER_ACTIVE:1;      /*!< bit:     30  If 1, indicates that the current sleep tiemr value is not 0 */
    uint32_t SLEEP_TIMER_NOT_ACTIVE:1;  /*!< bit:     31  If 1, indicates that the current sleep timer value is 0 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} AON_SLEEP_TIMER_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_SLEEP_TIMER_CONTROL_OFFSET        0x00           /**<  \brief (AON_SLEEP_TIMER_CONTROL offset) Control for the Always On Sleep Timer */
#define AON_SLEEP_TIMER_CONTROL_RESETVALUE    0x00ul         /**<  \brief (AON_SLEEP_TIMER_CONTROL reset_value) Control for the Always On Sleep Timer */

#define AON_SLEEP_TIMER_CONTROL_RELOAD_ENABLE_Pos 0  /**< \brief (AON_SLEEP_TIMER_CONTROL) Active High Reload Enable          */
#define AON_SLEEP_TIMER_CONTROL_RELOAD_ENABLE (0x1ul << AON_SLEEP_TIMER_CONTROL_RELOAD_ENABLE_Pos)  
#define AON_SLEEP_TIMER_CONTROL_SINGLE_COUNT_ENABLE_Pos 1  /**< \brief (AON_SLEEP_TIMER_CONTROL) Rising Edge Single Count Enable    */
#define AON_SLEEP_TIMER_CONTROL_SINGLE_COUNT_ENABLE (0x1ul << AON_SLEEP_TIMER_CONTROL_SINGLE_COUNT_ENABLE_Pos)  
#define AON_SLEEP_TIMER_CONTROL_IRQ_CLEAR_Pos 4  /**< \brief (AON_SLEEP_TIMER_CONTROL) Clears the interrupt. Auto clear. Must only be set after receiving the IRQ. */
#define AON_SLEEP_TIMER_CONTROL_IRQ_CLEAR     (0x1ul << AON_SLEEP_TIMER_CONTROL_IRQ_CLEAR_Pos)  
#define AON_SLEEP_TIMER_CONTROL_SLP_TIMER_CLK_RELOAD_DLY_Pos 8  /**< \brief (AON_SLEEP_TIMER_CONTROL) Current Status of slp_timer_clk_reload on the sleep clock */
#define AON_SLEEP_TIMER_CONTROL_SLP_TIMER_CLK_RELOAD_DLY_Msk (0x3ul << AON_SLEEP_TIMER_CONTROL_SLP_TIMER_CLK_RELOAD_DLY_Pos)
#define AON_SLEEP_TIMER_CONTROL_SLP_TIMER_CLK_RELOAD_DLY(value) (AON_SLEEP_TIMER_CONTROL_SLP_TIMER_CLK_RELOAD_DLY_Msk & ((value) << AON_SLEEP_TIMER_CONTROL_SLP_TIMER_CLK_RELOAD_DLY_Pos))  
#define AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_Pos 12  /**< \brief (AON_SLEEP_TIMER_CONTROL) Current status of slp_timer_clk_single_count_enable on the sleep clock */
#define AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_Msk (0x7ul << AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_Pos)
#define AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY(value) (AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_Msk & ((value) << AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_Pos))  
#define AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_ACTIVE_Pos 30  /**< \brief (AON_SLEEP_TIMER_CONTROL) If 1, indicates that the current sleep tiemr value is not 0 */
#define AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_ACTIVE (0x1ul << AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_ACTIVE_Pos)  
#define AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_NOT_ACTIVE_Pos 31  /**< \brief (AON_SLEEP_TIMER_CONTROL) If 1, indicates that the current sleep timer value is 0 */
#define AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_NOT_ACTIVE (0x1ul << AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_NOT_ACTIVE_Pos)  
#define AON_SLEEP_TIMER_CONTROL_MASK          0xC0007313ul    /**< \brief (AON_SLEEP_TIMER_CONTROL) Register MASK */

/* -------- AON_SLEEP_TIMER_SINGLE_COUNT_DURATION : (AON_SLEEP_TIMER Offset: 0x04) (R/W  32) Count for the single count AND reload -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t SINGLE_COUNT_DURATION:32;  /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_OFFSET 0x04           /**<  \brief (AON_SLEEP_TIMER_SINGLE_COUNT_DURATION offset) Count for the single count AND reload */
#define AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_RESETVALUE 0x00ul         /**<  \brief (AON_SLEEP_TIMER_SINGLE_COUNT_DURATION reset_value) Count for the single count AND reload */

#define AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION_Pos 0  /**< \brief (AON_SLEEP_TIMER_SINGLE_COUNT_DURATION)                      */
#define AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION_Msk (0xFFFFFFFFul << AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION_Pos)
#define AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION(value) (AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION_Msk & ((value) << AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION_Pos))  
#define AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_MASK 0xFFFFFFFFul    /**< \brief (AON_SLEEP_TIMER_SINGLE_COUNT_DURATION) Register MASK */

/* -------- AON_SLEEP_TIMER_CURRENT_COUNT_VALUE : (AON_SLEEP_TIMER Offset: 0x0c) (R/  32) Current count of the sleep timer -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CURRENT_COUNT_VALUE:32;    /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} AON_SLEEP_TIMER_CURRENT_COUNT_VALUE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_SLEEP_TIMER_CURRENT_COUNT_VALUE_OFFSET 0x0C           /**<  \brief (AON_SLEEP_TIMER_CURRENT_COUNT_VALUE offset) Current count of the sleep timer */
#define AON_SLEEP_TIMER_CURRENT_COUNT_VALUE_RESETVALUE 0x00ul         /**<  \brief (AON_SLEEP_TIMER_CURRENT_COUNT_VALUE reset_value) Current count of the sleep timer */

#define AON_SLEEP_TIMER_CURRENT_COUNT_VALUE_CURRENT_COUNT_VALUE_Pos 0  /**< \brief (AON_SLEEP_TIMER_CURRENT_COUNT_VALUE)                        */
#define AON_SLEEP_TIMER_CURRENT_COUNT_VALUE_CURRENT_COUNT_VALUE_Msk (0xFFFFFFFFul << AON_SLEEP_TIMER_CURRENT_COUNT_VALUE_CURRENT_COUNT_VALUE_Pos)
#define AON_SLEEP_TIMER_CURRENT_COUNT_VALUE_CURRENT_COUNT_VALUE(value) (AON_SLEEP_TIMER_CURRENT_COUNT_VALUE_CURRENT_COUNT_VALUE_Msk & ((value) << AON_SLEEP_TIMER_CURRENT_COUNT_VALUE_CURRENT_COUNT_VALUE_Pos))  
#define AON_SLEEP_TIMER_CURRENT_COUNT_VALUE_MASK 0xFFFFFFFFul    /**< \brief (AON_SLEEP_TIMER_CURRENT_COUNT_VALUE) Register MASK */

/** \brief AON_SLEEP_TIMER hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* Always On Sleep Timer */
  __IO AON_SLEEP_TIMER_CONTROL_Type   CONTROL;        /**< \brief Offset: 0x00 (R/W  32) Control for the Always On Sleep Timer */
  __IO AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_Type SINGLE_COUNT_DURATION; /**< \brief Offset: 0x04 (R/W  32) Count for the single count AND reload */
       RoReg8                         Reserved1[0x4];
  __I  AON_SLEEP_TIMER_CURRENT_COUNT_VALUE_Type CURRENT_COUNT_VALUE; /**< \brief Offset: 0x0C (R/   32) Current count of the sleep timer */
} AonSleepTimer;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_AON_SLEEP_TIMER_COMPONENT_ */
