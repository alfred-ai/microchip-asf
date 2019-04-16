/**
 * \file
 *
 * Copyright (c) 2014-2015 Atmel Corporation. All rights reserved.
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
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */

#ifndef _SAM4CM_IPC0_INSTANCE_
#define _SAM4CM_IPC0_INSTANCE_

/* ========== Register definition for IPC0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
  #define REG_IPC0_ISCR                 (0x4004C000U) /**< \brief (IPC0) Interrupt Set Command Register */
  #define REG_IPC0_ICCR                 (0x4004C004U) /**< \brief (IPC0) Interrupt Clear Command Register */
  #define REG_IPC0_IPR                  (0x4004C008U) /**< \brief (IPC0) Interrupt Pending Register */
  #define REG_IPC0_IECR                 (0x4004C00CU) /**< \brief (IPC0) Interrupt Enable Command Register */
  #define REG_IPC0_IDCR                 (0x4004C010U) /**< \brief (IPC0) Interrupt Disable Command Register */
  #define REG_IPC0_IMR                  (0x4004C014U) /**< \brief (IPC0) Interrupt Mask Register */
  #define REG_IPC0_ISR                  (0x4004C018U) /**< \brief (IPC0) Interrupt Status Register */
#else
  #define REG_IPC0_ISCR (*(__O uint32_t*)0x4004C000U) /**< \brief (IPC0) Interrupt Set Command Register */
  #define REG_IPC0_ICCR (*(__O uint32_t*)0x4004C004U) /**< \brief (IPC0) Interrupt Clear Command Register */
  #define REG_IPC0_IPR  (*(__I uint32_t*)0x4004C008U) /**< \brief (IPC0) Interrupt Pending Register */
  #define REG_IPC0_IECR (*(__O uint32_t*)0x4004C00CU) /**< \brief (IPC0) Interrupt Enable Command Register */
  #define REG_IPC0_IDCR (*(__O uint32_t*)0x4004C010U) /**< \brief (IPC0) Interrupt Disable Command Register */
  #define REG_IPC0_IMR  (*(__I uint32_t*)0x4004C014U) /**< \brief (IPC0) Interrupt Mask Register */
  #define REG_IPC0_ISR  (*(__I uint32_t*)0x4004C018U) /**< \brief (IPC0) Interrupt Status Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM4CM_IPC0_INSTANCE_ */
