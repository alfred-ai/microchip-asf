/**
 * \file
 *
 * \brief Component description for EFUSE_MISC_REGS
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

#ifndef _SAMB11_EFUSE_MISC_REGS_COMPONENT_
#define _SAMB11_EFUSE_MISC_REGS_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR EFUSE_MISC_REGS */
/* ========================================================================== */
/** \addtogroup SAMB11_EFUSE_MISC_REGS EFUSE Misc Registers */
/*@{*/

#define EFUSE_MISC_REGS_EMR1234
#define REV_EFUSE_MISC_REGS              0x100

/* -------- EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET : (EFUSE_MISC_REGS Offset: 0x00) (R/W  8) Active Low Global Reset -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  GLOBAL_RSTN:1;             /*!< bit:      0  Global Reset                             */
    uint8_t  EFUSE_1_RSTN:1;            /*!< bit:      1  EFUSE 1 Reset                            */
    uint8_t  EFUSE_2_RSTN:1;            /*!< bit:      2  EFUSE 2 Reset                            */
    uint8_t  EFUSE_3_RSTN:1;            /*!< bit:      3  EFUSE 3 Reset                            */
    uint8_t  EFUSE_4_RSTN:1;            /*!< bit:      4  EFUSE 4 Reset                            */
    uint8_t  EFUSE_5_RSTN:1;            /*!< bit:      5  EFUSE 5 Reset                            */
    uint8_t  EFUSE_6_RSTN:1;            /*!< bit:      6  EFUSE 6 Reset                            */
    uint8_t  :1;                        /*!< bit:      7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_OFFSET 0x00           /**<  \brief (EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET offset) Active Low Global Reset */
#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_RESETVALUE 0x7Ful         /**<  \brief (EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET reset_value) Active Low Global Reset */

#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_GLOBAL_RSTN_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET) Global Reset            */
#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_GLOBAL_RSTN (0x1ul << EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_GLOBAL_RSTN_Pos)  
#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_1_RSTN_Pos 1  /**< \brief (EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET) EFUSE 1 Reset           */
#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_1_RSTN (0x1ul << EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_1_RSTN_Pos)  
#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_2_RSTN_Pos 2  /**< \brief (EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET) EFUSE 2 Reset           */
#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_2_RSTN (0x1ul << EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_2_RSTN_Pos)  
#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_3_RSTN_Pos 3  /**< \brief (EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET) EFUSE 3 Reset           */
#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_3_RSTN (0x1ul << EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_3_RSTN_Pos)  
#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_4_RSTN_Pos 4  /**< \brief (EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET) EFUSE 4 Reset           */
#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_4_RSTN (0x1ul << EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_4_RSTN_Pos)  
#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_5_RSTN_Pos 5  /**< \brief (EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET) EFUSE 5 Reset           */
#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_5_RSTN (0x1ul << EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_5_RSTN_Pos)  
#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_6_RSTN_Pos 6  /**< \brief (EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET) EFUSE 6 Reset           */
#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_6_RSTN (0x1ul << EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_6_RSTN_Pos)  
#define EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_MASK 0x7Ful    /**< \brief (EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_1_CONTROL : (EFUSE_MISC_REGS Offset: 0x04) (R/W  32) EFUSE 1 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FORCE_LOAD:1;              /*!< bit:      0  Efuse Control Force Load                 */
    uint32_t START_PROGRAM:1;           /*!< bit:      1  When set to 1 will start programming EFUSE */
    uint32_t FIRST_READ_COUNT:9;        /*!< bit:  2..10  First Read Count                         */
    uint32_t FIRST_PROG_COUNT:4;        /*!< bit: 11..14  First Program Count                      */
    uint32_t PROG_CLK_H_COUNT:9;        /*!< bit: 15..23  First Clock High Count                   */
    uint32_t DEBUG_BUS_SEL:3;           /*!< bit: 24..26  EFUSE Debug Bus Selection                */
    uint32_t :4;                        /*!< bit: 27..30  Reserved                                 */
    uint32_t EFUSE_LOAD_DONE:1;         /*!< bit:     31  Efuse Load Done Indication               */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_1_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_OFFSET 0x04           /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_CONTROL offset) EFUSE 1 Control Register */
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_RESETVALUE 0x3FCul        /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_CONTROL reset_value) EFUSE 1 Control Register */

