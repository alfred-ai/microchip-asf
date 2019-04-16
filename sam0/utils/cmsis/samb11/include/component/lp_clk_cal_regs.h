/**
 * \file
 *
 * \brief Component description for LP_CLK_CAL_REGS
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

#ifndef _SAMB11_LP_CLK_CAL_REGS_COMPONENT_
#define _SAMB11_LP_CLK_CAL_REGS_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR LP_CLK_CAL_REGS */
/* ========================================================================== */
/** \addtogroup SAMB11_LP_CLK_CAL_REGS Low Power Clock Calibration Registers */
/*@{*/

#define LP_CLK_CAL_REGS_LPCCR1234
#define REV_LP_CLK_CAL_REGS              0x100

/* -------- LP_CLK_CAL_REGS_CONFIG_REG : (LP_CLK_CAL_REGS Offset: 0x00) (R/W  16) Configuration of the calibration clocks and the enable of calibration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t NUMBER_CALIB_CLKS:4;       /*!< bit:   0..3  Multiplier value for the number of calibration clocks (1 shifted left by _value_) */
    uint16_t :2;                        /*!< bit:   4..5  Reserved                                 */
    uint16_t START_RTC_CALIB:1;         /*!< bit:      6  If set, this will start the calibration of the RTC (32.768 kHz) clock */
    uint16_t START_OSC_CALIB:1;         /*!< bit:      7  If set, this will start the calibration of the OSC (32 kHz) clock */
    uint16_t :6;                        /*!< bit:  8..13  Reserved                                 */
    uint16_t IRQ_CONTROL:2;             /*!< bit: 14..15  Interrupt Control                        */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} LP_CLK_CAL_REGS_CONFIG_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LP_CLK_CAL_REGS_CONFIG_REG_OFFSET     0x00           /**<  \brief (LP_CLK_CAL_REGS_CONFIG_REG offset) Configuration of the calibration clocks and the enable of calibration */
#define LP_CLK_CAL_REGS_CONFIG_REG_RESETVALUE 0x00ul         /**<  \brief (LP_CLK_CAL_REGS_CONFIG_REG reset_value) Configuration of the calibration clocks and the enable of calibration */

#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos 0  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) Multiplier value for the number of calibration clocks (1 shifted left by _value_) */
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Msk (0xFul << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS(value) (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Msk & ((value) << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos))  
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_0_Val        0X0ul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 1 clock  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_1_Val        0X1ul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 2 clocks  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_2_Val        0X2ul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 4 clocks  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_3_Val        0X3ul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 8 clocks  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_4_Val        0X4ul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 16 clocks  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_5_Val        0X5ul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 32 clocks  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_6_Val        0X6ul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 64 clocks  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_7_Val        0X7ul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 128 clocks  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_8_Val        0X8ul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 256 clocks  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_9_Val        0X9ul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 512 clocks  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_10_Val        0XAul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 1024 clocks  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_11_Val        0XBul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 2048 clocks  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_12_Val        0XCul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 4096 clocks  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_13_Val        0XDul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 8192 clocks  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_14_Val        0XEul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 16384 clocks  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_15_Val        0XFul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) 32768 clocks  */
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_0    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_0_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_1    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_1_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_2    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_2_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_3    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_3_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_4    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_4_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_5    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_5_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_6    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_6_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_7    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_7_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_8    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_8_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_9    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_9_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_10    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_10_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_11    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_11_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_12    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_12_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_13    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_13_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_14    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_14_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_15    (LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_15_Val << LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_START_RTC_CALIB_Pos 6  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) If set, this will start the calibration of the RTC (32.768 kHz) clock */
#define LP_CLK_CAL_REGS_CONFIG_REG_START_RTC_CALIB (0x1ul << LP_CLK_CAL_REGS_CONFIG_REG_START_RTC_CALIB_Pos)  
#define LP_CLK_CAL_REGS_CONFIG_REG_START_OSC_CALIB_Pos 7  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) If set, this will start the calibration of the OSC (32 kHz) clock */
#define LP_CLK_CAL_REGS_CONFIG_REG_START_OSC_CALIB (0x1ul << LP_CLK_CAL_REGS_CONFIG_REG_START_OSC_CALIB_Pos)  
#define LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_Pos 14  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) Interrupt Control               */
#define LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_Msk (0x3ul << LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL(value) (LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_Msk & ((value) << LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_Pos))  
#define   LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_0_Val        0X0ul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) IRQ when OSC calibration done  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_1_Val        0X1ul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) IRQ when RTC calibration done  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_2_Val        0X2ul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) IRQ when OSC or RTC calibration done  */
#define   LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_3_Val        0X3ul  /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) IRQ when OSC and RTC calibration done  */
#define LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_0    (LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_0_Val << LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_1    (LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_1_Val << LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_2    (LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_2_Val << LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_3    (LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_3_Val << LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_Pos)
#define LP_CLK_CAL_REGS_CONFIG_REG_MASK       0xC0CFul    /**< \brief (LP_CLK_CAL_REGS_CONFIG_REG) Register MASK */

