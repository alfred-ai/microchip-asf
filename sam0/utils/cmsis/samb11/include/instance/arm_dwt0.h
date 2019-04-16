/**
 * \file
 *
 * \brief Instance description for ARM_DWT0
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

#ifndef _SAMB11_ARM_DWT0_INSTANCE_
#define _SAMB11_ARM_DWT0_INSTANCE_

/* ========== Register definition for ARM_DWT0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_ARM_DWT0_DWT_CTRL            (0xe0001000LU) /**< \brief (ARM_DWT0) Control Register */
#define REG_ARM_DWT0_DWT_PCSR            (0xe000101cLU) /**< \brief (ARM_DWT0) Program Counter Sample Register */
#define REG_ARM_DWT0_DWT_COMP0           (0xe0001020LU) /**< \brief (ARM_DWT0) DWT Compare Register 0 */
#define REG_ARM_DWT0_DWT_MASK0           (0xe0001024LU) /**< \brief (ARM_DWT0) DWT Mask Register 0 */
#define REG_ARM_DWT0_DWT_FUNCTION0       (0xe0001028LU) /**< \brief (ARM_DWT0) DWT Function Register 0 */
#define REG_ARM_DWT0_DWT_COMP1           (0xe0001030LU) /**< \brief (ARM_DWT0) DWT Compare Register 1 */
#define REG_ARM_DWT0_DWT_MASK1           (0xe0001034LU) /**< \brief (ARM_DWT0) DWT Mask Register 1 */
#define REG_ARM_DWT0_DWT_FUNCTION1       (0xe0001038LU) /**< \brief (ARM_DWT0) DWT Function Register 1 */
#define REG_ARM_DWT0_DWT_PID4            (0xe0001fd0LU) /**< \brief (ARM_DWT0) Peripheral ID Register 4 */
#define REG_ARM_DWT0_DWT_PID0            (0xe0001fe0LU) /**< \brief (ARM_DWT0) Peripheral ID Register 0 */
#define REG_ARM_DWT0_DWT_PID1            (0xe0001fe4LU) /**< \brief (ARM_DWT0) Peripheral ID Register 1 */
#define REG_ARM_DWT0_DWT_PID2            (0xe0001fe8LU) /**< \brief (ARM_DWT0) Peripheral ID Register 2 */
#define REG_ARM_DWT0_DWT_PID3            (0xe0001fecLU) /**< \brief (ARM_DWT0) Peripheral ID Register 3 */
#define REG_ARM_DWT0_DWT_CID0            (0xe0001ff0LU) /**< \brief (ARM_DWT0) Component ID Register 0 */
#define REG_ARM_DWT0_DWT_CID1            (0xe0001ff4LU) /**< \brief (ARM_DWT0) Component ID Register 1 */
#define REG_ARM_DWT0_DWT_CID2            (0xe0001ff8LU) /**< \brief (ARM_DWT0) Component ID Register 2 */
#define REG_ARM_DWT0_DWT_CID3            (0xe0001ffcLU) /**< \brief (ARM_DWT0) Component ID Register 3 */
#else
#define REG_ARM_DWT0_DWT_CTRL            (*(RoReg  *)0xe0001000LU) /**< \brief (ARM_DWT0) Control Register */
#define REG_ARM_DWT0_DWT_PCSR            (*(RoReg  *)0xe000101cLU) /**< \brief (ARM_DWT0) Program Counter Sample Register */
#define REG_ARM_DWT0_DWT_COMP0           (*(RwReg  *)0xe0001020LU) /**< \brief (ARM_DWT0) DWT Compare Register 0 */
#define REG_ARM_DWT0_DWT_MASK0           (*(RwReg8 *)0xe0001024LU) /**< \brief (ARM_DWT0) DWT Mask Register 0 */
#define REG_ARM_DWT0_DWT_FUNCTION0       (*(RoReg  *)0xe0001028LU) /**< \brief (ARM_DWT0) DWT Function Register 0 */
#define REG_ARM_DWT0_DWT_COMP1           (*(RwReg  *)0xe0001030LU) /**< \brief (ARM_DWT0) DWT Compare Register 1 */
#define REG_ARM_DWT0_DWT_MASK1           (*(RwReg8 *)0xe0001034LU) /**< \brief (ARM_DWT0) DWT Mask Register 1 */
#define REG_ARM_DWT0_DWT_FUNCTION1       (*(RoReg  *)0xe0001038LU) /**< \brief (ARM_DWT0) DWT Function Register 1 */
#define REG_ARM_DWT0_DWT_PID4            (*(RoReg8 *)0xe0001fd0LU) /**< \brief (ARM_DWT0) Peripheral ID Register 4 */
#define REG_ARM_DWT0_DWT_PID0            (*(RoReg8 *)0xe0001fe0LU) /**< \brief (ARM_DWT0) Peripheral ID Register 0 */
#define REG_ARM_DWT0_DWT_PID1            (*(RoReg8 *)0xe0001fe4LU) /**< \brief (ARM_DWT0) Peripheral ID Register 1 */
#define REG_ARM_DWT0_DWT_PID2            (*(RoReg8 *)0xe0001fe8LU) /**< \brief (ARM_DWT0) Peripheral ID Register 2 */
#define REG_ARM_DWT0_DWT_PID3            (*(RoReg8 *)0xe0001fecLU) /**< \brief (ARM_DWT0) Peripheral ID Register 3 */
#define REG_ARM_DWT0_DWT_CID0            (*(RoReg8 *)0xe0001ff0LU) /**< \brief (ARM_DWT0) Component ID Register 0 */
#define REG_ARM_DWT0_DWT_CID1            (*(RoReg8 *)0xe0001ff4LU) /**< \brief (ARM_DWT0) Component ID Register 1 */
#define REG_ARM_DWT0_DWT_CID2            (*(RoReg8 *)0xe0001ff8LU) /**< \brief (ARM_DWT0) Component ID Register 2 */
#define REG_ARM_DWT0_DWT_CID3            (*(RoReg8 *)0xe0001ffcLU) /**< \brief (ARM_DWT0) Component ID Register 3 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMB11_ARM_DWT0_INSTANCE_ */