#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_FORCE_LOAD_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_1_CONTROL) Efuse Control Force Load   */
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_FORCE_LOAD (0x1ul << EFUSE_MISC_REGS_EFUSE_1_CONTROL_FORCE_LOAD_Pos)  
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_START_PROGRAM_Pos 1  /**< \brief (EFUSE_MISC_REGS_EFUSE_1_CONTROL) When set to 1 will start programming EFUSE */
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_START_PROGRAM (0x1ul << EFUSE_MISC_REGS_EFUSE_1_CONTROL_START_PROGRAM_Pos)  
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_READ_COUNT_Pos 2  /**< \brief (EFUSE_MISC_REGS_EFUSE_1_CONTROL) First Read Count           */
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_READ_COUNT_Msk (0x1FFul << EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_READ_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_READ_COUNT(value) (EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_READ_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_READ_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_PROG_COUNT_Pos 11  /**< \brief (EFUSE_MISC_REGS_EFUSE_1_CONTROL) First Program Count        */
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_PROG_COUNT_Msk (0xFul << EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_PROG_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_PROG_COUNT(value) (EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_PROG_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_PROG_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_PROG_CLK_H_COUNT_Pos 15  /**< \brief (EFUSE_MISC_REGS_EFUSE_1_CONTROL) First Clock High Count     */
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_PROG_CLK_H_COUNT_Msk (0x1FFul << EFUSE_MISC_REGS_EFUSE_1_CONTROL_PROG_CLK_H_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_PROG_CLK_H_COUNT(value) (EFUSE_MISC_REGS_EFUSE_1_CONTROL_PROG_CLK_H_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_1_CONTROL_PROG_CLK_H_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_DEBUG_BUS_SEL_Pos 24  /**< \brief (EFUSE_MISC_REGS_EFUSE_1_CONTROL) EFUSE Debug Bus Selection  */
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_DEBUG_BUS_SEL_Msk (0x7ul << EFUSE_MISC_REGS_EFUSE_1_CONTROL_DEBUG_BUS_SEL_Pos)
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_DEBUG_BUS_SEL(value) (EFUSE_MISC_REGS_EFUSE_1_CONTROL_DEBUG_BUS_SEL_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_1_CONTROL_DEBUG_BUS_SEL_Pos))  
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_EFUSE_LOAD_DONE_Pos 31  /**< \brief (EFUSE_MISC_REGS_EFUSE_1_CONTROL) Efuse Load Done Indication */
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_EFUSE_LOAD_DONE (0x1ul << EFUSE_MISC_REGS_EFUSE_1_CONTROL_EFUSE_LOAD_DONE_Pos)  
#define EFUSE_MISC_REGS_EFUSE_1_CONTROL_MASK  0x87FFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_1_CONTROL) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_2_CONTROL : (EFUSE_MISC_REGS Offset: 0x08) (R/W  32) EFUSE 2 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FORCE_LOAD:1;              /*!< bit:      0  Efuse Control Force Load                 */
    uint32_t START_PROGRAM:1;           /*!< bit:      1  When set to 1 will start programming EFUSE */
    uint32_t FIRST_READ_COUNT:9;        /*!< bit:  2..10  First Read Count                         */
    uint32_t FIRST_PROG_COUNT:4;        /*!< bit: 11..14  First Program Count                      */
    uint32_t PROG_CLK_H_COUNT:9;        /*!< bit: 15..23  First Clock High Count                   */
    uint32_t DEBUG_BUS_SEL:3;           /*!< bit: 24..26  EFUSE Debug Bus Selection                */
    uint32_t :4;                        /*!< bit: 27..30  Reserved                                 */
    uint32_t EFUSE_LOAD_DONE:1;         /*!< bit:     31  Efuse Load Done Indication               */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_2_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_OFFSET 0x08           /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_CONTROL offset) EFUSE 2 Control Register */
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_RESETVALUE 0x3FCul        /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_CONTROL reset_value) EFUSE 2 Control Register */

#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_FORCE_LOAD_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_2_CONTROL) Efuse Control Force Load   */
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_FORCE_LOAD (0x1ul << EFUSE_MISC_REGS_EFUSE_2_CONTROL_FORCE_LOAD_Pos)  
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_START_PROGRAM_Pos 1  /**< \brief (EFUSE_MISC_REGS_EFUSE_2_CONTROL) When set to 1 will start programming EFUSE */
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_START_PROGRAM (0x1ul << EFUSE_MISC_REGS_EFUSE_2_CONTROL_START_PROGRAM_Pos)  
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_READ_COUNT_Pos 2  /**< \brief (EFUSE_MISC_REGS_EFUSE_2_CONTROL) First Read Count           */
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_READ_COUNT_Msk (0x1FFul << EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_READ_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_READ_COUNT(value) (EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_READ_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_READ_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_PROG_COUNT_Pos 11  /**< \brief (EFUSE_MISC_REGS_EFUSE_2_CONTROL) First Program Count        */
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_PROG_COUNT_Msk (0xFul << EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_PROG_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_PROG_COUNT(value) (EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_PROG_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_PROG_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_PROG_CLK_H_COUNT_Pos 15  /**< \brief (EFUSE_MISC_REGS_EFUSE_2_CONTROL) First Clock High Count     */
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_PROG_CLK_H_COUNT_Msk (0x1FFul << EFUSE_MISC_REGS_EFUSE_2_CONTROL_PROG_CLK_H_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_PROG_CLK_H_COUNT(value) (EFUSE_MISC_REGS_EFUSE_2_CONTROL_PROG_CLK_H_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_2_CONTROL_PROG_CLK_H_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_DEBUG_BUS_SEL_Pos 24  /**< \brief (EFUSE_MISC_REGS_EFUSE_2_CONTROL) EFUSE Debug Bus Selection  */
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_DEBUG_BUS_SEL_Msk (0x7ul << EFUSE_MISC_REGS_EFUSE_2_CONTROL_DEBUG_BUS_SEL_Pos)
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_DEBUG_BUS_SEL(value) (EFUSE_MISC_REGS_EFUSE_2_CONTROL_DEBUG_BUS_SEL_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_2_CONTROL_DEBUG_BUS_SEL_Pos))  
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_EFUSE_LOAD_DONE_Pos 31  /**< \brief (EFUSE_MISC_REGS_EFUSE_2_CONTROL) Efuse Load Done Indication */
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_EFUSE_LOAD_DONE (0x1ul << EFUSE_MISC_REGS_EFUSE_2_CONTROL_EFUSE_LOAD_DONE_Pos)  
#define EFUSE_MISC_REGS_EFUSE_2_CONTROL_MASK  0x87FFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_2_CONTROL) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_3_CONTROL : (EFUSE_MISC_REGS Offset: 0x0c) (R/W  32) EFUSE 3 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FORCE_LOAD:1;              /*!< bit:      0  Efuse Control Force Load                 */
    uint32_t START_PROGRAM:1;           /*!< bit:      1  When set to 1 will start programming EFUSE */
    uint32_t FIRST_READ_COUNT:9;        /*!< bit:  2..10  First Read Count                         */
    uint32_t FIRST_PROG_COUNT:4;        /*!< bit: 11..14  First Program Count                      */
    uint32_t PROG_CLK_H_COUNT:9;        /*!< bit: 15..23  First Clock High Count                   */
    uint32_t DEBUG_BUS_SEL:3;           /*!< bit: 24..26  EFUSE Debug Bus Selection                */
    uint32_t :4;                        /*!< bit: 27..30  Reserved                                 */
    uint32_t EFUSE_LOAD_DONE:1;         /*!< bit:     31  Efuse Load Done Indication               */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_3_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_OFFSET 0x0C           /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_CONTROL offset) EFUSE 3 Control Register */
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_RESETVALUE 0x3FCul        /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_CONTROL reset_value) EFUSE 3 Control Register */

#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_FORCE_LOAD_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_3_CONTROL) Efuse Control Force Load   */
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_FORCE_LOAD (0x1ul << EFUSE_MISC_REGS_EFUSE_3_CONTROL_FORCE_LOAD_Pos)  
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_START_PROGRAM_Pos 1  /**< \brief (EFUSE_MISC_REGS_EFUSE_3_CONTROL) When set to 1 will start programming EFUSE */
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_START_PROGRAM (0x1ul << EFUSE_MISC_REGS_EFUSE_3_CONTROL_START_PROGRAM_Pos)  
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_READ_COUNT_Pos 2  /**< \brief (EFUSE_MISC_REGS_EFUSE_3_CONTROL) First Read Count           */
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_READ_COUNT_Msk (0x1FFul << EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_READ_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_READ_COUNT(value) (EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_READ_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_READ_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_PROG_COUNT_Pos 11  /**< \brief (EFUSE_MISC_REGS_EFUSE_3_CONTROL) First Program Count        */
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_PROG_COUNT_Msk (0xFul << EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_PROG_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_PROG_COUNT(value) (EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_PROG_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_PROG_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_PROG_CLK_H_COUNT_Pos 15  /**< \brief (EFUSE_MISC_REGS_EFUSE_3_CONTROL) First Clock High Count     */
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_PROG_CLK_H_COUNT_Msk (0x1FFul << EFUSE_MISC_REGS_EFUSE_3_CONTROL_PROG_CLK_H_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_PROG_CLK_H_COUNT(value) (EFUSE_MISC_REGS_EFUSE_3_CONTROL_PROG_CLK_H_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_3_CONTROL_PROG_CLK_H_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_DEBUG_BUS_SEL_Pos 24  /**< \brief (EFUSE_MISC_REGS_EFUSE_3_CONTROL) EFUSE Debug Bus Selection  */
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_DEBUG_BUS_SEL_Msk (0x7ul << EFUSE_MISC_REGS_EFUSE_3_CONTROL_DEBUG_BUS_SEL_Pos)
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_DEBUG_BUS_SEL(value) (EFUSE_MISC_REGS_EFUSE_3_CONTROL_DEBUG_BUS_SEL_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_3_CONTROL_DEBUG_BUS_SEL_Pos))  
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_EFUSE_LOAD_DONE_Pos 31  /**< \brief (EFUSE_MISC_REGS_EFUSE_3_CONTROL) Efuse Load Done Indication */
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_EFUSE_LOAD_DONE (0x1ul << EFUSE_MISC_REGS_EFUSE_3_CONTROL_EFUSE_LOAD_DONE_Pos)  
#define EFUSE_MISC_REGS_EFUSE_3_CONTROL_MASK  0x87FFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_3_CONTROL) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_4_CONTROL : (EFUSE_MISC_REGS Offset: 0x10) (R/W  32) EFUSE 4 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FORCE_LOAD:1;              /*!< bit:      0  Efuse Control Force Load                 */
    uint32_t START_PROGRAM:1;           /*!< bit:      1  When set to 1 will start programming EFUSE */
    uint32_t FIRST_READ_COUNT:9;        /*!< bit:  2..10  First Read Count                         */
    uint32_t FIRST_PROG_COUNT:4;        /*!< bit: 11..14  First Program Count                      */
    uint32_t PROG_CLK_H_COUNT:9;        /*!< bit: 15..23  First Clock High Count                   */
    uint32_t DEBUG_BUS_SEL:3;           /*!< bit: 24..26  EFUSE Debug Bus Selection                */
    uint32_t :4;                        /*!< bit: 27..30  Reserved                                 */
    uint32_t EFUSE_LOAD_DONE:1;         /*!< bit:     31  Efuse Load Done Indication               */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_4_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_OFFSET 0x10           /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_CONTROL offset) EFUSE 4 Control Register */
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_RESETVALUE 0x3FCul        /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_CONTROL reset_value) EFUSE 4 Control Register */

#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_FORCE_LOAD_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_4_CONTROL) Efuse Control Force Load   */
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_FORCE_LOAD (0x1ul << EFUSE_MISC_REGS_EFUSE_4_CONTROL_FORCE_LOAD_Pos)  
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_START_PROGRAM_Pos 1  /**< \brief (EFUSE_MISC_REGS_EFUSE_4_CONTROL) When set to 1 will start programming EFUSE */
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_START_PROGRAM (0x1ul << EFUSE_MISC_REGS_EFUSE_4_CONTROL_START_PROGRAM_Pos)  
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_READ_COUNT_Pos 2  /**< \brief (EFUSE_MISC_REGS_EFUSE_4_CONTROL) First Read Count           */
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_READ_COUNT_Msk (0x1FFul << EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_READ_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_READ_COUNT(value) (EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_READ_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_READ_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_PROG_COUNT_Pos 11  /**< \brief (EFUSE_MISC_REGS_EFUSE_4_CONTROL) First Program Count        */
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_PROG_COUNT_Msk (0xFul << EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_PROG_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_PROG_COUNT(value) (EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_PROG_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_PROG_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_PROG_CLK_H_COUNT_Pos 15  /**< \brief (EFUSE_MISC_REGS_EFUSE_4_CONTROL) First Clock High Count     */
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_PROG_CLK_H_COUNT_Msk (0x1FFul << EFUSE_MISC_REGS_EFUSE_4_CONTROL_PROG_CLK_H_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_PROG_CLK_H_COUNT(value) (EFUSE_MISC_REGS_EFUSE_4_CONTROL_PROG_CLK_H_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_4_CONTROL_PROG_CLK_H_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_DEBUG_BUS_SEL_Pos 24  /**< \brief (EFUSE_MISC_REGS_EFUSE_4_CONTROL) EFUSE Debug Bus Selection  */
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_DEBUG_BUS_SEL_Msk (0x7ul << EFUSE_MISC_REGS_EFUSE_4_CONTROL_DEBUG_BUS_SEL_Pos)
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_DEBUG_BUS_SEL(value) (EFUSE_MISC_REGS_EFUSE_4_CONTROL_DEBUG_BUS_SEL_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_4_CONTROL_DEBUG_BUS_SEL_Pos))  
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_EFUSE_LOAD_DONE_Pos 31  /**< \brief (EFUSE_MISC_REGS_EFUSE_4_CONTROL) Efuse Load Done Indication */
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_EFUSE_LOAD_DONE (0x1ul << EFUSE_MISC_REGS_EFUSE_4_CONTROL_EFUSE_LOAD_DONE_Pos)  
#define EFUSE_MISC_REGS_EFUSE_4_CONTROL_MASK  0x87FFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_4_CONTROL) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_5_CONTROL : (EFUSE_MISC_REGS Offset: 0x14) (R/W  32) EFUSE 5 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FORCE_LOAD:1;              /*!< bit:      0  Efuse Control Force Load                 */
    uint32_t START_PROGRAM:1;           /*!< bit:      1  When set to 1 will start programming EFUSE */
    uint32_t FIRST_READ_COUNT:9;        /*!< bit:  2..10  First Read Count                         */
    uint32_t FIRST_PROG_COUNT:4;        /*!< bit: 11..14  First Program Count                      */
    uint32_t PROG_CLK_H_COUNT:9;        /*!< bit: 15..23  First Clock High Count                   */
    uint32_t DEBUG_BUS_SEL:3;           /*!< bit: 24..26  EFUSE Debug Bus Selection                */
    uint32_t :4;                        /*!< bit: 27..30  Reserved                                 */
    uint32_t EFUSE_LOAD_DONE:1;         /*!< bit:     31  Efuse Load Done Indication               */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_5_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_OFFSET 0x14           /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_CONTROL offset) EFUSE 5 Control Register */
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_RESETVALUE 0x3FCul        /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_CONTROL reset_value) EFUSE 5 Control Register */

#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_FORCE_LOAD_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_5_CONTROL) Efuse Control Force Load   */
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_FORCE_LOAD (0x1ul << EFUSE_MISC_REGS_EFUSE_5_CONTROL_FORCE_LOAD_Pos)  
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_START_PROGRAM_Pos 1  /**< \brief (EFUSE_MISC_REGS_EFUSE_5_CONTROL) When set to 1 will start programming EFUSE */
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_START_PROGRAM (0x1ul << EFUSE_MISC_REGS_EFUSE_5_CONTROL_START_PROGRAM_Pos)  
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_READ_COUNT_Pos 2  /**< \brief (EFUSE_MISC_REGS_EFUSE_5_CONTROL) First Read Count           */
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_READ_COUNT_Msk (0x1FFul << EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_READ_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_READ_COUNT(value) (EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_READ_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_READ_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_PROG_COUNT_Pos 11  /**< \brief (EFUSE_MISC_REGS_EFUSE_5_CONTROL) First Program Count        */
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_PROG_COUNT_Msk (0xFul << EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_PROG_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_PROG_COUNT(value) (EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_PROG_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_PROG_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_PROG_CLK_H_COUNT_Pos 15  /**< \brief (EFUSE_MISC_REGS_EFUSE_5_CONTROL) First Clock High Count     */
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_PROG_CLK_H_COUNT_Msk (0x1FFul << EFUSE_MISC_REGS_EFUSE_5_CONTROL_PROG_CLK_H_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_PROG_CLK_H_COUNT(value) (EFUSE_MISC_REGS_EFUSE_5_CONTROL_PROG_CLK_H_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_5_CONTROL_PROG_CLK_H_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_DEBUG_BUS_SEL_Pos 24  /**< \brief (EFUSE_MISC_REGS_EFUSE_5_CONTROL) EFUSE Debug Bus Selection  */
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_DEBUG_BUS_SEL_Msk (0x7ul << EFUSE_MISC_REGS_EFUSE_5_CONTROL_DEBUG_BUS_SEL_Pos)
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_DEBUG_BUS_SEL(value) (EFUSE_MISC_REGS_EFUSE_5_CONTROL_DEBUG_BUS_SEL_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_5_CONTROL_DEBUG_BUS_SEL_Pos))  
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_EFUSE_LOAD_DONE_Pos 31  /**< \brief (EFUSE_MISC_REGS_EFUSE_5_CONTROL) Efuse Load Done Indication */
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_EFUSE_LOAD_DONE (0x1ul << EFUSE_MISC_REGS_EFUSE_5_CONTROL_EFUSE_LOAD_DONE_Pos)  
#define EFUSE_MISC_REGS_EFUSE_5_CONTROL_MASK  0x87FFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_5_CONTROL) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_6_CONTROL : (EFUSE_MISC_REGS Offset: 0x18) (R/W  32) EFUSE 6 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FORCE_LOAD:1;              /*!< bit:      0  Efuse Control Force Load                 */
    uint32_t START_PROGRAM:1;           /*!< bit:      1  When set to 1 will start programming EFUSE */
    uint32_t FIRST_READ_COUNT:9;        /*!< bit:  2..10  First Read Count                         */
    uint32_t FIRST_PROG_COUNT:4;        /*!< bit: 11..14  First Program Count                      */
    uint32_t PROG_CLK_H_COUNT:9;        /*!< bit: 15..23  First Clock High Count                   */
    uint32_t DEBUG_BUS_SEL:3;           /*!< bit: 24..26  EFUSE Debug Bus Selection                */
    uint32_t :4;                        /*!< bit: 27..30  Reserved                                 */
    uint32_t EFUSE_LOAD_DONE:1;         /*!< bit:     31  Efuse Load Done Indication               */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_6_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_OFFSET 0x18           /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_CONTROL offset) EFUSE 6 Control Register */
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_RESETVALUE 0x3FCul        /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_CONTROL reset_value) EFUSE 6 Control Register */

#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_FORCE_LOAD_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_6_CONTROL) Efuse Control Force Load   */
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_FORCE_LOAD (0x1ul << EFUSE_MISC_REGS_EFUSE_6_CONTROL_FORCE_LOAD_Pos)  
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_START_PROGRAM_Pos 1  /**< \brief (EFUSE_MISC_REGS_EFUSE_6_CONTROL) When set to 1 will start programming EFUSE */
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_START_PROGRAM (0x1ul << EFUSE_MISC_REGS_EFUSE_6_CONTROL_START_PROGRAM_Pos)  
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_READ_COUNT_Pos 2  /**< \brief (EFUSE_MISC_REGS_EFUSE_6_CONTROL) First Read Count           */
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_READ_COUNT_Msk (0x1FFul << EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_READ_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_READ_COUNT(value) (EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_READ_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_READ_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_PROG_COUNT_Pos 11  /**< \brief (EFUSE_MISC_REGS_EFUSE_6_CONTROL) First Program Count        */
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_PROG_COUNT_Msk (0xFul << EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_PROG_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_PROG_COUNT(value) (EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_PROG_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_PROG_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_PROG_CLK_H_COUNT_Pos 15  /**< \brief (EFUSE_MISC_REGS_EFUSE_6_CONTROL) First Clock High Count     */
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_PROG_CLK_H_COUNT_Msk (0x1FFul << EFUSE_MISC_REGS_EFUSE_6_CONTROL_PROG_CLK_H_COUNT_Pos)
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_PROG_CLK_H_COUNT(value) (EFUSE_MISC_REGS_EFUSE_6_CONTROL_PROG_CLK_H_COUNT_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_6_CONTROL_PROG_CLK_H_COUNT_Pos))  
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_DEBUG_BUS_SEL_Pos 24  /**< \brief (EFUSE_MISC_REGS_EFUSE_6_CONTROL) EFUSE Debug Bus Selection  */
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_DEBUG_BUS_SEL_Msk (0x7ul << EFUSE_MISC_REGS_EFUSE_6_CONTROL_DEBUG_BUS_SEL_Pos)
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_DEBUG_BUS_SEL(value) (EFUSE_MISC_REGS_EFUSE_6_CONTROL_DEBUG_BUS_SEL_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_6_CONTROL_DEBUG_BUS_SEL_Pos))  
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_EFUSE_LOAD_DONE_Pos 31  /**< \brief (EFUSE_MISC_REGS_EFUSE_6_CONTROL) Efuse Load Done Indication */
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_EFUSE_LOAD_DONE (0x1ul << EFUSE_MISC_REGS_EFUSE_6_CONTROL_EFUSE_LOAD_DONE_Pos)  
#define EFUSE_MISC_REGS_EFUSE_6_CONTROL_MASK  0x87FFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_6_CONTROL) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_1_PROG_0 : (EFUSE_MISC_REGS Offset: 0x1c) (R/W  32) EFUSE_1_0 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_1_PROG_0:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_1_PROG_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_1_PROG_0_OFFSET 0x1C           /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_0 offset) EFUSE_1_0 Program Register */
#define EFUSE_MISC_REGS_EFUSE_1_PROG_0_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_0 reset_value) EFUSE_1_0 Program Register */

#define EFUSE_MISC_REGS_EFUSE_1_PROG_0_EFUSE_1_PROG_0_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_0)                             */
#define EFUSE_MISC_REGS_EFUSE_1_PROG_0_EFUSE_1_PROG_0_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_1_PROG_0_EFUSE_1_PROG_0_Pos)
#define EFUSE_MISC_REGS_EFUSE_1_PROG_0_EFUSE_1_PROG_0(value) (EFUSE_MISC_REGS_EFUSE_1_PROG_0_EFUSE_1_PROG_0_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_1_PROG_0_EFUSE_1_PROG_0_Pos))  
#define EFUSE_MISC_REGS_EFUSE_1_PROG_0_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_0) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_1_PROG_1 : (EFUSE_MISC_REGS Offset: 0x20) (R/W  32) EFUSE_1_1 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_1_PROG_1:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_1_PROG_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_1_PROG_1_OFFSET 0x20           /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_1 offset) EFUSE_1_1 Program Register */
#define EFUSE_MISC_REGS_EFUSE_1_PROG_1_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_1 reset_value) EFUSE_1_1 Program Register */

#define EFUSE_MISC_REGS_EFUSE_1_PROG_1_EFUSE_1_PROG_1_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_1)                             */
#define EFUSE_MISC_REGS_EFUSE_1_PROG_1_EFUSE_1_PROG_1_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_1_PROG_1_EFUSE_1_PROG_1_Pos)
#define EFUSE_MISC_REGS_EFUSE_1_PROG_1_EFUSE_1_PROG_1(value) (EFUSE_MISC_REGS_EFUSE_1_PROG_1_EFUSE_1_PROG_1_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_1_PROG_1_EFUSE_1_PROG_1_Pos))  
#define EFUSE_MISC_REGS_EFUSE_1_PROG_1_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_1) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_1_PROG_2 : (EFUSE_MISC_REGS Offset: 0x24) (R/W  32) EFUSE_1_2 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_1_PROG_2:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_1_PROG_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_1_PROG_2_OFFSET 0x24           /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_2 offset) EFUSE_1_2 Program Register */
#define EFUSE_MISC_REGS_EFUSE_1_PROG_2_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_2 reset_value) EFUSE_1_2 Program Register */

#define EFUSE_MISC_REGS_EFUSE_1_PROG_2_EFUSE_1_PROG_2_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_2)                             */
#define EFUSE_MISC_REGS_EFUSE_1_PROG_2_EFUSE_1_PROG_2_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_1_PROG_2_EFUSE_1_PROG_2_Pos)
#define EFUSE_MISC_REGS_EFUSE_1_PROG_2_EFUSE_1_PROG_2(value) (EFUSE_MISC_REGS_EFUSE_1_PROG_2_EFUSE_1_PROG_2_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_1_PROG_2_EFUSE_1_PROG_2_Pos))  
#define EFUSE_MISC_REGS_EFUSE_1_PROG_2_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_2) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_1_PROG_3 : (EFUSE_MISC_REGS Offset: 0x28) (R/W  32) EFUSE_1_3 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_1_PROG_3:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_1_PROG_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_1_PROG_3_OFFSET 0x28           /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_3 offset) EFUSE_1_3 Program Register */
#define EFUSE_MISC_REGS_EFUSE_1_PROG_3_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_3 reset_value) EFUSE_1_3 Program Register */

#define EFUSE_MISC_REGS_EFUSE_1_PROG_3_EFUSE_1_PROG_3_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_3)                             */
#define EFUSE_MISC_REGS_EFUSE_1_PROG_3_EFUSE_1_PROG_3_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_1_PROG_3_EFUSE_1_PROG_3_Pos)
#define EFUSE_MISC_REGS_EFUSE_1_PROG_3_EFUSE_1_PROG_3(value) (EFUSE_MISC_REGS_EFUSE_1_PROG_3_EFUSE_1_PROG_3_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_1_PROG_3_EFUSE_1_PROG_3_Pos))  
#define EFUSE_MISC_REGS_EFUSE_1_PROG_3_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_1_PROG_3) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_1_STATUS_0 : (EFUSE_MISC_REGS Offset: 0x2c) (R/  32) EFUSE_1_0 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_1_STATUS_0:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_1_STATUS_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_1_STATUS_0_OFFSET 0x2C           /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_0 offset) EFUSE_1_0 Status */
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_0_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_0 reset_value) EFUSE_1_0 Status */

#define EFUSE_MISC_REGS_EFUSE_1_STATUS_0_EFUSE_1_STATUS_0_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_0)                           */
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_0_EFUSE_1_STATUS_0_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_1_STATUS_0_EFUSE_1_STATUS_0_Pos)
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_0_EFUSE_1_STATUS_0(value) (EFUSE_MISC_REGS_EFUSE_1_STATUS_0_EFUSE_1_STATUS_0_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_1_STATUS_0_EFUSE_1_STATUS_0_Pos))  
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_0_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_0) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_1_STATUS_1 : (EFUSE_MISC_REGS Offset: 0x30) (R/  32) EFUSE_1_1 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_1_STATUS_1:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_1_STATUS_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_1_STATUS_1_OFFSET 0x30           /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_1 offset) EFUSE_1_1 Status */
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_1_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_1 reset_value) EFUSE_1_1 Status */

#define EFUSE_MISC_REGS_EFUSE_1_STATUS_1_EFUSE_1_STATUS_1_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_1)                           */
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_1_EFUSE_1_STATUS_1_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_1_STATUS_1_EFUSE_1_STATUS_1_Pos)
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_1_EFUSE_1_STATUS_1(value) (EFUSE_MISC_REGS_EFUSE_1_STATUS_1_EFUSE_1_STATUS_1_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_1_STATUS_1_EFUSE_1_STATUS_1_Pos))  
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_1_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_1) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_1_STATUS_2 : (EFUSE_MISC_REGS Offset: 0x34) (R/  32) EFUSE_1_2 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_1_STATUS_2:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_1_STATUS_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_1_STATUS_2_OFFSET 0x34           /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_2 offset) EFUSE_1_2 Status */
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_2_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_2 reset_value) EFUSE_1_2 Status */

#define EFUSE_MISC_REGS_EFUSE_1_STATUS_2_EFUSE_1_STATUS_2_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_2)                           */
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_2_EFUSE_1_STATUS_2_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_1_STATUS_2_EFUSE_1_STATUS_2_Pos)
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_2_EFUSE_1_STATUS_2(value) (EFUSE_MISC_REGS_EFUSE_1_STATUS_2_EFUSE_1_STATUS_2_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_1_STATUS_2_EFUSE_1_STATUS_2_Pos))  
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_2_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_2) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_1_STATUS_3 : (EFUSE_MISC_REGS Offset: 0x38) (R/  32) EFUSE_1_3 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_1_STATUS_3:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_1_STATUS_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_1_STATUS_3_OFFSET 0x38           /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_3 offset) EFUSE_1_3 Status */
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_3_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_3 reset_value) EFUSE_1_3 Status */

#define EFUSE_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_3)                           */
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3_Pos)
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3(value) (EFUSE_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3_Pos))  
#define EFUSE_MISC_REGS_EFUSE_1_STATUS_3_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_1_STATUS_3) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_2_PROG_0 : (EFUSE_MISC_REGS Offset: 0x3c) (R/W  32) EFUSE_2_0 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_2_PROG_0:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_2_PROG_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_2_PROG_0_OFFSET 0x3C           /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_0 offset) EFUSE_2_0 Program Register */
#define EFUSE_MISC_REGS_EFUSE_2_PROG_0_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_0 reset_value) EFUSE_2_0 Program Register */

