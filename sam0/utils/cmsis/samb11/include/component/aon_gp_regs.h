/**
 * \file
 *
 * \brief Component description for AON_GP_REGS
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

#ifndef _SAMB11_AON_GP_REGS_COMPONENT_
#define _SAMB11_AON_GP_REGS_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR AON_GP_REGS */
/* ========================================================================== */
/** \addtogroup SAMB11_AON_GP_REGS Always On General Purpose Registers */
/*@{*/

#define AON_GP_REGS_AGR1234
#define REV_AON_GP_REGS                  0x100

/* -------- AON_GP_REGS_AON_PINMUX_SEL : (AON_GP_REGS Offset: 0x00) (R/W  16) Controls the pinmux selection for the AO GPIOs -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t AO_GPIO_0_SEL:2;           /*!< bit:   0..1  Pinmux select for AO_GPIO_0              */
    uint16_t :2;                        /*!< bit:   2..3  Reserved                                 */
    uint16_t AO_GPIO_1_SEL:2;           /*!< bit:   4..5  Pinmux select for AO_GPIO_1              */
    uint16_t :2;                        /*!< bit:   6..7  Reserved                                 */
    uint16_t AO_GPIO_2_SEL:2;           /*!< bit:   8..9  Pinmux select for AO_GPIO_2              */
    uint16_t :6;                        /*!< bit: 10..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_AON_PINMUX_SEL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_AON_PINMUX_SEL_OFFSET     0x00           /**<  \brief (AON_GP_REGS_AON_PINMUX_SEL offset) Controls the pinmux selection for the AO GPIOs */
#define AON_GP_REGS_AON_PINMUX_SEL_RESETVALUE 0x01ul         /**<  \brief (AON_GP_REGS_AON_PINMUX_SEL reset_value) Controls the pinmux selection for the AO GPIOs */

#define AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_0_SEL_Pos 0  /**< \brief (AON_GP_REGS_AON_PINMUX_SEL) Pinmux select for AO_GPIO_0     */
#define AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_0_SEL_Msk (0x3ul << AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_0_SEL_Pos)
#define AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_0_SEL(value) (AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_0_SEL_Msk & ((value) << AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_0_SEL_Pos))  
#define AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_1_SEL_Pos 4  /**< \brief (AON_GP_REGS_AON_PINMUX_SEL) Pinmux select for AO_GPIO_1     */
#define AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_1_SEL_Msk (0x3ul << AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_1_SEL_Pos)
#define AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_1_SEL(value) (AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_1_SEL_Msk & ((value) << AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_1_SEL_Pos))  
#define AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_2_SEL_Pos 8  /**< \brief (AON_GP_REGS_AON_PINMUX_SEL) Pinmux select for AO_GPIO_2     */
#define AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_2_SEL_Msk (0x3ul << AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_2_SEL_Pos)
#define AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_2_SEL(value) (AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_2_SEL_Msk & ((value) << AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_2_SEL_Pos))  
#define AON_GP_REGS_AON_PINMUX_SEL_MASK       0x333ul    /**< \brief (AON_GP_REGS_AON_PINMUX_SEL) Register MASK */

/* -------- AON_GP_REGS_AON_PMU_CTRL : (AON_GP_REGS Offset: 0x04) (R/W  32) Always On Misc Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t PMU_REGS_4TO1_SEL:1;       /*!< bit:      0  If 1 then uses the frequency hopping table otherwise registers in PD0 */
    uint32_t PMU_RTC_CLK_EN:1;          /*!< bit:      1  Enables the PMU RTC clock                */
    uint32_t :2;                        /*!< bit:   2..3  Reserved                                 */
    uint32_t PMU_RETN_VAL_SEL:2;        /*!< bit:   4..5  Retention Voltage Selection              */
    uint32_t :1;                        /*!< bit:      6  Reserved                                 */
    uint32_t EFUSE_LDO_EN:1;            /*!< bit:      7  Enables the EFUSE LDO                    */
    uint32_t PMU_MUX_EN:1;              /*!< bit:      8  PMU MUX EN                               */
    uint32_t PMU_MUX_A:3;               /*!< bit:  9..11  PMU MUX A                                */
    uint32_t PMU_MUX_SEL:4;             /*!< bit: 12..15  PMU MUX SEL                              */
    uint32_t PMU_SENS_ADC_EN:1;         /*!< bit:     16  PMU Sensor ADC Enable                    */
    uint32_t PMU_SENS_ADC_RST:1;        /*!< bit:     17  PMU Sensor ADC Reset                     */
    uint32_t PMU_BGR_EN:1;              /*!< bit:     18  PMU BGR EN                               */
    uint32_t PMU_2MHZ_CLK_EN:1;         /*!< bit:     19  Enables the 2MHz OSC clock coming to the digital from the PMU */
    uint32_t PMU_26MHZ_CLK_FORCE_OFF:1;  /*!< bit:     20  If set, this will force off the OSC 26 MHz clock, otherwise this will follow the power for PD1 */
    uint32_t :11;                       /*!< bit: 21..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_AON_PMU_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_AON_PMU_CTRL_OFFSET       0x04           /**<  \brief (AON_GP_REGS_AON_PMU_CTRL offset) Always On Misc Control */
#define AON_GP_REGS_AON_PMU_CTRL_RESETVALUE   0xA0022ul      /**<  \brief (AON_GP_REGS_AON_PMU_CTRL reset_value) Always On Misc Control */

#define AON_GP_REGS_AON_PMU_CTRL_PMU_REGS_4TO1_SEL_Pos 0  /**< \brief (AON_GP_REGS_AON_PMU_CTRL) If 1 then uses the frequency hopping table otherwise registers in PD0 */
#define AON_GP_REGS_AON_PMU_CTRL_PMU_REGS_4TO1_SEL (0x1ul << AON_GP_REGS_AON_PMU_CTRL_PMU_REGS_4TO1_SEL_Pos)  
#define AON_GP_REGS_AON_PMU_CTRL_PMU_RTC_CLK_EN_Pos 1  /**< \brief (AON_GP_REGS_AON_PMU_CTRL) Enables the PMU RTC clock         */
#define AON_GP_REGS_AON_PMU_CTRL_PMU_RTC_CLK_EN (0x1ul << AON_GP_REGS_AON_PMU_CTRL_PMU_RTC_CLK_EN_Pos)  
#define AON_GP_REGS_AON_PMU_CTRL_PMU_RETN_VAL_SEL_Pos 4  /**< \brief (AON_GP_REGS_AON_PMU_CTRL) Retention Voltage Selection       */
#define AON_GP_REGS_AON_PMU_CTRL_PMU_RETN_VAL_SEL_Msk (0x3ul << AON_GP_REGS_AON_PMU_CTRL_PMU_RETN_VAL_SEL_Pos)
#define AON_GP_REGS_AON_PMU_CTRL_PMU_RETN_VAL_SEL(value) (AON_GP_REGS_AON_PMU_CTRL_PMU_RETN_VAL_SEL_Msk & ((value) << AON_GP_REGS_AON_PMU_CTRL_PMU_RETN_VAL_SEL_Pos))  
#define AON_GP_REGS_AON_PMU_CTRL_EFUSE_LDO_EN_Pos 7  /**< \brief (AON_GP_REGS_AON_PMU_CTRL) Enables the EFUSE LDO             */
#define AON_GP_REGS_AON_PMU_CTRL_EFUSE_LDO_EN (0x1ul << AON_GP_REGS_AON_PMU_CTRL_EFUSE_LDO_EN_Pos)  
#define AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_EN_Pos 8  /**< \brief (AON_GP_REGS_AON_PMU_CTRL) PMU MUX EN                        */
#define AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_EN   (0x1ul << AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_EN_Pos)  
#define AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_A_Pos 9  /**< \brief (AON_GP_REGS_AON_PMU_CTRL) PMU MUX A                         */
#define AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_A_Msk (0x7ul << AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_A_Pos)
#define AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_A(value) (AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_A_Msk & ((value) << AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_A_Pos))  
#define AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_SEL_Pos 12  /**< \brief (AON_GP_REGS_AON_PMU_CTRL) PMU MUX SEL                       */
#define AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_SEL_Msk (0xFul << AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_SEL_Pos)
#define AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_SEL(value) (AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_SEL_Msk & ((value) << AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_SEL_Pos))  
#define AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_EN_Pos 16  /**< \brief (AON_GP_REGS_AON_PMU_CTRL) PMU Sensor ADC Enable             */
#define AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_EN (0x1ul << AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_EN_Pos)  
#define AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_RST_Pos 17  /**< \brief (AON_GP_REGS_AON_PMU_CTRL) PMU Sensor ADC Reset              */
#define AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_RST (0x1ul << AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_RST_Pos)  
#define AON_GP_REGS_AON_PMU_CTRL_PMU_BGR_EN_Pos 18  /**< \brief (AON_GP_REGS_AON_PMU_CTRL) PMU BGR EN                        */
#define AON_GP_REGS_AON_PMU_CTRL_PMU_BGR_EN   (0x1ul << AON_GP_REGS_AON_PMU_CTRL_PMU_BGR_EN_Pos)  
#define AON_GP_REGS_AON_PMU_CTRL_PMU_2MHZ_CLK_EN_Pos 19  /**< \brief (AON_GP_REGS_AON_PMU_CTRL) Enables the 2MHz OSC clock coming to the digital from the PMU */
#define AON_GP_REGS_AON_PMU_CTRL_PMU_2MHZ_CLK_EN (0x1ul << AON_GP_REGS_AON_PMU_CTRL_PMU_2MHZ_CLK_EN_Pos)  
#define AON_GP_REGS_AON_PMU_CTRL_PMU_26MHZ_CLK_FORCE_OFF_Pos 20  /**< \brief (AON_GP_REGS_AON_PMU_CTRL) If set, this will force off the OSC 26 MHz clock, otherwise this will follow the power for PD1 */
#define AON_GP_REGS_AON_PMU_CTRL_PMU_26MHZ_CLK_FORCE_OFF (0x1ul << AON_GP_REGS_AON_PMU_CTRL_PMU_26MHZ_CLK_FORCE_OFF_Pos)  
#define AON_GP_REGS_AON_PMU_CTRL_MASK         0x1FFFB3ul    /**< \brief (AON_GP_REGS_AON_PMU_CTRL) Register MASK */

