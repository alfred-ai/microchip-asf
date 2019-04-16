/**
 * \file
 *
 * \brief Instance description for PROV_DMA_CTRL0
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

#ifndef _SAMB11_PROV_DMA_CTRL0_INSTANCE_
#define _SAMB11_PROV_DMA_CTRL0_INSTANCE_

/* ========== Register definition for PROV_DMA_CTRL0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PROV_DMA_CTRL0_CH0_CMD_REG0        (0x40002000U) /**< \brief (PROV_DMA_CTRL0) Channel 0 First Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH0_CMD_REG1        (0x40002004U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Second Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH0_CMD_REG2        (0x40002008U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Third Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH0_CMD_REG3        (0x4000200cU) /**< \brief (PROV_DMA_CTRL0) Channel 0 Fourth Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH0_STATIC_REG0     (0x40002010U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Static Configuration Read */
#define REG_PROV_DMA_CTRL0_CH0_STATIC_REG1     (0x40002014U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Static Configuration Write */
#define REG_PROV_DMA_CTRL0_CH0_STATIC_REG2     (0x40002018U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Block Mode */
#define REG_PROV_DMA_CTRL0_CH0_STATIC_REG4     (0x40002020U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Static Configuration Peripheral */
#define REG_PROV_DMA_CTRL0_CH0_RESRICT_REG     (0x4000202cU) /**< \brief (PROV_DMA_CTRL0) Channel 0 Restrictions Status Register */
#define REG_PROV_DMA_CTRL0_CH0_FIFO_FULLNESS_REG (0x40002038U) /**< \brief (PROV_DMA_CTRL0) Channel 0 FIFO Fullness Status Register */
#define REG_PROV_DMA_CTRL0_CH0_CH_ENABLE_REG   (0x40002040U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Channel Enable Register */
#define REG_PROV_DMA_CTRL0_CH0_CH_START_REG    (0x40002044U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Channel Start Register */
#define REG_PROV_DMA_CTRL0_CH0_CH_ACTIVE_REG   (0x40002048U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Channel Active Status Register */
#define REG_PROV_DMA_CTRL0_CH0_COUNT_REG       (0x40002050U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Buffer Counter Status Register */
#define REG_PROV_DMA_CTRL0_CH0_INT_RAWSTAT_REG (0x400020a0U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
#define REG_PROV_DMA_CTRL0_CH0_INT_CLEAR_REG   (0x400020a4U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Interrupt Clear (Write 1 to clear) */
#define REG_PROV_DMA_CTRL0_CH0_INT_ENABLE_REG  (0x400020a8U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Interrupt Enable */
#define REG_PROV_DMA_CTRL0_CH0_INT_STATUS_REG  (0x400020acU) /**< \brief (PROV_DMA_CTRL0) Channel 0 Interrupt Status */
#define REG_PROV_DMA_CTRL0_CH1_CMD_REG0        (0x40002100U) /**< \brief (PROV_DMA_CTRL0) Channel 1 First Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH1_CMD_REG1        (0x40002104U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Second Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH1_CMD_REG2        (0x40002108U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Third Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH1_CMD_REG3        (0x4000210cU) /**< \brief (PROV_DMA_CTRL0) Channel 1 Fourth Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH1_STATIC_REG0     (0x40002110U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Static Configuration Read */
#define REG_PROV_DMA_CTRL0_CH1_STATIC_REG1     (0x40002114U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Static Configuration Write */
#define REG_PROV_DMA_CTRL0_CH1_STATIC_REG2     (0x40002118U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Block Mode */
#define REG_PROV_DMA_CTRL0_CH1_STATIC_REG4     (0x40002120U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Static Configuration Peripheral */
#define REG_PROV_DMA_CTRL0_CH1_RESRICT_REG     (0x4000212cU) /**< \brief (PROV_DMA_CTRL0) Channel 1 Restrictions Status Register */
#define REG_PROV_DMA_CTRL0_CH1_FIFO_FULLNESS_REG (0x40002138U) /**< \brief (PROV_DMA_CTRL0) Channel 1 FIFO Fullness Status Register */
#define REG_PROV_DMA_CTRL0_CH1_CH_ENABLE_REG   (0x40002140U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Channel Enable Register */
#define REG_PROV_DMA_CTRL0_CH1_CH_START_REG    (0x40002144U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Channel Start Register */
#define REG_PROV_DMA_CTRL0_CH1_CH_ACTIVE_REG   (0x40002148U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Channel Active Status Register */
#define REG_PROV_DMA_CTRL0_CH1_COUNT_REG       (0x40002150U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Buffer Counter Status Register */
#define REG_PROV_DMA_CTRL0_CH1_INT_RAWSTAT_REG (0x400021a0U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
#define REG_PROV_DMA_CTRL0_CH1_INT_CLEAR_REG   (0x400021a4U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Interrupt Clear (Write 1 to clear) */
#define REG_PROV_DMA_CTRL0_CH1_INT_ENABLE_REG  (0x400021a8U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Interrupt Enable */
#define REG_PROV_DMA_CTRL0_CH1_INT_STATUS_REG  (0x400021acU) /**< \brief (PROV_DMA_CTRL0) Channel 1 Interrupt Status */
#define REG_PROV_DMA_CTRL0_CH2_CMD_REG0        (0x40002200U) /**< \brief (PROV_DMA_CTRL0) Channel 2 First Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH2_CMD_REG1        (0x40002204U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Second Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH2_CMD_REG2        (0x40002208U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Third Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH2_CMD_REG3        (0x4000220cU) /**< \brief (PROV_DMA_CTRL0) Channel 2 Fourth Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH2_STATIC_REG0     (0x40002210U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Static Configuration Read */
#define REG_PROV_DMA_CTRL0_CH2_STATIC_REG1     (0x40002214U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Static Configuration Write */
#define REG_PROV_DMA_CTRL0_CH2_STATIC_REG2     (0x40002218U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Block Mode */
#define REG_PROV_DMA_CTRL0_CH2_STATIC_REG4     (0x40002220U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Static Configuration Peripheral */
#define REG_PROV_DMA_CTRL0_CH2_RESRICT_REG     (0x4000222cU) /**< \brief (PROV_DMA_CTRL0) Channel 2 Restrictions Status Register */
#define REG_PROV_DMA_CTRL0_CH2_FIFO_FULLNESS_REG (0x40002238U) /**< \brief (PROV_DMA_CTRL0) Channel 2 FIFO Fullness Status Register */
#define REG_PROV_DMA_CTRL0_CH2_CH_ENABLE_REG   (0x40002240U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Channel Enable Register */
#define REG_PROV_DMA_CTRL0_CH2_CH_START_REG    (0x40002244U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Channel Start Register */
#define REG_PROV_DMA_CTRL0_CH2_CH_ACTIVE_REG   (0x40002248U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Channel Active Status Register */
#define REG_PROV_DMA_CTRL0_CH2_COUNT_REG       (0x40002250U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Buffer Counter Status Register */
#define REG_PROV_DMA_CTRL0_CH2_INT_RAWSTAT_REG (0x400022a0U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
#define REG_PROV_DMA_CTRL0_CH2_INT_CLEAR_REG   (0x400022a4U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Interrupt Clear (Write 1 to clear) */
#define REG_PROV_DMA_CTRL0_CH2_INT_ENABLE_REG  (0x400022a8U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Interrupt Enable */
#define REG_PROV_DMA_CTRL0_CH2_INT_STATUS_REG  (0x400022acU) /**< \brief (PROV_DMA_CTRL0) Channel 2 Interrupt Status */
#define REG_PROV_DMA_CTRL0_CH3_CMD_REG0        (0x40002300U) /**< \brief (PROV_DMA_CTRL0) Channel 3 First Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH3_CMD_REG1        (0x40002304U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Second Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH3_CMD_REG2        (0x40002308U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Third Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH3_CMD_REG3        (0x4000230cU) /**< \brief (PROV_DMA_CTRL0) Channel 3 Fourth Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH3_STATIC_REG0     (0x40002310U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Static Configuration Read */
#define REG_PROV_DMA_CTRL0_CH3_STATIC_REG1     (0x40002314U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Static Configuration Write */
#define REG_PROV_DMA_CTRL0_CH3_STATIC_REG2     (0x40002318U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Block Mode */
#define REG_PROV_DMA_CTRL0_CH3_STATIC_REG4     (0x40002320U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Static Configuration Peripheral */
#define REG_PROV_DMA_CTRL0_CH3_RESRICT_REG     (0x4000232cU) /**< \brief (PROV_DMA_CTRL0) Channel 3 Restrictions Status Register */
#define REG_PROV_DMA_CTRL0_CH3_FIFO_FULLNESS_REG (0x40002338U) /**< \brief (PROV_DMA_CTRL0) Channel 3 FIFO Fullness Status Register */
#define REG_PROV_DMA_CTRL0_CH3_CH_ENABLE_REG   (0x40002340U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Channel Enable Register */
#define REG_PROV_DMA_CTRL0_CH3_CH_START_REG    (0x40002344U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Channel Start Register */
#define REG_PROV_DMA_CTRL0_CH3_CH_ACTIVE_REG   (0x40002348U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Channel Active Status Register */
#define REG_PROV_DMA_CTRL0_CH3_COUNT_REG       (0x40002350U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Buffer Counter Status Register */
#define REG_PROV_DMA_CTRL0_CH3_INT_RAWSTAT_REG (0x400023a0U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
#define REG_PROV_DMA_CTRL0_CH3_INT_CLEAR_REG   (0x400023a4U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Interrupt Clear (Write 1 to clear) */
#define REG_PROV_DMA_CTRL0_CH3_INT_ENABLE_REG  (0x400023a8U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Interrupt Enable */
#define REG_PROV_DMA_CTRL0_CH3_INT_STATUS_REG  (0x400023acU) /**< \brief (PROV_DMA_CTRL0) Channel 3 Interrupt Status */
#define REG_PROV_DMA_CTRL0_CORE_INT_STATUS     (0x40002800U) /**< \brief (PROV_DMA_CTRL0) Indicates which channels caused interrupt */
#define REG_PROV_DMA_CTRL0_CORE_JOINT_MODE     (0x40002830U) /**< \brief (PROV_DMA_CTRL0) If set, core works in joint mode */
#define REG_PROV_DMA_CTRL0_CORE_PRIORITY       (0x40002838U) /**< \brief (PROV_DMA_CTRL0) Core Priority Channels */
#define REG_PROV_DMA_CTRL0_CORE_CLKDIV         (0x40002840U) /**< \brief (PROV_DMA_CTRL0) Ratio between main clock and core clock */
#define REG_PROV_DMA_CTRL0_CORE_CH_START       (0x40002848U) /**< \brief (PROV_DMA_CTRL0) Channel Start */
#define REG_PROV_DMA_CTRL0_PERIPH_RX_CTRL      (0x40002850U) /**< \brief (PROV_DMA_CTRL0) Direct control of peripheral RX request */
#define REG_PROV_DMA_CTRL0_PERIPH_TX_CTRL      (0x40002860U) /**< \brief (PROV_DMA_CTRL0) Direct control of peripheral TX request */
#define REG_PROV_DMA_CTRL0_CORE_IDLE           (0x400028d0U) /**< \brief (PROV_DMA_CTRL0) Indicates all channels have stopped and transactions have completed */
#define REG_PROV_DMA_CTRL0_USER_DEF_STATUS     (0x400028e0U) /**< \brief (PROV_DMA_CTRL0) User Defined Configurations */
#define REG_PROV_DMA_CTRL0_CORE_DEF_STATUS0    (0x400028f0U) /**< \brief (PROV_DMA_CTRL0) User Defined Core Configurations 0 */
#define REG_PROV_DMA_CTRL0_CORE_DEF_STATUS1    (0x400028f4U) /**< \brief (PROV_DMA_CTRL0) User Defined Core Configurations 1 */
#else
#define REG_PROV_DMA_CTRL0_CH0_CMD_REG0        (*(RwReg  *)0x40002000U) /**< \brief (PROV_DMA_CTRL0) Channel 0 First Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH0_CMD_REG1        (*(RwReg  *)0x40002004U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Second Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH0_CMD_REG2        (*(RwReg16*)0x40002008U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Third Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH0_CMD_REG3        (*(RwReg  *)0x4000200cU) /**< \brief (PROV_DMA_CTRL0) Channel 0 Fourth Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH0_STATIC_REG0     (*(RwReg  *)0x40002010U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Static Configuration Read */
#define REG_PROV_DMA_CTRL0_CH0_STATIC_REG1     (*(RwReg  *)0x40002014U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Static Configuration Write */
#define REG_PROV_DMA_CTRL0_CH0_STATIC_REG2     (*(RwReg  *)0x40002018U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Block Mode */
#define REG_PROV_DMA_CTRL0_CH0_STATIC_REG4     (*(RwReg  *)0x40002020U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Static Configuration Peripheral */
#define REG_PROV_DMA_CTRL0_CH0_RESRICT_REG     (*(RoReg16*)0x4000202cU) /**< \brief (PROV_DMA_CTRL0) Channel 0 Restrictions Status Register */
#define REG_PROV_DMA_CTRL0_CH0_FIFO_FULLNESS_REG (*(RoReg  *)0x40002038U) /**< \brief (PROV_DMA_CTRL0) Channel 0 FIFO Fullness Status Register */
#define REG_PROV_DMA_CTRL0_CH0_CH_ENABLE_REG   (*(RwReg8 *)0x40002040U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Channel Enable Register */
#define REG_PROV_DMA_CTRL0_CH0_CH_START_REG    (*(WoReg8 *)0x40002044U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Channel Start Register */
#define REG_PROV_DMA_CTRL0_CH0_CH_ACTIVE_REG   (*(RoReg8 *)0x40002048U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Channel Active Status Register */
#define REG_PROV_DMA_CTRL0_CH0_COUNT_REG       (*(RoReg  *)0x40002050U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Buffer Counter Status Register */
#define REG_PROV_DMA_CTRL0_CH0_INT_RAWSTAT_REG (*(RwReg8 *)0x400020a0U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
#define REG_PROV_DMA_CTRL0_CH0_INT_CLEAR_REG   (*(RwReg8 *)0x400020a4U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Interrupt Clear (Write 1 to clear) */
#define REG_PROV_DMA_CTRL0_CH0_INT_ENABLE_REG  (*(RwReg8 *)0x400020a8U) /**< \brief (PROV_DMA_CTRL0) Channel 0 Interrupt Enable */
#define REG_PROV_DMA_CTRL0_CH0_INT_STATUS_REG  (*(RwReg8 *)0x400020acU) /**< \brief (PROV_DMA_CTRL0) Channel 0 Interrupt Status */
#define REG_PROV_DMA_CTRL0_CH1_CMD_REG0        (*(RwReg  *)0x40002100U) /**< \brief (PROV_DMA_CTRL0) Channel 1 First Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH1_CMD_REG1        (*(RwReg  *)0x40002104U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Second Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH1_CMD_REG2        (*(RwReg16*)0x40002108U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Third Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH1_CMD_REG3        (*(RwReg  *)0x4000210cU) /**< \brief (PROV_DMA_CTRL0) Channel 1 Fourth Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH1_STATIC_REG0     (*(RwReg  *)0x40002110U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Static Configuration Read */
#define REG_PROV_DMA_CTRL0_CH1_STATIC_REG1     (*(RwReg  *)0x40002114U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Static Configuration Write */
#define REG_PROV_DMA_CTRL0_CH1_STATIC_REG2     (*(RwReg  *)0x40002118U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Block Mode */
#define REG_PROV_DMA_CTRL0_CH1_STATIC_REG4     (*(RwReg  *)0x40002120U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Static Configuration Peripheral */
#define REG_PROV_DMA_CTRL0_CH1_RESRICT_REG     (*(RoReg16*)0x4000212cU) /**< \brief (PROV_DMA_CTRL0) Channel 1 Restrictions Status Register */
#define REG_PROV_DMA_CTRL0_CH1_FIFO_FULLNESS_REG (*(RoReg  *)0x40002138U) /**< \brief (PROV_DMA_CTRL0) Channel 1 FIFO Fullness Status Register */
#define REG_PROV_DMA_CTRL0_CH1_CH_ENABLE_REG   (*(RwReg8 *)0x40002140U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Channel Enable Register */
#define REG_PROV_DMA_CTRL0_CH1_CH_START_REG    (*(WoReg8 *)0x40002144U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Channel Start Register */
#define REG_PROV_DMA_CTRL0_CH1_CH_ACTIVE_REG   (*(RoReg8 *)0x40002148U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Channel Active Status Register */
#define REG_PROV_DMA_CTRL0_CH1_COUNT_REG       (*(RoReg  *)0x40002150U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Buffer Counter Status Register */
#define REG_PROV_DMA_CTRL0_CH1_INT_RAWSTAT_REG (*(RwReg8 *)0x400021a0U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
#define REG_PROV_DMA_CTRL0_CH1_INT_CLEAR_REG   (*(RwReg8 *)0x400021a4U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Interrupt Clear (Write 1 to clear) */
#define REG_PROV_DMA_CTRL0_CH1_INT_ENABLE_REG  (*(RwReg8 *)0x400021a8U) /**< \brief (PROV_DMA_CTRL0) Channel 1 Interrupt Enable */
#define REG_PROV_DMA_CTRL0_CH1_INT_STATUS_REG  (*(RwReg8 *)0x400021acU) /**< \brief (PROV_DMA_CTRL0) Channel 1 Interrupt Status */
#define REG_PROV_DMA_CTRL0_CH2_CMD_REG0        (*(RwReg  *)0x40002200U) /**< \brief (PROV_DMA_CTRL0) Channel 2 First Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH2_CMD_REG1        (*(RwReg  *)0x40002204U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Second Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH2_CMD_REG2        (*(RwReg16*)0x40002208U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Third Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH2_CMD_REG3        (*(RwReg  *)0x4000220cU) /**< \brief (PROV_DMA_CTRL0) Channel 2 Fourth Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH2_STATIC_REG0     (*(RwReg  *)0x40002210U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Static Configuration Read */
#define REG_PROV_DMA_CTRL0_CH2_STATIC_REG1     (*(RwReg  *)0x40002214U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Static Configuration Write */
#define REG_PROV_DMA_CTRL0_CH2_STATIC_REG2     (*(RwReg  *)0x40002218U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Block Mode */
#define REG_PROV_DMA_CTRL0_CH2_STATIC_REG4     (*(RwReg  *)0x40002220U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Static Configuration Peripheral */
#define REG_PROV_DMA_CTRL0_CH2_RESRICT_REG     (*(RoReg16*)0x4000222cU) /**< \brief (PROV_DMA_CTRL0) Channel 2 Restrictions Status Register */
#define REG_PROV_DMA_CTRL0_CH2_FIFO_FULLNESS_REG (*(RoReg  *)0x40002238U) /**< \brief (PROV_DMA_CTRL0) Channel 2 FIFO Fullness Status Register */
#define REG_PROV_DMA_CTRL0_CH2_CH_ENABLE_REG   (*(RwReg8 *)0x40002240U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Channel Enable Register */
#define REG_PROV_DMA_CTRL0_CH2_CH_START_REG    (*(WoReg8 *)0x40002244U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Channel Start Register */
#define REG_PROV_DMA_CTRL0_CH2_CH_ACTIVE_REG   (*(RoReg8 *)0x40002248U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Channel Active Status Register */
#define REG_PROV_DMA_CTRL0_CH2_COUNT_REG       (*(RoReg  *)0x40002250U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Buffer Counter Status Register */
#define REG_PROV_DMA_CTRL0_CH2_INT_RAWSTAT_REG (*(RwReg8 *)0x400022a0U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
#define REG_PROV_DMA_CTRL0_CH2_INT_CLEAR_REG   (*(RwReg8 *)0x400022a4U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Interrupt Clear (Write 1 to clear) */
#define REG_PROV_DMA_CTRL0_CH2_INT_ENABLE_REG  (*(RwReg8 *)0x400022a8U) /**< \brief (PROV_DMA_CTRL0) Channel 2 Interrupt Enable */
#define REG_PROV_DMA_CTRL0_CH2_INT_STATUS_REG  (*(RwReg8 *)0x400022acU) /**< \brief (PROV_DMA_CTRL0) Channel 2 Interrupt Status */
#define REG_PROV_DMA_CTRL0_CH3_CMD_REG0        (*(RwReg  *)0x40002300U) /**< \brief (PROV_DMA_CTRL0) Channel 3 First Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH3_CMD_REG1        (*(RwReg  *)0x40002304U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Second Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH3_CMD_REG2        (*(RwReg16*)0x40002308U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Third Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH3_CMD_REG3        (*(RwReg  *)0x4000230cU) /**< \brief (PROV_DMA_CTRL0) Channel 3 Fourth Line Channel Command */
#define REG_PROV_DMA_CTRL0_CH3_STATIC_REG0     (*(RwReg  *)0x40002310U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Static Configuration Read */
#define REG_PROV_DMA_CTRL0_CH3_STATIC_REG1     (*(RwReg  *)0x40002314U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Static Configuration Write */
#define REG_PROV_DMA_CTRL0_CH3_STATIC_REG2     (*(RwReg  *)0x40002318U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Block Mode */
#define REG_PROV_DMA_CTRL0_CH3_STATIC_REG4     (*(RwReg  *)0x40002320U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Static Configuration Peripheral */
#define REG_PROV_DMA_CTRL0_CH3_RESRICT_REG     (*(RoReg16*)0x4000232cU) /**< \brief (PROV_DMA_CTRL0) Channel 3 Restrictions Status Register */
#define REG_PROV_DMA_CTRL0_CH3_FIFO_FULLNESS_REG (*(RoReg  *)0x40002338U) /**< \brief (PROV_DMA_CTRL0) Channel 3 FIFO Fullness Status Register */
#define REG_PROV_DMA_CTRL0_CH3_CH_ENABLE_REG   (*(RwReg8 *)0x40002340U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Channel Enable Register */
#define REG_PROV_DMA_CTRL0_CH3_CH_START_REG    (*(WoReg8 *)0x40002344U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Channel Start Register */
#define REG_PROV_DMA_CTRL0_CH3_CH_ACTIVE_REG   (*(RoReg8 *)0x40002348U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Channel Active Status Register */
#define REG_PROV_DMA_CTRL0_CH3_COUNT_REG       (*(RoReg  *)0x40002350U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Buffer Counter Status Register */
#define REG_PROV_DMA_CTRL0_CH3_INT_RAWSTAT_REG (*(RwReg8 *)0x400023a0U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Interrupt Raw Status (Write 1 to any field to issue interrupt) */
#define REG_PROV_DMA_CTRL0_CH3_INT_CLEAR_REG   (*(RwReg8 *)0x400023a4U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Interrupt Clear (Write 1 to clear) */
#define REG_PROV_DMA_CTRL0_CH3_INT_ENABLE_REG  (*(RwReg8 *)0x400023a8U) /**< \brief (PROV_DMA_CTRL0) Channel 3 Interrupt Enable */
#define REG_PROV_DMA_CTRL0_CH3_INT_STATUS_REG  (*(RwReg8 *)0x400023acU) /**< \brief (PROV_DMA_CTRL0) Channel 3 Interrupt Status */
#define REG_PROV_DMA_CTRL0_CORE_INT_STATUS     (*(RoReg8 *)0x40002800U) /**< \brief (PROV_DMA_CTRL0) Indicates which channels caused interrupt */
#define REG_PROV_DMA_CTRL0_CORE_JOINT_MODE     (*(RwReg8 *)0x40002830U) /**< \brief (PROV_DMA_CTRL0) If set, core works in joint mode */
#define REG_PROV_DMA_CTRL0_CORE_PRIORITY       (*(RwReg16*)0x40002838U) /**< \brief (PROV_DMA_CTRL0) Core Priority Channels */
#define REG_PROV_DMA_CTRL0_CORE_CLKDIV         (*(RwReg8 *)0x40002840U) /**< \brief (PROV_DMA_CTRL0) Ratio between main clock and core clock */
#define REG_PROV_DMA_CTRL0_CORE_CH_START       (*(WoReg8 *)0x40002848U) /**< \brief (PROV_DMA_CTRL0) Channel Start */
#define REG_PROV_DMA_CTRL0_PERIPH_RX_CTRL      (*(RwReg  *)0x40002850U) /**< \brief (PROV_DMA_CTRL0) Direct control of peripheral RX request */
#define REG_PROV_DMA_CTRL0_PERIPH_TX_CTRL      (*(RwReg  *)0x40002860U) /**< \brief (PROV_DMA_CTRL0) Direct control of peripheral TX request */
#define REG_PROV_DMA_CTRL0_CORE_IDLE           (*(RoReg8 *)0x400028d0U) /**< \brief (PROV_DMA_CTRL0) Indicates all channels have stopped and transactions have completed */
#define REG_PROV_DMA_CTRL0_USER_DEF_STATUS     (*(RoReg  *)0x400028e0U) /**< \brief (PROV_DMA_CTRL0) User Defined Configurations */
#define REG_PROV_DMA_CTRL0_CORE_DEF_STATUS0    (*(RoReg  *)0x400028f0U) /**< \brief (PROV_DMA_CTRL0) User Defined Core Configurations 0 */
#define REG_PROV_DMA_CTRL0_CORE_DEF_STATUS1    (*(RoReg16*)0x400028f4U) /**< \brief (PROV_DMA_CTRL0) User Defined Core Configurations 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMB11_PROV_DMA_CTRL0_INSTANCE_ */