#define EFUSE_MISC_REGS_EFUSE_2_PROG_0_EFUSE_2_PROG_0_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_0)                             */
#define EFUSE_MISC_REGS_EFUSE_2_PROG_0_EFUSE_2_PROG_0_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_2_PROG_0_EFUSE_2_PROG_0_Pos)
#define EFUSE_MISC_REGS_EFUSE_2_PROG_0_EFUSE_2_PROG_0(value) (EFUSE_MISC_REGS_EFUSE_2_PROG_0_EFUSE_2_PROG_0_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_2_PROG_0_EFUSE_2_PROG_0_Pos))  
#define EFUSE_MISC_REGS_EFUSE_2_PROG_0_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_0) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_2_PROG_1 : (EFUSE_MISC_REGS Offset: 0x40) (R/W  32) EFUSE_2_1 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_2_PROG_1:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_2_PROG_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_2_PROG_1_OFFSET 0x40           /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_1 offset) EFUSE_2_1 Program Register */
#define EFUSE_MISC_REGS_EFUSE_2_PROG_1_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_1 reset_value) EFUSE_2_1 Program Register */

#define EFUSE_MISC_REGS_EFUSE_2_PROG_1_EFUSE_2_PROG_1_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_1)                             */
#define EFUSE_MISC_REGS_EFUSE_2_PROG_1_EFUSE_2_PROG_1_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_2_PROG_1_EFUSE_2_PROG_1_Pos)
#define EFUSE_MISC_REGS_EFUSE_2_PROG_1_EFUSE_2_PROG_1(value) (EFUSE_MISC_REGS_EFUSE_2_PROG_1_EFUSE_2_PROG_1_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_2_PROG_1_EFUSE_2_PROG_1_Pos))  
#define EFUSE_MISC_REGS_EFUSE_2_PROG_1_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_1) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_2_PROG_2 : (EFUSE_MISC_REGS Offset: 0x44) (R/W  32) EFUSE_2_2 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_2_PROG_2:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_2_PROG_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_2_PROG_2_OFFSET 0x44           /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_2 offset) EFUSE_2_2 Program Register */
#define EFUSE_MISC_REGS_EFUSE_2_PROG_2_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_2 reset_value) EFUSE_2_2 Program Register */