/* -------- LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG : (LP_CLK_CAL_REGS Offset: 0x04) (R/  32) Calibration OSC Count Register (Any write sets bit 15 and clears bit 31) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CAL_FRAC_COUNT:15;         /*!< bit:  0..14  This is the fractional part of the calibration counter */
    uint32_t NO_CAL_IN_PROGRESS:1;      /*!< bit:     15  Indicates no calibration is running (any write sets this to a 1, 0 when calibration done) */
    uint32_t CAL_INT_COUNT:15;          /*!< bit: 16..30  This is the integer part of the calibration counter */
    uint32_t CAL_DONE:1;                /*!< bit:     31  Indicates calibration is done (any write clears this to a 0) */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_OFFSET 0x04           /**<  \brief (LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG offset) Calibration OSC Count Register (Any write sets bit 15 and clears bit 31) */
#define LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_RESETVALUE 0x8000ul       /**<  \brief (LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG reset_value) Calibration OSC Count Register (Any write sets bit 15 and clears bit 31) */

#define LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_FRAC_COUNT_Pos 0  /**< \brief (LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG) This is the fractional part of the calibration counter */
#define LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_FRAC_COUNT_Msk (0x7FFFul << LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_FRAC_COUNT_Pos)
#define LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_FRAC_COUNT(value) (LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_FRAC_COUNT_Msk & ((value) << LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_FRAC_COUNT_Pos))  
#define LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_NO_CAL_IN_PROGRESS_Pos 15  /**< \brief (LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG) Indicates no calibration is running (any write sets this to a 1, 0 when calibration done) */
#define LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_NO_CAL_IN_PROGRESS (0x1ul << LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_NO_CAL_IN_PROGRESS_Pos)  
#define LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_INT_COUNT_Pos 16  /**< \brief (LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG) This is the integer part of the calibration counter */
#define LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_INT_COUNT_Msk (0x7FFFul << LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_INT_COUNT_Pos)
#define LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_INT_COUNT(value) (LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_INT_COUNT_Msk & ((value) << LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_INT_COUNT_Pos))  
#define LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_DONE_Pos 31  /**< \brief (LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG) Indicates calibration is done (any write clears this to a 0) */
#define LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_DONE (0x1ul << LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_DONE_Pos)  
#define LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_MASK 0xFFFFFFFFul    /**< \brief (LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG) Register MASK */

/* -------- LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG : (LP_CLK_CAL_REGS Offset: 0x08) (R/  32) Calibration RTC Count Register (Any write sets bit 15 and clears bit 31) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CAL_FRAC_COUNT:15;         /*!< bit:  0..14  This is the fractional part of the calibration counter */
    uint32_t NO_CAL_IN_PROGRESS:1;      /*!< bit:     15  Indicates no calibration is running (any write sets this to a 1, 0 when calibration done) */
    uint32_t CAL_INT_COUNT:15;          /*!< bit: 16..30  This is the integer part of the calibration counter */
    uint32_t CAL_DONE:1;                /*!< bit:     31  Indicates calibration is done (any write clears this to a 0) */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_OFFSET 0x08           /**<  \brief (LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG offset) Calibration RTC Count Register (Any write sets bit 15 and clears bit 31) */
#define LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_RESETVALUE 0x8000ul       /**<  \brief (LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG reset_value) Calibration RTC Count Register (Any write sets bit 15 and clears bit 31) */

#define LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_FRAC_COUNT_Pos 0  /**< \brief (LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG) This is the fractional part of the calibration counter */
#define LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_FRAC_COUNT_Msk (0x7FFFul << LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_FRAC_COUNT_Pos)
#define LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_FRAC_COUNT(value) (LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_FRAC_COUNT_Msk & ((value) << LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_FRAC_COUNT_Pos))  
#define LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_NO_CAL_IN_PROGRESS_Pos 15  /**< \brief (LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG) Indicates no calibration is running (any write sets this to a 1, 0 when calibration done) */
#define LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_NO_CAL_IN_PROGRESS (0x1ul << LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_NO_CAL_IN_PROGRESS_Pos)  
#define LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_INT_COUNT_Pos 16  /**< \brief (LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG) This is the integer part of the calibration counter */
#define LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_INT_COUNT_Msk (0x7FFFul << LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_INT_COUNT_Pos)
#define LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_INT_COUNT(value) (LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_INT_COUNT_Msk & ((value) << LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_INT_COUNT_Pos))  
#define LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_DONE_Pos 31  /**< \brief (LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG) Indicates calibration is done (any write clears this to a 0) */
#define LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_DONE (0x1ul << LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_DONE_Pos)  
#define LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_MASK 0xFFFFFFFFul    /**< \brief (LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG) Register MASK */