/* -------- AON_GP_REGS_AON_BLE_LP_CTRL : (AON_GP_REGS Offset: 0x08) (R/W  8) Always On BLE LP Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  WAKEUP_LP_LATCH:1;         /*!< bit:      0  If set, this will latch the wakeup signal in the BLE LP block */
    uint8_t  DEEP_SLEEP_STAT_SYNC_EN:1;  /*!< bit:      1  If set, this will use the sync flops for deep sleep stat */
    uint8_t  :6;                        /*!< bit:   2..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_AON_BLE_LP_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_AON_BLE_LP_CTRL_OFFSET    0x08           /**<  \brief (AON_GP_REGS_AON_BLE_LP_CTRL offset) Always On BLE LP Control */
#define AON_GP_REGS_AON_BLE_LP_CTRL_RESETVALUE 0x00ul         /**<  \brief (AON_GP_REGS_AON_BLE_LP_CTRL reset_value) Always On BLE LP Control */

#define AON_GP_REGS_AON_BLE_LP_CTRL_WAKEUP_LP_LATCH_Pos 0  /**< \brief (AON_GP_REGS_AON_BLE_LP_CTRL) If set, this will latch the wakeup signal in the BLE LP block */
#define AON_GP_REGS_AON_BLE_LP_CTRL_WAKEUP_LP_LATCH (0x1ul << AON_GP_REGS_AON_BLE_LP_CTRL_WAKEUP_LP_LATCH_Pos)  
#define AON_GP_REGS_AON_BLE_LP_CTRL_DEEP_SLEEP_STAT_SYNC_EN_Pos 1  /**< \brief (AON_GP_REGS_AON_BLE_LP_CTRL) If set, this will use the sync flops for deep sleep stat */
#define AON_GP_REGS_AON_BLE_LP_CTRL_DEEP_SLEEP_STAT_SYNC_EN (0x1ul << AON_GP_REGS_AON_BLE_LP_CTRL_DEEP_SLEEP_STAT_SYNC_EN_Pos)  
#define AON_GP_REGS_AON_BLE_LP_CTRL_MASK      0x03ul    /**< \brief (AON_GP_REGS_AON_BLE_LP_CTRL) Register MASK */

/* -------- AON_GP_REGS_AON_MISC_CTRL : (AON_GP_REGS Offset: 0x0c) (R/W  32) Always On Misc Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :1;                        /*!< bit:      0  Reserved                                 */
    uint32_t USE_RTC_32KHZ_CLK_SLEEP_TIMER:1;  /*!< bit:      1  If set, this will use the RTC version of the 32khz clock for the sleep timer */
    uint32_t USE_EXT_32KHZ_CLK_SLEEP_TIMER:1;  /*!< bit:      2  If set, this will use an external RTC for the 32khz clock for the sleep timer */
    uint32_t LPMCU_BOOT_RESET_MUXSEL:1;  /*!< bit:      3  If 1, then it uses the CPU register bit, otherwise LP_BOOT_PIN is connected */
    uint32_t LPMCU_USE_BOOT_REGS:1;     /*!< bit:      4  If 1, then the ARM will use the boot regs instead of the boot rom for the first 4 boot addresses (0x0 - 0xF) */
    uint32_t LPMCU_CPU_RESET_OVERRIDE_EN:1;  /*!< bit:      5  If 1, then it will use the PD0 register value for LPMCU CPU RESET (higher priority than lpmcu_boot_reset_muxsel) */
    uint32_t LPMCU_CPU_RESET_OVERRIDE_VAL:1;  /*!< bit:      6  If lpmcu_cpu_reset_override_en is set then this value will be used for the LPMCU CPU RESET */
    uint32_t :7;                        /*!< bit:  7..13  Reserved                                 */
    uint32_t USE_2M_AON_PWR_SEQ_CLK:1;  /*!< bit:     14  If set, this will use either the osc 2M or rtc 32kHz clock for the AON power sequencer.  The field use_rtc_aon_pwr_seq_clk determines which. */
    uint32_t USE_OSC2M_AS_TB_CLK:1;     /*!< bit:     15  If set, this will use the osc 2M clock as the PD0 testbus clock */
    uint32_t AON_SLEEP_TIMER_CLK_EN:1;  /*!< bit:     16  If set, this will enable the 32khz clock to the AON Sleep Timer */
    uint32_t AON_EXT_32KHZ_OUT_EN:1;    /*!< bit:     17  If set, this will enable the 32khz clock to the AON pads as an output of the chip */
    uint32_t USE_RTC_AON_PWR_SEQ_CLK:1;  /*!< bit:     18  If set, this will use the RTC clock as the AON power sequencer clock once use_2m_aon_pwr_seq_clk is also set.  This must be set first. */
    uint32_t INVERT_WAKEUP_GPIO_0:1;    /*!< bit:     19  If set, this will invert the wakeup gpio_0 */
    uint32_t FORCE_OFF_XO:1;            /*!< bit:     20  If set, this will force off the XO, otherwise XO is always on if BLE core is powered on. */
    uint32_t FORCE_XO_TO_BYPASS_MODE:1;  /*!< bit:     21  If set, this will force the XO into bypass mode. */
    uint32_t :10;                       /*!< bit: 22..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_AON_MISC_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_AON_MISC_CTRL_OFFSET      0x0C           /**<  \brief (AON_GP_REGS_AON_MISC_CTRL offset) Always On Misc Control */
#define AON_GP_REGS_AON_MISC_CTRL_RESETVALUE  0x10000ul      /**<  \brief (AON_GP_REGS_AON_MISC_CTRL reset_value) Always On Misc Control */