#define EFUSE_MISC_REGS_EFUSE_2_PROG_2_EFUSE_2_PROG_2_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_2)                             */
#define EFUSE_MISC_REGS_EFUSE_2_PROG_2_EFUSE_2_PROG_2_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_2_PROG_2_EFUSE_2_PROG_2_Pos)
#define EFUSE_MISC_REGS_EFUSE_2_PROG_2_EFUSE_2_PROG_2(value) (EFUSE_MISC_REGS_EFUSE_2_PROG_2_EFUSE_2_PROG_2_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_2_PROG_2_EFUSE_2_PROG_2_Pos))  
#define EFUSE_MISC_REGS_EFUSE_2_PROG_2_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_2) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_2_PROG_3 : (EFUSE_MISC_REGS Offset: 0x48) (R/W  32) EFUSE_2_3 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_2_PROG_3:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_2_PROG_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_2_PROG_3_OFFSET 0x48           /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_3 offset) EFUSE_2_3 Program Register */
#define EFUSE_MISC_REGS_EFUSE_2_PROG_3_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_3 reset_value) EFUSE_2_3 Program Register */

#define EFUSE_MISC_REGS_EFUSE_2_PROG_3_EFUSE_2_PROG_3_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_3)                             */
#define EFUSE_MISC_REGS_EFUSE_2_PROG_3_EFUSE_2_PROG_3_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_2_PROG_3_EFUSE_2_PROG_3_Pos)
#define EFUSE_MISC_REGS_EFUSE_2_PROG_3_EFUSE_2_PROG_3(value) (EFUSE_MISC_REGS_EFUSE_2_PROG_3_EFUSE_2_PROG_3_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_2_PROG_3_EFUSE_2_PROG_3_Pos))  
#define EFUSE_MISC_REGS_EFUSE_2_PROG_3_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_2_PROG_3) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_2_STATUS_0 : (EFUSE_MISC_REGS Offset: 0x4c) (R/  32) EFUSE_2_0 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_2_STATUS_0:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_2_STATUS_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_2_STATUS_0_OFFSET 0x4C           /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_0 offset) EFUSE_2_0 Status */
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_0_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_0 reset_value) EFUSE_2_0 Status */

#define EFUSE_MISC_REGS_EFUSE_2_STATUS_0_EFUSE_2_STATUS_0_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_0)                           */
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_0_EFUSE_2_STATUS_0_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_2_STATUS_0_EFUSE_2_STATUS_0_Pos)
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_0_EFUSE_2_STATUS_0(value) (EFUSE_MISC_REGS_EFUSE_2_STATUS_0_EFUSE_2_STATUS_0_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_2_STATUS_0_EFUSE_2_STATUS_0_Pos))  
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_0_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_0) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_2_STATUS_1 : (EFUSE_MISC_REGS Offset: 0x50) (R/  32) EFUSE_2_1 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_2_STATUS_1:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_2_STATUS_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_2_STATUS_1_OFFSET 0x50           /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_1 offset) EFUSE_2_1 Status */
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_1_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_1 reset_value) EFUSE_2_1 Status */

#define EFUSE_MISC_REGS_EFUSE_2_STATUS_1_EFUSE_2_STATUS_1_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_1)                           */
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_1_EFUSE_2_STATUS_1_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_2_STATUS_1_EFUSE_2_STATUS_1_Pos)
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_1_EFUSE_2_STATUS_1(value) (EFUSE_MISC_REGS_EFUSE_2_STATUS_1_EFUSE_2_STATUS_1_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_2_STATUS_1_EFUSE_2_STATUS_1_Pos))  
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_1_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_1) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_2_STATUS_2 : (EFUSE_MISC_REGS Offset: 0x54) (R/  32) EFUSE_2_2 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_2_STATUS_2:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_2_STATUS_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_2_STATUS_2_OFFSET 0x54           /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_2 offset) EFUSE_2_2 Status */
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_2_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_2 reset_value) EFUSE_2_2 Status */

#define EFUSE_MISC_REGS_EFUSE_2_STATUS_2_EFUSE_2_STATUS_2_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_2)                           */
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_2_EFUSE_2_STATUS_2_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_2_STATUS_2_EFUSE_2_STATUS_2_Pos)
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_2_EFUSE_2_STATUS_2(value) (EFUSE_MISC_REGS_EFUSE_2_STATUS_2_EFUSE_2_STATUS_2_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_2_STATUS_2_EFUSE_2_STATUS_2_Pos))  
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_2_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_2) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_2_STATUS_3 : (EFUSE_MISC_REGS Offset: 0x58) (R/  32) EFUSE_2_3 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_2_STATUS_3:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_2_STATUS_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_2_STATUS_3_OFFSET 0x58           /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_3 offset) EFUSE_2_3 Status */
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_3_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_3 reset_value) EFUSE_2_3 Status */

#define EFUSE_MISC_REGS_EFUSE_2_STATUS_3_EFUSE_2_STATUS_3_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_3)                           */
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_3_EFUSE_2_STATUS_3_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_2_STATUS_3_EFUSE_2_STATUS_3_Pos)
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_3_EFUSE_2_STATUS_3(value) (EFUSE_MISC_REGS_EFUSE_2_STATUS_3_EFUSE_2_STATUS_3_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_2_STATUS_3_EFUSE_2_STATUS_3_Pos))  
#define EFUSE_MISC_REGS_EFUSE_2_STATUS_3_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_2_STATUS_3) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_3_PROG_0 : (EFUSE_MISC_REGS Offset: 0x5c) (R/W  32) EFUSE_3_0 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_3_PROG_0:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_3_PROG_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_3_PROG_0_OFFSET 0x5C           /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_0 offset) EFUSE_3_0 Program Register */
#define EFUSE_MISC_REGS_EFUSE_3_PROG_0_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_0 reset_value) EFUSE_3_0 Program Register */

#define EFUSE_MISC_REGS_EFUSE_3_PROG_0_EFUSE_3_PROG_0_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_0)                             */
#define EFUSE_MISC_REGS_EFUSE_3_PROG_0_EFUSE_3_PROG_0_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_3_PROG_0_EFUSE_3_PROG_0_Pos)
#define EFUSE_MISC_REGS_EFUSE_3_PROG_0_EFUSE_3_PROG_0(value) (EFUSE_MISC_REGS_EFUSE_3_PROG_0_EFUSE_3_PROG_0_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_3_PROG_0_EFUSE_3_PROG_0_Pos))  
#define EFUSE_MISC_REGS_EFUSE_3_PROG_0_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_0) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_3_PROG_1 : (EFUSE_MISC_REGS Offset: 0x60) (R/W  32) EFUSE_3_1 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_3_PROG_1:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_3_PROG_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_3_PROG_1_OFFSET 0x60           /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_1 offset) EFUSE_3_1 Program Register */
#define EFUSE_MISC_REGS_EFUSE_3_PROG_1_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_1 reset_value) EFUSE_3_1 Program Register */

