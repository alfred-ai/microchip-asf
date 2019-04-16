/**
 * \file
 *
 * \brief Instance description for LPMCU_MISC_REGS0
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

#ifndef _SAMB11_LPMCU_MISC_REGS0_INSTANCE_
#define _SAMB11_LPMCU_MISC_REGS0_INSTANCE_

/* ========== Register definition for LPMCU_MISC_REGS0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_LPMCU_MISC_REGS0_LPMCU_CHIP_ID       (0x4000b000U) /**< \brief (LPMCU_MISC_REGS0) The hard-coded ID for the chip. */
#define REG_LPMCU_MISC_REGS0_LPMCU_GLOBAL_RESET_0 (0x4000b004U) /**< \brief (LPMCU_MISC_REGS0) Active Low Global Reset */
#define REG_LPMCU_MISC_REGS0_LPMCU_GLOBAL_RESET_1 (0x4000b008U) /**< \brief (LPMCU_MISC_REGS0) Active Low Global Reset */
#define REG_LPMCU_MISC_REGS0_LPMCU_CLOCK_ENABLES_0 (0x4000b00cU) /**< \brief (LPMCU_MISC_REGS0) LPMCU Clock Enables */
#define REG_LPMCU_MISC_REGS0_LPMCU_CLOCK_ENABLES_1 (0x4000b010U) /**< \brief (LPMCU_MISC_REGS0) LPMCU Clock Enables */
#define REG_LPMCU_MISC_REGS0_BTMCU_CONTROL       (0x4000b014U) /**< \brief (LPMCU_MISC_REGS0) Miscellaneous BLE control */
#define REG_LPMCU_MISC_REGS0_LPMCU_CONTROL       (0x4000b018U) /**< \brief (LPMCU_MISC_REGS0) Miscellaneous LPMCU control */
#define REG_LPMCU_MISC_REGS0_LPMCU_MBIST         (0x4000b01cU) /**< \brief (LPMCU_MISC_REGS0) MBIST designation */
#define REG_LPMCU_MISC_REGS0_BLE_CTRL            (0x4000b020U) /**< \brief (LPMCU_MISC_REGS0) BLE Control */
#define REG_LPMCU_MISC_REGS0_MBIST_CONTROL       (0x4000b024U) /**< \brief (LPMCU_MISC_REGS0) MBIST Control Register */
#define REG_LPMCU_MISC_REGS0_MBIST_STATUS        (0x4000b028U) /**< \brief (LPMCU_MISC_REGS0) MBIST Status Register */
#define REG_LPMCU_MISC_REGS0_MBIST_SRAM_ALG_SEL  (0x4000b02cU) /**< \brief (LPMCU_MISC_REGS0) Enables MBIST algorithms */
#define REG_LPMCU_MISC_REGS0_MBIST_BG            (0x4000b030U) /**< \brief (LPMCU_MISC_REGS0) MBIST Background for MARCH2 algorithm (bits 31:0) */
#define REG_LPMCU_MISC_REGS0_TEST_BUS_CONTROL    (0x4000b038U) /**< \brief (LPMCU_MISC_REGS0) Controls all of the test bus functionality */
#define REG_LPMCU_MISC_REGS0_WP3_MISR_DATAOUT    (0x4000b03cU) /**< \brief (LPMCU_MISC_REGS0) ROM MBIST Signature */
#define REG_LPMCU_MISC_REGS0_INVERT_OUTPUT_CTRL  (0x4000b040U) /**< \brief (LPMCU_MISC_REGS0) Invert Output Control */
#define REG_LPMCU_MISC_REGS0_PINMUX_SEL_0        (0x4000b044U) /**< \brief (LPMCU_MISC_REGS0) Pinmux select for LP_GPIO_0, LP_GPIO_1, LP_GPIO_2, LP_GPIO_3, LP_GPIO_4, LP_GPIO_5, LP_GPIO_6, LP_GPIO_7 */
#define REG_LPMCU_MISC_REGS0_PINMUX_SEL_1        (0x4000b048U) /**< \brief (LPMCU_MISC_REGS0) Pinmux select for LP_GPIO_8, LP_GPIO_9, LP_GPIO_10, LP_GPIO_11, LP_GPIO_12, LP_GPIO_13, LP_GPIO_14, LP_GPIO_15 */
#define REG_LPMCU_MISC_REGS0_PINMUX_SEL_2        (0x4000b04cU) /**< \brief (LPMCU_MISC_REGS0) Pinmux select for LP_GPIO_16, LP_GPIO_17, LP_GPIO_18, LP_GPIO_19, LP_GPIO_20, LP_GPIO_21, LP_GPIO_22, LP_GPIO_23 */
#define REG_LPMCU_MISC_REGS0_PULL_ENABLE         (0x4000b050U) /**< \brief (LPMCU_MISC_REGS0) Active Low Pull Enables for LPMCU Pads */
#define REG_LPMCU_MISC_REGS0_RTYPE_PAD_0         (0x4000b054U) /**< \brief (LPMCU_MISC_REGS0) Controls the RTYPE (Pull Level) pad value for LPMCU Pads (0 = Pull Up) */
#define REG_LPMCU_MISC_REGS0_PINMUX_SEL_3        (0x4000b068U) /**< \brief (LPMCU_MISC_REGS0) Pinmux select for LP_SIP_0, LP_SIP_1, LP_SIP_2, LP_SIP_3, LP_SIP_4 */
#define REG_LPMCU_MISC_REGS0_ISHAPE_PAD_3        (0x4000b06cU) /**< \brief (LPMCU_MISC_REGS0) Controls the ISHAPE pad value for LPMCU SIP Pads */
#define REG_LPMCU_MISC_REGS0_LPMCU_CONTROL_2     (0x4000b090U) /**< \brief (LPMCU_MISC_REGS0) Misc control for the LPMCU */
#define REG_LPMCU_MISC_REGS0_SPIFLASH_VDDIO_CTRL (0x4000b0a0U) /**< \brief (LPMCU_MISC_REGS0) Control for VDDIO of SPI FLASH */
#define REG_LPMCU_MISC_REGS0_SPIFLASH_BYPASS     (0x4000b0a4U) /**< \brief (LPMCU_MISC_REGS0) SPI FLASH Bypass */
#define REG_LPMCU_MISC_REGS0_IRQ_MUX_IO_SEL_0    (0x4000b0c0U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex IRQ Mux Selection */
#define REG_LPMCU_MISC_REGS0_IRQ_MUX_IO_SEL_1    (0x4000b0c4U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex IRQ Mux Selection */
#define REG_LPMCU_MISC_REGS0_IRQ_MUX_IO_SEL_2    (0x4000b0c8U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex IRQ Mux Selection */
#define REG_LPMCU_MISC_REGS0_IRQ_MUX_IO_SEL_3    (0x4000b0ccU) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex IRQ Mux Selection */
#define REG_LPMCU_MISC_REGS0_IRQ_MUX_IO_SEL_4    (0x4000b0d0U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex IRQ Mux Selection */
#define REG_LPMCU_MISC_REGS0_IRQ_MUX_IO_SEL_5    (0x4000b0d4U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex IRQ Mux Selection */
#define REG_LPMCU_MISC_REGS0_PWM_1_CONTROL       (0x4000b160U) /**< \brief (LPMCU_MISC_REGS0) PWM 1 Control Register */
#define REG_LPMCU_MISC_REGS0_PWM_2_CONTROL       (0x4000b164U) /**< \brief (LPMCU_MISC_REGS0) PWM 2 Control Register */
#define REG_LPMCU_MISC_REGS0_PWM_3_CONTROL       (0x4000b168U) /**< \brief (LPMCU_MISC_REGS0) PWM 3 Control Register */
#define REG_LPMCU_MISC_REGS0_PWM_4_CONTROL       (0x4000b16cU) /**< \brief (LPMCU_MISC_REGS0) PWM 4 Control Register */
#define REG_LPMCU_MISC_REGS0_MBIST_DUAL_STATUS   (0x4000b170U) /**< \brief (LPMCU_MISC_REGS0) Reflects the status of MBIST from lpmcu and btmcu */
#define REG_LPMCU_MISC_REGS0_DUALTIMER_CTRL      (0x4000b188U) /**< \brief (LPMCU_MISC_REGS0) Dual Timer Control */
#define REG_LPMCU_MISC_REGS0_ARM_SLEEP_WAKEUP_CTRL (0x4000b190U) /**< \brief (LPMCU_MISC_REGS0) Sleep and Wakeup Control for the AON Power Sequencer */
#define REG_LPMCU_MISC_REGS0_MEGA_MUX_IO_SEL_0   (0x4000b1a0U) /**< \brief (LPMCU_MISC_REGS0) Mega Mux Selection */
#define REG_LPMCU_MISC_REGS0_MEGA_MUX_IO_SEL_1   (0x4000b1a4U) /**< \brief (LPMCU_MISC_REGS0) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
#define REG_LPMCU_MISC_REGS0_MEGA_MUX_IO_SEL_2   (0x4000b1a8U) /**< \brief (LPMCU_MISC_REGS0) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
#define REG_LPMCU_MISC_REGS0_MEGA_MUX_IO_SEL_3   (0x4000b1acU) /**< \brief (LPMCU_MISC_REGS0) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
#define REG_LPMCU_MISC_REGS0_MEGA_MUX_IO_SEL_4   (0x4000b1b0U) /**< \brief (LPMCU_MISC_REGS0) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
#define REG_LPMCU_MISC_REGS0_MEGA_MUX_IO_SEL_5   (0x4000b1b4U) /**< \brief (LPMCU_MISC_REGS0) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
#define REG_LPMCU_MISC_REGS0_SENS_ADC_CLK_CTRL   (0x4000b1c0U) /**< \brief (LPMCU_MISC_REGS0) Clock control for the Sensor ADC */
#define REG_LPMCU_MISC_REGS0_SENS_ADC_RAW_STATUS (0x4000b1c4U) /**< \brief (LPMCU_MISC_REGS0) Raw Status from the Sensor ADC */
#define REG_LPMCU_MISC_REGS0_SENS_ADC_CH0_DATA   (0x4000b1c8U) /**< \brief (LPMCU_MISC_REGS0) Current data of the Sensor ADC for Channel 0 */
#define REG_LPMCU_MISC_REGS0_SENS_ADC_CH1_DATA   (0x4000b1ccU) /**< \brief (LPMCU_MISC_REGS0) Current data of the Sensor ADC for Channel 1 */
#define REG_LPMCU_MISC_REGS0_SENS_ADC_CH2_DATA   (0x4000b1d0U) /**< \brief (LPMCU_MISC_REGS0) Current data of the Sensor ADC for Channel 2 */
#define REG_LPMCU_MISC_REGS0_SENS_ADC_CH3_DATA   (0x4000b1d4U) /**< \brief (LPMCU_MISC_REGS0) Current data of the Sensor ADC for Channel 3 */
#define REG_LPMCU_MISC_REGS0_IRQ_CTRL            (0x4000b1e8U) /**< \brief (LPMCU_MISC_REGS0) Configure the IRQ inputs to the system as either Rising Edge or Level Shift */
#define REG_LPMCU_MISC_REGS0_IRQ_STS             (0x4000b1ecU) /**< \brief (LPMCU_MISC_REGS0) Read the raw (no level or rise detect) IRQ inputs to the system from the designated cores */
#define REG_LPMCU_MISC_REGS0_MSEMI_MEM_CTRL      (0x4000b200U) /**< \brief (LPMCU_MISC_REGS0) Control the rwm, rm and wm on the Mobile Semi Memories */
#define REG_LPMCU_MISC_REGS0_EFUSE_1_STATUS_3    (0x4000b204U) /**< \brief (LPMCU_MISC_REGS0) EFUSE_1_3 Status */
#define REG_LPMCU_MISC_REGS0_LPMCU_FORCE_CONTROL (0x4000b210U) /**< \brief (LPMCU_MISC_REGS0) Miscellaneous Force control values for LPMCU */
#define REG_LPMCU_MISC_REGS0_ARM_IRQ_STATUS_0    (0x4000b214U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 IRQ Status */
#define REG_LPMCU_MISC_REGS0_ARM_IRQ_STATUS_1    (0x4000b218U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 IRQ Status */
#define REG_LPMCU_MISC_REGS0_BLE_DEEP_SLEEP_ENABLES (0x4000b240U) /**< \brief (LPMCU_MISC_REGS0) BLE Deep Sleep Enables */
#define REG_LPMCU_MISC_REGS0_DEEP_SLEEP_HW_TIMER_CORR (0x4000b244U) /**< \brief (LPMCU_MISC_REGS0) Configures the HW auto correction algorithm of the fine/base timers after wakeup from deep sleep */
#define REG_LPMCU_MISC_REGS0_REMAP_IDRAM1_BASE_ADDR (0x4000b254U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 idram 1 remap base addr */
#define REG_LPMCU_MISC_REGS0_REMAP_IDRAM1_END_ADDR (0x4000b258U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 idram 1 remap end addr */
#define REG_LPMCU_MISC_REGS0_REMAP_IDRAM2_BASE_ADDR (0x4000b25cU) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 idram 2 remap base addr */
#define REG_LPMCU_MISC_REGS0_REMAP_IDRAM2_END_ADDR (0x4000b260U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 idram 2 remap end addr */
#define REG_LPMCU_MISC_REGS0_REMAP_BOOT_BASE_ADDR (0x4000b264U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 bootrom remap base addr */
#define REG_LPMCU_MISC_REGS0_REMAP_BOOT_END_ADDR (0x4000b268U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 bootrom remap end addr */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_IRQS       (0x4000b280U) /**< \brief (LPMCU_MISC_REGS0) Reflects the IRQ status of the Quad Decoders */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_1_STATUS   (0x4000b284U) /**< \brief (LPMCU_MISC_REGS0) Current status of Quad Decoder 1 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_2_STATUS   (0x4000b288U) /**< \brief (LPMCU_MISC_REGS0) Current status of Quad Decoder 2 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_3_STATUS   (0x4000b28cU) /**< \brief (LPMCU_MISC_REGS0) Current status of Quad Decoder 3 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_1_THRESHOLD (0x4000b290U) /**< \brief (LPMCU_MISC_REGS0) Thresholds for Quad Decoder 1 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_1_CTRL     (0x4000b294U) /**< \brief (LPMCU_MISC_REGS0) Control for Quad Decoder 1 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_2_THRESHOLD (0x4000b2a0U) /**< \brief (LPMCU_MISC_REGS0) Thresholds for Quad Decoder 2 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_2_CTRL     (0x4000b2a4U) /**< \brief (LPMCU_MISC_REGS0) Control for Quad Decoder 2 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_3_THRESHOLD (0x4000b2b0U) /**< \brief (LPMCU_MISC_REGS0) Thresholds for Quad Decoder 3 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_3_CTRL     (0x4000b2b4U) /**< \brief (LPMCU_MISC_REGS0) Control for Quad Decoder 3 */
#define REG_LPMCU_MISC_REGS0_FP_COMP0_COMP       (0x4000b2c0U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 0 */
#define REG_LPMCU_MISC_REGS0_FP_COMP1_COMP       (0x4000b2c4U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 1 */
#define REG_LPMCU_MISC_REGS0_FP_COMP2_COMP       (0x4000b2c8U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 2 */
#define REG_LPMCU_MISC_REGS0_FP_COMP3_COMP       (0x4000b2ccU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 3 */
#define REG_LPMCU_MISC_REGS0_FP_COMP4_COMP       (0x4000b2d0U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 4 */
#define REG_LPMCU_MISC_REGS0_FP_COMP5_COMP       (0x4000b2d4U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 5 */
#define REG_LPMCU_MISC_REGS0_FP_COMP6_COMP       (0x4000b2d8U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 6 */
#define REG_LPMCU_MISC_REGS0_FP_COMP7_COMP       (0x4000b2dcU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 7 */
#define REG_LPMCU_MISC_REGS0_FP_COMP8_COMP       (0x4000b2e0U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 8 */
#define REG_LPMCU_MISC_REGS0_FP_COMP9_COMP       (0x4000b2e4U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 9 */
#define REG_LPMCU_MISC_REGS0_FP_COMP10_COMP      (0x4000b2e8U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 10 */
#define REG_LPMCU_MISC_REGS0_FP_COMP11_COMP      (0x4000b2ecU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 11 */
#define REG_LPMCU_MISC_REGS0_FP_COMP12_COMP      (0x4000b2f0U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 12 */
#define REG_LPMCU_MISC_REGS0_FP_COMP13_COMP      (0x4000b2f4U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 13 */
#define REG_LPMCU_MISC_REGS0_FP_COMP14_COMP      (0x4000b2f8U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 14 */
#define REG_LPMCU_MISC_REGS0_FP_COMP15_COMP      (0x4000b2fcU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 15 */
#define REG_LPMCU_MISC_REGS0_FP_COMP0_REPLACE    (0x4000b300U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 0 */
#define REG_LPMCU_MISC_REGS0_FP_COMP1_REPLACE    (0x4000b304U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 1 */
#define REG_LPMCU_MISC_REGS0_FP_COMP2_REPLACE    (0x4000b308U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 2 */
#define REG_LPMCU_MISC_REGS0_FP_COMP3_REPLACE    (0x4000b30cU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 3 */
#define REG_LPMCU_MISC_REGS0_FP_COMP4_REPLACE    (0x4000b310U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 4 */
#define REG_LPMCU_MISC_REGS0_FP_COMP5_REPLACE    (0x4000b314U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 5 */
#define REG_LPMCU_MISC_REGS0_FP_COMP6_REPLACE    (0x4000b318U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 6 */
#define REG_LPMCU_MISC_REGS0_FP_COMP7_REPLACE    (0x4000b31cU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 7 */
#define REG_LPMCU_MISC_REGS0_FP_COMP8_REPLACE    (0x4000b320U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 8 */
#define REG_LPMCU_MISC_REGS0_FP_COMP9_REPLACE    (0x4000b324U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 9 */
#define REG_LPMCU_MISC_REGS0_FP_COMP10_REPLACE   (0x4000b328U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 10 */
#define REG_LPMCU_MISC_REGS0_FP_COMP11_REPLACE   (0x4000b32cU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 11 */
#define REG_LPMCU_MISC_REGS0_FP_COMP12_REPLACE   (0x4000b330U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 12 */
#define REG_LPMCU_MISC_REGS0_FP_COMP13_REPLACE   (0x4000b334U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 13 */
#define REG_LPMCU_MISC_REGS0_FP_COMP14_REPLACE   (0x4000b338U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 14 */
#define REG_LPMCU_MISC_REGS0_FP_COMP15_REPLACE   (0x4000b33cU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 14 */
#define REG_LPMCU_MISC_REGS0_FP_COMP_ENABLE      (0x4000b340U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Enable Register */
#define REG_LPMCU_MISC_REGS0_PMU_READ_REGS       (0x4000b410U) /**< \brief (LPMCU_MISC_REGS0) PMU Status Registers */
#define REG_LPMCU_MISC_REGS0_MS_GPIO             (0x4000b414U) /**< \brief (LPMCU_MISC_REGS0) Control for Mixed Signal GPIOs */
#define REG_LPMCU_MISC_REGS0_AON_SLEEP_TIMER_COUNTER (0x4000b420U) /**< \brief (LPMCU_MISC_REGS0) Current value of the AON Sleep Timer (syncd to ARM clock) */
#else
#define REG_LPMCU_MISC_REGS0_LPMCU_CHIP_ID       (*(RoReg  *)0x4000b000U) /**< \brief (LPMCU_MISC_REGS0) The hard-coded ID for the chip. */
#define REG_LPMCU_MISC_REGS0_LPMCU_GLOBAL_RESET_0 (*(RwReg  *)0x4000b004U) /**< \brief (LPMCU_MISC_REGS0) Active Low Global Reset */
#define REG_LPMCU_MISC_REGS0_LPMCU_GLOBAL_RESET_1 (*(RwReg16*)0x4000b008U) /**< \brief (LPMCU_MISC_REGS0) Active Low Global Reset */
#define REG_LPMCU_MISC_REGS0_LPMCU_CLOCK_ENABLES_0 (*(RwReg  *)0x4000b00cU) /**< \brief (LPMCU_MISC_REGS0) LPMCU Clock Enables */
#define REG_LPMCU_MISC_REGS0_LPMCU_CLOCK_ENABLES_1 (*(RwReg  *)0x4000b010U) /**< \brief (LPMCU_MISC_REGS0) LPMCU Clock Enables */
#define REG_LPMCU_MISC_REGS0_BTMCU_CONTROL       (*(RwReg8 *)0x4000b014U) /**< \brief (LPMCU_MISC_REGS0) Miscellaneous BLE control */
#define REG_LPMCU_MISC_REGS0_LPMCU_CONTROL       (*(RwReg  *)0x4000b018U) /**< \brief (LPMCU_MISC_REGS0) Miscellaneous LPMCU control */
#define REG_LPMCU_MISC_REGS0_LPMCU_MBIST         (*(RwReg8 *)0x4000b01cU) /**< \brief (LPMCU_MISC_REGS0) MBIST designation */
#define REG_LPMCU_MISC_REGS0_BLE_CTRL            (*(RwReg8 *)0x4000b020U) /**< \brief (LPMCU_MISC_REGS0) BLE Control */
#define REG_LPMCU_MISC_REGS0_MBIST_CONTROL       (*(RwReg  *)0x4000b024U) /**< \brief (LPMCU_MISC_REGS0) MBIST Control Register */
#define REG_LPMCU_MISC_REGS0_MBIST_STATUS        (*(RoReg  *)0x4000b028U) /**< \brief (LPMCU_MISC_REGS0) MBIST Status Register */
#define REG_LPMCU_MISC_REGS0_MBIST_SRAM_ALG_SEL  (*(RwReg16*)0x4000b02cU) /**< \brief (LPMCU_MISC_REGS0) Enables MBIST algorithms */
#define REG_LPMCU_MISC_REGS0_MBIST_BG            (*(RwReg  *)0x4000b030U) /**< \brief (LPMCU_MISC_REGS0) MBIST Background for MARCH2 algorithm (bits 31:0) */
#define REG_LPMCU_MISC_REGS0_TEST_BUS_CONTROL    (*(RwReg8 *)0x4000b038U) /**< \brief (LPMCU_MISC_REGS0) Controls all of the test bus functionality */
#define REG_LPMCU_MISC_REGS0_WP3_MISR_DATAOUT    (*(RoReg  *)0x4000b03cU) /**< \brief (LPMCU_MISC_REGS0) ROM MBIST Signature */
#define REG_LPMCU_MISC_REGS0_INVERT_OUTPUT_CTRL  (*(RwReg  *)0x4000b040U) /**< \brief (LPMCU_MISC_REGS0) Invert Output Control */
#define REG_LPMCU_MISC_REGS0_PINMUX_SEL_0        (*(RwReg  *)0x4000b044U) /**< \brief (LPMCU_MISC_REGS0) Pinmux select for LP_GPIO_0, LP_GPIO_1, LP_GPIO_2, LP_GPIO_3, LP_GPIO_4, LP_GPIO_5, LP_GPIO_6, LP_GPIO_7 */
#define REG_LPMCU_MISC_REGS0_PINMUX_SEL_1        (*(RwReg  *)0x4000b048U) /**< \brief (LPMCU_MISC_REGS0) Pinmux select for LP_GPIO_8, LP_GPIO_9, LP_GPIO_10, LP_GPIO_11, LP_GPIO_12, LP_GPIO_13, LP_GPIO_14, LP_GPIO_15 */
#define REG_LPMCU_MISC_REGS0_PINMUX_SEL_2        (*(RwReg  *)0x4000b04cU) /**< \brief (LPMCU_MISC_REGS0) Pinmux select for LP_GPIO_16, LP_GPIO_17, LP_GPIO_18, LP_GPIO_19, LP_GPIO_20, LP_GPIO_21, LP_GPIO_22, LP_GPIO_23 */
#define REG_LPMCU_MISC_REGS0_PULL_ENABLE         (*(RwReg  *)0x4000b050U) /**< \brief (LPMCU_MISC_REGS0) Active Low Pull Enables for LPMCU Pads */
#define REG_LPMCU_MISC_REGS0_RTYPE_PAD_0         (*(RwReg  *)0x4000b054U) /**< \brief (LPMCU_MISC_REGS0) Controls the RTYPE (Pull Level) pad value for LPMCU Pads (0 = Pull Up) */
#define REG_LPMCU_MISC_REGS0_PINMUX_SEL_3        (*(RwReg  *)0x4000b068U) /**< \brief (LPMCU_MISC_REGS0) Pinmux select for LP_SIP_0, LP_SIP_1, LP_SIP_2, LP_SIP_3, LP_SIP_4 */
#define REG_LPMCU_MISC_REGS0_ISHAPE_PAD_3        (*(RwReg  *)0x4000b06cU) /**< \brief (LPMCU_MISC_REGS0) Controls the ISHAPE pad value for LPMCU SIP Pads */
#define REG_LPMCU_MISC_REGS0_LPMCU_CONTROL_2     (*(RwReg8 *)0x4000b090U) /**< \brief (LPMCU_MISC_REGS0) Misc control for the LPMCU */
#define REG_LPMCU_MISC_REGS0_SPIFLASH_VDDIO_CTRL (*(RwReg8 *)0x4000b0a0U) /**< \brief (LPMCU_MISC_REGS0) Control for VDDIO of SPI FLASH */
#define REG_LPMCU_MISC_REGS0_SPIFLASH_BYPASS     (*(RwReg8 *)0x4000b0a4U) /**< \brief (LPMCU_MISC_REGS0) SPI FLASH Bypass */
#define REG_LPMCU_MISC_REGS0_IRQ_MUX_IO_SEL_0    (*(RwReg  *)0x4000b0c0U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex IRQ Mux Selection */
#define REG_LPMCU_MISC_REGS0_IRQ_MUX_IO_SEL_1    (*(RwReg  *)0x4000b0c4U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex IRQ Mux Selection */
#define REG_LPMCU_MISC_REGS0_IRQ_MUX_IO_SEL_2    (*(RwReg  *)0x4000b0c8U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex IRQ Mux Selection */
#define REG_LPMCU_MISC_REGS0_IRQ_MUX_IO_SEL_3    (*(RwReg  *)0x4000b0ccU) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex IRQ Mux Selection */
#define REG_LPMCU_MISC_REGS0_IRQ_MUX_IO_SEL_4    (*(RwReg  *)0x4000b0d0U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex IRQ Mux Selection */
#define REG_LPMCU_MISC_REGS0_IRQ_MUX_IO_SEL_5    (*(RwReg8 *)0x4000b0d4U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex IRQ Mux Selection */
#define REG_LPMCU_MISC_REGS0_PWM_1_CONTROL       (*(RwReg  *)0x4000b160U) /**< \brief (LPMCU_MISC_REGS0) PWM 1 Control Register */
#define REG_LPMCU_MISC_REGS0_PWM_2_CONTROL       (*(RwReg  *)0x4000b164U) /**< \brief (LPMCU_MISC_REGS0) PWM 2 Control Register */
#define REG_LPMCU_MISC_REGS0_PWM_3_CONTROL       (*(RwReg  *)0x4000b168U) /**< \brief (LPMCU_MISC_REGS0) PWM 3 Control Register */
#define REG_LPMCU_MISC_REGS0_PWM_4_CONTROL       (*(RwReg  *)0x4000b16cU) /**< \brief (LPMCU_MISC_REGS0) PWM 4 Control Register */
#define REG_LPMCU_MISC_REGS0_MBIST_DUAL_STATUS   (*(RoReg  *)0x4000b170U) /**< \brief (LPMCU_MISC_REGS0) Reflects the status of MBIST from lpmcu and btmcu */
#define REG_LPMCU_MISC_REGS0_DUALTIMER_CTRL      (*(RwReg8 *)0x4000b188U) /**< \brief (LPMCU_MISC_REGS0) Dual Timer Control */
#define REG_LPMCU_MISC_REGS0_ARM_SLEEP_WAKEUP_CTRL (*(RwReg  *)0x4000b190U) /**< \brief (LPMCU_MISC_REGS0) Sleep and Wakeup Control for the AON Power Sequencer */
#define REG_LPMCU_MISC_REGS0_MEGA_MUX_IO_SEL_0   (*(RwReg  *)0x4000b1a0U) /**< \brief (LPMCU_MISC_REGS0) Mega Mux Selection */
#define REG_LPMCU_MISC_REGS0_MEGA_MUX_IO_SEL_1   (*(RwReg  *)0x4000b1a4U) /**< \brief (LPMCU_MISC_REGS0) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
#define REG_LPMCU_MISC_REGS0_MEGA_MUX_IO_SEL_2   (*(RwReg  *)0x4000b1a8U) /**< \brief (LPMCU_MISC_REGS0) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
#define REG_LPMCU_MISC_REGS0_MEGA_MUX_IO_SEL_3   (*(RwReg  *)0x4000b1acU) /**< \brief (LPMCU_MISC_REGS0) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
#define REG_LPMCU_MISC_REGS0_MEGA_MUX_IO_SEL_4   (*(RwReg  *)0x4000b1b0U) /**< \brief (LPMCU_MISC_REGS0) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
#define REG_LPMCU_MISC_REGS0_MEGA_MUX_IO_SEL_5   (*(RwReg  *)0x4000b1b4U) /**< \brief (LPMCU_MISC_REGS0) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
#define REG_LPMCU_MISC_REGS0_SENS_ADC_CLK_CTRL   (*(RwReg  *)0x4000b1c0U) /**< \brief (LPMCU_MISC_REGS0) Clock control for the Sensor ADC */
#define REG_LPMCU_MISC_REGS0_SENS_ADC_RAW_STATUS (*(RoReg  *)0x4000b1c4U) /**< \brief (LPMCU_MISC_REGS0) Raw Status from the Sensor ADC */
#define REG_LPMCU_MISC_REGS0_SENS_ADC_CH0_DATA   (*(RoReg16*)0x4000b1c8U) /**< \brief (LPMCU_MISC_REGS0) Current data of the Sensor ADC for Channel 0 */
#define REG_LPMCU_MISC_REGS0_SENS_ADC_CH1_DATA   (*(RoReg16*)0x4000b1ccU) /**< \brief (LPMCU_MISC_REGS0) Current data of the Sensor ADC for Channel 1 */
#define REG_LPMCU_MISC_REGS0_SENS_ADC_CH2_DATA   (*(RoReg16*)0x4000b1d0U) /**< \brief (LPMCU_MISC_REGS0) Current data of the Sensor ADC for Channel 2 */
#define REG_LPMCU_MISC_REGS0_SENS_ADC_CH3_DATA   (*(RoReg16*)0x4000b1d4U) /**< \brief (LPMCU_MISC_REGS0) Current data of the Sensor ADC for Channel 3 */
#define REG_LPMCU_MISC_REGS0_IRQ_CTRL            (*(RwReg16*)0x4000b1e8U) /**< \brief (LPMCU_MISC_REGS0) Configure the IRQ inputs to the system as either Rising Edge or Level Shift */
#define REG_LPMCU_MISC_REGS0_IRQ_STS             (*(RoReg8 *)0x4000b1ecU) /**< \brief (LPMCU_MISC_REGS0) Read the raw (no level or rise detect) IRQ inputs to the system from the designated cores */
#define REG_LPMCU_MISC_REGS0_MSEMI_MEM_CTRL      (*(RwReg  *)0x4000b200U) /**< \brief (LPMCU_MISC_REGS0) Control the rwm, rm and wm on the Mobile Semi Memories */
#define REG_LPMCU_MISC_REGS0_EFUSE_1_STATUS_3    (*(RwReg  *)0x4000b204U) /**< \brief (LPMCU_MISC_REGS0) EFUSE_1_3 Status */
#define REG_LPMCU_MISC_REGS0_LPMCU_FORCE_CONTROL (*(RwReg16*)0x4000b210U) /**< \brief (LPMCU_MISC_REGS0) Miscellaneous Force control values for LPMCU */
#define REG_LPMCU_MISC_REGS0_ARM_IRQ_STATUS_0    (*(RoReg  *)0x4000b214U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 IRQ Status */
#define REG_LPMCU_MISC_REGS0_ARM_IRQ_STATUS_1    (*(RoReg  *)0x4000b218U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 IRQ Status */
#define REG_LPMCU_MISC_REGS0_BLE_DEEP_SLEEP_ENABLES (*(RwReg8 *)0x4000b240U) /**< \brief (LPMCU_MISC_REGS0) BLE Deep Sleep Enables */
#define REG_LPMCU_MISC_REGS0_DEEP_SLEEP_HW_TIMER_CORR (*(RwReg  *)0x4000b244U) /**< \brief (LPMCU_MISC_REGS0) Configures the HW auto correction algorithm of the fine/base timers after wakeup from deep sleep */
#define REG_LPMCU_MISC_REGS0_REMAP_IDRAM1_BASE_ADDR (*(RwReg  *)0x4000b254U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 idram 1 remap base addr */
#define REG_LPMCU_MISC_REGS0_REMAP_IDRAM1_END_ADDR (*(RwReg  *)0x4000b258U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 idram 1 remap end addr */
#define REG_LPMCU_MISC_REGS0_REMAP_IDRAM2_BASE_ADDR (*(RwReg  *)0x4000b25cU) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 idram 2 remap base addr */
#define REG_LPMCU_MISC_REGS0_REMAP_IDRAM2_END_ADDR (*(RwReg  *)0x4000b260U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 idram 2 remap end addr */
#define REG_LPMCU_MISC_REGS0_REMAP_BOOT_BASE_ADDR (*(RwReg  *)0x4000b264U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 bootrom remap base addr */
#define REG_LPMCU_MISC_REGS0_REMAP_BOOT_END_ADDR (*(RwReg  *)0x4000b268U) /**< \brief (LPMCU_MISC_REGS0) ARM Cortex M0 bootrom remap end addr */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_IRQS       (*(RoReg8 *)0x4000b280U) /**< \brief (LPMCU_MISC_REGS0) Reflects the IRQ status of the Quad Decoders */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_1_STATUS   (*(RoReg16*)0x4000b284U) /**< \brief (LPMCU_MISC_REGS0) Current status of Quad Decoder 1 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_2_STATUS   (*(RoReg16*)0x4000b288U) /**< \brief (LPMCU_MISC_REGS0) Current status of Quad Decoder 2 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_3_STATUS   (*(RoReg16*)0x4000b28cU) /**< \brief (LPMCU_MISC_REGS0) Current status of Quad Decoder 3 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_1_THRESHOLD (*(RwReg  *)0x4000b290U) /**< \brief (LPMCU_MISC_REGS0) Thresholds for Quad Decoder 1 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_1_CTRL     (*(RwReg8 *)0x4000b294U) /**< \brief (LPMCU_MISC_REGS0) Control for Quad Decoder 1 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_2_THRESHOLD (*(RwReg  *)0x4000b2a0U) /**< \brief (LPMCU_MISC_REGS0) Thresholds for Quad Decoder 2 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_2_CTRL     (*(RwReg8 *)0x4000b2a4U) /**< \brief (LPMCU_MISC_REGS0) Control for Quad Decoder 2 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_3_THRESHOLD (*(RwReg  *)0x4000b2b0U) /**< \brief (LPMCU_MISC_REGS0) Thresholds for Quad Decoder 3 */
#define REG_LPMCU_MISC_REGS0_QUAD_DEC_3_CTRL     (*(RwReg8 *)0x4000b2b4U) /**< \brief (LPMCU_MISC_REGS0) Control for Quad Decoder 3 */
#define REG_LPMCU_MISC_REGS0_FP_COMP0_COMP       (*(RwReg  *)0x4000b2c0U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 0 */
#define REG_LPMCU_MISC_REGS0_FP_COMP1_COMP       (*(RwReg  *)0x4000b2c4U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 1 */
#define REG_LPMCU_MISC_REGS0_FP_COMP2_COMP       (*(RwReg  *)0x4000b2c8U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 2 */
#define REG_LPMCU_MISC_REGS0_FP_COMP3_COMP       (*(RwReg  *)0x4000b2ccU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 3 */
#define REG_LPMCU_MISC_REGS0_FP_COMP4_COMP       (*(RwReg  *)0x4000b2d0U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 4 */
#define REG_LPMCU_MISC_REGS0_FP_COMP5_COMP       (*(RwReg  *)0x4000b2d4U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 5 */
#define REG_LPMCU_MISC_REGS0_FP_COMP6_COMP       (*(RwReg  *)0x4000b2d8U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 6 */
#define REG_LPMCU_MISC_REGS0_FP_COMP7_COMP       (*(RwReg  *)0x4000b2dcU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 7 */
#define REG_LPMCU_MISC_REGS0_FP_COMP8_COMP       (*(RwReg  *)0x4000b2e0U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 8 */
#define REG_LPMCU_MISC_REGS0_FP_COMP9_COMP       (*(RwReg  *)0x4000b2e4U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 9 */
#define REG_LPMCU_MISC_REGS0_FP_COMP10_COMP      (*(RwReg  *)0x4000b2e8U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 10 */
#define REG_LPMCU_MISC_REGS0_FP_COMP11_COMP      (*(RwReg  *)0x4000b2ecU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 11 */
#define REG_LPMCU_MISC_REGS0_FP_COMP12_COMP      (*(RwReg  *)0x4000b2f0U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 12 */
#define REG_LPMCU_MISC_REGS0_FP_COMP13_COMP      (*(RwReg  *)0x4000b2f4U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 13 */
#define REG_LPMCU_MISC_REGS0_FP_COMP14_COMP      (*(RwReg  *)0x4000b2f8U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 14 */
#define REG_LPMCU_MISC_REGS0_FP_COMP15_COMP      (*(RwReg  *)0x4000b2fcU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Compare Register 15 */
#define REG_LPMCU_MISC_REGS0_FP_COMP0_REPLACE    (*(RwReg  *)0x4000b300U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 0 */
#define REG_LPMCU_MISC_REGS0_FP_COMP1_REPLACE    (*(RwReg  *)0x4000b304U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 1 */
#define REG_LPMCU_MISC_REGS0_FP_COMP2_REPLACE    (*(RwReg  *)0x4000b308U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 2 */
#define REG_LPMCU_MISC_REGS0_FP_COMP3_REPLACE    (*(RwReg  *)0x4000b30cU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 3 */
#define REG_LPMCU_MISC_REGS0_FP_COMP4_REPLACE    (*(RwReg  *)0x4000b310U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 4 */
#define REG_LPMCU_MISC_REGS0_FP_COMP5_REPLACE    (*(RwReg  *)0x4000b314U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 5 */
#define REG_LPMCU_MISC_REGS0_FP_COMP6_REPLACE    (*(RwReg  *)0x4000b318U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 6 */
#define REG_LPMCU_MISC_REGS0_FP_COMP7_REPLACE    (*(RwReg  *)0x4000b31cU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 7 */
#define REG_LPMCU_MISC_REGS0_FP_COMP8_REPLACE    (*(RwReg  *)0x4000b320U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 8 */
#define REG_LPMCU_MISC_REGS0_FP_COMP9_REPLACE    (*(RwReg  *)0x4000b324U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 9 */
#define REG_LPMCU_MISC_REGS0_FP_COMP10_REPLACE   (*(RwReg  *)0x4000b328U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 10 */
#define REG_LPMCU_MISC_REGS0_FP_COMP11_REPLACE   (*(RwReg  *)0x4000b32cU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 11 */
#define REG_LPMCU_MISC_REGS0_FP_COMP12_REPLACE   (*(RwReg  *)0x4000b330U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 12 */
#define REG_LPMCU_MISC_REGS0_FP_COMP13_REPLACE   (*(RwReg  *)0x4000b334U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 13 */
#define REG_LPMCU_MISC_REGS0_FP_COMP14_REPLACE   (*(RwReg  *)0x4000b338U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 14 */
#define REG_LPMCU_MISC_REGS0_FP_COMP15_REPLACE   (*(RwReg  *)0x4000b33cU) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Replace Register 14 */
#define REG_LPMCU_MISC_REGS0_FP_COMP_ENABLE      (*(RwReg16*)0x4000b340U) /**< \brief (LPMCU_MISC_REGS0) Flash Breakpoint Enable Register */
#define REG_LPMCU_MISC_REGS0_PMU_READ_REGS       (*(RoReg  *)0x4000b410U) /**< \brief (LPMCU_MISC_REGS0) PMU Status Registers */
#define REG_LPMCU_MISC_REGS0_MS_GPIO             (*(RwReg8 *)0x4000b414U) /**< \brief (LPMCU_MISC_REGS0) Control for Mixed Signal GPIOs */
#define REG_LPMCU_MISC_REGS0_AON_SLEEP_TIMER_COUNTER (*(RoReg  *)0x4000b420U) /**< \brief (LPMCU_MISC_REGS0) Current value of the AON Sleep Timer (syncd to ARM clock) */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMB11_LPMCU_MISC_REGS0_INSTANCE_ */