/* -------- LP_CLK_CAL_REGS_CALIB_STATUS_REG : (LP_CLK_CAL_REGS Offset: 0x0c) (R/  8) Calibration Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CALIBRATION_OSC_DONE:1;    /*!< bit:      0  This is the done flag for calibrating the osc clock */
    uint8_t  CALIBRATION_RTC_DONE:1;    /*!< bit:      1  This is the done flag for calibrating the rtc clock */
    uint8_t  :2;                        /*!< bit:   2..3  Reserved                                 */
    uint8_t  OSC_CAL_RUNNING:1;         /*!< bit:      4  OSC clock calibration in progress        */
    uint8_t  RTC_CAL_RUNNING:1;         /*!< bit:      5  RTC clock calibration in progress        */
    uint8_t  :2;                        /*!< bit:   6..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LP_CLK_CAL_REGS_CALIB_STATUS_REG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LP_CLK_CAL_REGS_CALIB_STATUS_REG_OFFSET 0x0C           /**<  \brief (LP_CLK_CAL_REGS_CALIB_STATUS_REG offset) Calibration Status Register */
#define LP_CLK_CAL_REGS_CALIB_STATUS_REG_RESETVALUE 0x00ul         /**<  \brief (LP_CLK_CAL_REGS_CALIB_STATUS_REG reset_value) Calibration Status Register */

#define LP_CLK_CAL_REGS_CALIB_STATUS_REG_CALIBRATION_OSC_DONE_Pos 0  /**< \brief (LP_CLK_CAL_REGS_CALIB_STATUS_REG) This is the done flag for calibrating the osc clock */
#define LP_CLK_CAL_REGS_CALIB_STATUS_REG_CALIBRATION_OSC_DONE (0x1ul << LP_CLK_CAL_REGS_CALIB_STATUS_REG_CALIBRATION_OSC_DONE_Pos)  
#define LP_CLK_CAL_REGS_CALIB_STATUS_REG_CALIBRATION_RTC_DONE_Pos 1  /**< \brief (LP_CLK_CAL_REGS_CALIB_STATUS_REG) This is the done flag for calibrating the rtc clock */
#define LP_CLK_CAL_REGS_CALIB_STATUS_REG_CALIBRATION_RTC_DONE (0x1ul << LP_CLK_CAL_REGS_CALIB_STATUS_REG_CALIBRATION_RTC_DONE_Pos)  
#define LP_CLK_CAL_REGS_CALIB_STATUS_REG_OSC_CAL_RUNNING_Pos 4  /**< \brief (LP_CLK_CAL_REGS_CALIB_STATUS_REG) OSC clock calibration in progress */
#define LP_CLK_CAL_REGS_CALIB_STATUS_REG_OSC_CAL_RUNNING (0x1ul << LP_CLK_CAL_REGS_CALIB_STATUS_REG_OSC_CAL_RUNNING_Pos)  
#define LP_CLK_CAL_REGS_CALIB_STATUS_REG_RTC_CAL_RUNNING_Pos 5  /**< \brief (LP_CLK_CAL_REGS_CALIB_STATUS_REG) RTC clock calibration in progress */
#define LP_CLK_CAL_REGS_CALIB_STATUS_REG_RTC_CAL_RUNNING (0x1ul << LP_CLK_CAL_REGS_CALIB_STATUS_REG_RTC_CAL_RUNNING_Pos)  
#define LP_CLK_CAL_REGS_CALIB_STATUS_REG_MASK 0x33ul    /**< \brief (LP_CLK_CAL_REGS_CALIB_STATUS_REG) Register MASK */

/** \brief LP_CLK_CAL_REGS hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* Low Power Clock Calibration Registers */
  __IO LP_CLK_CAL_REGS_CONFIG_REG_Type CONFIG_REG;     /**< \brief Offset: 0x00 (R/W  16) Configuration of the calibration clocks and the enable of calibration */
       RoReg8                         Reserved1[0x2];
  __I  LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_Type CALIB_OSC_COUNT_REG; /**< \brief Offset: 0x04 (R/   32) Calibration OSC Count Register (Any write sets bit 15 and clears bit 31) */
  __I  LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_Type CALIB_RTC_COUNT_REG; /**< \brief Offset: 0x08 (R/   32) Calibration RTC Count Register (Any write sets bit 15 and clears bit 31) */
  __I  LP_CLK_CAL_REGS_CALIB_STATUS_REG_Type CALIB_STATUS_REG; /**< \brief Offset: 0x0C (R/    8) Calibration Status Register */
} LpClkCalRegs;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_LP_CLK_CAL_REGS_COMPONENT_ */