#define EFUSE_MISC_REGS_EFUSE_3_PROG_1_EFUSE_3_PROG_1_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_1)                             */
#define EFUSE_MISC_REGS_EFUSE_3_PROG_1_EFUSE_3_PROG_1_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_3_PROG_1_EFUSE_3_PROG_1_Pos)
#define EFUSE_MISC_REGS_EFUSE_3_PROG_1_EFUSE_3_PROG_1(value) (EFUSE_MISC_REGS_EFUSE_3_PROG_1_EFUSE_3_PROG_1_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_3_PROG_1_EFUSE_3_PROG_1_Pos))  
#define EFUSE_MISC_REGS_EFUSE_3_PROG_1_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_1) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_3_PROG_2 : (EFUSE_MISC_REGS Offset: 0x64) (R/W  32) EFUSE_3_2 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_3_PROG_2:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_3_PROG_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_3_PROG_2_OFFSET 0x64           /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_2 offset) EFUSE_3_2 Program Register */
#define EFUSE_MISC_REGS_EFUSE_3_PROG_2_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_2 reset_value) EFUSE_3_2 Program Register */

#define EFUSE_MISC_REGS_EFUSE_3_PROG_2_EFUSE_3_PROG_2_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_2)                             */
#define EFUSE_MISC_REGS_EFUSE_3_PROG_2_EFUSE_3_PROG_2_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_3_PROG_2_EFUSE_3_PROG_2_Pos)
#define EFUSE_MISC_REGS_EFUSE_3_PROG_2_EFUSE_3_PROG_2(value) (EFUSE_MISC_REGS_EFUSE_3_PROG_2_EFUSE_3_PROG_2_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_3_PROG_2_EFUSE_3_PROG_2_Pos))  
#define EFUSE_MISC_REGS_EFUSE_3_PROG_2_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_2) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_3_PROG_3 : (EFUSE_MISC_REGS Offset: 0x68) (R/W  32) EFUSE_3_3 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_3_PROG_3:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_3_PROG_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_3_PROG_3_OFFSET 0x68           /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_3 offset) EFUSE_3_3 Program Register */
#define EFUSE_MISC_REGS_EFUSE_3_PROG_3_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_3 reset_value) EFUSE_3_3 Program Register */

#define EFUSE_MISC_REGS_EFUSE_3_PROG_3_EFUSE_3_PROG_3_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_3)                             */
#define EFUSE_MISC_REGS_EFUSE_3_PROG_3_EFUSE_3_PROG_3_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_3_PROG_3_EFUSE_3_PROG_3_Pos)
#define EFUSE_MISC_REGS_EFUSE_3_PROG_3_EFUSE_3_PROG_3(value) (EFUSE_MISC_REGS_EFUSE_3_PROG_3_EFUSE_3_PROG_3_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_3_PROG_3_EFUSE_3_PROG_3_Pos))  
#define EFUSE_MISC_REGS_EFUSE_3_PROG_3_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_3_PROG_3) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_3_STATUS_0 : (EFUSE_MISC_REGS Offset: 0x6c) (R/  32) EFUSE_3_0 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_3_STATUS_0:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_3_STATUS_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_3_STATUS_0_OFFSET 0x6C           /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_0 offset) EFUSE_3_0 Status */
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_0_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_0 reset_value) EFUSE_3_0 Status */

#define EFUSE_MISC_REGS_EFUSE_3_STATUS_0_EFUSE_3_STATUS_0_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_0)                           */
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_0_EFUSE_3_STATUS_0_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_3_STATUS_0_EFUSE_3_STATUS_0_Pos)
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_0_EFUSE_3_STATUS_0(value) (EFUSE_MISC_REGS_EFUSE_3_STATUS_0_EFUSE_3_STATUS_0_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_3_STATUS_0_EFUSE_3_STATUS_0_Pos))  
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_0_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_0) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_3_STATUS_1 : (EFUSE_MISC_REGS Offset: 0x70) (R/  32) EFUSE_3_1 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_3_STATUS_1:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_3_STATUS_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_3_STATUS_1_OFFSET 0x70           /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_1 offset) EFUSE_3_1 Status */
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_1_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_1 reset_value) EFUSE_3_1 Status */

#define EFUSE_MISC_REGS_EFUSE_3_STATUS_1_EFUSE_3_STATUS_1_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_1)                           */
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_1_EFUSE_3_STATUS_1_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_3_STATUS_1_EFUSE_3_STATUS_1_Pos)
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_1_EFUSE_3_STATUS_1(value) (EFUSE_MISC_REGS_EFUSE_3_STATUS_1_EFUSE_3_STATUS_1_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_3_STATUS_1_EFUSE_3_STATUS_1_Pos))  
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_1_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_1) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_3_STATUS_2 : (EFUSE_MISC_REGS Offset: 0x74) (R/  32) EFUSE_3_2 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_3_STATUS_2:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_3_STATUS_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_3_STATUS_2_OFFSET 0x74           /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_2 offset) EFUSE_3_2 Status */
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_2_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_2 reset_value) EFUSE_3_2 Status */

#define EFUSE_MISC_REGS_EFUSE_3_STATUS_2_EFUSE_3_STATUS_2_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_2)                           */
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_2_EFUSE_3_STATUS_2_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_3_STATUS_2_EFUSE_3_STATUS_2_Pos)
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_2_EFUSE_3_STATUS_2(value) (EFUSE_MISC_REGS_EFUSE_3_STATUS_2_EFUSE_3_STATUS_2_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_3_STATUS_2_EFUSE_3_STATUS_2_Pos))  
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_2_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_2) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_3_STATUS_3 : (EFUSE_MISC_REGS Offset: 0x78) (R/  32) EFUSE_3_3 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_3_STATUS_3:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_3_STATUS_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_3_STATUS_3_OFFSET 0x78           /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_3 offset) EFUSE_3_3 Status */
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_3_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_3 reset_value) EFUSE_3_3 Status */

#define EFUSE_MISC_REGS_EFUSE_3_STATUS_3_EFUSE_3_STATUS_3_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_3)                           */
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_3_EFUSE_3_STATUS_3_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_3_STATUS_3_EFUSE_3_STATUS_3_Pos)
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_3_EFUSE_3_STATUS_3(value) (EFUSE_MISC_REGS_EFUSE_3_STATUS_3_EFUSE_3_STATUS_3_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_3_STATUS_3_EFUSE_3_STATUS_3_Pos))  
#define EFUSE_MISC_REGS_EFUSE_3_STATUS_3_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_3_STATUS_3) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_4_PROG_0 : (EFUSE_MISC_REGS Offset: 0x7c) (R/W  32) EFUSE_4_0 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_4_PROG_0:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_4_PROG_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_4_PROG_0_OFFSET 0x7C           /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_0 offset) EFUSE_4_0 Program Register */
#define EFUSE_MISC_REGS_EFUSE_4_PROG_0_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_0 reset_value) EFUSE_4_0 Program Register */

#define EFUSE_MISC_REGS_EFUSE_4_PROG_0_EFUSE_4_PROG_0_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_0)                             */
#define EFUSE_MISC_REGS_EFUSE_4_PROG_0_EFUSE_4_PROG_0_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_4_PROG_0_EFUSE_4_PROG_0_Pos)
#define EFUSE_MISC_REGS_EFUSE_4_PROG_0_EFUSE_4_PROG_0(value) (EFUSE_MISC_REGS_EFUSE_4_PROG_0_EFUSE_4_PROG_0_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_4_PROG_0_EFUSE_4_PROG_0_Pos))  
#define EFUSE_MISC_REGS_EFUSE_4_PROG_0_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_0) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_4_PROG_1 : (EFUSE_MISC_REGS Offset: 0x80) (R/W  32) EFUSE_4_1 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_4_PROG_1:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_4_PROG_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_4_PROG_1_OFFSET 0x80           /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_1 offset) EFUSE_4_1 Program Register */
#define EFUSE_MISC_REGS_EFUSE_4_PROG_1_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_1 reset_value) EFUSE_4_1 Program Register */

#define EFUSE_MISC_REGS_EFUSE_4_PROG_1_EFUSE_4_PROG_1_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_1)                             */
#define EFUSE_MISC_REGS_EFUSE_4_PROG_1_EFUSE_4_PROG_1_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_4_PROG_1_EFUSE_4_PROG_1_Pos)
#define EFUSE_MISC_REGS_EFUSE_4_PROG_1_EFUSE_4_PROG_1(value) (EFUSE_MISC_REGS_EFUSE_4_PROG_1_EFUSE_4_PROG_1_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_4_PROG_1_EFUSE_4_PROG_1_Pos))  
#define EFUSE_MISC_REGS_EFUSE_4_PROG_1_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_1) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_4_PROG_2 : (EFUSE_MISC_REGS Offset: 0x84) (R/W  32) EFUSE_4_2 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_4_PROG_2:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_4_PROG_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_4_PROG_2_OFFSET 0x84           /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_2 offset) EFUSE_4_2 Program Register */
#define EFUSE_MISC_REGS_EFUSE_4_PROG_2_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_2 reset_value) EFUSE_4_2 Program Register */

#define EFUSE_MISC_REGS_EFUSE_4_PROG_2_EFUSE_4_PROG_2_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_2)                             */
#define EFUSE_MISC_REGS_EFUSE_4_PROG_2_EFUSE_4_PROG_2_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_4_PROG_2_EFUSE_4_PROG_2_Pos)
#define EFUSE_MISC_REGS_EFUSE_4_PROG_2_EFUSE_4_PROG_2(value) (EFUSE_MISC_REGS_EFUSE_4_PROG_2_EFUSE_4_PROG_2_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_4_PROG_2_EFUSE_4_PROG_2_Pos))  
#define EFUSE_MISC_REGS_EFUSE_4_PROG_2_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_2) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_4_PROG_3 : (EFUSE_MISC_REGS Offset: 0x88) (R/W  32) EFUSE_4_3 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_4_PROG_3:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_4_PROG_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_4_PROG_3_OFFSET 0x88           /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_3 offset) EFUSE_4_3 Program Register */
#define EFUSE_MISC_REGS_EFUSE_4_PROG_3_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_3 reset_value) EFUSE_4_3 Program Register */