#define AON_GP_REGS_AON_MISC_CTRL_USE_RTC_32KHZ_CLK_SLEEP_TIMER_Pos 1  /**< \brief (AON_GP_REGS_AON_MISC_CTRL) If set, this will use the RTC version of the 32khz clock for the sleep timer */
#define AON_GP_REGS_AON_MISC_CTRL_USE_RTC_32KHZ_CLK_SLEEP_TIMER (0x1ul << AON_GP_REGS_AON_MISC_CTRL_USE_RTC_32KHZ_CLK_SLEEP_TIMER_Pos)  
#define AON_GP_REGS_AON_MISC_CTRL_USE_EXT_32KHZ_CLK_SLEEP_TIMER_Pos 2  /**< \brief (AON_GP_REGS_AON_MISC_CTRL) If set, this will use an external RTC for the 32khz clock for the sleep timer */
#define AON_GP_REGS_AON_MISC_CTRL_USE_EXT_32KHZ_CLK_SLEEP_TIMER (0x1ul << AON_GP_REGS_AON_MISC_CTRL_USE_EXT_32KHZ_CLK_SLEEP_TIMER_Pos)  
#define AON_GP_REGS_AON_MISC_CTRL_LPMCU_BOOT_RESET_MUXSEL_Pos 3  /**< \brief (AON_GP_REGS_AON_MISC_CTRL) If 1, then it uses the CPU register bit, otherwise LP_BOOT_PIN is connected */
#define AON_GP_REGS_AON_MISC_CTRL_LPMCU_BOOT_RESET_MUXSEL (0x1ul << AON_GP_REGS_AON_MISC_CTRL_LPMCU_BOOT_RESET_MUXSEL_Pos)  
#define AON_GP_REGS_AON_MISC_CTRL_LPMCU_USE_BOOT_REGS_Pos 4  /**< \brief (AON_GP_REGS_AON_MISC_CTRL) If 1, then the ARM will use the boot regs instead of the boot rom for the first 4 boot addresses (0x0 - 0xF) */
#define AON_GP_REGS_AON_MISC_CTRL_LPMCU_USE_BOOT_REGS (0x1ul << AON_GP_REGS_AON_MISC_CTRL_LPMCU_USE_BOOT_REGS_Pos)  
#define AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_EN_Pos 5  /**< \brief (AON_GP_REGS_AON_MISC_CTRL) If 1, then it will use the PD0 register value for LPMCU CPU RESET (higher priority than lpmcu_boot_reset_muxsel) */
#define AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_EN (0x1ul << AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_EN_Pos)  
#define AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_VAL_Pos 6  /**< \brief (AON_GP_REGS_AON_MISC_CTRL) If lpmcu_cpu_reset_override_en is set then this value will be used for the LPMCU CPU RESET */
#define AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_VAL (0x1ul << AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_VAL_Pos)  
#define AON_GP_REGS_AON_MISC_CTRL_USE_2M_AON_PWR_SEQ_CLK_Pos 14  /**< \brief (AON_GP_REGS_AON_MISC_CTRL) If set, this will use either the osc 2M or rtc 32kHz clock for the AON power sequencer.  The field use_rtc_aon_pwr_seq_clk determines which. */
#define AON_GP_REGS_AON_MISC_CTRL_USE_2M_AON_PWR_SEQ_CLK (0x1ul << AON_GP_REGS_AON_MISC_CTRL_USE_2M_AON_PWR_SEQ_CLK_Pos)  
#define AON_GP_REGS_AON_MISC_CTRL_USE_OSC2M_AS_TB_CLK_Pos 15  /**< \brief (AON_GP_REGS_AON_MISC_CTRL) If set, this will use the osc 2M clock as the PD0 testbus clock */
#define AON_GP_REGS_AON_MISC_CTRL_USE_OSC2M_AS_TB_CLK (0x1ul << AON_GP_REGS_AON_MISC_CTRL_USE_OSC2M_AS_TB_CLK_Pos)  
#define AON_GP_REGS_AON_MISC_CTRL_AON_SLEEP_TIMER_CLK_EN_Pos 16  /**< \brief (AON_GP_REGS_AON_MISC_CTRL) If set, this will enable the 32khz clock to the AON Sleep Timer */
#define AON_GP_REGS_AON_MISC_CTRL_AON_SLEEP_TIMER_CLK_EN (0x1ul << AON_GP_REGS_AON_MISC_CTRL_AON_SLEEP_TIMER_CLK_EN_Pos)  
#define AON_GP_REGS_AON_MISC_CTRL_AON_EXT_32KHZ_OUT_EN_Pos 17  /**< \brief (AON_GP_REGS_AON_MISC_CTRL) If set, this will enable the 32khz clock to the AON pads as an output of the chip */
#define AON_GP_REGS_AON_MISC_CTRL_AON_EXT_32KHZ_OUT_EN (0x1ul << AON_GP_REGS_AON_MISC_CTRL_AON_EXT_32KHZ_OUT_EN_Pos)  
#define AON_GP_REGS_AON_MISC_CTRL_USE_RTC_AON_PWR_SEQ_CLK_Pos 18  /**< \brief (AON_GP_REGS_AON_MISC_CTRL) If set, this will use the RTC clock as the AON power sequencer clock once use_2m_aon_pwr_seq_clk is also set.  This must be set first. */
#define AON_GP_REGS_AON_MISC_CTRL_USE_RTC_AON_PWR_SEQ_CLK (0x1ul << AON_GP_REGS_AON_MISC_CTRL_USE_RTC_AON_PWR_SEQ_CLK_Pos)  
#define AON_GP_REGS_AON_MISC_CTRL_INVERT_WAKEUP_GPIO_0_Pos 19  /**< \brief (AON_GP_REGS_AON_MISC_CTRL) If set, this will invert the wakeup gpio_0 */
#define AON_GP_REGS_AON_MISC_CTRL_INVERT_WAKEUP_GPIO_0 (0x1ul << AON_GP_REGS_AON_MISC_CTRL_INVERT_WAKEUP_GPIO_0_Pos)  
#define AON_GP_REGS_AON_MISC_CTRL_FORCE_OFF_XO_Pos 20  /**< \brief (AON_GP_REGS_AON_MISC_CTRL) If set, this will force off the XO, otherwise XO is always on if BLE core is powered on. */
#define AON_GP_REGS_AON_MISC_CTRL_FORCE_OFF_XO (0x1ul << AON_GP_REGS_AON_MISC_CTRL_FORCE_OFF_XO_Pos)  
#define AON_GP_REGS_AON_MISC_CTRL_FORCE_XO_TO_BYPASS_MODE_Pos 21  /**< \brief (AON_GP_REGS_AON_MISC_CTRL) If set, this will force the XO into bypass mode. */
#define AON_GP_REGS_AON_MISC_CTRL_FORCE_XO_TO_BYPASS_MODE (0x1ul << AON_GP_REGS_AON_MISC_CTRL_FORCE_XO_TO_BYPASS_MODE_Pos)  
#define AON_GP_REGS_AON_MISC_CTRL_MASK        0x3FC07Eul    /**< \brief (AON_GP_REGS_AON_MISC_CTRL) Register MASK */

/* -------- AON_GP_REGS_AON_GLOBAL_RESET : (AON_GP_REGS Offset: 0x10) (R/W  8) Active Low Always On Reset Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  GLOBAL_RSTN:1;             /*!< bit:      0  Global Reset                             */
    uint8_t  SLEEP_TIMER_RSTN:1;        /*!< bit:      1  Sleep Timer Reset                        */
    uint8_t  :1;                        /*!< bit:      2  Reserved                                 */
    uint8_t  BLE_LP_RSTN:1;             /*!< bit:      3  BLE Low Power Reset                      */
    uint8_t  PD4_RSTN:1;                /*!< bit:      4  Allow the SW to force PD4 into reset     */
    uint8_t  :3;                        /*!< bit:   5..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_AON_GLOBAL_RESET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_AON_GLOBAL_RESET_OFFSET   0x10           /**<  \brief (AON_GP_REGS_AON_GLOBAL_RESET offset) Active Low Always On Reset Control */
#define AON_GP_REGS_AON_GLOBAL_RESET_RESETVALUE 0x1Bul         /**<  \brief (AON_GP_REGS_AON_GLOBAL_RESET reset_value) Active Low Always On Reset Control */

#define AON_GP_REGS_AON_GLOBAL_RESET_GLOBAL_RSTN_Pos 0  /**< \brief (AON_GP_REGS_AON_GLOBAL_RESET) Global Reset                  */
#define AON_GP_REGS_AON_GLOBAL_RESET_GLOBAL_RSTN (0x1ul << AON_GP_REGS_AON_GLOBAL_RESET_GLOBAL_RSTN_Pos)  
#define AON_GP_REGS_AON_GLOBAL_RESET_SLEEP_TIMER_RSTN_Pos 1  /**< \brief (AON_GP_REGS_AON_GLOBAL_RESET) Sleep Timer Reset             */
#define AON_GP_REGS_AON_GLOBAL_RESET_SLEEP_TIMER_RSTN (0x1ul << AON_GP_REGS_AON_GLOBAL_RESET_SLEEP_TIMER_RSTN_Pos)  
#define AON_GP_REGS_AON_GLOBAL_RESET_BLE_LP_RSTN_Pos 3  /**< \brief (AON_GP_REGS_AON_GLOBAL_RESET) BLE Low Power Reset           */
#define AON_GP_REGS_AON_GLOBAL_RESET_BLE_LP_RSTN (0x1ul << AON_GP_REGS_AON_GLOBAL_RESET_BLE_LP_RSTN_Pos)  
#define AON_GP_REGS_AON_GLOBAL_RESET_PD4_RSTN_Pos 4  /**< \brief (AON_GP_REGS_AON_GLOBAL_RESET) Allow the SW to force PD4 into reset */
#define AON_GP_REGS_AON_GLOBAL_RESET_PD4_RSTN (0x1ul << AON_GP_REGS_AON_GLOBAL_RESET_PD4_RSTN_Pos)  
#define AON_GP_REGS_AON_GLOBAL_RESET_MASK     0x1Bul    /**< \brief (AON_GP_REGS_AON_GLOBAL_RESET) Register MASK */

/* -------- AON_GP_REGS_AON_PULL_ENABLE : (AON_GP_REGS Offset: 0x14) (R/W  8) Active Low Always On Pull Enable Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  AO_GPIO_0:1;               /*!< bit:      0  Pull Enable for AO_GPIO_0                */
    uint8_t  AO_GPIO_1:1;               /*!< bit:      1  Pull Enable for AO_GPIO_1                */
    uint8_t  AO_GPIO_2:1;               /*!< bit:      2  Pull Enable for AO_GPIO_2                */
    uint8_t  :5;                        /*!< bit:   3..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  struct {
    uint8_t  AO_GPIO_:3;                /*!< bit:   0..2  Pull Enable for AO_GPIO_2                */
    uint8_t  :5;                        /*!< bit:   3..7 Reserved                                  */
  } vec;                                /*!< Structure used for vec  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_AON_PULL_ENABLE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_AON_PULL_ENABLE_OFFSET    0x14           /**<  \brief (AON_GP_REGS_AON_PULL_ENABLE offset) Active Low Always On Pull Enable Control */
#define AON_GP_REGS_AON_PULL_ENABLE_RESETVALUE 0x00ul         /**<  \brief (AON_GP_REGS_AON_PULL_ENABLE reset_value) Active Low Always On Pull Enable Control */

#define AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_0_Pos 0  /**< \brief (AON_GP_REGS_AON_PULL_ENABLE) Pull Enable for AO_GPIO_0      */
#define AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_0 (0x1ul << AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_0_Pos)  
#define AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_1_Pos 1  /**< \brief (AON_GP_REGS_AON_PULL_ENABLE) Pull Enable for AO_GPIO_1      */
#define AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_1 (0x1ul << AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_1_Pos)  
#define AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_2_Pos 2  /**< \brief (AON_GP_REGS_AON_PULL_ENABLE) Pull Enable for AO_GPIO_2      */
#define AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_2 (0x1ul << AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_2_Pos)  
#define AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO__Pos 0  /**< \brief (AON_GP_REGS_AON_PULL_ENABLE) Pull Enable for AO_GPIO_2 */
#define AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO__Msk (0x7ul << AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO__Pos)  
#define AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_(value) (AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO__Msk & ((value) << AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO__Pos))  
#define AON_GP_REGS_AON_PULL_ENABLE_MASK      0x07ul    /**< \brief (AON_GP_REGS_AON_PULL_ENABLE) Register MASK */

