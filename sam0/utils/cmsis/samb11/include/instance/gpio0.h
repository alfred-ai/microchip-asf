/**
 * \file
 *
 * \brief Instance description for GPIO0
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

#ifndef _SAMB11_GPIO0_INSTANCE_
#define _SAMB11_GPIO0_INSTANCE_

/* ========== Register definition for GPIO0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_GPIO0_DATA                (0x40010000U) /**< \brief (GPIO0) Data Value */
#define REG_GPIO0_DATAOUT             (0x40010004U) /**< \brief (GPIO0) Data Output Register Value */
#define REG_GPIO0_OUTENSET            (0x40010010U) /**< \brief (GPIO0) Output Enable Set */
#define REG_GPIO0_OUTENCLR            (0x40010014U) /**< \brief (GPIO0) Output Enable Clear */
#define REG_GPIO0_INTENSET            (0x40010020U) /**< \brief (GPIO0) Interrupt Enable Set */
#define REG_GPIO0_INTENCLR            (0x40010024U) /**< \brief (GPIO0) Interrupt Enable Clear */
#define REG_GPIO0_INTTYPESET          (0x40010028U) /**< \brief (GPIO0) Interrupt Type Set */
#define REG_GPIO0_INTTYPECLR          (0x4001002cU) /**< \brief (GPIO0) Interrupt Type Clear */
#define REG_GPIO0_INTPOLSET           (0x40010030U) /**< \brief (GPIO0) Polarity-level, edge IRQ Configuration */
#define REG_GPIO0_INTPOLCLR           (0x40010034U) /**< \brief (GPIO0) IRQ Configuration Clear */
#define REG_GPIO0_INTSTATUSCLEAR      (0x40010038U) /**< \brief (GPIO0) Interrupt Status */
#define REG_GPIO0_PID4                (0x40010fd0U) /**< \brief (GPIO0) Peripheral ID Register 4 */
#define REG_GPIO0_PID5                (0x40010fd4U) /**< \brief (GPIO0) Peripheral ID Register 5 */
#define REG_GPIO0_PID6                (0x40010fd8U) /**< \brief (GPIO0) Peripheral ID Register 6 */
#define REG_GPIO0_PID7                (0x40010fdcU) /**< \brief (GPIO0) Peripheral ID Register 7 */
#define REG_GPIO0_PID0                (0x40010fe0U) /**< \brief (GPIO0) Peripheral ID Register 0 */
#define REG_GPIO0_PID1                (0x40010fe4U) /**< \brief (GPIO0) Peripheral ID Register 1 */
#define REG_GPIO0_PID2                (0x40010fe8U) /**< \brief (GPIO0) Peripheral ID Register 2 */
#define REG_GPIO0_PID3                (0x40010fecU) /**< \brief (GPIO0) Peripheral ID Register 3 */
#define REG_GPIO0_CID0                (0x40010ff0U) /**< \brief (GPIO0) Component ID Register 0 */
#define REG_GPIO0_CID1                (0x40010ff4U) /**< \brief (GPIO0) Component ID Register 1 */
#define REG_GPIO0_CID2                (0x40010ff8U) /**< \brief (GPIO0) Component ID Register 2 */
#define REG_GPIO0_CID3                (0x40010ffcU) /**< \brief (GPIO0) Component ID Register 3 */
#else
#define REG_GPIO0_DATA                (*(RwReg16*)0x40010000U) /**< \brief (GPIO0) Data Value */
#define REG_GPIO0_DATAOUT             (*(RwReg16*)0x40010004U) /**< \brief (GPIO0) Data Output Register Value */
#define REG_GPIO0_OUTENSET            (*(RwReg16*)0x40010010U) /**< \brief (GPIO0) Output Enable Set */
#define REG_GPIO0_OUTENCLR            (*(RwReg16*)0x40010014U) /**< \brief (GPIO0) Output Enable Clear */
#define REG_GPIO0_INTENSET            (*(RwReg16*)0x40010020U) /**< \brief (GPIO0) Interrupt Enable Set */
#define REG_GPIO0_INTENCLR            (*(RwReg16*)0x40010024U) /**< \brief (GPIO0) Interrupt Enable Clear */
#define REG_GPIO0_INTTYPESET          (*(RwReg16*)0x40010028U) /**< \brief (GPIO0) Interrupt Type Set */
#define REG_GPIO0_INTTYPECLR          (*(RwReg16*)0x4001002cU) /**< \brief (GPIO0) Interrupt Type Clear */
#define REG_GPIO0_INTPOLSET           (*(RwReg16*)0x40010030U) /**< \brief (GPIO0) Polarity-level, edge IRQ Configuration */
#define REG_GPIO0_INTPOLCLR           (*(RwReg16*)0x40010034U) /**< \brief (GPIO0) IRQ Configuration Clear */
#define REG_GPIO0_INTSTATUSCLEAR      (*(RwReg16*)0x40010038U) /**< \brief (GPIO0) Interrupt Status */
#define REG_GPIO0_PID4                (*(RoReg8 *)0x40010fd0U) /**< \brief (GPIO0) Peripheral ID Register 4 */
#define REG_GPIO0_PID5                (*(RoReg8 *)0x40010fd4U) /**< \brief (GPIO0) Peripheral ID Register 5 */
#define REG_GPIO0_PID6                (*(RoReg8 *)0x40010fd8U) /**< \brief (GPIO0) Peripheral ID Register 6 */
#define REG_GPIO0_PID7                (*(RoReg8 *)0x40010fdcU) /**< \brief (GPIO0) Peripheral ID Register 7 */
#define REG_GPIO0_PID0                (*(RoReg8 *)0x40010fe0U) /**< \brief (GPIO0) Peripheral ID Register 0 */
#define REG_GPIO0_PID1                (*(RoReg8 *)0x40010fe4U) /**< \brief (GPIO0) Peripheral ID Register 1 */
#define REG_GPIO0_PID2                (*(RoReg8 *)0x40010fe8U) /**< \brief (GPIO0) Peripheral ID Register 2 */
#define REG_GPIO0_PID3                (*(RoReg8 *)0x40010fecU) /**< \brief (GPIO0) Peripheral ID Register 3 */
#define REG_GPIO0_CID0                (*(RoReg8 *)0x40010ff0U) /**< \brief (GPIO0) Component ID Register 0 */
#define REG_GPIO0_CID1                (*(RoReg8 *)0x40010ff4U) /**< \brief (GPIO0) Component ID Register 1 */
#define REG_GPIO0_CID2                (*(RoReg8 *)0x40010ff8U) /**< \brief (GPIO0) Component ID Register 2 */
#define REG_GPIO0_CID3                (*(RoReg8 *)0x40010ffcU) /**< \brief (GPIO0) Component ID Register 3 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMB11_GPIO0_INSTANCE_ */