#define EFUSE_MISC_REGS_EFUSE_4_PROG_3_EFUSE_4_PROG_3_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_3)                             */
#define EFUSE_MISC_REGS_EFUSE_4_PROG_3_EFUSE_4_PROG_3_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_4_PROG_3_EFUSE_4_PROG_3_Pos)
#define EFUSE_MISC_REGS_EFUSE_4_PROG_3_EFUSE_4_PROG_3(value) (EFUSE_MISC_REGS_EFUSE_4_PROG_3_EFUSE_4_PROG_3_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_4_PROG_3_EFUSE_4_PROG_3_Pos))  
#define EFUSE_MISC_REGS_EFUSE_4_PROG_3_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_4_PROG_3) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_4_STATUS_0 : (EFUSE_MISC_REGS Offset: 0x8c) (R/  32) EFUSE_4_0 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_4_STATUS_0:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_4_STATUS_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_4_STATUS_0_OFFSET 0x8C           /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_0 offset) EFUSE_4_0 Status */
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_0_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_0 reset_value) EFUSE_4_0 Status */

#define EFUSE_MISC_REGS_EFUSE_4_STATUS_0_EFUSE_4_STATUS_0_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_0)                           */
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_0_EFUSE_4_STATUS_0_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_4_STATUS_0_EFUSE_4_STATUS_0_Pos)
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_0_EFUSE_4_STATUS_0(value) (EFUSE_MISC_REGS_EFUSE_4_STATUS_0_EFUSE_4_STATUS_0_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_4_STATUS_0_EFUSE_4_STATUS_0_Pos))  
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_0_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_0) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_4_STATUS_1 : (EFUSE_MISC_REGS Offset: 0x90) (R/  32) EFUSE_4_1 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_4_STATUS_1:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_4_STATUS_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_4_STATUS_1_OFFSET 0x90           /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_1 offset) EFUSE_4_1 Status */
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_1_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_1 reset_value) EFUSE_4_1 Status */

#define EFUSE_MISC_REGS_EFUSE_4_STATUS_1_EFUSE_4_STATUS_1_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_1)                           */
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_1_EFUSE_4_STATUS_1_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_4_STATUS_1_EFUSE_4_STATUS_1_Pos)
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_1_EFUSE_4_STATUS_1(value) (EFUSE_MISC_REGS_EFUSE_4_STATUS_1_EFUSE_4_STATUS_1_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_4_STATUS_1_EFUSE_4_STATUS_1_Pos))  
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_1_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_1) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_4_STATUS_2 : (EFUSE_MISC_REGS Offset: 0x94) (R/  32) EFUSE_4_2 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_4_STATUS_2:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_4_STATUS_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_4_STATUS_2_OFFSET 0x94           /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_2 offset) EFUSE_4_2 Status */
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_2_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_2 reset_value) EFUSE_4_2 Status */

#define EFUSE_MISC_REGS_EFUSE_4_STATUS_2_EFUSE_4_STATUS_2_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_2)                           */
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_2_EFUSE_4_STATUS_2_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_4_STATUS_2_EFUSE_4_STATUS_2_Pos)
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_2_EFUSE_4_STATUS_2(value) (EFUSE_MISC_REGS_EFUSE_4_STATUS_2_EFUSE_4_STATUS_2_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_4_STATUS_2_EFUSE_4_STATUS_2_Pos))  
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_2_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_2) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_4_STATUS_3 : (EFUSE_MISC_REGS Offset: 0x98) (R/  32) EFUSE_4_3 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_4_STATUS_3:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_4_STATUS_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_4_STATUS_3_OFFSET 0x98           /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_3 offset) EFUSE_4_3 Status */
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_3_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_3 reset_value) EFUSE_4_3 Status */

#define EFUSE_MISC_REGS_EFUSE_4_STATUS_3_EFUSE_4_STATUS_3_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_3)                           */
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_3_EFUSE_4_STATUS_3_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_4_STATUS_3_EFUSE_4_STATUS_3_Pos)
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_3_EFUSE_4_STATUS_3(value) (EFUSE_MISC_REGS_EFUSE_4_STATUS_3_EFUSE_4_STATUS_3_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_4_STATUS_3_EFUSE_4_STATUS_3_Pos))  
#define EFUSE_MISC_REGS_EFUSE_4_STATUS_3_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_4_STATUS_3) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_5_PROG_0 : (EFUSE_MISC_REGS Offset: 0x9c) (R/W  32) EFUSE_4_0 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_5_PROG_0:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_5_PROG_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_5_PROG_0_OFFSET 0x9C           /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_0 offset) EFUSE_4_0 Program Register */
#define EFUSE_MISC_REGS_EFUSE_5_PROG_0_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_0 reset_value) EFUSE_4_0 Program Register */

#define EFUSE_MISC_REGS_EFUSE_5_PROG_0_EFUSE_5_PROG_0_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_0)                             */
#define EFUSE_MISC_REGS_EFUSE_5_PROG_0_EFUSE_5_PROG_0_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_5_PROG_0_EFUSE_5_PROG_0_Pos)
#define EFUSE_MISC_REGS_EFUSE_5_PROG_0_EFUSE_5_PROG_0(value) (EFUSE_MISC_REGS_EFUSE_5_PROG_0_EFUSE_5_PROG_0_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_5_PROG_0_EFUSE_5_PROG_0_Pos))  
#define EFUSE_MISC_REGS_EFUSE_5_PROG_0_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_0) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_5_PROG_1 : (EFUSE_MISC_REGS Offset: 0xa0) (R/W  32) EFUSE_5_1 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_5_PROG_1:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_5_PROG_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_5_PROG_1_OFFSET 0xA0           /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_1 offset) EFUSE_5_1 Program Register */
#define EFUSE_MISC_REGS_EFUSE_5_PROG_1_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_1 reset_value) EFUSE_5_1 Program Register */

#define EFUSE_MISC_REGS_EFUSE_5_PROG_1_EFUSE_5_PROG_1_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_1)                             */
#define EFUSE_MISC_REGS_EFUSE_5_PROG_1_EFUSE_5_PROG_1_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_5_PROG_1_EFUSE_5_PROG_1_Pos)
#define EFUSE_MISC_REGS_EFUSE_5_PROG_1_EFUSE_5_PROG_1(value) (EFUSE_MISC_REGS_EFUSE_5_PROG_1_EFUSE_5_PROG_1_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_5_PROG_1_EFUSE_5_PROG_1_Pos))  
#define EFUSE_MISC_REGS_EFUSE_5_PROG_1_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_1) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_5_PROG_2 : (EFUSE_MISC_REGS Offset: 0xa4) (R/W  32) EFUSE_5_2 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_5_PROG_2:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_5_PROG_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_5_PROG_2_OFFSET 0xA4           /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_2 offset) EFUSE_5_2 Program Register */
#define EFUSE_MISC_REGS_EFUSE_5_PROG_2_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_2 reset_value) EFUSE_5_2 Program Register */

#define EFUSE_MISC_REGS_EFUSE_5_PROG_2_EFUSE_5_PROG_2_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_2)                             */
#define EFUSE_MISC_REGS_EFUSE_5_PROG_2_EFUSE_5_PROG_2_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_5_PROG_2_EFUSE_5_PROG_2_Pos)
#define EFUSE_MISC_REGS_EFUSE_5_PROG_2_EFUSE_5_PROG_2(value) (EFUSE_MISC_REGS_EFUSE_5_PROG_2_EFUSE_5_PROG_2_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_5_PROG_2_EFUSE_5_PROG_2_Pos))  
#define EFUSE_MISC_REGS_EFUSE_5_PROG_2_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_2) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_5_PROG_3 : (EFUSE_MISC_REGS Offset: 0xa8) (R/W  32) EFUSE_5_3 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_5_PROG_3:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_5_PROG_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_5_PROG_3_OFFSET 0xA8           /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_3 offset) EFUSE_5_3 Program Register */
#define EFUSE_MISC_REGS_EFUSE_5_PROG_3_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_3 reset_value) EFUSE_5_3 Program Register */

#define EFUSE_MISC_REGS_EFUSE_5_PROG_3_EFUSE_5_PROG_3_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_3)                             */
#define EFUSE_MISC_REGS_EFUSE_5_PROG_3_EFUSE_5_PROG_3_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_5_PROG_3_EFUSE_5_PROG_3_Pos)
#define EFUSE_MISC_REGS_EFUSE_5_PROG_3_EFUSE_5_PROG_3(value) (EFUSE_MISC_REGS_EFUSE_5_PROG_3_EFUSE_5_PROG_3_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_5_PROG_3_EFUSE_5_PROG_3_Pos))  
#define EFUSE_MISC_REGS_EFUSE_5_PROG_3_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_5_PROG_3) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_5_STATUS_0 : (EFUSE_MISC_REGS Offset: 0xac) (R/  32) EFUSE_5_0 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_5_STATUS_0:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_5_STATUS_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_5_STATUS_0_OFFSET 0xAC           /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_0 offset) EFUSE_5_0 Status */
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_0_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_0 reset_value) EFUSE_5_0 Status */

#define EFUSE_MISC_REGS_EFUSE_5_STATUS_0_EFUSE_5_STATUS_0_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_0)                           */
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_0_EFUSE_5_STATUS_0_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_5_STATUS_0_EFUSE_5_STATUS_0_Pos)
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_0_EFUSE_5_STATUS_0(value) (EFUSE_MISC_REGS_EFUSE_5_STATUS_0_EFUSE_5_STATUS_0_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_5_STATUS_0_EFUSE_5_STATUS_0_Pos))  
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_0_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_0) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_5_STATUS_1 : (EFUSE_MISC_REGS Offset: 0xb0) (R/  32) EFUSE_5_1 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_5_STATUS_1:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_5_STATUS_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_5_STATUS_1_OFFSET 0xB0           /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_1 offset) EFUSE_5_1 Status */
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_1_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_1 reset_value) EFUSE_5_1 Status */

#define EFUSE_MISC_REGS_EFUSE_5_STATUS_1_EFUSE_5_STATUS_1_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_1)                           */
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_1_EFUSE_5_STATUS_1_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_5_STATUS_1_EFUSE_5_STATUS_1_Pos)
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_1_EFUSE_5_STATUS_1(value) (EFUSE_MISC_REGS_EFUSE_5_STATUS_1_EFUSE_5_STATUS_1_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_5_STATUS_1_EFUSE_5_STATUS_1_Pos))  
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_1_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_1) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_5_STATUS_2 : (EFUSE_MISC_REGS Offset: 0xb4) (R/  32) EFUSE_5_2 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_5_STATUS_2:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_5_STATUS_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_5_STATUS_2_OFFSET 0xB4           /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_2 offset) EFUSE_5_2 Status */
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_2_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_2 reset_value) EFUSE_5_2 Status */

#define EFUSE_MISC_REGS_EFUSE_5_STATUS_2_EFUSE_5_STATUS_2_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_2)                           */
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_2_EFUSE_5_STATUS_2_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_5_STATUS_2_EFUSE_5_STATUS_2_Pos)
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_2_EFUSE_5_STATUS_2(value) (EFUSE_MISC_REGS_EFUSE_5_STATUS_2_EFUSE_5_STATUS_2_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_5_STATUS_2_EFUSE_5_STATUS_2_Pos))  
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_2_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_2) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_5_STATUS_3 : (EFUSE_MISC_REGS Offset: 0xb8) (R/  32) EFUSE_5_3 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_5_STATUS_3:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_5_STATUS_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_5_STATUS_3_OFFSET 0xB8           /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_3 offset) EFUSE_5_3 Status */
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_3_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_3 reset_value) EFUSE_5_3 Status */

