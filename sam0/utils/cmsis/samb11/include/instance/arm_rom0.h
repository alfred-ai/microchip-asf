/**
 * \file
 *
 * \brief Instance description for ARM_ROM0
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

#ifndef _SAMB11_ARM_ROM0_INSTANCE_
#define _SAMB11_ARM_ROM0_INSTANCE_

/* ========== Register definition for ARM_ROM0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_ARM_ROM0_ROM_SCS             (0xe00ff000LU) /**< \brief (ARM_ROM0) Points to the SCS at 0xE000E000 */
#define REG_ARM_ROM0_ROM_DWT             (0xe00ff010LU) /**< \brief (ARM_ROM0) Points to the DWT at 0xE0001000 */
#define REG_ARM_ROM0_ROM_BPU             (0xe00ff020LU) /**< \brief (ARM_ROM0) Points to the BPU at 0xE0002000 */
#define REG_ARM_ROM0_ROM_EOT             (0xe00ff030LU) /**< \brief (ARM_ROM0) End of Table Marker */
#define REG_ARM_ROM0_ROM_CSMT            (0xe00fffccLU) /**< \brief (ARM_ROM0) System Memory accessible through DAP */
#define REG_ARM_ROM0_ROM_PID4            (0xe00fffd0LU) /**< \brief (ARM_ROM0) Peripheral ID Register 4 */
#define REG_ARM_ROM0_ROM_PID0            (0xe00fffe0LU) /**< \brief (ARM_ROM0) Peripheral ID Register 0 */
#define REG_ARM_ROM0_ROM_PID1            (0xe00fffe4LU) /**< \brief (ARM_ROM0) Peripheral ID Register 1 */
#define REG_ARM_ROM0_ROM_PID2            (0xe00fffe8LU) /**< \brief (ARM_ROM0) Peripheral ID Register 2 */
#define REG_ARM_ROM0_ROM_PID3            (0xe00fffecLU) /**< \brief (ARM_ROM0) Peripheral ID Register 3 */
#define REG_ARM_ROM0_ROM_CID0            (0xe00ffff0LU) /**< \brief (ARM_ROM0) Component ID Register 0 */
#define REG_ARM_ROM0_ROM_CID1            (0xe00ffff4LU) /**< \brief (ARM_ROM0) Component ID Register 1 */
#define REG_ARM_ROM0_ROM_CID2            (0xe00ffff8LU) /**< \brief (ARM_ROM0) Component ID Register 2 */
#define REG_ARM_ROM0_ROM_CID3            (0xe00ffffcLU) /**< \brief (ARM_ROM0) Component ID Register 3 */
#else
#define REG_ARM_ROM0_ROM_SCS             (*(RoReg  *)0xe00ff000LU) /**< \brief (ARM_ROM0) Points to the SCS at 0xE000E000 */
#define REG_ARM_ROM0_ROM_DWT             (*(RoReg  *)0xe00ff010LU) /**< \brief (ARM_ROM0) Points to the DWT at 0xE0001000 */
#define REG_ARM_ROM0_ROM_BPU             (*(RoReg  *)0xe00ff020LU) /**< \brief (ARM_ROM0) Points to the BPU at 0xE0002000 */
#define REG_ARM_ROM0_ROM_EOT             (*(RoReg  *)0xe00ff030LU) /**< \brief (ARM_ROM0) End of Table Marker */
#define REG_ARM_ROM0_ROM_CSMT            (*(RoReg8 *)0xe00fffccLU) /**< \brief (ARM_ROM0) System Memory accessible through DAP */
#define REG_ARM_ROM0_ROM_PID4            (*(RoReg8 *)0xe00fffd0LU) /**< \brief (ARM_ROM0) Peripheral ID Register 4 */
#define REG_ARM_ROM0_ROM_PID0            (*(RoReg8 *)0xe00fffe0LU) /**< \brief (ARM_ROM0) Peripheral ID Register 0 */
#define REG_ARM_ROM0_ROM_PID1            (*(RoReg8 *)0xe00fffe4LU) /**< \brief (ARM_ROM0) Peripheral ID Register 1 */
#define REG_ARM_ROM0_ROM_PID2            (*(RoReg8 *)0xe00fffe8LU) /**< \brief (ARM_ROM0) Peripheral ID Register 2 */
#define REG_ARM_ROM0_ROM_PID3            (*(RoReg8 *)0xe00fffecLU) /**< \brief (ARM_ROM0) Peripheral ID Register 3 */
#define REG_ARM_ROM0_ROM_CID0            (*(RoReg8 *)0xe00ffff0LU) /**< \brief (ARM_ROM0) Component ID Register 0 */
#define REG_ARM_ROM0_ROM_CID1            (*(RoReg8 *)0xe00ffff4LU) /**< \brief (ARM_ROM0) Component ID Register 1 */
#define REG_ARM_ROM0_ROM_CID2            (*(RoReg8 *)0xe00ffff8LU) /**< \brief (ARM_ROM0) Component ID Register 2 */
#define REG_ARM_ROM0_ROM_CID3            (*(RoReg8 *)0xe00ffffcLU) /**< \brief (ARM_ROM0) Component ID Register 3 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMB11_ARM_ROM0_INSTANCE_ */