/* -------- AON_GP_REGS_AON_RESET_CTRL : (AON_GP_REGS Offset: 0x1c) (R/W  32) Reset Count Control for PD1, PD4, PD6 and PD7 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :4;                        /*!< bit:   0..3  Reserved                                 */
    uint32_t PD1_COUNT:4;               /*!< bit:   4..7  Number of clock cycles to delay the PD1 reset. (also for PD7) Upper 4 MSBs only (bits 3:0 will be forced to 0) */
    uint32_t :4;                        /*!< bit:  8..11  Reserved                                 */
    uint32_t PD4_COUNT:4;               /*!< bit: 12..15  Number of clock cycles to delay the PD4 reset. Upper 4 MSBs only (bits 3:0 will be forced to 0) */
    uint32_t PD6_COUNT:4;               /*!< bit: 16..19  Number of clock cycles to delay the PD6 reset */
    uint32_t :12;                       /*!< bit: 20..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_AON_RESET_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_AON_RESET_CTRL_OFFSET     0x1C           /**<  \brief (AON_GP_REGS_AON_RESET_CTRL offset) Reset Count Control for PD1, PD4, PD6 and PD7 */
#define AON_GP_REGS_AON_RESET_CTRL_RESETVALUE 0x3A0A0ul      /**<  \brief (AON_GP_REGS_AON_RESET_CTRL reset_value) Reset Count Control for PD1, PD4, PD6 and PD7 */

#define AON_GP_REGS_AON_RESET_CTRL_PD1_COUNT_Pos 4  /**< \brief (AON_GP_REGS_AON_RESET_CTRL) Number of clock cycles to delay the PD1 reset. (also for PD7) Upper 4 MSBs only (bits 3:0 will be forced to 0) */
#define AON_GP_REGS_AON_RESET_CTRL_PD1_COUNT_Msk (0xFul << AON_GP_REGS_AON_RESET_CTRL_PD1_COUNT_Pos)
#define AON_GP_REGS_AON_RESET_CTRL_PD1_COUNT(value) (AON_GP_REGS_AON_RESET_CTRL_PD1_COUNT_Msk & ((value) << AON_GP_REGS_AON_RESET_CTRL_PD1_COUNT_Pos))  
#define AON_GP_REGS_AON_RESET_CTRL_PD4_COUNT_Pos 12  /**< \brief (AON_GP_REGS_AON_RESET_CTRL) Number of clock cycles to delay the PD4 reset. Upper 4 MSBs only (bits 3:0 will be forced to 0) */
#define AON_GP_REGS_AON_RESET_CTRL_PD4_COUNT_Msk (0xFul << AON_GP_REGS_AON_RESET_CTRL_PD4_COUNT_Pos)
#define AON_GP_REGS_AON_RESET_CTRL_PD4_COUNT(value) (AON_GP_REGS_AON_RESET_CTRL_PD4_COUNT_Msk & ((value) << AON_GP_REGS_AON_RESET_CTRL_PD4_COUNT_Pos))  
#define AON_GP_REGS_AON_RESET_CTRL_PD6_COUNT_Pos 16  /**< \brief (AON_GP_REGS_AON_RESET_CTRL) Number of clock cycles to delay the PD6 reset */
#define AON_GP_REGS_AON_RESET_CTRL_PD6_COUNT_Msk (0xFul << AON_GP_REGS_AON_RESET_CTRL_PD6_COUNT_Pos)
#define AON_GP_REGS_AON_RESET_CTRL_PD6_COUNT(value) (AON_GP_REGS_AON_RESET_CTRL_PD6_COUNT_Msk & ((value) << AON_GP_REGS_AON_RESET_CTRL_PD6_COUNT_Pos))  
#define AON_GP_REGS_AON_RESET_CTRL_MASK       0xFF0F0ul    /**< \brief (AON_GP_REGS_AON_RESET_CTRL) Register MASK */

/* -------- AON_GP_REGS_AON_BTRIM_ACTIVE : (AON_GP_REGS Offset: 0x20) (R/W  8) BTRIM settings for active mode (i.e. not in retention) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  AON_BTRIM_ACTIVE:4;        /*!< bit:   0..3                                           */
    uint8_t  :4;                        /*!< bit:   4..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_AON_BTRIM_ACTIVE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_AON_BTRIM_ACTIVE_OFFSET   0x20           /**<  \brief (AON_GP_REGS_AON_BTRIM_ACTIVE offset) BTRIM settings for active mode (i.e. not in retention) */
#define AON_GP_REGS_AON_BTRIM_ACTIVE_RESETVALUE 0x08ul         /**<  \brief (AON_GP_REGS_AON_BTRIM_ACTIVE reset_value) BTRIM settings for active mode (i.e. not in retention) */

#define AON_GP_REGS_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE_Pos 0  /**< \brief (AON_GP_REGS_AON_BTRIM_ACTIVE)                               */
#define AON_GP_REGS_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE_Msk (0xFul << AON_GP_REGS_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE_Pos)
#define AON_GP_REGS_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE(value) (AON_GP_REGS_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE_Msk & ((value) << AON_GP_REGS_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE_Pos))  
#define AON_GP_REGS_AON_BTRIM_ACTIVE_MASK     0x0Ful    /**< \brief (AON_GP_REGS_AON_BTRIM_ACTIVE) Register MASK */

/* -------- AON_GP_REGS_AON_BTRIM_RETENTION : (AON_GP_REGS Offset: 0x24) (R/W  8) BTRIM settings for retention mode -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  AON_BTRIM_RETENTION:4;     /*!< bit:   0..3                                           */
    uint8_t  :4;                        /*!< bit:   4..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_AON_BTRIM_RETENTION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_AON_BTRIM_RETENTION_OFFSET 0x24           /**<  \brief (AON_GP_REGS_AON_BTRIM_RETENTION offset) BTRIM settings for retention mode */
#define AON_GP_REGS_AON_BTRIM_RETENTION_RESETVALUE 0x08ul         /**<  \brief (AON_GP_REGS_AON_BTRIM_RETENTION reset_value) BTRIM settings for retention mode */

#define AON_GP_REGS_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION_Pos 0  /**< \brief (AON_GP_REGS_AON_BTRIM_RETENTION)                            */
#define AON_GP_REGS_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION_Msk (0xFul << AON_GP_REGS_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION_Pos)
#define AON_GP_REGS_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION(value) (AON_GP_REGS_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION_Msk & ((value) << AON_GP_REGS_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION_Pos))  
#define AON_GP_REGS_AON_BTRIM_RETENTION_MASK  0x0Ful    /**< \brief (AON_GP_REGS_AON_BTRIM_RETENTION) Register MASK */

/* -------- AON_GP_REGS_AON_LPMCU_SCRATCH_PAD : (AON_GP_REGS Offset: 0x40) (R/W  8) Usage for the LPMCU for any sort of status it needs to store for itself before it goes to sleep -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  AON_LPMCU_SCRATCH_PAD:8;   /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_OFFSET 0x40           /**<  \brief (AON_GP_REGS_AON_LPMCU_SCRATCH_PAD offset) Usage for the LPMCU for any sort of status it needs to store for itself before it goes to sleep */
#define AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_RESETVALUE 0x00ul         /**<  \brief (AON_GP_REGS_AON_LPMCU_SCRATCH_PAD reset_value) Usage for the LPMCU for any sort of status it needs to store for itself before it goes to sleep */

#define AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD_Pos 0  /**< \brief (AON_GP_REGS_AON_LPMCU_SCRATCH_PAD)                          */
#define AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD_Msk (0xFFul << AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD_Pos)
#define AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD(value) (AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD_Msk & ((value) << AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD_Pos))  
#define AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_MASK 0xFFul    /**< \brief (AON_GP_REGS_AON_LPMCU_SCRATCH_PAD) Register MASK */

/* -------- AON_GP_REGS_AON_LPMCU_COLD_BOOT : (AON_GP_REGS Offset: 0x44) (R/W  8) To be used by ARM to determine if it is a cold boot or not -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  AON_LPMCU_COLD_BOOT:8;     /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_AON_LPMCU_COLD_BOOT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_AON_LPMCU_COLD_BOOT_OFFSET 0x44           /**<  \brief (AON_GP_REGS_AON_LPMCU_COLD_BOOT offset) To be used by ARM to determine if it is a cold boot or not */
#define AON_GP_REGS_AON_LPMCU_COLD_BOOT_RESETVALUE 0x78ul         /**<  \brief (AON_GP_REGS_AON_LPMCU_COLD_BOOT reset_value) To be used by ARM to determine if it is a cold boot or not */

#define AON_GP_REGS_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT_Pos 0  /**< \brief (AON_GP_REGS_AON_LPMCU_COLD_BOOT)                            */
#define AON_GP_REGS_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT_Msk (0xFFul << AON_GP_REGS_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT_Pos)
#define AON_GP_REGS_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT(value) (AON_GP_REGS_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT_Msk & ((value) << AON_GP_REGS_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT_Pos))  
#define AON_GP_REGS_AON_LPMCU_COLD_BOOT_MASK  0xFFul    /**< \brief (AON_GP_REGS_AON_LPMCU_COLD_BOOT) Register MASK */