#define EFUSE_MISC_REGS_EFUSE_5_STATUS_3_EFUSE_5_STATUS_3_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_3)                           */
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_3_EFUSE_5_STATUS_3_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_5_STATUS_3_EFUSE_5_STATUS_3_Pos)
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_3_EFUSE_5_STATUS_3(value) (EFUSE_MISC_REGS_EFUSE_5_STATUS_3_EFUSE_5_STATUS_3_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_5_STATUS_3_EFUSE_5_STATUS_3_Pos))  
#define EFUSE_MISC_REGS_EFUSE_5_STATUS_3_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_5_STATUS_3) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_6_PROG_0 : (EFUSE_MISC_REGS Offset: 0xbc) (R/W  32) EFUSE_6_0 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_6_PROG_0:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_6_PROG_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_6_PROG_0_OFFSET 0xBC           /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_0 offset) EFUSE_6_0 Program Register */
#define EFUSE_MISC_REGS_EFUSE_6_PROG_0_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_0 reset_value) EFUSE_6_0 Program Register */

#define EFUSE_MISC_REGS_EFUSE_6_PROG_0_EFUSE_6_PROG_0_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_0)                             */
#define EFUSE_MISC_REGS_EFUSE_6_PROG_0_EFUSE_6_PROG_0_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_6_PROG_0_EFUSE_6_PROG_0_Pos)
#define EFUSE_MISC_REGS_EFUSE_6_PROG_0_EFUSE_6_PROG_0(value) (EFUSE_MISC_REGS_EFUSE_6_PROG_0_EFUSE_6_PROG_0_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_6_PROG_0_EFUSE_6_PROG_0_Pos))  
#define EFUSE_MISC_REGS_EFUSE_6_PROG_0_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_0) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_6_PROG_1 : (EFUSE_MISC_REGS Offset: 0xc0) (R/W  32) EFUSE_6_1 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_6_PROG_1:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_6_PROG_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_6_PROG_1_OFFSET 0xC0           /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_1 offset) EFUSE_6_1 Program Register */
#define EFUSE_MISC_REGS_EFUSE_6_PROG_1_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_1 reset_value) EFUSE_6_1 Program Register */

#define EFUSE_MISC_REGS_EFUSE_6_PROG_1_EFUSE_6_PROG_1_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_1)                             */
#define EFUSE_MISC_REGS_EFUSE_6_PROG_1_EFUSE_6_PROG_1_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_6_PROG_1_EFUSE_6_PROG_1_Pos)
#define EFUSE_MISC_REGS_EFUSE_6_PROG_1_EFUSE_6_PROG_1(value) (EFUSE_MISC_REGS_EFUSE_6_PROG_1_EFUSE_6_PROG_1_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_6_PROG_1_EFUSE_6_PROG_1_Pos))  
#define EFUSE_MISC_REGS_EFUSE_6_PROG_1_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_1) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_6_PROG_2 : (EFUSE_MISC_REGS Offset: 0xc4) (R/W  32) EFUSE_6_2 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_6_PROG_2:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_6_PROG_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_6_PROG_2_OFFSET 0xC4           /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_2 offset) EFUSE_6_2 Program Register */
#define EFUSE_MISC_REGS_EFUSE_6_PROG_2_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_2 reset_value) EFUSE_6_2 Program Register */

#define EFUSE_MISC_REGS_EFUSE_6_PROG_2_EFUSE_6_PROG_2_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_2)                             */
#define EFUSE_MISC_REGS_EFUSE_6_PROG_2_EFUSE_6_PROG_2_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_6_PROG_2_EFUSE_6_PROG_2_Pos)
#define EFUSE_MISC_REGS_EFUSE_6_PROG_2_EFUSE_6_PROG_2(value) (EFUSE_MISC_REGS_EFUSE_6_PROG_2_EFUSE_6_PROG_2_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_6_PROG_2_EFUSE_6_PROG_2_Pos))  
#define EFUSE_MISC_REGS_EFUSE_6_PROG_2_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_2) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_6_PROG_3 : (EFUSE_MISC_REGS Offset: 0xc8) (R/W  32) EFUSE_6_3 Program Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_6_PROG_3:32;         /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_6_PROG_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_6_PROG_3_OFFSET 0xC8           /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_3 offset) EFUSE_6_3 Program Register */
#define EFUSE_MISC_REGS_EFUSE_6_PROG_3_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_3 reset_value) EFUSE_6_3 Program Register */

#define EFUSE_MISC_REGS_EFUSE_6_PROG_3_EFUSE_6_PROG_3_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_3)                             */
#define EFUSE_MISC_REGS_EFUSE_6_PROG_3_EFUSE_6_PROG_3_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_6_PROG_3_EFUSE_6_PROG_3_Pos)
#define EFUSE_MISC_REGS_EFUSE_6_PROG_3_EFUSE_6_PROG_3(value) (EFUSE_MISC_REGS_EFUSE_6_PROG_3_EFUSE_6_PROG_3_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_6_PROG_3_EFUSE_6_PROG_3_Pos))  
#define EFUSE_MISC_REGS_EFUSE_6_PROG_3_MASK   0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_6_PROG_3) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_6_STATUS_0 : (EFUSE_MISC_REGS Offset: 0xcc) (R/  32) EFUSE_6_0 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_6_STATUS_0:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_6_STATUS_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_6_STATUS_0_OFFSET 0xCC           /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_0 offset) EFUSE_6_0 Status */
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_0_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_0 reset_value) EFUSE_6_0 Status */

#define EFUSE_MISC_REGS_EFUSE_6_STATUS_0_EFUSE_6_STATUS_0_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_0)                           */
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_0_EFUSE_6_STATUS_0_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_6_STATUS_0_EFUSE_6_STATUS_0_Pos)
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_0_EFUSE_6_STATUS_0(value) (EFUSE_MISC_REGS_EFUSE_6_STATUS_0_EFUSE_6_STATUS_0_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_6_STATUS_0_EFUSE_6_STATUS_0_Pos))  
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_0_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_0) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_6_STATUS_1 : (EFUSE_MISC_REGS Offset: 0xd0) (R/  32) EFUSE_6_1 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_6_STATUS_1:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_6_STATUS_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_6_STATUS_1_OFFSET 0xD0           /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_1 offset) EFUSE_6_1 Status */
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_1_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_1 reset_value) EFUSE_6_1 Status */

#define EFUSE_MISC_REGS_EFUSE_6_STATUS_1_EFUSE_6_STATUS_1_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_1)                           */
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_1_EFUSE_6_STATUS_1_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_6_STATUS_1_EFUSE_6_STATUS_1_Pos)
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_1_EFUSE_6_STATUS_1(value) (EFUSE_MISC_REGS_EFUSE_6_STATUS_1_EFUSE_6_STATUS_1_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_6_STATUS_1_EFUSE_6_STATUS_1_Pos))  
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_1_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_1) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_6_STATUS_2 : (EFUSE_MISC_REGS Offset: 0xd4) (R/  32) EFUSE_6_2 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_6_STATUS_2:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_6_STATUS_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_6_STATUS_2_OFFSET 0xD4           /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_2 offset) EFUSE_6_2 Status */
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_2_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_2 reset_value) EFUSE_6_2 Status */

#define EFUSE_MISC_REGS_EFUSE_6_STATUS_2_EFUSE_6_STATUS_2_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_2)                           */
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_2_EFUSE_6_STATUS_2_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_6_STATUS_2_EFUSE_6_STATUS_2_Pos)
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_2_EFUSE_6_STATUS_2(value) (EFUSE_MISC_REGS_EFUSE_6_STATUS_2_EFUSE_6_STATUS_2_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_6_STATUS_2_EFUSE_6_STATUS_2_Pos))  
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_2_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_2) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_6_STATUS_3 : (EFUSE_MISC_REGS Offset: 0xd8) (R/  32) EFUSE_6_3 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_6_STATUS_3:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_6_STATUS_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_6_STATUS_3_OFFSET 0xD8           /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_3 offset) EFUSE_6_3 Status */
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_3_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_3 reset_value) EFUSE_6_3 Status */

#define EFUSE_MISC_REGS_EFUSE_6_STATUS_3_EFUSE_6_STATUS_3_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_3)                           */
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_3_EFUSE_6_STATUS_3_Msk (0xFFFFFFFFul << EFUSE_MISC_REGS_EFUSE_6_STATUS_3_EFUSE_6_STATUS_3_Pos)
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_3_EFUSE_6_STATUS_3(value) (EFUSE_MISC_REGS_EFUSE_6_STATUS_3_EFUSE_6_STATUS_3_Msk & ((value) << EFUSE_MISC_REGS_EFUSE_6_STATUS_3_EFUSE_6_STATUS_3_Pos))  
#define EFUSE_MISC_REGS_EFUSE_6_STATUS_3_MASK 0xFFFFFFFFul    /**< \brief (EFUSE_MISC_REGS_EFUSE_6_STATUS_3) Register MASK */

/* -------- EFUSE_MISC_REGS_EFUSE_MISC_CTRL : (EFUSE_MISC_REGS Offset: 0xdc) (R/  8) EFUSE 6 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  OUT_OF_RESET:1;            /*!< bit:      0  Read back the status of the eFuse out of reset */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} EFUSE_MISC_REGS_EFUSE_MISC_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EFUSE_MISC_REGS_EFUSE_MISC_CTRL_OFFSET 0xDC           /**<  \brief (EFUSE_MISC_REGS_EFUSE_MISC_CTRL offset) EFUSE 6 Control Register */
#define EFUSE_MISC_REGS_EFUSE_MISC_CTRL_RESETVALUE 0x00ul         /**<  \brief (EFUSE_MISC_REGS_EFUSE_MISC_CTRL reset_value) EFUSE 6 Control Register */

#define EFUSE_MISC_REGS_EFUSE_MISC_CTRL_OUT_OF_RESET_Pos 0  /**< \brief (EFUSE_MISC_REGS_EFUSE_MISC_CTRL) Read back the status of the eFuse out of reset */
#define EFUSE_MISC_REGS_EFUSE_MISC_CTRL_OUT_OF_RESET (0x1ul << EFUSE_MISC_REGS_EFUSE_MISC_CTRL_OUT_OF_RESET_Pos)  
#define EFUSE_MISC_REGS_EFUSE_MISC_CTRL_MASK  0x01ul    /**< \brief (EFUSE_MISC_REGS_EFUSE_MISC_CTRL) Register MASK */

