/**
 * \file
 *
 * \brief Instance description for AON_SLEEP_TIMER0
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

#ifndef _SAMB11_AON_SLEEP_TIMER0_INSTANCE_
#define _SAMB11_AON_SLEEP_TIMER0_INSTANCE_

/* ========== Register definition for AON_SLEEP_TIMER0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_AON_SLEEP_TIMER0_CONTROL             (0x4000d000U) /**< \brief (AON_SLEEP_TIMER0) Control for the Always On Sleep Timer */
#define REG_AON_SLEEP_TIMER0_SINGLE_COUNT_DURATION (0x4000d004U) /**< \brief (AON_SLEEP_TIMER0) Count for the single count AND reload */
#define REG_AON_SLEEP_TIMER0_CURRENT_COUNT_VALUE (0x4000d00cU) /**< \brief (AON_SLEEP_TIMER0) Current count of the sleep timer */
#else
#define REG_AON_SLEEP_TIMER0_CONTROL             (*(RwReg  *)0x4000d000U) /**< \brief (AON_SLEEP_TIMER0) Control for the Always On Sleep Timer */
#define REG_AON_SLEEP_TIMER0_SINGLE_COUNT_DURATION (*(RwReg  *)0x4000d004U) /**< \brief (AON_SLEEP_TIMER0) Count for the single count AND reload */
#define REG_AON_SLEEP_TIMER0_CURRENT_COUNT_VALUE (*(RoReg  *)0x4000d00cU) /**< \brief (AON_SLEEP_TIMER0) Current count of the sleep timer */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMB11_AON_SLEEP_TIMER0_INSTANCE_ */