/* -------- AON_GP_REGS_AON_BO_OUT_STATUS : (AON_GP_REGS Offset: 0x80) (R/  8) Brown Out Detected (must be cleared manually) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  AON_BO_OUT_STATUS:1;       /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_AON_BO_OUT_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_AON_BO_OUT_STATUS_OFFSET  0x80           /**<  \brief (AON_GP_REGS_AON_BO_OUT_STATUS offset) Brown Out Detected (must be cleared manually) */
#define AON_GP_REGS_AON_BO_OUT_STATUS_RESETVALUE 0x00ul         /**<  \brief (AON_GP_REGS_AON_BO_OUT_STATUS reset_value) Brown Out Detected (must be cleared manually) */

#define AON_GP_REGS_AON_BO_OUT_STATUS_AON_BO_OUT_STATUS_Pos 0  /**< \brief (AON_GP_REGS_AON_BO_OUT_STATUS)                              */
#define AON_GP_REGS_AON_BO_OUT_STATUS_AON_BO_OUT_STATUS (0x1ul << AON_GP_REGS_AON_BO_OUT_STATUS_AON_BO_OUT_STATUS_Pos)  
#define AON_GP_REGS_AON_BO_OUT_STATUS_MASK    0x01ul    /**< \brief (AON_GP_REGS_AON_BO_OUT_STATUS) Register MASK */

/* -------- AON_GP_REGS_CLEAR_BROWN_OUT_REG : (AON_GP_REGS Offset: 0x84) (R/W  8) Set to 1 to clear (hold until 0 read at aon_bo_out_status and then this must be cleared to detect another brown out condition) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CLEAR_BROWN_OUT_REG:1;     /*!< bit:      0                                           */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_CLEAR_BROWN_OUT_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_CLEAR_BROWN_OUT_REG_OFFSET 0x84           /**<  \brief (AON_GP_REGS_CLEAR_BROWN_OUT_REG offset) Set to 1 to clear (hold until 0 read at aon_bo_out_status and then this must be cleared to detect another brown out condition) */
#define AON_GP_REGS_CLEAR_BROWN_OUT_REG_RESETVALUE 0x00ul         /**<  \brief (AON_GP_REGS_CLEAR_BROWN_OUT_REG reset_value) Set to 1 to clear (hold until 0 read at aon_bo_out_status and then this must be cleared to detect another brown out condition) */

#define AON_GP_REGS_CLEAR_BROWN_OUT_REG_CLEAR_BROWN_OUT_REG_Pos 0  /**< \brief (AON_GP_REGS_CLEAR_BROWN_OUT_REG)                            */
#define AON_GP_REGS_CLEAR_BROWN_OUT_REG_CLEAR_BROWN_OUT_REG (0x1ul << AON_GP_REGS_CLEAR_BROWN_OUT_REG_CLEAR_BROWN_OUT_REG_Pos)  
#define AON_GP_REGS_CLEAR_BROWN_OUT_REG_MASK  0x01ul    /**< \brief (AON_GP_REGS_CLEAR_BROWN_OUT_REG) Register MASK */

/* -------- AON_GP_REGS_RF_PMU_REGS_0 : (AON_GP_REGS Offset: 0x400) (R/W  32) RF PMU Registers -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CLK_EDGE_SEL:1;            /*!< bit:      0  Select clock edge for Vreg comparator in buck converter */
    uint32_t VOUT_CTRL_BUCK:4;          /*!< bit:   1..4  Select the output voltage of the buck converter */
    uint32_t CLK_2_4:1;                 /*!< bit:      5  Comparator clock divider in buck converter */
    uint32_t VREG_FILT_CTRL:2;          /*!< bit:   6..7  Not Used                                 */
    uint32_t CLK_DIV:3;                 /*!< bit:  8..10  Programmable divider that sets the on duration of positive charging pulse */
    uint32_t RESET_FSM:1;               /*!< bit:     11  Force reset of FSM in buck converter     */
    uint32_t EN_TRISTATE:1;             /*!< bit:     12  Allow tristate_ctrl to control minimum time between pulses of the buck converter */
    uint32_t TRISTATE_CTRL:3;           /*!< bit: 13..15  Controls the minimum time between pulses in the buck converter */
    uint32_t OFFSETP_CTRL:4;            /*!< bit: 16..19  Controls a fixed comparator offset in the buck converter for positive pulses */
    uint32_t OFFSETN_CTRL:4;            /*!< bit: 20..23  Controls a fixed comparator offset in the buck converter for negative pulses */
    uint32_t P_SW_CTRL:7;               /*!< bit: 24..30  Power switch units for the buck converter */
    uint32_t CLK_SEL:1;                 /*!< bit:     31  Source clock for the buck converter      */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_RF_PMU_REGS_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_RF_PMU_REGS_0_OFFSET      0x400          /**<  \brief (AON_GP_REGS_RF_PMU_REGS_0 offset) RF PMU Registers */
#define AON_GP_REGS_RF_PMU_REGS_0_RESETVALUE  0xF600409ul    /**<  \brief (AON_GP_REGS_RF_PMU_REGS_0 reset_value) RF PMU Registers */