/** \brief EFUSE_MISC_REGS hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* EFUSE Misc Registers */
  __IO EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_Type EFUSE_GLOBAL_RESET; /**< \brief Offset: 0x00 (R/W   8) Active Low Global Reset */
       RoReg8                         Reserved1[0x3];
  __IO EFUSE_MISC_REGS_EFUSE_1_CONTROL_Type EFUSE_1_CONTROL; /**< \brief Offset: 0x04 (R/W  32) EFUSE 1 Control Register */
  __IO EFUSE_MISC_REGS_EFUSE_2_CONTROL_Type EFUSE_2_CONTROL; /**< \brief Offset: 0x08 (R/W  32) EFUSE 2 Control Register */
  __IO EFUSE_MISC_REGS_EFUSE_3_CONTROL_Type EFUSE_3_CONTROL; /**< \brief Offset: 0x0C (R/W  32) EFUSE 3 Control Register */
  __IO EFUSE_MISC_REGS_EFUSE_4_CONTROL_Type EFUSE_4_CONTROL; /**< \brief Offset: 0x10 (R/W  32) EFUSE 4 Control Register */
  __IO EFUSE_MISC_REGS_EFUSE_5_CONTROL_Type EFUSE_5_CONTROL; /**< \brief Offset: 0x14 (R/W  32) EFUSE 5 Control Register */
  __IO EFUSE_MISC_REGS_EFUSE_6_CONTROL_Type EFUSE_6_CONTROL; /**< \brief Offset: 0x18 (R/W  32) EFUSE 6 Control Register */
  __IO EFUSE_MISC_REGS_EFUSE_1_PROG_0_Type EFUSE_1_PROG_0; /**< \brief Offset: 0x1C (R/W  32) EFUSE_1_0 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_1_PROG_1_Type EFUSE_1_PROG_1; /**< \brief Offset: 0x20 (R/W  32) EFUSE_1_1 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_1_PROG_2_Type EFUSE_1_PROG_2; /**< \brief Offset: 0x24 (R/W  32) EFUSE_1_2 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_1_PROG_3_Type EFUSE_1_PROG_3; /**< \brief Offset: 0x28 (R/W  32) EFUSE_1_3 Program Register */
  __I  EFUSE_MISC_REGS_EFUSE_1_STATUS_0_Type EFUSE_1_STATUS_0; /**< \brief Offset: 0x2C (R/   32) EFUSE_1_0 Status */
  __I  EFUSE_MISC_REGS_EFUSE_1_STATUS_1_Type EFUSE_1_STATUS_1; /**< \brief Offset: 0x30 (R/   32) EFUSE_1_1 Status */
  __I  EFUSE_MISC_REGS_EFUSE_1_STATUS_2_Type EFUSE_1_STATUS_2; /**< \brief Offset: 0x34 (R/   32) EFUSE_1_2 Status */
  __I  EFUSE_MISC_REGS_EFUSE_1_STATUS_3_Type EFUSE_1_STATUS_3; /**< \brief Offset: 0x38 (R/   32) EFUSE_1_3 Status */
  __IO EFUSE_MISC_REGS_EFUSE_2_PROG_0_Type EFUSE_2_PROG_0; /**< \brief Offset: 0x3C (R/W  32) EFUSE_2_0 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_2_PROG_1_Type EFUSE_2_PROG_1; /**< \brief Offset: 0x40 (R/W  32) EFUSE_2_1 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_2_PROG_2_Type EFUSE_2_PROG_2; /**< \brief Offset: 0x44 (R/W  32) EFUSE_2_2 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_2_PROG_3_Type EFUSE_2_PROG_3; /**< \brief Offset: 0x48 (R/W  32) EFUSE_2_3 Program Register */
  __I  EFUSE_MISC_REGS_EFUSE_2_STATUS_0_Type EFUSE_2_STATUS_0; /**< \brief Offset: 0x4C (R/   32) EFUSE_2_0 Status */
  __I  EFUSE_MISC_REGS_EFUSE_2_STATUS_1_Type EFUSE_2_STATUS_1; /**< \brief Offset: 0x50 (R/   32) EFUSE_2_1 Status */
  __I  EFUSE_MISC_REGS_EFUSE_2_STATUS_2_Type EFUSE_2_STATUS_2; /**< \brief Offset: 0x54 (R/   32) EFUSE_2_2 Status */
  __I  EFUSE_MISC_REGS_EFUSE_2_STATUS_3_Type EFUSE_2_STATUS_3; /**< \brief Offset: 0x58 (R/   32) EFUSE_2_3 Status */
  __IO EFUSE_MISC_REGS_EFUSE_3_PROG_0_Type EFUSE_3_PROG_0; /**< \brief Offset: 0x5C (R/W  32) EFUSE_3_0 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_3_PROG_1_Type EFUSE_3_PROG_1; /**< \brief Offset: 0x60 (R/W  32) EFUSE_3_1 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_3_PROG_2_Type EFUSE_3_PROG_2; /**< \brief Offset: 0x64 (R/W  32) EFUSE_3_2 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_3_PROG_3_Type EFUSE_3_PROG_3; /**< \brief Offset: 0x68 (R/W  32) EFUSE_3_3 Program Register */
  __I  EFUSE_MISC_REGS_EFUSE_3_STATUS_0_Type EFUSE_3_STATUS_0; /**< \brief Offset: 0x6C (R/   32) EFUSE_3_0 Status */
  __I  EFUSE_MISC_REGS_EFUSE_3_STATUS_1_Type EFUSE_3_STATUS_1; /**< \brief Offset: 0x70 (R/   32) EFUSE_3_1 Status */
  __I  EFUSE_MISC_REGS_EFUSE_3_STATUS_2_Type EFUSE_3_STATUS_2; /**< \brief Offset: 0x74 (R/   32) EFUSE_3_2 Status */
  __I  EFUSE_MISC_REGS_EFUSE_3_STATUS_3_Type EFUSE_3_STATUS_3; /**< \brief Offset: 0x78 (R/   32) EFUSE_3_3 Status */
  __IO EFUSE_MISC_REGS_EFUSE_4_PROG_0_Type EFUSE_4_PROG_0; /**< \brief Offset: 0x7C (R/W  32) EFUSE_4_0 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_4_PROG_1_Type EFUSE_4_PROG_1; /**< \brief Offset: 0x80 (R/W  32) EFUSE_4_1 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_4_PROG_2_Type EFUSE_4_PROG_2; /**< \brief Offset: 0x84 (R/W  32) EFUSE_4_2 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_4_PROG_3_Type EFUSE_4_PROG_3; /**< \brief Offset: 0x88 (R/W  32) EFUSE_4_3 Program Register */
  __I  EFUSE_MISC_REGS_EFUSE_4_STATUS_0_Type EFUSE_4_STATUS_0; /**< \brief Offset: 0x8C (R/   32) EFUSE_4_0 Status */
  __I  EFUSE_MISC_REGS_EFUSE_4_STATUS_1_Type EFUSE_4_STATUS_1; /**< \brief Offset: 0x90 (R/   32) EFUSE_4_1 Status */
  __I  EFUSE_MISC_REGS_EFUSE_4_STATUS_2_Type EFUSE_4_STATUS_2; /**< \brief Offset: 0x94 (R/   32) EFUSE_4_2 Status */
  __I  EFUSE_MISC_REGS_EFUSE_4_STATUS_3_Type EFUSE_4_STATUS_3; /**< \brief Offset: 0x98 (R/   32) EFUSE_4_3 Status */
  __IO EFUSE_MISC_REGS_EFUSE_5_PROG_0_Type EFUSE_5_PROG_0; /**< \brief Offset: 0x9C (R/W  32) EFUSE_4_0 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_5_PROG_1_Type EFUSE_5_PROG_1; /**< \brief Offset: 0xA0 (R/W  32) EFUSE_5_1 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_5_PROG_2_Type EFUSE_5_PROG_2; /**< \brief Offset: 0xA4 (R/W  32) EFUSE_5_2 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_5_PROG_3_Type EFUSE_5_PROG_3; /**< \brief Offset: 0xA8 (R/W  32) EFUSE_5_3 Program Register */
  __I  EFUSE_MISC_REGS_EFUSE_5_STATUS_0_Type EFUSE_5_STATUS_0; /**< \brief Offset: 0xAC (R/   32) EFUSE_5_0 Status */
  __I  EFUSE_MISC_REGS_EFUSE_5_STATUS_1_Type EFUSE_5_STATUS_1; /**< \brief Offset: 0xB0 (R/   32) EFUSE_5_1 Status */
  __I  EFUSE_MISC_REGS_EFUSE_5_STATUS_2_Type EFUSE_5_STATUS_2; /**< \brief Offset: 0xB4 (R/   32) EFUSE_5_2 Status */
  __I  EFUSE_MISC_REGS_EFUSE_5_STATUS_3_Type EFUSE_5_STATUS_3; /**< \brief Offset: 0xB8 (R/   32) EFUSE_5_3 Status */
  __IO EFUSE_MISC_REGS_EFUSE_6_PROG_0_Type EFUSE_6_PROG_0; /**< \brief Offset: 0xBC (R/W  32) EFUSE_6_0 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_6_PROG_1_Type EFUSE_6_PROG_1; /**< \brief Offset: 0xC0 (R/W  32) EFUSE_6_1 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_6_PROG_2_Type EFUSE_6_PROG_2; /**< \brief Offset: 0xC4 (R/W  32) EFUSE_6_2 Program Register */
  __IO EFUSE_MISC_REGS_EFUSE_6_PROG_3_Type EFUSE_6_PROG_3; /**< \brief Offset: 0xC8 (R/W  32) EFUSE_6_3 Program Register */
  __I  EFUSE_MISC_REGS_EFUSE_6_STATUS_0_Type EFUSE_6_STATUS_0; /**< \brief Offset: 0xCC (R/   32) EFUSE_6_0 Status */
  __I  EFUSE_MISC_REGS_EFUSE_6_STATUS_1_Type EFUSE_6_STATUS_1; /**< \brief Offset: 0xD0 (R/   32) EFUSE_6_1 Status */
  __I  EFUSE_MISC_REGS_EFUSE_6_STATUS_2_Type EFUSE_6_STATUS_2; /**< \brief Offset: 0xD4 (R/   32) EFUSE_6_2 Status */
  __I  EFUSE_MISC_REGS_EFUSE_6_STATUS_3_Type EFUSE_6_STATUS_3; /**< \brief Offset: 0xD8 (R/   32) EFUSE_6_3 Status */
  __I  EFUSE_MISC_REGS_EFUSE_MISC_CTRL_Type EFUSE_MISC_CTRL; /**< \brief Offset: 0xDC (R/    8) EFUSE 6 Control Register */
} EfuseMiscRegs;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_EFUSE_MISC_REGS_COMPONENT_ */
