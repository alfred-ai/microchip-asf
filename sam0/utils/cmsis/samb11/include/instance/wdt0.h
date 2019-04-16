/**
 * \file
 *
 * \brief Instance description for WDT0
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

#ifndef _SAMB11_WDT0_INSTANCE_
#define _SAMB11_WDT0_INSTANCE_

/* ========== Register definition for WDT0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_WDT0_WDOGLOAD            (0x40008000U) /**< \brief (WDT0) Watchdog Load Register */
#define REG_WDT0_WDOGVALUE           (0x40008004U) /**< \brief (WDT0) Watchdog Value Register */
#define REG_WDT0_WDOGCONTROL         (0x40008008U) /**< \brief (WDT0) Watchdog Control Register */
#define REG_WDT0_WDOGINTCLR          (0x4000800cU) /**< \brief (WDT0) Watchdog Clear Interrupt Register */
#define REG_WDT0_WDOGRIS             (0x40008010U) /**< \brief (WDT0) Watchdog Raw Interrupt Status Register */
#define REG_WDT0_WDOGMIS             (0x40008014U) /**< \brief (WDT0) Watchdog Interrupt Status Register */
#define REG_WDT0_WDOGLOCK            (0x40008c00U) /**< \brief (WDT0) Watchdog Lock Register (Write 0x1ACCE551 to enable write access to all other registers) */
#define REG_WDT0_WDOGITCR            (0x40008f00U) /**< \brief (WDT0) Watchdog Integration Test Control Register */
#define REG_WDT0_WDOGITOP            (0x40008f04U) /**< \brief (WDT0) Watchdog Integration Test Output Set Register */
#define REG_WDT0_WDOGPERIPHID4       (0x40008fd0U) /**< \brief (WDT0) Peripheral ID Register 4 */
#define REG_WDT0_WDOGPERIPHID5       (0x40008fd4U) /**< \brief (WDT0) Peripheral ID Register 5 */
#define REG_WDT0_WDOGPERIPHID6       (0x40008fd8U) /**< \brief (WDT0) Peripheral ID Register 6 */
#define REG_WDT0_WDOGPERIPHID7       (0x40008fdcU) /**< \brief (WDT0) Peripheral ID Register 7 */
#define REG_WDT0_WDOGPERIPHID0       (0x40008fe0U) /**< \brief (WDT0) Peripheral ID Register 0 */
#define REG_WDT0_WDOGPERIPHID1       (0x40008fe4U) /**< \brief (WDT0) Peripheral ID Register 1 */
#define REG_WDT0_WDOGPERIPHID2       (0x40008fe8U) /**< \brief (WDT0) Peripheral ID Register 2 */
#define REG_WDT0_WDOGPERIPHID3       (0x40008fecU) /**< \brief (WDT0) Peripheral ID Register 3 */
#define REG_WDT0_WDOGPCELLID0        (0x40008ff0U) /**< \brief (WDT0) Component ID Register 0 */
#define REG_WDT0_WDOGPCELLID1        (0x40008ff4U) /**< \brief (WDT0) Component ID Register 1 */
#define REG_WDT0_WDOGPCELLID2        (0x40008ff8U) /**< \brief (WDT0) Component ID Register 2 */
#define REG_WDT0_WDOGPCELLID3        (0x40008ffcU) /**< \brief (WDT0) Component ID Register 3 */
#else
#define REG_WDT0_WDOGLOAD            (*(RwReg  *)0x40008000U) /**< \brief (WDT0) Watchdog Load Register */
#define REG_WDT0_WDOGVALUE           (*(RoReg  *)0x40008004U) /**< \brief (WDT0) Watchdog Value Register */
#define REG_WDT0_WDOGCONTROL         (*(RwReg8 *)0x40008008U) /**< \brief (WDT0) Watchdog Control Register */
#define REG_WDT0_WDOGINTCLR          (*(WoReg8 *)0x4000800cU) /**< \brief (WDT0) Watchdog Clear Interrupt Register */
#define REG_WDT0_WDOGRIS             (*(RoReg8 *)0x40008010U) /**< \brief (WDT0) Watchdog Raw Interrupt Status Register */
#define REG_WDT0_WDOGMIS             (*(RoReg8 *)0x40008014U) /**< \brief (WDT0) Watchdog Interrupt Status Register */
#define REG_WDT0_WDOGLOCK            (*(RwReg  *)0x40008c00U) /**< \brief (WDT0) Watchdog Lock Register (Write 0x1ACCE551 to enable write access to all other registers) */
#define REG_WDT0_WDOGITCR            (*(RwReg8 *)0x40008f00U) /**< \brief (WDT0) Watchdog Integration Test Control Register */
#define REG_WDT0_WDOGITOP            (*(RwReg8 *)0x40008f04U) /**< \brief (WDT0) Watchdog Integration Test Output Set Register */
#define REG_WDT0_WDOGPERIPHID4       (*(RoReg8 *)0x40008fd0U) /**< \brief (WDT0) Peripheral ID Register 4 */
#define REG_WDT0_WDOGPERIPHID5       (*(RoReg8 *)0x40008fd4U) /**< \brief (WDT0) Peripheral ID Register 5 */
#define REG_WDT0_WDOGPERIPHID6       (*(RoReg8 *)0x40008fd8U) /**< \brief (WDT0) Peripheral ID Register 6 */
#define REG_WDT0_WDOGPERIPHID7       (*(RoReg8 *)0x40008fdcU) /**< \brief (WDT0) Peripheral ID Register 7 */
#define REG_WDT0_WDOGPERIPHID0       (*(RoReg8 *)0x40008fe0U) /**< \brief (WDT0) Peripheral ID Register 0 */
#define REG_WDT0_WDOGPERIPHID1       (*(RoReg8 *)0x40008fe4U) /**< \brief (WDT0) Peripheral ID Register 1 */
#define REG_WDT0_WDOGPERIPHID2       (*(RoReg8 *)0x40008fe8U) /**< \brief (WDT0) Peripheral ID Register 2 */
#define REG_WDT0_WDOGPERIPHID3       (*(RoReg8 *)0x40008fecU) /**< \brief (WDT0) Peripheral ID Register 3 */
#define REG_WDT0_WDOGPCELLID0        (*(RoReg8 *)0x40008ff0U) /**< \brief (WDT0) Component ID Register 0 */
#define REG_WDT0_WDOGPCELLID1        (*(RoReg8 *)0x40008ff4U) /**< \brief (WDT0) Component ID Register 1 */
#define REG_WDT0_WDOGPCELLID2        (*(RoReg8 *)0x40008ff8U) /**< \brief (WDT0) Component ID Register 2 */
#define REG_WDT0_WDOGPCELLID3        (*(RoReg8 *)0x40008ffcU) /**< \brief (WDT0) Component ID Register 3 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMB11_WDT0_INSTANCE_ */