/**
 * \file
 *
 * \brief Instance description for ARM_SYSCTRL0
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

#ifndef _SAMB11_ARM_SYSCTRL0_INSTANCE_
#define _SAMB11_ARM_SYSCTRL0_INSTANCE_

/* ========== Register definition for ARM_SYSCTRL0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_ARM_SYSCTRL0_ACTLR               (0xe000e008LU) /**< \brief (ARM_SYSCTRL0) Auxiliary Control Register (not implemented) */
#define REG_ARM_SYSCTRL0_SYST_CSR            (0xe000e010LU) /**< \brief (ARM_SYSCTRL0) SysTick Control and Status Register */
#define REG_ARM_SYSCTRL0_SYST_RVR            (0xe000e014LU) /**< \brief (ARM_SYSCTRL0) SysTick Reload Value Register */
#define REG_ARM_SYSCTRL0_SYST_CVR            (0xe000e018LU) /**< \brief (ARM_SYSCTRL0) SysTick Current Value Register (Any Write Clears to 0) */
#define REG_ARM_SYSCTRL0_SYST_CALIB          (0xe000e01cLU) /**< \brief (ARM_SYSCTRL0) SysTick Calibration Value Register */
#define REG_ARM_SYSCTRL0_NVIC_ISER           (0xe000e100LU) /**< \brief (ARM_SYSCTRL0) Interrupt Set-Enable Register */
#define REG_ARM_SYSCTRL0_NVIC_ICER           (0xe000e180LU) /**< \brief (ARM_SYSCTRL0) Interrupt Clear Enable Register */
#define REG_ARM_SYSCTRL0_NVIC_ISPR           (0xe000e200LU) /**< \brief (ARM_SYSCTRL0) Interrupt Set-Pending Register */
#define REG_ARM_SYSCTRL0_NVIC_ICPR           (0xe000e280LU) /**< \brief (ARM_SYSCTRL0) Interrupt Clear-Pending Register */
#define REG_ARM_SYSCTRL0_NVIC_IPR0           (0xe000e400LU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 0 */
#define REG_ARM_SYSCTRL0_NVIC_IPR1           (0xe000e404LU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 1 */
#define REG_ARM_SYSCTRL0_NVIC_IPR2           (0xe000e408LU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 2 */
#define REG_ARM_SYSCTRL0_NVIC_IPR3           (0xe000e40cLU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 3 */
#define REG_ARM_SYSCTRL0_NVIC_IPR4           (0xe000e410LU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 4 */
#define REG_ARM_SYSCTRL0_NVIC_IPR5           (0xe000e414LU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 5 */
#define REG_ARM_SYSCTRL0_NVIC_IPR6           (0xe000e418LU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 6 */
#define REG_ARM_SYSCTRL0_NVIC_IPR7           (0xe000e41cLU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 7 */
#define REG_ARM_SYSCTRL0_CPUID               (0xe000ed00LU) /**< \brief (ARM_SYSCTRL0) CPU Identification Register */
#define REG_ARM_SYSCTRL0_ICSR                (0xe000ed04LU) /**< \brief (ARM_SYSCTRL0) Interrupt Control State Register */
#define REG_ARM_SYSCTRL0_AIRCR               (0xe000ed0cLU) /**< \brief (ARM_SYSCTRL0) Application Interrupt and Reset Control Register */
#define REG_ARM_SYSCTRL0_SCR                 (0xe000ed10LU) /**< \brief (ARM_SYSCTRL0) System Control Register */
#define REG_ARM_SYSCTRL0_CCR                 (0xe000ed14LU) /**< \brief (ARM_SYSCTRL0) Configuration and Control Register */
#define REG_ARM_SYSCTRL0_SHPR2               (0xe000ed1cLU) /**< \brief (ARM_SYSCTRL0) System Handler Priority Register 2 */
#define REG_ARM_SYSCTRL0_SHPR3               (0xe000ed20LU) /**< \brief (ARM_SYSCTRL0) System Handler Priority Register 3 */
#define REG_ARM_SYSCTRL0_SHCSR               (0xe000ed24LU) /**< \brief (ARM_SYSCTRL0) System Handler Control and State Register */
#define REG_ARM_SYSCTRL0_DFSR                (0xe000ed30LU) /**< \brief (ARM_SYSCTRL0) Debug Fault Status Register */
#define REG_ARM_SYSCTRL0_DHCSR               (0xe000edf0LU) /**< \brief (ARM_SYSCTRL0) Debug Halting Control and Status Register */
#define REG_ARM_SYSCTRL0_DCRSR               (0xe000edf4LU) /**< \brief (ARM_SYSCTRL0) Debug Core Register Selector Register */
#define REG_ARM_SYSCTRL0_DCRDR               (0xe000edf8LU) /**< \brief (ARM_SYSCTRL0) Debug Core Register Data Register */
#define REG_ARM_SYSCTRL0_DEMCR               (0xe000edfcLU) /**< \brief (ARM_SYSCTRL0) Debug Exception and Monitor Control Register */
#define REG_ARM_SYSCTRL0_SCS_PID4            (0xe000efd0LU) /**< \brief (ARM_SYSCTRL0) Peripheral ID Register 4 */
#define REG_ARM_SYSCTRL0_SCS_PID0            (0xe000efe0LU) /**< \brief (ARM_SYSCTRL0) Peripheral ID Register 0 */
#define REG_ARM_SYSCTRL0_SCS_PID1            (0xe000efe4LU) /**< \brief (ARM_SYSCTRL0) Peripheral ID Register 1 */
#define REG_ARM_SYSCTRL0_SCS_PID2            (0xe000efe8LU) /**< \brief (ARM_SYSCTRL0) Peripheral ID Register 2 */
#define REG_ARM_SYSCTRL0_SCS_PID3            (0xe000efecLU) /**< \brief (ARM_SYSCTRL0) Peripheral ID Register 3 */
#define REG_ARM_SYSCTRL0_SCS_CID0            (0xe000eff0LU) /**< \brief (ARM_SYSCTRL0) Component ID Register 0 */
#define REG_ARM_SYSCTRL0_SCS_CID1            (0xe000eff4LU) /**< \brief (ARM_SYSCTRL0) Component ID Register 1 */
#define REG_ARM_SYSCTRL0_SCS_CID2            (0xe000eff8LU) /**< \brief (ARM_SYSCTRL0) Component ID Register 2 */
#define REG_ARM_SYSCTRL0_SCS_CID3            (0xe000effcLU) /**< \brief (ARM_SYSCTRL0) Component ID Register 3 */
#else
#define REG_ARM_SYSCTRL0_ACTLR               (*(RoReg  *)0xe000e008LU) /**< \brief (ARM_SYSCTRL0) Auxiliary Control Register (not implemented) */
#define REG_ARM_SYSCTRL0_SYST_CSR            (*(RwReg  *)0xe000e010LU) /**< \brief (ARM_SYSCTRL0) SysTick Control and Status Register */
#define REG_ARM_SYSCTRL0_SYST_RVR            (*(RwReg  *)0xe000e014LU) /**< \brief (ARM_SYSCTRL0) SysTick Reload Value Register */
#define REG_ARM_SYSCTRL0_SYST_CVR            (*(RwReg  *)0xe000e018LU) /**< \brief (ARM_SYSCTRL0) SysTick Current Value Register (Any Write Clears to 0) */
#define REG_ARM_SYSCTRL0_SYST_CALIB          (*(RoReg  *)0xe000e01cLU) /**< \brief (ARM_SYSCTRL0) SysTick Calibration Value Register */
#define REG_ARM_SYSCTRL0_NVIC_ISER           (*(RwReg  *)0xe000e100LU) /**< \brief (ARM_SYSCTRL0) Interrupt Set-Enable Register */
#define REG_ARM_SYSCTRL0_NVIC_ICER           (*(RwReg  *)0xe000e180LU) /**< \brief (ARM_SYSCTRL0) Interrupt Clear Enable Register */
#define REG_ARM_SYSCTRL0_NVIC_ISPR           (*(RwReg  *)0xe000e200LU) /**< \brief (ARM_SYSCTRL0) Interrupt Set-Pending Register */
#define REG_ARM_SYSCTRL0_NVIC_ICPR           (*(RwReg  *)0xe000e280LU) /**< \brief (ARM_SYSCTRL0) Interrupt Clear-Pending Register */
#define REG_ARM_SYSCTRL0_NVIC_IPR0           (*(RwReg  *)0xe000e400LU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 0 */
#define REG_ARM_SYSCTRL0_NVIC_IPR1           (*(RwReg  *)0xe000e404LU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 1 */
#define REG_ARM_SYSCTRL0_NVIC_IPR2           (*(RwReg  *)0xe000e408LU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 2 */
#define REG_ARM_SYSCTRL0_NVIC_IPR3           (*(RwReg  *)0xe000e40cLU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 3 */
#define REG_ARM_SYSCTRL0_NVIC_IPR4           (*(RwReg  *)0xe000e410LU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 4 */
#define REG_ARM_SYSCTRL0_NVIC_IPR5           (*(RwReg  *)0xe000e414LU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 5 */
#define REG_ARM_SYSCTRL0_NVIC_IPR6           (*(RwReg  *)0xe000e418LU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 6 */
#define REG_ARM_SYSCTRL0_NVIC_IPR7           (*(RwReg  *)0xe000e41cLU) /**< \brief (ARM_SYSCTRL0) Interrupt Priority Register 7 */
#define REG_ARM_SYSCTRL0_CPUID               (*(RoReg  *)0xe000ed00LU) /**< \brief (ARM_SYSCTRL0) CPU Identification Register */
#define REG_ARM_SYSCTRL0_ICSR                (*(RoReg  *)0xe000ed04LU) /**< \brief (ARM_SYSCTRL0) Interrupt Control State Register */
#define REG_ARM_SYSCTRL0_AIRCR               (*(RoReg  *)0xe000ed0cLU) /**< \brief (ARM_SYSCTRL0) Application Interrupt and Reset Control Register */
#define REG_ARM_SYSCTRL0_SCR                 (*(RwReg8 *)0xe000ed10LU) /**< \brief (ARM_SYSCTRL0) System Control Register */
#define REG_ARM_SYSCTRL0_CCR                 (*(RoReg16*)0xe000ed14LU) /**< \brief (ARM_SYSCTRL0) Configuration and Control Register */
#define REG_ARM_SYSCTRL0_SHPR2               (*(RwReg  *)0xe000ed1cLU) /**< \brief (ARM_SYSCTRL0) System Handler Priority Register 2 */
#define REG_ARM_SYSCTRL0_SHPR3               (*(RwReg  *)0xe000ed20LU) /**< \brief (ARM_SYSCTRL0) System Handler Priority Register 3 */
#define REG_ARM_SYSCTRL0_SHCSR               (*(RwReg16*)0xe000ed24LU) /**< \brief (ARM_SYSCTRL0) System Handler Control and State Register */
#define REG_ARM_SYSCTRL0_DFSR                (*(RwReg8 *)0xe000ed30LU) /**< \brief (ARM_SYSCTRL0) Debug Fault Status Register */
#define REG_ARM_SYSCTRL0_DHCSR               (*(RwReg  *)0xe000edf0LU) /**< \brief (ARM_SYSCTRL0) Debug Halting Control and Status Register */
#define REG_ARM_SYSCTRL0_DCRSR               (*(RwReg  *)0xe000edf4LU) /**< \brief (ARM_SYSCTRL0) Debug Core Register Selector Register */
#define REG_ARM_SYSCTRL0_DCRDR               (*(RwReg  *)0xe000edf8LU) /**< \brief (ARM_SYSCTRL0) Debug Core Register Data Register */
#define REG_ARM_SYSCTRL0_DEMCR               (*(RwReg  *)0xe000edfcLU) /**< \brief (ARM_SYSCTRL0) Debug Exception and Monitor Control Register */
#define REG_ARM_SYSCTRL0_SCS_PID4            (*(RoReg8 *)0xe000efd0LU) /**< \brief (ARM_SYSCTRL0) Peripheral ID Register 4 */
#define REG_ARM_SYSCTRL0_SCS_PID0            (*(RoReg8 *)0xe000efe0LU) /**< \brief (ARM_SYSCTRL0) Peripheral ID Register 0 */
#define REG_ARM_SYSCTRL0_SCS_PID1            (*(RoReg8 *)0xe000efe4LU) /**< \brief (ARM_SYSCTRL0) Peripheral ID Register 1 */
#define REG_ARM_SYSCTRL0_SCS_PID2            (*(RoReg8 *)0xe000efe8LU) /**< \brief (ARM_SYSCTRL0) Peripheral ID Register 2 */
#define REG_ARM_SYSCTRL0_SCS_PID3            (*(RoReg8 *)0xe000efecLU) /**< \brief (ARM_SYSCTRL0) Peripheral ID Register 3 */
#define REG_ARM_SYSCTRL0_SCS_CID0            (*(RoReg8 *)0xe000eff0LU) /**< \brief (ARM_SYSCTRL0) Component ID Register 0 */
#define REG_ARM_SYSCTRL0_SCS_CID1            (*(RoReg8 *)0xe000eff4LU) /**< \brief (ARM_SYSCTRL0) Component ID Register 1 */
#define REG_ARM_SYSCTRL0_SCS_CID2            (*(RoReg8 *)0xe000eff8LU) /**< \brief (ARM_SYSCTRL0) Component ID Register 2 */
#define REG_ARM_SYSCTRL0_SCS_CID3            (*(RoReg8 *)0xe000effcLU) /**< \brief (ARM_SYSCTRL0) Component ID Register 3 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMB11_ARM_SYSCTRL0_INSTANCE_ */