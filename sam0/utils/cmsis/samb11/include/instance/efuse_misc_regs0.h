/**
 * \file
 *
 * \brief Instance description for EFUSE_MISC_REGS0
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

#ifndef _SAMB11_EFUSE_MISC_REGS0_INSTANCE_
#define _SAMB11_EFUSE_MISC_REGS0_INSTANCE_

/* ========== Register definition for EFUSE_MISC_REGS0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_EFUSE_MISC_REGS0_EFUSE_GLOBAL_RESET  (0x4000a000U) /**< \brief (EFUSE_MISC_REGS0) Active Low Global Reset */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_CONTROL     (0x4000a004U) /**< \brief (EFUSE_MISC_REGS0) EFUSE 1 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_CONTROL     (0x4000a008U) /**< \brief (EFUSE_MISC_REGS0) EFUSE 2 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_CONTROL     (0x4000a00cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE 3 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_CONTROL     (0x4000a010U) /**< \brief (EFUSE_MISC_REGS0) EFUSE 4 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_CONTROL     (0x4000a014U) /**< \brief (EFUSE_MISC_REGS0) EFUSE 5 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_CONTROL     (0x4000a018U) /**< \brief (EFUSE_MISC_REGS0) EFUSE 6 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_0      (0x4000a01cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_1      (0x4000a020U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_2      (0x4000a024U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_3      (0x4000a028U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_0    (0x4000a02cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_1    (0x4000a030U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_2    (0x4000a034U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_3    (0x4000a038U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_0      (0x4000a03cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_1      (0x4000a040U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_2      (0x4000a044U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_3      (0x4000a048U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_0    (0x4000a04cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_1    (0x4000a050U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_2    (0x4000a054U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_3    (0x4000a058U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_0      (0x4000a05cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_1      (0x4000a060U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_2      (0x4000a064U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_3      (0x4000a068U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_0    (0x4000a06cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_1    (0x4000a070U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_2    (0x4000a074U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_3    (0x4000a078U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_0      (0x4000a07cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_1      (0x4000a080U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_2      (0x4000a084U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_3      (0x4000a088U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_0    (0x4000a08cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_1    (0x4000a090U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_2    (0x4000a094U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_3    (0x4000a098U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_0      (0x4000a09cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_1      (0x4000a0a0U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_5_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_2      (0x4000a0a4U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_5_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_3      (0x4000a0a8U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_5_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_0    (0x4000a0acU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_5_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_1    (0x4000a0b0U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_5_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_2    (0x4000a0b4U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_5_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_3    (0x4000a0b8U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_5_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_0      (0x4000a0bcU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_1      (0x4000a0c0U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_2      (0x4000a0c4U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_3      (0x4000a0c8U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_0    (0x4000a0ccU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_1    (0x4000a0d0U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_2    (0x4000a0d4U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_3    (0x4000a0d8U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_MISC_CTRL     (0x4000a0dcU) /**< \brief (EFUSE_MISC_REGS0) EFUSE 6 Control Register */
#else
#define REG_EFUSE_MISC_REGS0_EFUSE_GLOBAL_RESET  (*(RwReg8 *)0x4000a000U) /**< \brief (EFUSE_MISC_REGS0) Active Low Global Reset */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_CONTROL     (*(RwReg  *)0x4000a004U) /**< \brief (EFUSE_MISC_REGS0) EFUSE 1 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_CONTROL     (*(RwReg  *)0x4000a008U) /**< \brief (EFUSE_MISC_REGS0) EFUSE 2 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_CONTROL     (*(RwReg  *)0x4000a00cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE 3 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_CONTROL     (*(RwReg  *)0x4000a010U) /**< \brief (EFUSE_MISC_REGS0) EFUSE 4 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_CONTROL     (*(RwReg  *)0x4000a014U) /**< \brief (EFUSE_MISC_REGS0) EFUSE 5 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_CONTROL     (*(RwReg  *)0x4000a018U) /**< \brief (EFUSE_MISC_REGS0) EFUSE 6 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_0      (*(RwReg  *)0x4000a01cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_1      (*(RwReg  *)0x4000a020U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_2      (*(RwReg  *)0x4000a024U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_3      (*(RwReg  *)0x4000a028U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_0    (*(RoReg  *)0x4000a02cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_1    (*(RoReg  *)0x4000a030U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_2    (*(RoReg  *)0x4000a034U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_3    (*(RoReg  *)0x4000a038U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_1_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_0      (*(RwReg  *)0x4000a03cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_1      (*(RwReg  *)0x4000a040U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_2      (*(RwReg  *)0x4000a044U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_3      (*(RwReg  *)0x4000a048U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_0    (*(RoReg  *)0x4000a04cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_1    (*(RoReg  *)0x4000a050U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_2    (*(RoReg  *)0x4000a054U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_3    (*(RoReg  *)0x4000a058U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_2_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_0      (*(RwReg  *)0x4000a05cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_1      (*(RwReg  *)0x4000a060U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_2      (*(RwReg  *)0x4000a064U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_3      (*(RwReg  *)0x4000a068U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_0    (*(RoReg  *)0x4000a06cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_1    (*(RoReg  *)0x4000a070U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_2    (*(RoReg  *)0x4000a074U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_3    (*(RoReg  *)0x4000a078U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_3_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_0      (*(RwReg  *)0x4000a07cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_1      (*(RwReg  *)0x4000a080U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_2      (*(RwReg  *)0x4000a084U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_3      (*(RwReg  *)0x4000a088U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_0    (*(RoReg  *)0x4000a08cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_1    (*(RoReg  *)0x4000a090U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_2    (*(RoReg  *)0x4000a094U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_3    (*(RoReg  *)0x4000a098U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_0      (*(RwReg  *)0x4000a09cU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_4_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_1      (*(RwReg  *)0x4000a0a0U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_5_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_2      (*(RwReg  *)0x4000a0a4U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_5_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_3      (*(RwReg  *)0x4000a0a8U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_5_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_0    (*(RoReg  *)0x4000a0acU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_5_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_1    (*(RoReg  *)0x4000a0b0U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_5_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_2    (*(RoReg  *)0x4000a0b4U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_5_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_3    (*(RoReg  *)0x4000a0b8U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_5_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_0      (*(RwReg  *)0x4000a0bcU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_1      (*(RwReg  *)0x4000a0c0U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_2      (*(RwReg  *)0x4000a0c4U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_3      (*(RwReg  *)0x4000a0c8U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_0    (*(RoReg  *)0x4000a0ccU) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_1    (*(RoReg  *)0x4000a0d0U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_2    (*(RoReg  *)0x4000a0d4U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_3    (*(RoReg  *)0x4000a0d8U) /**< \brief (EFUSE_MISC_REGS0) EFUSE_6_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_MISC_CTRL     (*(RoReg8 *)0x4000a0dcU) /**< \brief (EFUSE_MISC_REGS0) EFUSE 6 Control Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMB11_EFUSE_MISC_REGS0_INSTANCE_ */