#define AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_Pos 0  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Select clock edge for Vreg comparator in buck converter */
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_Msk (0x1ul << AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL(value) (AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Comparator samples on rising edge of clock  */
#define   AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Comparator samples on falling edge of clock  */
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_0    (AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_0_Val << AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_1    (AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_1_Val << AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos 1  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Select the output voltage of the buck converter */
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Msk (0xFul << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK(value) (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.12V  */
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.15V  */
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.17V  */
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.20V  */
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_4_Val        0X4ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.22V  */
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_5_Val        0X5ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.25V  */
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_6_Val        0X6ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.27V  */
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_7_Val        0X7ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.30V  */
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_8_Val        0X8ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.32V  */
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_9_Val        0X9ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.35V  */
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_10_Val        0XAul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.37V  */
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_11_Val        0XBul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.40V  */
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_12_Val        0XCul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.42V  */
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_13_Val        0XDul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.45V  */
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_14_Val        0XEul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.47V  */
#define   AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_15_Val        0XFul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.50V  */
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_0    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_0_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_1    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_1_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_2    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_2_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_3    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_3_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_4    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_4_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_5    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_5_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_6    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_6_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_7    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_7_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_8    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_8_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_9    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_9_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_10    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_10_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_11    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_11_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_12    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_12_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_13    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_13_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_14    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_14_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_15    (AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_15_Val << AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_Pos 5  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Comparator clock divider in buck converter */
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_Msk (0x1ul << AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4(value) (AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 2  */
#define   AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 4  */
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_0    (AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_0_Val << AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_1    (AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_1_Val << AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VREG_FILT_CTRL_Pos 6  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Not Used                         */
#define AON_GP_REGS_RF_PMU_REGS_0_VREG_FILT_CTRL_Msk (0x3ul << AON_GP_REGS_RF_PMU_REGS_0_VREG_FILT_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_VREG_FILT_CTRL(value) (AON_GP_REGS_RF_PMU_REGS_0_VREG_FILT_CTRL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_0_VREG_FILT_CTRL_Pos))  
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Pos 8  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Programmable divider that sets the on duration of positive charging pulse */
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Msk (0x7ul << AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV(value) (AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 4  */
#define   AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 6  */
#define   AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 8  */
#define   AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 10  */
#define   AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_4_Val        0X4ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 12  */
#define   AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_5_Val        0X5ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 14  */
#define   AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_6_Val        0X6ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 16  */
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_0    (AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_0_Val << AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_1    (AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_1_Val << AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_2    (AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_2_Val << AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_3    (AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_3_Val << AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_4    (AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_4_Val << AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_5    (AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_5_Val << AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_6    (AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_6_Val << AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_Pos 11  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Force reset of FSM in buck converter */
#define AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_Msk (0x1ul << AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM(value) (AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) FSM is not reset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) FSM is reset  */
#define AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_0    (AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_0_Val << AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_1    (AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_1_Val << AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_Pos 12  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Allow tristate_ctrl to control minimum time between pulses of the buck converter */
#define AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_Msk (0x1ul << AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE(value) (AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Tristate logic disable  */
#define   AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Tristate logic enabled  */
#define AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_0    (AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_0_Val << AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_1    (AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_1_Val << AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Pos 13  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Controls the minimum time between pulses in the buck converter */
#define AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Msk (0x7ul << AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL(value) (AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 4  */
#define   AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 6  */
#define   AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 8  */
#define   AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 10  */
#define   AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_4_Val        0X4ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 12  */
#define   AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_5_Val        0X5ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 14  */
#define   AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_6_Val        0X6ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Divide by 16  */
#define AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_0    (AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_0_Val << AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_1    (AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_1_Val << AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_2    (AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_2_Val << AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_3    (AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_3_Val << AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_4    (AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_4_Val << AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_5    (AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_5_Val << AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_6    (AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_6_Val << AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos 16  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Controls a fixed comparator offset in the buck converter for positive pulses */
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Msk (0xFul << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL(value) (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 0.0mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 0.4mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 0.8mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.2mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_4_Val        0X4ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.6mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_5_Val        0X5ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 2.0mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_6_Val        0X6ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 2.4mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_7_Val        0X7ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 2.8mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_8_Val        0X8ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 3.2mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_9_Val        0X9ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 3.6mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_10_Val        0XAul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 4.0mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_11_Val        0XBul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 4.4mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_12_Val        0XCul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 4.8mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_13_Val        0XDul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 5.2mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_14_Val        0XEul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 5.6mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_15_Val        0XFul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 6.0mV offset  */
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_0    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_0_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_1    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_1_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_2    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_2_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_3    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_3_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_4    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_4_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_5    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_5_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_6    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_6_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_7    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_7_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_8    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_8_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_9    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_9_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_10    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_10_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_11    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_11_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_12    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_12_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_13    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_13_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_14    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_14_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_15    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_15_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos 20  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Controls a fixed comparator offset in the buck converter for negative pulses */
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Msk (0xFul << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL(value) (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 0.0mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 0.4mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 0.8mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.2mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_4_Val        0X4ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1.6mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_5_Val        0X5ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 2.0mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_6_Val        0X6ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 2.4mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_7_Val        0X7ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 2.8mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_8_Val        0X8ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 3.2mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_9_Val        0X9ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 3.6mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_10_Val        0XAul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 4.0mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_11_Val        0XBul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 4.4mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_12_Val        0XCul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 4.8mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_13_Val        0XDul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 5.2mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_14_Val        0XEul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 5.6mV offset  */
#define   AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_15_Val        0XFul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 6.0mV offset  */
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_0    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_0_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_1    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_1_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_2    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_2_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_3    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_3_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_4    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_4_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_5    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_5_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_6    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_6_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_7    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_7_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_8    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_8_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_9    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_9_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_10    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_10_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_11    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_11_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_12    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_12_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_13    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_13_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_14    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_14_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_15    (AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_15_Val << AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Pos 24  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Power switch units for the buck converter */
#define AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Msk (0x7Ful << AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL(value) (AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 0 power switches enabled  */
#define   AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 1 power switch enabled  */
#define   AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 2 power switches enabled  */
#define   AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_7_Val        0X7ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 3 power switches enabled  */
#define   AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_15_Val        0XFul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 4 power switches enabled  */
#define   AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_31_Val       0X1Ful  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 5 power switches enabled  */
#define   AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_63_Val       0X3Ful  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) 6 power switches enabled  */
#define AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_0    (AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_0_Val << AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_1    (AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_1_Val << AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_3    (AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_3_Val << AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_7    (AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_7_Val << AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_15    (AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_15_Val << AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_31    (AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_31_Val << AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_63    (AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_63_Val << AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_Pos 31  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Source clock for the buck converter */
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_Msk (0x1ul << AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL(value) (AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Internal 26MHz clock  */
#define   AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) External 52MHz clock  */
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_0    (AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_0_Val << AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_1    (AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_1_Val << AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_0_MASK        0xFFFFFFFFul    /**< \brief (AON_GP_REGS_RF_PMU_REGS_0) Register MASK */

/* -------- AON_GP_REGS_RF_PMU_REGS_1 : (AON_GP_REGS Offset: 0x404) (R/W  32) RF PMU Registers -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t SADC_BIAS_RES_CTRL:4;      /*!< bit:   0..3  Internal reference voltage level for sensor ADC */
    uint32_t SADC_REF_SEL:3;            /*!< bit:   4..6  Reference Voltage Source for the Sensor ADC */
    uint32_t BOD_EN:1;                  /*!< bit:      7  Brown Out Detector Enable Control        */
    uint32_t LPD_CLK_INJECT_EN:1;       /*!< bit:      8  Low Power Domain Clock Injection Enable Control */
    uint32_t EFUSE_LDO_BYP:1;           /*!< bit:      9  Bypass controlf for EFUSE LDO            */
    uint32_t EFUSE_LDO_VOUT_CTRL:3;     /*!< bit: 10..12  Output voltage of EFUSE LDO              */
    uint32_t EFUSE_LDO_IBIAS_CTRL:2;    /*!< bit: 13..14  Set the current bias for the EFUSE LDO   */
    uint32_t PIERCE_RES_CTRL:1;         /*!< bit:     15  RTC crystal circuit feedback resistance value */
    uint32_t PIERCE_GM_CTRL:4;          /*!< bit: 16..19  Transconductance of RTC oscillator       */
    uint32_t PIERCE_CAP_CTRL:4;         /*!< bit: 20..23  On chip single ended capacitors for RTC oscillator */
    uint32_t SADC_CHN_CTRL:1;           /*!< bit:     24  enable input channel time multiplexing to the sensor ADC */
    uint32_t SADC_CHN_SEL:3;            /*!< bit: 25..27  Input channel selection for the sensor ADC */
    uint32_t CODE_IN:2;                 /*!< bit: 28..29  Optional mode to improve sub-ranging technique of the sensor ADC */
    uint32_t SADC_LP_CTRL:2;            /*!< bit: 30..31  Comparator biasing current for different sampling rates of the sensor ADC */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_RF_PMU_REGS_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_RF_PMU_REGS_1_OFFSET      0x404          /**<  \brief (AON_GP_REGS_RF_PMU_REGS_1 offset) RF PMU Registers */
#define AON_GP_REGS_RF_PMU_REGS_1_RESETVALUE  0x31888C82ul   /**<  \brief (AON_GP_REGS_RF_PMU_REGS_1 reset_value) RF PMU Registers */

#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos 0  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Internal reference voltage level for sensor ADC */
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Msk (0xFul << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL(value) (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 0.5V  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 0.6V  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 0.7V  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 0.8V  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_4_Val        0X4ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 0.9V  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_5_Val        0X5ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 1.0V  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_6_Val        0X6ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 1.1V (only for VBATT gt 2.0V)  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_7_Val        0X7ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 1.2V (only for VBATT gt 2.0V)  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_8_Val        0X8ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 1.3V (only for VBATT gt 2.0V)  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_9_Val        0X9ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 1.4V (only for VBATT gt 2.0V)  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_10_Val        0XAul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 1.5V (only for VBATT gt 2.0V)  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_11_Val        0XBul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 1.6V (only for VBATT gt 2.0V)  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_12_Val        0XCul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 1.7V (only for VBATT gt 2.0V)  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_13_Val        0XDul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 1.8V (only for VBATT gt 2.0V)  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_14_Val        0XEul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 1.9V (only for VBATT gt 2.0V)  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_15_Val        0XFul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 2.0V (only for VBATT gt 2.0V)  */
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_0    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_0_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_1    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_1_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_2    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_2_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_3    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_3_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_4    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_4_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_5    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_5_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_6    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_6_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_7    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_7_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_8    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_8_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_9    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_9_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_10    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_10_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_11    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_11_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_12    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_12_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_13    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_13_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_14    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_14_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_15    (AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_15_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Pos 4  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Reference Voltage Source for the Sensor ADC */
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Msk (0x7ul << AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL(value) (AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Buffered reference voltage  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) IR voltage  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) VBATT divided by 2  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) GPIO_MS1  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_4_Val        0X4ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) GPIO_MS2  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_5_Val        0X5ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) GPIO_MS3  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_6_Val        0X6ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) GPIO_MS4  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_7_Val        0X7ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) VBATT supply voltage  */
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_0    (AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_0_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_1    (AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_1_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_2    (AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_2_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_3    (AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_3_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_4    (AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_4_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_5    (AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_5_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_6    (AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_6_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_7    (AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_7_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_Pos  7  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Brown Out Detector Enable Control */
#define AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_Msk  (0x1ul << AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_BOD_EN(value) (AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Disable  */
#define   AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Enable  */
#define AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_0    (AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_0_Val << AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_1    (AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_1_Val << AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_Pos 8  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Low Power Domain Clock Injection Enable Control */
#define AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_Msk (0x1ul << AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN(value) (AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Disable (Free running)  */
#define   AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Enable (Lock to XO clock)  */
#define AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_0    (AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_0_Val << AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_1    (AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_1_Val << AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_Pos 9  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Bypass controlf for EFUSE LDO    */
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_Msk (0x1ul << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP(value) (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) EFUSE LDO regulates from VBATT voltage to 2.5V  */
#define   AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1)  EFUSE LDO is bypass to VBATT voltage  */
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_0    (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_0_Val << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_1    (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_1_Val << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Pos 10  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Output voltage of EFUSE LDO      */
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Msk (0x7ul << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL(value) (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 2.3V  */
#define   AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 2.4V  */
#define   AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 2.4V  */
#define   AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 2.5V  */
#define   AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_4_Val        0X4ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 2.6V  */
#define   AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_5_Val        0X5ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 2.7V  */
#define   AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_6_Val        0X6ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 2.7V  */
#define   AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_7_Val        0X7ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 2.8V  */
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_0    (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_0_Val << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_1    (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_1_Val << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_2    (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_2_Val << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_3    (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_3_Val << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_4    (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_4_Val << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_5    (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_5_Val << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_6    (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_6_Val << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_7    (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_7_Val << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_Pos 13  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Set the current bias for the EFUSE LDO */
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_Msk (0x3ul << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL(value) (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 80uA bias current  */
#define   AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 100uA bias current  */
#define   AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 120uA bias current  */
#define   AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 140uA bias current  */
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_0    (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_0_Val << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_1    (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_1_Val << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_2    (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_2_Val << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_3    (AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_3_Val << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_Pos 15  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) RTC crystal circuit feedback resistance value */
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_Msk (0x1ul << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL(value) (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 20Mohm resistor  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 30Mohm resistor  */
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_0    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_0_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_1    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_1_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos 16  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Transconductance of RTC oscillator */
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Msk (0xFul << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL(value) (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 75nS  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 85nS  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 96nS  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 106nS  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_4_Val        0X4ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 116nS  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_5_Val        0X5ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 127nS  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_6_Val        0X6ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 137nS  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_7_Val        0X7ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 147nS  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_8_Val        0X8ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 158nS  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_9_Val        0X9ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 168nS  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_10_Val        0XAul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 178nS  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_11_Val        0XBul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 189nS  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_12_Val        0XCul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 199nS  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_13_Val        0XDul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 209nS  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_14_Val        0XEul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 220nS  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_15_Val        0XFul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 230nS  */
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_0    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_0_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_1    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_1_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_2    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_2_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_3    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_3_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_4    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_4_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_5    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_5_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_6    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_6_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_7    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_7_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_8    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_8_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_9    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_9_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_10    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_10_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_11    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_11_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_12    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_12_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_13    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_13_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_14    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_14_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_15    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_15_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos 20  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) On chip single ended capacitors for RTC oscillator */
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Msk (0xFul << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL(value) (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 0pF  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 1pF  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 2pF  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 3pF  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_4_Val        0X4ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 4pF  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_5_Val        0X5ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 5pF  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_6_Val        0X6ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 6pF  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_7_Val        0X7ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 7pF  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_8_Val        0X8ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 8pF  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_9_Val        0X9ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 9pF  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_10_Val        0XAul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 10pF  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_11_Val        0XBul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 11pF  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_12_Val        0XCul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 12pF  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_13_Val        0XDul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 13pF  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_14_Val        0XEul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 14pF  */
#define   AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_15_Val        0XFul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) 15pF  */
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_0    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_0_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_1    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_1_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_2    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_2_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_3    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_3_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_4    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_4_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_5    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_5_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_6    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_6_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_7    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_7_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_8    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_8_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_9    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_9_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_10    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_10_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_11    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_11_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_12    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_12_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_13    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_13_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_14    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_14_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_15    (AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_15_Val << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_Pos 24  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) enable input channel time multiplexing to the sensor ADC */
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_Msk (0x1ul << AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL(value) (AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Conversion is done on the four input channels in a time multiplexed manner  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Conversion is done for one specific input channel  */
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_0    (AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_0_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_1    (AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_1_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Pos 25  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Input channel selection for the sensor ADC */
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Msk (0x7ul << AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL(value) (AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) GPIO_MS1  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) GPIO_MS2  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) GPIO_MS3  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) GPIO_MS4  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_4_Val        0X4ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) On Chip Temperature  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_5_Val        0X5ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) VBATT divided by 4 voltage level  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_6_Val        0X6ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) LP_LDO_OUT_1P2 low power domain voltage  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_7_Val        0X7ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Sensor ADC reference voltage level  */
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_0    (AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_0_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_1    (AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_1_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_2    (AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_2_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_3    (AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_3_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_4    (AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_4_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_5    (AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_5_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_6    (AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_6_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_7    (AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_7_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_Pos 28  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Optional mode to improve sub-ranging technique of the sensor ADC */
#define AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_Msk (0x3ul << AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_CODE_IN(value) (AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) input dynamic range from 0V to VBATT voltage level  */
#define   AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) input dynamic range from 0.08*VBATT to 0.92*VBATT  */
#define   AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) input dynamic range from 0.17*VBATT to 0.83*VBATT  */
#define   AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) input dynamic range from 0.25*VBATT to 0.75*VBATT  */
#define AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_0    (AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_0_Val << AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_1    (AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_1_Val << AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_2    (AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_2_Val << AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_3    (AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_3_Val << AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_Pos 30  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Comparator biasing current for different sampling rates of the sensor ADC */
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_Msk (0x3ul << AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL(value) (AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Comparator bias current is 4uA  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Comparator bias current is 8uA  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Comparator bias current is 20uA  */
#define   AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Comparator bias current is 24uA  */
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_0    (AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_0_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_1    (AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_1_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_2    (AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_2_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_3    (AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_3_Val << AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_1_MASK        0xFFFFFFFFul    /**< \brief (AON_GP_REGS_RF_PMU_REGS_1) Register MASK */

/* -------- AON_GP_REGS_RF_PMU_REGS_2 : (AON_GP_REGS Offset: 0x408) (R/W  16) RF PMU Registers -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t DIG_CORE_LDO_BYP:1;        /*!< bit:      0  Bypass mode of digital core LDO which regulates from the buck converter output to the local power domains of each digital power island */
    uint16_t DIG_CORE_LDO_VCTRL:2;      /*!< bit:   1..2  Voltage level of the digital core LDO when LDO is not in bypass mode */
    uint16_t REF_HP_MODE:3;             /*!< bit:   3..5  Controls the sensor ADCs internal reference buffer output resistance */
    uint16_t OFFSET_CAL_EN:1;           /*!< bit:      6  Enable sensor ADC offset calibration     */
    uint16_t RESERVED_7:1;              /*!< bit:      7  not using                                */
    uint16_t CLK_CTRL_26MHZ:5;          /*!< bit:  8..12  Control the 26MHz RC oscillator frequency */
    uint16_t RESERVED_15_13:3;          /*!< bit: 13..15  not using                                */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_RF_PMU_REGS_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_RF_PMU_REGS_2_OFFSET      0x408          /**<  \brief (AON_GP_REGS_RF_PMU_REGS_2 offset) RF PMU Registers */
#define AON_GP_REGS_RF_PMU_REGS_2_RESETVALUE  0x05ul         /**<  \brief (AON_GP_REGS_RF_PMU_REGS_2 reset_value) RF PMU Registers */

#define AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_Pos 0  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) Bypass mode of digital core LDO which regulates from the buck converter output to the local power domains of each digital power island */
#define AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_Msk (0x1ul << AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP(value) (AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) Not in bypass mode  */
#define   AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) Bypass mode so output will be shorted to the buck converter output  */
#define AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_0    (AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_0_Val << AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_1    (AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_1_Val << AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_Pos 1  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) Voltage level of the digital core LDO when LDO is not in bypass mode */
#define AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_Msk (0x3ul << AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL(value) (AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 0.91V  */
#define   AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 0.96V  */
#define   AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 1.02V  */
#define   AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 1.09V  */
#define AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_0    (AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_0_Val << AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_1    (AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_1_Val << AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_2    (AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_2_Val << AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_3    (AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_3_Val << AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Pos 3  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) Controls the sensor ADCs internal reference buffer output resistance */
#define AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Msk (0x7ul << AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE(value) (AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) setting for applications that require less than 10KSPS  */
#define   AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) setting for throughputs between 10KSPS and 100KSPS  */
#define   AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) setting for 100KSPS  */
#define   AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) setting for 325KSPS  */
#define   AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_4_Val        0X4ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) setting for 550KSPS  */
#define   AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_5_Val        0X5ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) setting for 775KSPS  */
#define   AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_6_Val        0X6ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) setting for 1MSPS  */
#define AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_0    (AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_0_Val << AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_1    (AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_1_Val << AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_2    (AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_2_Val << AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_3    (AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_3_Val << AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_4    (AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_4_Val << AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_5    (AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_5_Val << AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_6    (AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_6_Val << AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_Pos 6  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) Enable sensor ADC offset calibration */
#define AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_Msk (0x1ul << AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN(value) (AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) Disable  */
#define   AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) Enable  */
#define AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_0    (AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_0_Val << AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_1    (AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_1_Val << AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_RESERVED_7_Pos 7  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) not using                        */
#define AON_GP_REGS_RF_PMU_REGS_2_RESERVED_7  (0x1ul << AON_GP_REGS_RF_PMU_REGS_2_RESERVED_7_Pos)  
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos 8  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) Control the 26MHz RC oscillator frequency */
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Msk (0x1Ful << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ(value) (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos))  
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_0_Val        0X0ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 12MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_1_Val        0X1ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 13MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_2_Val        0X2ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 14MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_3_Val        0X3ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 15MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_4_Val        0X4ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 16MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_5_Val        0X5ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 17MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_6_Val        0X6ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 18MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_7_Val        0X7ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 19MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_8_Val        0X8ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 20MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_9_Val        0X9ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 21MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_10_Val        0XAul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 22MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_11_Val        0XBul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 23MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_12_Val        0XCul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 24MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_13_Val        0XDul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 25MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_14_Val        0XEul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 26MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_15_Val        0XFul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 27MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_16_Val       0X10ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 28MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_17_Val       0X11ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 29MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_18_Val       0X12ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 30MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_19_Val       0X13ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 31MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_20_Val       0X14ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 32MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_21_Val       0X15ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 33MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_22_Val       0X16ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 34MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_23_Val       0X17ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 35MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_24_Val       0X18ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 36MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_25_Val       0X19ul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 37MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_26_Val       0X1Aul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 38MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_27_Val       0X1Bul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 39MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_28_Val       0X1Cul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 40MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_29_Val       0X1Dul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 41MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_30_Val       0X1Eul  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 42MHz  */
#define   AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_31_Val       0X1Ful  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) 43MHz  */
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_0    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_0_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_1    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_1_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_2    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_2_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_3    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_3_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_4    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_4_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_5    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_5_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_6    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_6_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_7    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_7_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_8    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_8_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_9    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_9_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_10    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_10_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_11    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_11_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_12    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_12_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_13    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_13_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_14    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_14_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_15    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_15_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_16    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_16_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_17    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_17_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_18    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_18_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_19    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_19_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_20    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_20_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_21    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_21_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_22    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_22_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_23    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_23_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_24    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_24_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_25    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_25_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_26    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_26_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_27    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_27_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_28    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_28_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_29    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_29_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_30    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_30_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_31    (AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_31_Val << AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_RESERVED_15_13_Pos 13  /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) not using                        */
#define AON_GP_REGS_RF_PMU_REGS_2_RESERVED_15_13_Msk (0x7ul << AON_GP_REGS_RF_PMU_REGS_2_RESERVED_15_13_Pos)
#define AON_GP_REGS_RF_PMU_REGS_2_RESERVED_15_13(value) (AON_GP_REGS_RF_PMU_REGS_2_RESERVED_15_13_Msk & ((value) << AON_GP_REGS_RF_PMU_REGS_2_RESERVED_15_13_Pos))  
#define AON_GP_REGS_RF_PMU_REGS_2_MASK        0xFFFFul    /**< \brief (AON_GP_REGS_RF_PMU_REGS_2) Register MASK */

/* -------- AON_GP_REGS_MS_GPIO_MODE : (AON_GP_REGS Offset: 0x410) (R/W  8) Analog Mode Select of Mixed Signal GPIOs -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ANALOG_ENABLE_44:1;        /*!< bit:      0  Active High Analog Mode Enable for Mixed Signal LP_GPIO_44 */
    uint8_t  ANALOG_ENABLE_45:1;        /*!< bit:      1  Active High Analog Mode Enable for Mixed Signal LP_GPIO_45 */
    uint8_t  ANALOG_ENABLE_46:1;        /*!< bit:      2  Active High Analog Mode Enable for Mixed Signal LP_GPIO_46 */
    uint8_t  ANALOG_ENABLE_47:1;        /*!< bit:      3  Active High Analog Mode Enable for Mixed Signal LP_GPIO_47 */
    uint8_t  :4;                        /*!< bit:   4..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  struct {
    uint8_t  ANALOG_ENABLE_:4;          /*!< bit:   0..3  Active High Analog Mode Enable for Mixed Signal LP_GPIO_47 */
    uint8_t  :4;                        /*!< bit:   4..7 Reserved                                  */
  } vec;                                /*!< Structure used for vec  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_MS_GPIO_MODE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_MS_GPIO_MODE_OFFSET       0x410          /**<  \brief (AON_GP_REGS_MS_GPIO_MODE offset) Analog Mode Select of Mixed Signal GPIOs */
#define AON_GP_REGS_MS_GPIO_MODE_RESETVALUE   0x0Ful         /**<  \brief (AON_GP_REGS_MS_GPIO_MODE reset_value) Analog Mode Select of Mixed Signal GPIOs */

#define AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_44_Pos 0  /**< \brief (AON_GP_REGS_MS_GPIO_MODE) Active High Analog Mode Enable for Mixed Signal LP_GPIO_44 */
#define AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_44 (0x1ul << AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_44_Pos)  
#define AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_45_Pos 1  /**< \brief (AON_GP_REGS_MS_GPIO_MODE) Active High Analog Mode Enable for Mixed Signal LP_GPIO_45 */
#define AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_45 (0x1ul << AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_45_Pos)  
#define AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_46_Pos 2  /**< \brief (AON_GP_REGS_MS_GPIO_MODE) Active High Analog Mode Enable for Mixed Signal LP_GPIO_46 */
#define AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_46 (0x1ul << AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_46_Pos)  
#define AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_47_Pos 3  /**< \brief (AON_GP_REGS_MS_GPIO_MODE) Active High Analog Mode Enable for Mixed Signal LP_GPIO_47 */
#define AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_47 (0x1ul << AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_47_Pos)  
#define AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE__Pos 0  /**< \brief (AON_GP_REGS_MS_GPIO_MODE) Active High Analog Mode Enable for Mixed Signal LP_GPIO_47 */
#define AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE__Msk (0xFul << AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE__Pos)  
#define AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_(value) (AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE__Msk & ((value) << AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE__Pos))  
#define AON_GP_REGS_MS_GPIO_MODE_MASK         0x0Ful    /**< \brief (AON_GP_REGS_MS_GPIO_MODE) Register MASK */

/* -------- AON_GP_REGS_IO_PADS_CONTROL : (AON_GP_REGS Offset: 0x414) (R/W  8) Controls behaviour of IO Pads in Sleep Mode -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  LATCH_ENABLE:1;            /*!< bit:      0  Active High Latch Enable of IO Pads configuration parameters. When Low, Pads retain their configured state during sleep mode. */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} AON_GP_REGS_IO_PADS_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AON_GP_REGS_IO_PADS_CONTROL_OFFSET    0x414          /**<  \brief (AON_GP_REGS_IO_PADS_CONTROL offset) Controls behaviour of IO Pads in Sleep Mode */
#define AON_GP_REGS_IO_PADS_CONTROL_RESETVALUE 0x01ul         /**<  \brief (AON_GP_REGS_IO_PADS_CONTROL reset_value) Controls behaviour of IO Pads in Sleep Mode */

#define AON_GP_REGS_IO_PADS_CONTROL_LATCH_ENABLE_Pos 0  /**< \brief (AON_GP_REGS_IO_PADS_CONTROL) Active High Latch Enable of IO Pads configuration parameters. When Low, Pads retain their configured state during sleep mode. */
#define AON_GP_REGS_IO_PADS_CONTROL_LATCH_ENABLE (0x1ul << AON_GP_REGS_IO_PADS_CONTROL_LATCH_ENABLE_Pos)  
#define AON_GP_REGS_IO_PADS_CONTROL_MASK      0x01ul    /**< \brief (AON_GP_REGS_IO_PADS_CONTROL) Register MASK */

/** \brief AON_GP_REGS hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* Always On General Purpose Registers */
  __IO AON_GP_REGS_AON_PINMUX_SEL_Type AON_PINMUX_SEL; /**< \brief Offset: 0x00 (R/W  16) Controls the pinmux selection for the AO GPIOs */
       RoReg8                         Reserved1[0x2];
  __IO AON_GP_REGS_AON_PMU_CTRL_Type  AON_PMU_CTRL;   /**< \brief Offset: 0x04 (R/W  32) Always On Misc Control */
  __IO AON_GP_REGS_AON_BLE_LP_CTRL_Type AON_BLE_LP_CTRL; /**< \brief Offset: 0x08 (R/W   8) Always On BLE LP Control */
       RoReg8                         Reserved2[0x3];
  __IO AON_GP_REGS_AON_MISC_CTRL_Type AON_MISC_CTRL;  /**< \brief Offset: 0x0C (R/W  32) Always On Misc Control */
  __IO AON_GP_REGS_AON_GLOBAL_RESET_Type AON_GLOBAL_RESET; /**< \brief Offset: 0x10 (R/W   8) Active Low Always On Reset Control */
       RoReg8                         Reserved3[0x3];
  __IO AON_GP_REGS_AON_PULL_ENABLE_Type AON_PULL_ENABLE; /**< \brief Offset: 0x14 (R/W   8) Active Low Always On Pull Enable Control */
       RoReg8                         Reserved4[0x7];
  __IO AON_GP_REGS_AON_RESET_CTRL_Type AON_RESET_CTRL; /**< \brief Offset: 0x1C (R/W  32) Reset Count Control for PD1, PD4, PD6 and PD7 */
  __IO AON_GP_REGS_AON_BTRIM_ACTIVE_Type AON_BTRIM_ACTIVE; /**< \brief Offset: 0x20 (R/W   8) BTRIM settings for active mode (i.e. not in retention) */
       RoReg8                         Reserved5[0x3];
  __IO AON_GP_REGS_AON_BTRIM_RETENTION_Type AON_BTRIM_RETENTION; /**< \brief Offset: 0x24 (R/W   8) BTRIM settings for retention mode */
       RoReg8                         Reserved6[0x1B];
  __IO AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_Type AON_LPMCU_SCRATCH_PAD; /**< \brief Offset: 0x40 (R/W   8) Usage for the LPMCU for any sort of status it needs to store for itself before it goes to sleep */
       RoReg8                         Reserved7[0x3];
  __IO AON_GP_REGS_AON_LPMCU_COLD_BOOT_Type AON_LPMCU_COLD_BOOT; /**< \brief Offset: 0x44 (R/W   8) To be used by ARM to determine if it is a cold boot or not */
       RoReg8                         Reserved8[0x3B];
  __I  AON_GP_REGS_AON_BO_OUT_STATUS_Type AON_BO_OUT_STATUS; /**< \brief Offset: 0x80 (R/    8) Brown Out Detected (must be cleared manually) */
       RoReg8                         Reserved9[0x3];
  __IO AON_GP_REGS_CLEAR_BROWN_OUT_REG_Type CLEAR_BROWN_OUT_REG; /**< \brief Offset: 0x84 (R/W   8) Set to 1 to clear (hold until 0 read at aon_bo_out_status and then this must be cleared to detect another brown out condition) */
       RoReg8                         Reserved10[0x37B];
  __IO AON_GP_REGS_RF_PMU_REGS_0_Type RF_PMU_REGS_0;  /**< \brief Offset: 0x400 (R/W  32) RF PMU Registers */
  __IO AON_GP_REGS_RF_PMU_REGS_1_Type RF_PMU_REGS_1;  /**< \brief Offset: 0x404 (R/W  32) RF PMU Registers */
  __IO AON_GP_REGS_RF_PMU_REGS_2_Type RF_PMU_REGS_2;  /**< \brief Offset: 0x408 (R/W  16) RF PMU Registers */
       RoReg8                         Reserved11[0x6];
  __IO AON_GP_REGS_MS_GPIO_MODE_Type  MS_GPIO_MODE;   /**< \brief Offset: 0x410 (R/W   8) Analog Mode Select of Mixed Signal GPIOs */
       RoReg8                         Reserved12[0x3];
  __IO AON_GP_REGS_IO_PADS_CONTROL_Type IO_PADS_CONTROL; /**< \brief Offset: 0x414 (R/W   8) Controls behaviour of IO Pads in Sleep Mode */
} AonGpRegs;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_AON_GP_REGS_COMPONENT_ */
