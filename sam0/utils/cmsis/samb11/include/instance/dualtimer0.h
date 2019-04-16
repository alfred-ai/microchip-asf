/**
 * \file
 *
 * \brief Instance description for DUALTIMER0
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

#ifndef _SAMB11_DUALTIMER0_INSTANCE_
#define _SAMB11_DUALTIMER0_INSTANCE_

/* ========== Register definition for DUALTIMER0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_DUALTIMER0_TIMER1LOAD          (0x40001000U) /**< \brief (DUALTIMER0) Timer 1 Load Register */
#define REG_DUALTIMER0_TIMER1VALUE         (0x40001004U) /**< \brief (DUALTIMER0) Timer 1 Current Value Register */
#define REG_DUALTIMER0_TIMER1CONTROL       (0x40001008U) /**< \brief (DUALTIMER0) Timer 1 Control Register */
#define REG_DUALTIMER0_TIMER1INTCLR        (0x4000100cU) /**< \brief (DUALTIMER0) Timer 1 Interrupt Clear Register */
#define REG_DUALTIMER0_TIMER1RIS           (0x40001010U) /**< \brief (DUALTIMER0) Timer 1 Raw Interrupt Status Register */
#define REG_DUALTIMER0_TIMER1MIS           (0x40001014U) /**< \brief (DUALTIMER0) Timer 1 Masked Interrupt Status Register */
#define REG_DUALTIMER0_TIMER1BGLOAD        (0x40001018U) /**< \brief (DUALTIMER0) Timer 1 Background Load Register (Reload Value for Period Mode) */
#define REG_DUALTIMER0_TIMER2LOAD          (0x40001020U) /**< \brief (DUALTIMER0) Timer 2 Load Register */
#define REG_DUALTIMER0_TIMER2VALUE         (0x40001024U) /**< \brief (DUALTIMER0) Timer 2 Current Value Register */
#define REG_DUALTIMER0_TIMER2CONTROL       (0x40001028U) /**< \brief (DUALTIMER0) Timer 2 Control Register */
#define REG_DUALTIMER0_TIMER2INTCLR        (0x4000102cU) /**< \brief (DUALTIMER0) Timer 2 Interrupt Clear Register */
#define REG_DUALTIMER0_TIMER2RIS           (0x40001030U) /**< \brief (DUALTIMER0) Timer 2 Raw Interrupt Status Register */
#define REG_DUALTIMER0_TIMER2MIS           (0x40001034U) /**< \brief (DUALTIMER0) Timer 2 Masked Interrupt Status Register */
#define REG_DUALTIMER0_TIMER2BGLOAD        (0x40001038U) /**< \brief (DUALTIMER0) Timer 2 Background Load Register (Reload Value for Period Mode) */
#define REG_DUALTIMER0_TIMERITCR           (0x40001f00U) /**< \brief (DUALTIMER0) Integration Test Control Register */
#define REG_DUALTIMER0_TIMERITOP           (0x40001f04U) /**< \brief (DUALTIMER0) Integration Test Output Set Register */
#define REG_DUALTIMER0_TIMERPERIPHID4      (0x40001fd0U) /**< \brief (DUALTIMER0) Peripheral ID Register 4 */
#define REG_DUALTIMER0_TIMERPERIPHID5      (0x40001fd4U) /**< \brief (DUALTIMER0) Peripheral ID Register 5 */
#define REG_DUALTIMER0_TIMERPERIPHID6      (0x40001fd8U) /**< \brief (DUALTIMER0) Peripheral ID Register 6 */
#define REG_DUALTIMER0_TIMERPERIPHID7      (0x40001fdcU) /**< \brief (DUALTIMER0) Peripheral ID Register 7 */
#define REG_DUALTIMER0_TIMERPERIPHID0      (0x40001fe0U) /**< \brief (DUALTIMER0) Peripheral ID Register 0 */
#define REG_DUALTIMER0_TIMERPERIPHID1      (0x40001fe4U) /**< \brief (DUALTIMER0) Peripheral ID Register 1 */
#define REG_DUALTIMER0_TIMERPERIPHID2      (0x40001fe8U) /**< \brief (DUALTIMER0) Peripheral ID Register 2 */
#define REG_DUALTIMER0_TIMERPERIPHID3      (0x40001fecU) /**< \brief (DUALTIMER0) Peripheral ID Register 3 */
#define REG_DUALTIMER0_TIMERPCELLID0       (0x40001ff0U) /**< \brief (DUALTIMER0) Component ID Register 0 */
#define REG_DUALTIMER0_TIMERPCELLID1       (0x40001ff4U) /**< \brief (DUALTIMER0) Component ID Register 1 */
#define REG_DUALTIMER0_TIMERPCELLID2       (0x40001ff8U) /**< \brief (DUALTIMER0) Component ID Register 2 */
#define REG_DUALTIMER0_TIMERPCELLID3       (0x40001ffcU) /**< \brief (DUALTIMER0) Component ID Register 3 */
#else
#define REG_DUALTIMER0_TIMER1LOAD          (*(RwReg  *)0x40001000U) /**< \brief (DUALTIMER0) Timer 1 Load Register */
#define REG_DUALTIMER0_TIMER1VALUE         (*(RoReg  *)0x40001004U) /**< \brief (DUALTIMER0) Timer 1 Current Value Register */
#define REG_DUALTIMER0_TIMER1CONTROL       (*(RwReg8 *)0x40001008U) /**< \brief (DUALTIMER0) Timer 1 Control Register */
#define REG_DUALTIMER0_TIMER1INTCLR        (*(WoReg8 *)0x4000100cU) /**< \brief (DUALTIMER0) Timer 1 Interrupt Clear Register */
#define REG_DUALTIMER0_TIMER1RIS           (*(RoReg8 *)0x40001010U) /**< \brief (DUALTIMER0) Timer 1 Raw Interrupt Status Register */
#define REG_DUALTIMER0_TIMER1MIS           (*(RoReg8 *)0x40001014U) /**< \brief (DUALTIMER0) Timer 1 Masked Interrupt Status Register */
#define REG_DUALTIMER0_TIMER1BGLOAD        (*(RwReg  *)0x40001018U) /**< \brief (DUALTIMER0) Timer 1 Background Load Register (Reload Value for Period Mode) */
#define REG_DUALTIMER0_TIMER2LOAD          (*(RwReg  *)0x40001020U) /**< \brief (DUALTIMER0) Timer 2 Load Register */
#define REG_DUALTIMER0_TIMER2VALUE         (*(RoReg  *)0x40001024U) /**< \brief (DUALTIMER0) Timer 2 Current Value Register */
#define REG_DUALTIMER0_TIMER2CONTROL       (*(RwReg8 *)0x40001028U) /**< \brief (DUALTIMER0) Timer 2 Control Register */
#define REG_DUALTIMER0_TIMER2INTCLR        (*(WoReg8 *)0x4000102cU) /**< \brief (DUALTIMER0) Timer 2 Interrupt Clear Register */
#define REG_DUALTIMER0_TIMER2RIS           (*(RoReg8 *)0x40001030U) /**< \brief (DUALTIMER0) Timer 2 Raw Interrupt Status Register */
#define REG_DUALTIMER0_TIMER2MIS           (*(RoReg8 *)0x40001034U) /**< \brief (DUALTIMER0) Timer 2 Masked Interrupt Status Register */
#define REG_DUALTIMER0_TIMER2BGLOAD        (*(RwReg  *)0x40001038U) /**< \brief (DUALTIMER0) Timer 2 Background Load Register (Reload Value for Period Mode) */
#define REG_DUALTIMER0_TIMERITCR           (*(RwReg8 *)0x40001f00U) /**< \brief (DUALTIMER0) Integration Test Control Register */
#define REG_DUALTIMER0_TIMERITOP           (*(WoReg8 *)0x40001f04U) /**< \brief (DUALTIMER0) Integration Test Output Set Register */
#define REG_DUALTIMER0_TIMERPERIPHID4      (*(RoReg8 *)0x40001fd0U) /**< \brief (DUALTIMER0) Peripheral ID Register 4 */
#define REG_DUALTIMER0_TIMERPERIPHID5      (*(RoReg8 *)0x40001fd4U) /**< \brief (DUALTIMER0) Peripheral ID Register 5 */
#define REG_DUALTIMER0_TIMERPERIPHID6      (*(RoReg8 *)0x40001fd8U) /**< \brief (DUALTIMER0) Peripheral ID Register 6 */
#define REG_DUALTIMER0_TIMERPERIPHID7      (*(RoReg8 *)0x40001fdcU) /**< \brief (DUALTIMER0) Peripheral ID Register 7 */
#define REG_DUALTIMER0_TIMERPERIPHID0      (*(RoReg8 *)0x40001fe0U) /**< \brief (DUALTIMER0) Peripheral ID Register 0 */
#define REG_DUALTIMER0_TIMERPERIPHID1      (*(RoReg8 *)0x40001fe4U) /**< \brief (DUALTIMER0) Peripheral ID Register 1 */
#define REG_DUALTIMER0_TIMERPERIPHID2      (*(RoReg8 *)0x40001fe8U) /**< \brief (DUALTIMER0) Peripheral ID Register 2 */
#define REG_DUALTIMER0_TIMERPERIPHID3      (*(RoReg8 *)0x40001fecU) /**< \brief (DUALTIMER0) Peripheral ID Register 3 */
#define REG_DUALTIMER0_TIMERPCELLID0       (*(RoReg8 *)0x40001ff0U) /**< \brief (DUALTIMER0) Component ID Register 0 */
#define REG_DUALTIMER0_TIMERPCELLID1       (*(RoReg8 *)0x40001ff4U) /**< \brief (DUALTIMER0) Component ID Register 1 */
#define REG_DUALTIMER0_TIMERPCELLID2       (*(RoReg8 *)0x40001ff8U) /**< \brief (DUALTIMER0) Component ID Register 2 */
#define REG_DUALTIMER0_TIMERPCELLID3       (*(RoReg8 *)0x40001ffcU) /**< \brief (DUALTIMER0) Component ID Register 3 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMB11_DUALTIMER0_INSTANCE_ */