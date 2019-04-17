/**
 * \file
 *
 * \brief Instance description for MTB
 *
 * Copyright (c) 2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAMHA0_MTB_INSTANCE_
#define _SAMHA0_MTB_INSTANCE_

/* ========== Register definition for MTB peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_MTB_POSITION           (0x41006000) /**< \brief (MTB) MTB Position */
#define REG_MTB_MASTER             (0x41006004) /**< \brief (MTB) MTB Master */
#define REG_MTB_FLOW               (0x41006008) /**< \brief (MTB) MTB Flow */
#define REG_MTB_BASE               (0x4100600C) /**< \brief (MTB) MTB Base */
#define REG_MTB_ITCTRL             (0x41006F00) /**< \brief (MTB) MTB Integration Mode Control */
#define REG_MTB_CLAIMSET           (0x41006FA0) /**< \brief (MTB) MTB Claim Set */
#define REG_MTB_CLAIMCLR           (0x41006FA4) /**< \brief (MTB) MTB Claim Clear */
#define REG_MTB_LOCKACCESS         (0x41006FB0) /**< \brief (MTB) MTB Lock Access */
#define REG_MTB_LOCKSTATUS         (0x41006FB4) /**< \brief (MTB) MTB Lock Status */
#define REG_MTB_AUTHSTATUS         (0x41006FB8) /**< \brief (MTB) MTB Authentication Status */
#define REG_MTB_DEVARCH            (0x41006FBC) /**< \brief (MTB) MTB Device Architecture */
#define REG_MTB_DEVID              (0x41006FC8) /**< \brief (MTB) MTB Device Configuration */
#define REG_MTB_DEVTYPE            (0x41006FCC) /**< \brief (MTB) MTB Device Type */
#define REG_MTB_PID4               (0x41006FD0) /**< \brief (MTB) CoreSight */
#define REG_MTB_PID5               (0x41006FD4) /**< \brief (MTB) CoreSight */
#define REG_MTB_PID6               (0x41006FD8) /**< \brief (MTB) CoreSight */
#define REG_MTB_PID7               (0x41006FDC) /**< \brief (MTB) CoreSight */
#define REG_MTB_PID0               (0x41006FE0) /**< \brief (MTB) CoreSight */
#define REG_MTB_PID1               (0x41006FE4) /**< \brief (MTB) CoreSight */
#define REG_MTB_PID2               (0x41006FE8) /**< \brief (MTB) CoreSight */
#define REG_MTB_PID3               (0x41006FEC) /**< \brief (MTB) CoreSight */
#define REG_MTB_CID0               (0x41006FF0) /**< \brief (MTB) CoreSight */
#define REG_MTB_CID1               (0x41006FF4) /**< \brief (MTB) CoreSight */
#define REG_MTB_CID2               (0x41006FF8) /**< \brief (MTB) CoreSight */
#define REG_MTB_CID3               (0x41006FFC) /**< \brief (MTB) CoreSight */
#else
#define REG_MTB_POSITION           (*(RwReg  *)0x41006000UL) /**< \brief (MTB) MTB Position */
#define REG_MTB_MASTER             (*(RwReg  *)0x41006004UL) /**< \brief (MTB) MTB Master */
#define REG_MTB_FLOW               (*(RwReg  *)0x41006008UL) /**< \brief (MTB) MTB Flow */
#define REG_MTB_BASE               (*(RoReg  *)0x4100600CUL) /**< \brief (MTB) MTB Base */
#define REG_MTB_ITCTRL             (*(RwReg  *)0x41006F00UL) /**< \brief (MTB) MTB Integration Mode Control */
#define REG_MTB_CLAIMSET           (*(RwReg  *)0x41006FA0UL) /**< \brief (MTB) MTB Claim Set */
#define REG_MTB_CLAIMCLR           (*(RwReg  *)0x41006FA4UL) /**< \brief (MTB) MTB Claim Clear */
#define REG_MTB_LOCKACCESS         (*(RwReg  *)0x41006FB0UL) /**< \brief (MTB) MTB Lock Access */
#define REG_MTB_LOCKSTATUS         (*(RoReg  *)0x41006FB4UL) /**< \brief (MTB) MTB Lock Status */
#define REG_MTB_AUTHSTATUS         (*(RoReg  *)0x41006FB8UL) /**< \brief (MTB) MTB Authentication Status */
#define REG_MTB_DEVARCH            (*(RoReg  *)0x41006FBCUL) /**< \brief (MTB) MTB Device Architecture */
#define REG_MTB_DEVID              (*(RoReg  *)0x41006FC8UL) /**< \brief (MTB) MTB Device Configuration */
#define REG_MTB_DEVTYPE            (*(RoReg  *)0x41006FCCUL) /**< \brief (MTB) MTB Device Type */
#define REG_MTB_PID4               (*(RoReg  *)0x41006FD0UL) /**< \brief (MTB) CoreSight */
#define REG_MTB_PID5               (*(RoReg  *)0x41006FD4UL) /**< \brief (MTB) CoreSight */
#define REG_MTB_PID6               (*(RoReg  *)0x41006FD8UL) /**< \brief (MTB) CoreSight */
#define REG_MTB_PID7               (*(RoReg  *)0x41006FDCUL) /**< \brief (MTB) CoreSight */
#define REG_MTB_PID0               (*(RoReg  *)0x41006FE0UL) /**< \brief (MTB) CoreSight */
#define REG_MTB_PID1               (*(RoReg  *)0x41006FE4UL) /**< \brief (MTB) CoreSight */
#define REG_MTB_PID2               (*(RoReg  *)0x41006FE8UL) /**< \brief (MTB) CoreSight */
#define REG_MTB_PID3               (*(RoReg  *)0x41006FECUL) /**< \brief (MTB) CoreSight */
#define REG_MTB_CID0               (*(RoReg  *)0x41006FF0UL) /**< \brief (MTB) CoreSight */
#define REG_MTB_CID1               (*(RoReg  *)0x41006FF4UL) /**< \brief (MTB) CoreSight */
#define REG_MTB_CID2               (*(RoReg  *)0x41006FF8UL) /**< \brief (MTB) CoreSight */
#define REG_MTB_CID3               (*(RoReg  *)0x41006FFCUL) /**< \brief (MTB) CoreSight */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */


#endif /* _SAMHA0_MTB_INSTANCE_ */
