/**
 * \file
 *
 * \brief Component description for LPMCU_MISC_REGS
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

#ifndef _SAMB11_LPMCU_MISC_REGS_COMPONENT_
#define _SAMB11_LPMCU_MISC_REGS_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR LPMCU_MISC_REGS */
/* ========================================================================== */
/** \addtogroup SAMB11_LPMCU_MISC_REGS LPMCU Misc Registers */
/*@{*/

#define LPMCU_MISC_REGS_LMR1234
#define REV_LPMCU_MISC_REGS              0x100

/* -------- LPMCU_MISC_REGS_LPMCU_CHIP_ID : (LPMCU_MISC_REGS Offset: 0x00) (R/  32) The hard-coded ID for the chip. -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t REV_ID:24;                 /*!< bit:  0..23  Chip ID                                  */
    uint32_t :8;                        /*!< bit: 24..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_LPMCU_CHIP_ID_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_LPMCU_CHIP_ID_OFFSET  0x00           /**<  \brief (LPMCU_MISC_REGS_LPMCU_CHIP_ID offset) The hard-coded ID for the chip. */
#define LPMCU_MISC_REGS_LPMCU_CHIP_ID_RESETVALUE 0x2000B0ul     /**<  \brief (LPMCU_MISC_REGS_LPMCU_CHIP_ID reset_value) The hard-coded ID for the chip. */

#define LPMCU_MISC_REGS_LPMCU_CHIP_ID_REV_ID_Pos 0  /**< \brief (LPMCU_MISC_REGS_LPMCU_CHIP_ID) Chip ID                      */
#define LPMCU_MISC_REGS_LPMCU_CHIP_ID_REV_ID_Msk (0xFFFFFFul << LPMCU_MISC_REGS_LPMCU_CHIP_ID_REV_ID_Pos)
#define LPMCU_MISC_REGS_LPMCU_CHIP_ID_REV_ID(value) (LPMCU_MISC_REGS_LPMCU_CHIP_ID_REV_ID_Msk & ((value) << LPMCU_MISC_REGS_LPMCU_CHIP_ID_REV_ID_Pos))  
#define LPMCU_MISC_REGS_LPMCU_CHIP_ID_MASK    0xFFFFFFul    /**< \brief (LPMCU_MISC_REGS_LPMCU_CHIP_ID) Register MASK */

/* -------- LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0 : (LPMCU_MISC_REGS Offset: 0x04) (R/W  32) Active Low Global Reset -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t GLOBAL_RSTN:1;             /*!< bit:      0  LPMCU Global Reset (self setting)        */
    uint32_t CPU_RSTN:1;                /*!< bit:      1  LPMCU CPU Reset                          */
    uint32_t SPIFLASH_SYS_RSTN:1;       /*!< bit:      2  SPI Flash Sys Reset                      */
    uint32_t SPIFLASH_RSTN:1;           /*!< bit:      3  SPI Flash Interface Reset                */
    uint32_t CORTUS_SPI0_CORE_RSTN:1;   /*!< bit:      4  SPI0 Core Reset                          */
    uint32_t CORTUS_SPI0_IF_RSTN:1;     /*!< bit:      5  SPI0 Interface Reset                     */
    uint32_t CORTUS_SPI1_CORE_RSTN:1;   /*!< bit:      6  SPI1 Core Reset                          */
    uint32_t CORTUS_SPI1_IF_RSTN:1;     /*!< bit:      7  SPI1 Interface Reset                     */
    uint32_t CORTUS_I2C0_CORE_RSTN:1;   /*!< bit:      8  I2C0 Core Reset                          */
    uint32_t CORTUS_I2C0_IF_RSTN:1;     /*!< bit:      9  I2C1 Interface Reset                     */
    uint32_t GPIO_RSTN:1;               /*!< bit:     10  GPIO Controller Reset                    */
    uint32_t COUNTER_0_RSTN:1;          /*!< bit:     11  ARM Timer Reset                          */
    uint32_t UART_CORE_RSTN:1;          /*!< bit:     12  UART0 Core Reset                         */
    uint32_t UART_IF_RSTN:1;            /*!< bit:     13  UART Interface Reset                     */
    uint32_t UART_1_CORE_RSTN:1;        /*!< bit:     14  UART1 Core Reset                         */
    uint32_t UART_1_IF_RSTN:1;          /*!< bit:     15  UART1 Interface Reset                    */
    uint32_t WATCHDOG_0_RSTN:1;         /*!< bit:     16  WDT0 Reset                               */
    uint32_t WATCHDOG_1_RSTN:1;         /*!< bit:     17  WDT1 Reset                               */
    uint32_t IRQ_CTRLR_CORE_RSTN:1;     /*!< bit:     18  NVIC Reset                               */
    uint32_t MBIST_RSTN:1;              /*!< bit:     19  MBIST Logic Reset                        */
    uint32_t CALIB_RSTN:1;              /*!< bit:     20  Low Power Clock Calibration Core Reset   */
    uint32_t CALIB_XBAR_IF_RSTN:1;      /*!< bit:     21  Low Power Clock Calibration APB Reset    */
    uint32_t DBUG_RSTN:1;               /*!< bit:     22  LPMCU Debug Reset                        */
    uint32_t ARM_FREE_CLK_RSTN:1;       /*!< bit:     23  Free Running ARM Clock Reset             */
    uint32_t ARM_PRESETN_RSTN:1;        /*!< bit:     24  ARM APB Reset                            */
    uint32_t QUAD_DEC_1_RSTN:1;         /*!< bit:     25  Quad Decoder 1 Reset                     */
    uint32_t QUAD_DEC_2_RSTN:1;         /*!< bit:     26  Quad Decoder 2 Reset                     */
    uint32_t QUAD_DEC_3_RSTN:1;         /*!< bit:     27  Quad Decoder 3 Reset                     */
    uint32_t PWM_1_RSTN:1;              /*!< bit:     28  PWM 1 Reset                              */
    uint32_t PWM_2_RSTN:1;              /*!< bit:     29  PWM 2 Reset                              */
    uint32_t PWM_3_RSTN:1;              /*!< bit:     30  PWM 3 Reset                              */
    uint32_t PWM_4_RSTN:1;              /*!< bit:     31  PWM 4 Reset                              */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_OFFSET 0x04           /**<  \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0 offset) Active Low Global Reset */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_RESETVALUE 0xFFFFFFFDul   /**<  \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0 reset_value) Active Low Global Reset */

#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_GLOBAL_RSTN_Pos 0  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) LPMCU Global Reset (self setting) */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_GLOBAL_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_GLOBAL_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CPU_RSTN_Pos 1  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) LPMCU CPU Reset       */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CPU_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CPU_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_SPIFLASH_SYS_RSTN_Pos 2  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) SPI Flash Sys Reset   */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_SPIFLASH_SYS_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_SPIFLASH_SYS_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_SPIFLASH_RSTN_Pos 3  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) SPI Flash Interface Reset */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_SPIFLASH_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_SPIFLASH_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_SPI0_CORE_RSTN_Pos 4  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) SPI0 Core Reset       */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_SPI0_CORE_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_SPI0_CORE_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_SPI0_IF_RSTN_Pos 5  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) SPI0 Interface Reset  */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_SPI0_IF_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_SPI0_IF_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_SPI1_CORE_RSTN_Pos 6  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) SPI1 Core Reset       */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_SPI1_CORE_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_SPI1_CORE_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_SPI1_IF_RSTN_Pos 7  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) SPI1 Interface Reset  */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_SPI1_IF_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_SPI1_IF_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_I2C0_CORE_RSTN_Pos 8  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) I2C0 Core Reset       */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_I2C0_CORE_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_I2C0_CORE_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_I2C0_IF_RSTN_Pos 9  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) I2C1 Interface Reset  */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_I2C0_IF_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CORTUS_I2C0_IF_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_GPIO_RSTN_Pos 10  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) GPIO Controller Reset */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_GPIO_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_GPIO_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_COUNTER_0_RSTN_Pos 11  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) ARM Timer Reset       */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_COUNTER_0_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_COUNTER_0_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_UART_CORE_RSTN_Pos 12  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) UART0 Core Reset      */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_UART_CORE_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_UART_CORE_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_UART_IF_RSTN_Pos 13  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) UART Interface Reset  */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_UART_IF_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_UART_IF_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_UART_1_CORE_RSTN_Pos 14  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) UART1 Core Reset      */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_UART_1_CORE_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_UART_1_CORE_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_UART_1_IF_RSTN_Pos 15  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) UART1 Interface Reset */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_UART_1_IF_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_UART_1_IF_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_WATCHDOG_0_RSTN_Pos 16  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) WDT0 Reset            */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_WATCHDOG_0_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_WATCHDOG_0_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_WATCHDOG_1_RSTN_Pos 17  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) WDT1 Reset            */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_WATCHDOG_1_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_WATCHDOG_1_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_IRQ_CTRLR_CORE_RSTN_Pos 18  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) NVIC Reset            */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_IRQ_CTRLR_CORE_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_IRQ_CTRLR_CORE_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_MBIST_RSTN_Pos 19  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) MBIST Logic Reset     */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_MBIST_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_MBIST_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CALIB_RSTN_Pos 20  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) Low Power Clock Calibration Core Reset */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CALIB_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CALIB_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CALIB_XBAR_IF_RSTN_Pos 21  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) Low Power Clock Calibration APB Reset */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CALIB_XBAR_IF_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_CALIB_XBAR_IF_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_DBUG_RSTN_Pos 22  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) LPMCU Debug Reset     */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_DBUG_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_DBUG_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_ARM_FREE_CLK_RSTN_Pos 23  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) Free Running ARM Clock Reset */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_ARM_FREE_CLK_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_ARM_FREE_CLK_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_ARM_PRESETN_RSTN_Pos 24  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) ARM APB Reset         */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_ARM_PRESETN_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_ARM_PRESETN_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_QUAD_DEC_1_RSTN_Pos 25  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) Quad Decoder 1 Reset  */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_QUAD_DEC_1_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_QUAD_DEC_1_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_QUAD_DEC_2_RSTN_Pos 26  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) Quad Decoder 2 Reset  */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_QUAD_DEC_2_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_QUAD_DEC_2_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_QUAD_DEC_3_RSTN_Pos 27  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) Quad Decoder 3 Reset  */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_QUAD_DEC_3_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_QUAD_DEC_3_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_PWM_1_RSTN_Pos 28  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) PWM 1 Reset           */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_PWM_1_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_PWM_1_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_PWM_2_RSTN_Pos 29  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) PWM 2 Reset           */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_PWM_2_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_PWM_2_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_PWM_3_RSTN_Pos 30  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) PWM 3 Reset           */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_PWM_3_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_PWM_3_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_PWM_4_RSTN_Pos 31  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) PWM 4 Reset           */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_PWM_4_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_PWM_4_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_MASK 0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0) Register MASK */

/* -------- LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1 : (LPMCU_MISC_REGS Offset: 0x08) (R/W  16) Active Low Global Reset -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t DUALTIMER_RSTN:1;          /*!< bit:      0  ARM Dual Timer Reset                     */
    uint16_t CORTUS_I2C1_CORE_RSTN:1;   /*!< bit:      1  I2C1 Core Reset                          */
    uint16_t CORTUS_I2C1_IF_RSTN:1;     /*!< bit:      2  I2C1 Interface Reset                     */
    uint16_t SECURITY_SHA_CORE_RSTN:1;  /*!< bit:      3  Security SHA Core Reset                  */
    uint16_t SECURITY_SHA_AHB_RSTN:1;   /*!< bit:      4  Security SHA AHB Interface Reset         */
    uint16_t SECURITY_AES_CORE_RSTN:1;  /*!< bit:      5  Security AES Core Reset                  */
    uint16_t SECURITY_AES_AHB_RSTN:1;   /*!< bit:      6  Security AES AHB Interface Reset         */
    uint16_t CORTUS_SPI0_SCK_CLK_RSTN:1;  /*!< bit:      7  SPI0 SCK Clock Reset                     */
    uint16_t CORTUS_SPI1_SCK_CLK_RSTN:1;  /*!< bit:      8  SPI1 SCK Clock Reset                     */
    uint16_t CORTUS_SPI0_SCK_PHASE_INT_CLK_RSTN:1;  /*!< bit:      9  SPI0 SCK Phase Clock Reset               */
    uint16_t CORTUS_SPI1_SCK_PHASE_INT_CLK_RSTN:1;  /*!< bit:     10  SPI1 SCK Phase Clock Reset               */
    uint16_t DMA_CONTROLLER_RSTN:1;     /*!< bit:     11  DMA Controller Reset                     */
    uint16_t :4;                        /*!< bit: 12..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_OFFSET 0x08           /**<  \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1 offset) Active Low Global Reset */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_RESETVALUE 0xFFFul        /**<  \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1 reset_value) Active Low Global Reset */

#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_DUALTIMER_RSTN_Pos 0  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1) ARM Dual Timer Reset  */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_DUALTIMER_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_DUALTIMER_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_I2C1_CORE_RSTN_Pos 1  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1) I2C1 Core Reset       */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_I2C1_CORE_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_I2C1_CORE_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_I2C1_IF_RSTN_Pos 2  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1) I2C1 Interface Reset  */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_I2C1_IF_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_I2C1_IF_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_SECURITY_SHA_CORE_RSTN_Pos 3  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1) Security SHA Core Reset */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_SECURITY_SHA_CORE_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_SECURITY_SHA_CORE_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_SECURITY_SHA_AHB_RSTN_Pos 4  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1) Security SHA AHB Interface Reset */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_SECURITY_SHA_AHB_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_SECURITY_SHA_AHB_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_SECURITY_AES_CORE_RSTN_Pos 5  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1) Security AES Core Reset */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_SECURITY_AES_CORE_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_SECURITY_AES_CORE_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_SECURITY_AES_AHB_RSTN_Pos 6  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1) Security AES AHB Interface Reset */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_SECURITY_AES_AHB_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_SECURITY_AES_AHB_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_SPI0_SCK_CLK_RSTN_Pos 7  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1) SPI0 SCK Clock Reset  */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_SPI0_SCK_CLK_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_SPI0_SCK_CLK_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_SPI1_SCK_CLK_RSTN_Pos 8  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1) SPI1 SCK Clock Reset  */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_SPI1_SCK_CLK_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_SPI1_SCK_CLK_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_SPI0_SCK_PHASE_INT_CLK_RSTN_Pos 9  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1) SPI0 SCK Phase Clock Reset */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_SPI0_SCK_PHASE_INT_CLK_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_SPI0_SCK_PHASE_INT_CLK_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_SPI1_SCK_PHASE_INT_CLK_RSTN_Pos 10  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1) SPI1 SCK Phase Clock Reset */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_SPI1_SCK_PHASE_INT_CLK_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_CORTUS_SPI1_SCK_PHASE_INT_CLK_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_DMA_CONTROLLER_RSTN_Pos 11  /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1) DMA Controller Reset  */
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_DMA_CONTROLLER_RSTN (0x1ul << LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_DMA_CONTROLLER_RSTN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_MASK 0xFFFul    /**< \brief (LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1) Register MASK */

/* -------- LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0 : (LPMCU_MISC_REGS Offset: 0x0c) (R/W  32) LPMCU Clock Enables -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :1;                        /*!< bit:      0  Reserved                                 */
    uint32_t SPIFLASH_CLK_EN:1;         /*!< bit:      1  SPI Flash Clock Enable                   */
    uint32_t CORTUS_SPI0_CORE_CLK_EN:1;  /*!< bit:      2  SPI0 Core Clock Enable                   */
    uint32_t CORTUS_SPI1_CORE_CLK_EN:1;  /*!< bit:      3  SPI1 Core Clock Enable                   */
    uint32_t CORTUS_I2C0_CORE_CLK_EN:1;  /*!< bit:      4  I2C0 Core Clock Enable                   */
    uint32_t DUALTIMER_CLK_EN:1;        /*!< bit:      5  ARM Dual Timer Clock Enable              */
    uint32_t :1;                        /*!< bit:      6  Reserved                                 */
    uint32_t GPIO_CLK_EN:1;             /*!< bit:      7  GPIO Controller Clock Enable             */
    uint32_t COUNTER_0_CLK_EN:1;        /*!< bit:      8  ARM Timer Clock Enable                   */
    uint32_t :2;                        /*!< bit:  9..10  Reserved                                 */
    uint32_t WATCHDOG_0_CLK_EN:1;       /*!< bit:     11  WDT0 Clock Enable                        */
    uint32_t WATCHDOG_1_CLK_EN:1;       /*!< bit:     12  WDT1 Clock Enable                        */
    uint32_t UART_CORE_CLK_EN:1;        /*!< bit:     13  UART0 Core Clock Enable                  */
    uint32_t UART_IF_CLK_EN:1;          /*!< bit:     14  UART0 Interface Clock Enable             */
    uint32_t UART_1_CORE_CLK_EN:1;      /*!< bit:     15  UART1 Core Clock Enable                  */
    uint32_t UART_1_IF_CLK_EN:1;        /*!< bit:     16  UART1 Interface Clock Enable             */
    uint32_t IRQ_CTRLR_CORE_CLK_EN:1;   /*!< bit:     17  NVIC Clock Enable                        */
    uint32_t IDRAM_1_GL_MEM_CLK_EN:1;   /*!< bit:     18  IDRAM1 Glue Logic Clock Enable           */
    uint32_t IDRAM_2_GL_MEM_CLK_EN:1;   /*!< bit:     19  IDRAM2 Glue Logic Clock Enable           */
    uint32_t ROM_MEM_CLK_EN:1;          /*!< bit:     20  ROM Clock Enable                         */
    uint32_t CALIB_XBAR_IF_CLK_EN:1;    /*!< bit:     21  Low Power Clock Calibration Interface Clock Enable */
    uint32_t AON_WRAPPER_CLK_EN:1;      /*!< bit:     22  AON Wrapper Clock Enable                 */
    uint32_t ARM_PCLK_EN:1;             /*!< bit:     23  ARM PCLK Clock Enable (override)         */
    uint32_t ARM_PCLKG_EN:1;            /*!< bit:     24  ARM Gated PCLK Clock Enable (override)   */
    uint32_t BLE_MEM_CLK_EN:1;          /*!< bit:     25  ARM BLE 8K Retention Memory Clock Enable */
    uint32_t QUAD_DEC_1_CLK_EN:1;       /*!< bit:     26  Quad Decoder 1 Clock Enable              */
    uint32_t QUAD_DEC_2_CLK_EN:1;       /*!< bit:     27  Quad Decoder 2 Clock Enable              */
    uint32_t QUAD_DEC_3_CLK_EN:1;       /*!< bit:     28  Quad Decoder 3 Clock Enable              */
    uint32_t CORTUS_I2C1_CORE_CLK_EN:1;  /*!< bit:     29  I2C1 Core Clock Enable                   */
    uint32_t CALIB_CLK_EN:1;            /*!< bit:     30  Low Power Clock Calibration Core Clock Enable */
    uint32_t :1;                        /*!< bit:     31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_OFFSET 0x0C           /**<  \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0 offset) LPMCU Clock Enables */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_RESETVALUE 0x627FF9BEul   /**<  \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0 reset_value) LPMCU Clock Enables */

#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_SPIFLASH_CLK_EN_Pos 1  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) SPI Flash Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_SPIFLASH_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_SPIFLASH_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CORTUS_SPI0_CORE_CLK_EN_Pos 2  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) SPI0 Core Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CORTUS_SPI0_CORE_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CORTUS_SPI0_CORE_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CORTUS_SPI1_CORE_CLK_EN_Pos 3  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) SPI1 Core Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CORTUS_SPI1_CORE_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CORTUS_SPI1_CORE_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CORTUS_I2C0_CORE_CLK_EN_Pos 4  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) I2C0 Core Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CORTUS_I2C0_CORE_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CORTUS_I2C0_CORE_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_DUALTIMER_CLK_EN_Pos 5  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) ARM Dual Timer Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_DUALTIMER_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_DUALTIMER_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_GPIO_CLK_EN_Pos 7  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) GPIO Controller Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_GPIO_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_GPIO_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_COUNTER_0_CLK_EN_Pos 8  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) ARM Timer Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_COUNTER_0_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_COUNTER_0_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_WATCHDOG_0_CLK_EN_Pos 11  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) WDT0 Clock Enable    */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_WATCHDOG_0_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_WATCHDOG_0_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_WATCHDOG_1_CLK_EN_Pos 12  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) WDT1 Clock Enable    */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_WATCHDOG_1_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_WATCHDOG_1_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_UART_CORE_CLK_EN_Pos 13  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) UART0 Core Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_UART_CORE_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_UART_CORE_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_UART_IF_CLK_EN_Pos 14  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) UART0 Interface Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_UART_IF_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_UART_IF_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_UART_1_CORE_CLK_EN_Pos 15  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) UART1 Core Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_UART_1_CORE_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_UART_1_CORE_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_UART_1_IF_CLK_EN_Pos 16  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) UART1 Interface Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_UART_1_IF_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_UART_1_IF_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_IRQ_CTRLR_CORE_CLK_EN_Pos 17  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) NVIC Clock Enable    */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_IRQ_CTRLR_CORE_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_IRQ_CTRLR_CORE_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_IDRAM_1_GL_MEM_CLK_EN_Pos 18  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) IDRAM1 Glue Logic Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_IDRAM_1_GL_MEM_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_IDRAM_1_GL_MEM_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_IDRAM_2_GL_MEM_CLK_EN_Pos 19  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) IDRAM2 Glue Logic Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_IDRAM_2_GL_MEM_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_IDRAM_2_GL_MEM_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_ROM_MEM_CLK_EN_Pos 20  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) ROM Clock Enable     */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_ROM_MEM_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_ROM_MEM_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CALIB_XBAR_IF_CLK_EN_Pos 21  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) Low Power Clock Calibration Interface Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CALIB_XBAR_IF_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CALIB_XBAR_IF_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_AON_WRAPPER_CLK_EN_Pos 22  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) AON Wrapper Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_AON_WRAPPER_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_AON_WRAPPER_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_ARM_PCLK_EN_Pos 23  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) ARM PCLK Clock Enable (override) */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_ARM_PCLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_ARM_PCLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_ARM_PCLKG_EN_Pos 24  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) ARM Gated PCLK Clock Enable (override) */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_ARM_PCLKG_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_ARM_PCLKG_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_BLE_MEM_CLK_EN_Pos 25  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) ARM BLE 8K Retention Memory Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_BLE_MEM_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_BLE_MEM_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_QUAD_DEC_1_CLK_EN_Pos 26  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) Quad Decoder 1 Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_QUAD_DEC_1_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_QUAD_DEC_1_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_QUAD_DEC_2_CLK_EN_Pos 27  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) Quad Decoder 2 Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_QUAD_DEC_2_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_QUAD_DEC_2_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_QUAD_DEC_3_CLK_EN_Pos 28  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) Quad Decoder 3 Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_QUAD_DEC_3_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_QUAD_DEC_3_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CORTUS_I2C1_CORE_CLK_EN_Pos 29  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) I2C1 Core Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CORTUS_I2C1_CORE_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CORTUS_I2C1_CORE_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CALIB_CLK_EN_Pos 30  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) Low Power Clock Calibration Core Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CALIB_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_CALIB_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_MASK 0x7FFFF9BEul    /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0) Register MASK */

/* -------- LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1 : (LPMCU_MISC_REGS Offset: 0x10) (R/W  32) LPMCU Clock Enables -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_1_CLK_EN:1;          /*!< bit:      0  EFUSE1 Clock Enable                      */
    uint32_t EFUSE_2_CLK_EN:1;          /*!< bit:      1  EFUSE2 Clock Enable                      */
    uint32_t EFUSE_3_CLK_EN:1;          /*!< bit:      2  EFUSE3 Clock Enable                      */
    uint32_t EFUSE_4_CLK_EN:1;          /*!< bit:      3  EFUSE4 Clock Enable                      */
    uint32_t EFUSE_5_CLK_EN:1;          /*!< bit:      4  EFUSE5 Clock Enable                      */
    uint32_t EFUSE_6_CLK_EN:1;          /*!< bit:      5  EFUSE6 Clock Enable                      */
    uint32_t PWM_1_CLK_EN:1;            /*!< bit:      6  PWM1 Clock Enable                        */
    uint32_t PWM_2_CLK_EN:1;            /*!< bit:      7  PWM2 Clock Enable                        */
    uint32_t PWM_3_CLK_EN:1;            /*!< bit:      8  PWM3 Clock Enable                        */
    uint32_t PWM_4_CLK_EN:1;            /*!< bit:      9  PWM4 Clock Enable                        */
    uint32_t SENS_ADC_CLK_EN:1;         /*!< bit:     10  PMU Sensor ADC Clock Enable              */
    uint32_t SPI0_SCK_PHASE_INT_CLK_EN:1;  /*!< bit:     11  SPI0 SCK Phase Internal Clock Enable     */
    uint32_t SPI1_SCK_PHASE_INT_CLK_EN:1;  /*!< bit:     12  SPI1 SCK Phase Internal Clock Enable     */
    uint32_t GPIO_GCLK_EN:1;            /*!< bit:     13  GPIO Controller Clock Enable             */
    uint32_t COUNTER_0_PGCLK_EN:1;      /*!< bit:     14  ARM Timer 0 Gated APB Clock              */
    uint32_t SHA_CORE_CLK_EN:1;         /*!< bit:     15  SHA Core Clock Enable                    */
    uint32_t SHA_AHB_CLK_EN:1;          /*!< bit:     16  SHA AHB Clock Enable                     */
    uint32_t AES_CORE_CLK_EN:1;         /*!< bit:     17  AES Core Clock Enable                    */
    uint32_t AES_AHB_CLK_EN:1;          /*!< bit:     18  AES AHB Clock Enable                     */
    uint32_t IDRAM_1_0_MEM_CLK_EN:1;    /*!< bit:     19  IDRAM1_0 Memory Clock Enable             */
    uint32_t IDRAM_1_1_MEM_CLK_EN:1;    /*!< bit:     20  IDRAM1_1 Memory Clock Enable             */
    uint32_t IDRAM_1_2_MEM_CLK_EN:1;    /*!< bit:     21  IDRAM1_2 Memory Clock Enable             */
    uint32_t IDRAM_2_0_MEM_CLK_EN:1;    /*!< bit:     22  IDRAM2_0 Memory Clock Enable             */
    uint32_t IDRAM_2_1_MEM_CLK_EN:1;    /*!< bit:     23  IDRAM2_1 Memory Clock Enable             */
    uint32_t :8;                        /*!< bit: 24..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_OFFSET 0x10           /**<  \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1 offset) LPMCU Clock Enables */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_RESETVALUE 0xF8783Ful     /**<  \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1 reset_value) LPMCU Clock Enables */

#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_1_CLK_EN_Pos 0  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) EFUSE1 Clock Enable  */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_1_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_1_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_2_CLK_EN_Pos 1  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) EFUSE2 Clock Enable  */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_2_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_2_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_3_CLK_EN_Pos 2  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) EFUSE3 Clock Enable  */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_3_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_3_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_4_CLK_EN_Pos 3  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) EFUSE4 Clock Enable  */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_4_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_4_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_5_CLK_EN_Pos 4  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) EFUSE5 Clock Enable  */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_5_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_5_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_6_CLK_EN_Pos 5  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) EFUSE6 Clock Enable  */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_6_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_EFUSE_6_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_PWM_1_CLK_EN_Pos 6  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) PWM1 Clock Enable    */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_PWM_1_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_PWM_1_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_PWM_2_CLK_EN_Pos 7  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) PWM2 Clock Enable    */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_PWM_2_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_PWM_2_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_PWM_3_CLK_EN_Pos 8  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) PWM3 Clock Enable    */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_PWM_3_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_PWM_3_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_PWM_4_CLK_EN_Pos 9  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) PWM4 Clock Enable    */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_PWM_4_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_PWM_4_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_SENS_ADC_CLK_EN_Pos 10  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) PMU Sensor ADC Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_SENS_ADC_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_SENS_ADC_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_SPI0_SCK_PHASE_INT_CLK_EN_Pos 11  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) SPI0 SCK Phase Internal Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_SPI0_SCK_PHASE_INT_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_SPI0_SCK_PHASE_INT_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_SPI1_SCK_PHASE_INT_CLK_EN_Pos 12  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) SPI1 SCK Phase Internal Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_SPI1_SCK_PHASE_INT_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_SPI1_SCK_PHASE_INT_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_GPIO_GCLK_EN_Pos 13  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) GPIO Controller Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_GPIO_GCLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_GPIO_GCLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_COUNTER_0_PGCLK_EN_Pos 14  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) ARM Timer 0 Gated APB Clock */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_COUNTER_0_PGCLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_COUNTER_0_PGCLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_SHA_CORE_CLK_EN_Pos 15  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) SHA Core Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_SHA_CORE_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_SHA_CORE_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_SHA_AHB_CLK_EN_Pos 16  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) SHA AHB Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_SHA_AHB_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_SHA_AHB_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_AES_CORE_CLK_EN_Pos 17  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) AES Core Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_AES_CORE_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_AES_CORE_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_AES_AHB_CLK_EN_Pos 18  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) AES AHB Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_AES_AHB_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_AES_AHB_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_IDRAM_1_0_MEM_CLK_EN_Pos 19  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) IDRAM1_0 Memory Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_IDRAM_1_0_MEM_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_IDRAM_1_0_MEM_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_IDRAM_1_1_MEM_CLK_EN_Pos 20  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) IDRAM1_1 Memory Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_IDRAM_1_1_MEM_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_IDRAM_1_1_MEM_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_IDRAM_1_2_MEM_CLK_EN_Pos 21  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) IDRAM1_2 Memory Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_IDRAM_1_2_MEM_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_IDRAM_1_2_MEM_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_IDRAM_2_0_MEM_CLK_EN_Pos 22  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) IDRAM2_0 Memory Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_IDRAM_2_0_MEM_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_IDRAM_2_0_MEM_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_IDRAM_2_1_MEM_CLK_EN_Pos 23  /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) IDRAM2_1 Memory Clock Enable */
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_IDRAM_2_1_MEM_CLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_IDRAM_2_1_MEM_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_MASK 0xFFFFFFul    /**< \brief (LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1) Register MASK */

/* -------- LPMCU_MISC_REGS_BTMCU_CONTROL : (LPMCU_MISC_REGS Offset: 0x14) (R/W  8) Miscellaneous BLE control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  RXTX_SEQ_CLK_EN:1;         /*!< bit:      0  BLE RXTX Sequencer Clock Enable          */
    uint8_t  AHB_CLK_EN:1;              /*!< bit:      1  BLE HAB Clock Enable                     */
    uint8_t  PERIPH_REGS_CLK_EN:1;      /*!< bit:      2  BLE Periph Regs Clock Enable             */
    uint8_t  :5;                        /*!< bit:   3..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_BTMCU_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_BTMCU_CONTROL_OFFSET  0x14           /**<  \brief (LPMCU_MISC_REGS_BTMCU_CONTROL offset) Miscellaneous BLE control */
#define LPMCU_MISC_REGS_BTMCU_CONTROL_RESETVALUE 0x07ul         /**<  \brief (LPMCU_MISC_REGS_BTMCU_CONTROL reset_value) Miscellaneous BLE control */

#define LPMCU_MISC_REGS_BTMCU_CONTROL_RXTX_SEQ_CLK_EN_Pos 0  /**< \brief (LPMCU_MISC_REGS_BTMCU_CONTROL) BLE RXTX Sequencer Clock Enable */
#define LPMCU_MISC_REGS_BTMCU_CONTROL_RXTX_SEQ_CLK_EN (0x1ul << LPMCU_MISC_REGS_BTMCU_CONTROL_RXTX_SEQ_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_BTMCU_CONTROL_AHB_CLK_EN_Pos 1  /**< \brief (LPMCU_MISC_REGS_BTMCU_CONTROL) BLE HAB Clock Enable         */
#define LPMCU_MISC_REGS_BTMCU_CONTROL_AHB_CLK_EN (0x1ul << LPMCU_MISC_REGS_BTMCU_CONTROL_AHB_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_BTMCU_CONTROL_PERIPH_REGS_CLK_EN_Pos 2  /**< \brief (LPMCU_MISC_REGS_BTMCU_CONTROL) BLE Periph Regs Clock Enable */
#define LPMCU_MISC_REGS_BTMCU_CONTROL_PERIPH_REGS_CLK_EN (0x1ul << LPMCU_MISC_REGS_BTMCU_CONTROL_PERIPH_REGS_CLK_EN_Pos)  
#define LPMCU_MISC_REGS_BTMCU_CONTROL_MASK    0x07ul    /**< \brief (LPMCU_MISC_REGS_BTMCU_CONTROL) Register MASK */

/* -------- LPMCU_MISC_REGS_LPMCU_CONTROL : (LPMCU_MISC_REGS Offset: 0x18) (R/W  32) Miscellaneous LPMCU control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t LPMCU_CLK_SEL:2;           /*!< bit:   0..1  LPMCU Clock Frequency Selection          */
    uint32_t USE_BT26M_CLK:1;           /*!< bit:      2  Use XO as ARM clock (must also set use_arm_lp_clk) */
    uint32_t USE_ARM_LP_CLK:1;          /*!< bit:      3  Use either LP 2MHz clock or XO as ARM clock */
    uint32_t DUALTIMER_CLK_SEL:2;       /*!< bit:   4..5  ARM Dual Timer Clock Frequency Select    */
    uint32_t :2;                        /*!< bit:   6..7  Reserved                                 */
    uint32_t BYPASS_WIC:1;              /*!< bit:      8  Bypass Wakeup Interrupt Controller       */
    uint32_t USE_XO_FOR_LP_CAL_CLK:1;   /*!< bit:      9  Use the XO for Low Power Clock Calibration */
    uint32_t :2;                        /*!< bit: 10..11  Reserved                                 */
    uint32_t SPIFLASH_CLKSEL:2;         /*!< bit: 12..13  SPI Flash Clock Frequency Select         */
    uint32_t :2;                        /*!< bit: 14..15  Reserved                                 */
    uint32_t SPIFLASH_DIV_CLK_SEL:1;    /*!< bit:     16  Use Generated Divided Clock for SPI Flash */
    uint32_t :2;                        /*!< bit: 17..18  Reserved                                 */
    uint32_t IDRAM_1_MEM_IQ_BYP_EN:1;   /*!< bit:     19  Mux Control to select between FECE and standard IDRAM memory. Default to IDRAM ARM Memory */
    uint32_t SPI_FLASH_CLOCK_DIV_VALUE:8;  /*!< bit: 20..27  Integer divider value. 26mhz clock will be divided by this register value  */
    uint32_t INVERT_UART_IF_CLK:1;      /*!< bit:     28  Inverts UART0 interface clock            */
    uint32_t INVERT_UART_1_IF_CLK:1;    /*!< bit:     29  Inverts UART1 interface clock            */
    uint32_t EXT_SPI_MODE_CPHA:1;       /*!< bit:     30  Ext Spi Flash Mode CPHA                  */
    uint32_t EXT_SPI_MODE_CPOL:1;       /*!< bit:     31  Ext Spi Flash Mode CPOL                  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_LPMCU_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_LPMCU_CONTROL_OFFSET  0x18           /**<  \brief (LPMCU_MISC_REGS_LPMCU_CONTROL offset) Miscellaneous LPMCU control */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_RESETVALUE 0x303100ul     /**<  \brief (LPMCU_MISC_REGS_LPMCU_CONTROL reset_value) Miscellaneous LPMCU control */

#define LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_Pos 0  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) LPMCU Clock Frequency Selection */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_Msk (0x3ul << LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL(value) (LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_Msk & ((value) << LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_Pos))  
#define   LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) 26MHz  */
#define   LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) 13MHz  */
#define   LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) 6.5MHz  */
#define   LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) 3.25MHz  */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_0    (LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_0_Val << LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_1    (LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_1_Val << LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_2    (LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_2_Val << LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_3    (LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_3_Val << LPMCU_MISC_REGS_LPMCU_CONTROL_LPMCU_CLK_SEL_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_USE_BT26M_CLK_Pos 2  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) Use XO as ARM clock (must also set use_arm_lp_clk) */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_USE_BT26M_CLK (0x1ul << LPMCU_MISC_REGS_LPMCU_CONTROL_USE_BT26M_CLK_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CONTROL_USE_ARM_LP_CLK_Pos 3  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) Use either LP 2MHz clock or XO as ARM clock */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_USE_ARM_LP_CLK (0x1ul << LPMCU_MISC_REGS_LPMCU_CONTROL_USE_ARM_LP_CLK_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_Pos 4  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) ARM Dual Timer Clock Frequency Select */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_Msk (0x3ul << LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL(value) (LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_Msk & ((value) << LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_Pos))  
#define   LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) 26MHz  */
#define   LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) 13MHz  */
#define   LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) 6.5MHz  */
#define   LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) 3.25MHz  */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_0    (LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_0_Val << LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_1    (LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_1_Val << LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_2    (LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_2_Val << LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_3    (LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_3_Val << LPMCU_MISC_REGS_LPMCU_CONTROL_DUALTIMER_CLK_SEL_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_BYPASS_WIC_Pos 8  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) Bypass Wakeup Interrupt Controller */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_BYPASS_WIC (0x1ul << LPMCU_MISC_REGS_LPMCU_CONTROL_BYPASS_WIC_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CONTROL_USE_XO_FOR_LP_CAL_CLK_Pos 9  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) Use the XO for Low Power Clock Calibration */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_USE_XO_FOR_LP_CAL_CLK (0x1ul << LPMCU_MISC_REGS_LPMCU_CONTROL_USE_XO_FOR_LP_CAL_CLK_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_Pos 12  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) SPI Flash Clock Frequency Select */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_Msk (0x3ul << LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL(value) (LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_Msk & ((value) << LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_Pos))  
#define   LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) 3.25MHz  */
#define   LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) 6.5MHz  */
#define   LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) 13MHz  */
#define   LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) 26MHz  */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_0    (LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_0_Val << LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_1    (LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_1_Val << LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_2    (LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_2_Val << LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_3    (LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_3_Val << LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_CLKSEL_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_DIV_CLK_SEL_Pos 16  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) Use Generated Divided Clock for SPI Flash */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_DIV_CLK_SEL (0x1ul << LPMCU_MISC_REGS_LPMCU_CONTROL_SPIFLASH_DIV_CLK_SEL_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CONTROL_IDRAM_1_MEM_IQ_BYP_EN_Pos 19  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) Mux Control to select between FECE and standard IDRAM memory. Default to IDRAM ARM Memory */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_IDRAM_1_MEM_IQ_BYP_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_CONTROL_IDRAM_1_MEM_IQ_BYP_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CONTROL_SPI_FLASH_CLOCK_DIV_VALUE_Pos 20  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) Integer divider value. 26mhz clock will be divided by this register value  */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_SPI_FLASH_CLOCK_DIV_VALUE_Msk (0xFFul << LPMCU_MISC_REGS_LPMCU_CONTROL_SPI_FLASH_CLOCK_DIV_VALUE_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_SPI_FLASH_CLOCK_DIV_VALUE(value) (LPMCU_MISC_REGS_LPMCU_CONTROL_SPI_FLASH_CLOCK_DIV_VALUE_Msk & ((value) << LPMCU_MISC_REGS_LPMCU_CONTROL_SPI_FLASH_CLOCK_DIV_VALUE_Pos))  
#define LPMCU_MISC_REGS_LPMCU_CONTROL_INVERT_UART_IF_CLK_Pos 28  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) Inverts UART0 interface clock   */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_INVERT_UART_IF_CLK (0x1ul << LPMCU_MISC_REGS_LPMCU_CONTROL_INVERT_UART_IF_CLK_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CONTROL_INVERT_UART_1_IF_CLK_Pos 29  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) Inverts UART1 interface clock   */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_INVERT_UART_1_IF_CLK (0x1ul << LPMCU_MISC_REGS_LPMCU_CONTROL_INVERT_UART_1_IF_CLK_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CONTROL_EXT_SPI_MODE_CPHA_Pos 30  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) Ext Spi Flash Mode CPHA      */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_EXT_SPI_MODE_CPHA (0x1ul << LPMCU_MISC_REGS_LPMCU_CONTROL_EXT_SPI_MODE_CPHA_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CONTROL_EXT_SPI_MODE_CPOL_Pos 31  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) Ext Spi Flash Mode CPOL      */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_EXT_SPI_MODE_CPOL (0x1ul << LPMCU_MISC_REGS_LPMCU_CONTROL_EXT_SPI_MODE_CPOL_Pos)  
#define LPMCU_MISC_REGS_LPMCU_CONTROL_MASK    0xFFF9333Ful    /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL) Register MASK */

/* -------- LPMCU_MISC_REGS_LPMCU_MBIST : (LPMCU_MISC_REGS Offset: 0x1c) (R/W  8) MBIST designation -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  MBIST_MODE:1;              /*!< bit:      0  Puts the chip in MBIST mode              */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_LPMCU_MBIST_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_LPMCU_MBIST_OFFSET    0x1C           /**<  \brief (LPMCU_MISC_REGS_LPMCU_MBIST offset) MBIST designation */
#define LPMCU_MISC_REGS_LPMCU_MBIST_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_LPMCU_MBIST reset_value) MBIST designation */

#define LPMCU_MISC_REGS_LPMCU_MBIST_MBIST_MODE_Pos 0  /**< \brief (LPMCU_MISC_REGS_LPMCU_MBIST) Puts the chip in MBIST mode    */
#define LPMCU_MISC_REGS_LPMCU_MBIST_MBIST_MODE (0x1ul << LPMCU_MISC_REGS_LPMCU_MBIST_MBIST_MODE_Pos)  
#define LPMCU_MISC_REGS_LPMCU_MBIST_MASK      0x01ul    /**< \brief (LPMCU_MISC_REGS_LPMCU_MBIST) Register MASK */

/* -------- LPMCU_MISC_REGS_BLE_CTRL : (LPMCU_MISC_REGS Offset: 0x20) (R/W  8) BLE Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  BLE_WAKEUP_REQ:1;          /*!< bit:      0  BLE Wakeup Request (to BLE Sleep Timer)  */
    uint8_t  BLE_WAKEUP_REQ_CORE:1;     /*!< bit:      1  BLE Wakeup Request (to BLE Core)         */
    uint8_t  :6;                        /*!< bit:   2..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_BLE_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_BLE_CTRL_OFFSET       0x20           /**<  \brief (LPMCU_MISC_REGS_BLE_CTRL offset) BLE Control */
#define LPMCU_MISC_REGS_BLE_CTRL_RESETVALUE   0x00ul         /**<  \brief (LPMCU_MISC_REGS_BLE_CTRL reset_value) BLE Control */

#define LPMCU_MISC_REGS_BLE_CTRL_BLE_WAKEUP_REQ_Pos 0  /**< \brief (LPMCU_MISC_REGS_BLE_CTRL) BLE Wakeup Request (to BLE Sleep Timer) */
#define LPMCU_MISC_REGS_BLE_CTRL_BLE_WAKEUP_REQ (0x1ul << LPMCU_MISC_REGS_BLE_CTRL_BLE_WAKEUP_REQ_Pos)  
#define LPMCU_MISC_REGS_BLE_CTRL_BLE_WAKEUP_REQ_CORE_Pos 1  /**< \brief (LPMCU_MISC_REGS_BLE_CTRL) BLE Wakeup Request (to BLE Core)  */
#define LPMCU_MISC_REGS_BLE_CTRL_BLE_WAKEUP_REQ_CORE (0x1ul << LPMCU_MISC_REGS_BLE_CTRL_BLE_WAKEUP_REQ_CORE_Pos)  
#define LPMCU_MISC_REGS_BLE_CTRL_MASK         0x03ul    /**< \brief (LPMCU_MISC_REGS_BLE_CTRL) Register MASK */

/* -------- LPMCU_MISC_REGS_MBIST_CONTROL : (LPMCU_MISC_REGS Offset: 0x24) (R/W  32) MBIST Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t MBIST_CONTROL:19;          /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_MBIST_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_MBIST_CONTROL_OFFSET  0x24           /**<  \brief (LPMCU_MISC_REGS_MBIST_CONTROL offset) MBIST Control Register */
#define LPMCU_MISC_REGS_MBIST_CONTROL_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_MBIST_CONTROL reset_value) MBIST Control Register */

#define LPMCU_MISC_REGS_MBIST_CONTROL_MBIST_CONTROL_Pos 0  /**< \brief (LPMCU_MISC_REGS_MBIST_CONTROL)                              */
#define LPMCU_MISC_REGS_MBIST_CONTROL_MBIST_CONTROL_Msk (0x7FFFFul << LPMCU_MISC_REGS_MBIST_CONTROL_MBIST_CONTROL_Pos)
#define LPMCU_MISC_REGS_MBIST_CONTROL_MBIST_CONTROL(value) (LPMCU_MISC_REGS_MBIST_CONTROL_MBIST_CONTROL_Msk & ((value) << LPMCU_MISC_REGS_MBIST_CONTROL_MBIST_CONTROL_Pos))  
#define LPMCU_MISC_REGS_MBIST_CONTROL_MASK    0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_MBIST_CONTROL) Register MASK */

/* -------- LPMCU_MISC_REGS_MBIST_STATUS : (LPMCU_MISC_REGS Offset: 0x28) (R/  32) MBIST Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t MBIST_BUS:21;              /*!< bit:  0..20  Observation of MBIST results             */
    uint32_t MBIST_BLOCK_SEL:5;         /*!< bit: 21..25  Observation of block field of MBIST control */
    uint32_t MBIST_WRAPPER_SEL:5;       /*!< bit: 26..30  Observation of wrapper field of MBIST control */
    uint32_t MBIST_MODE:1;              /*!< bit:     31  Observation of mbist_mode signal         */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_MBIST_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_MBIST_STATUS_OFFSET   0x28           /**<  \brief (LPMCU_MISC_REGS_MBIST_STATUS offset) MBIST Status Register */
#define LPMCU_MISC_REGS_MBIST_STATUS_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_MBIST_STATUS reset_value) MBIST Status Register */

#define LPMCU_MISC_REGS_MBIST_STATUS_MBIST_BUS_Pos 0  /**< \brief (LPMCU_MISC_REGS_MBIST_STATUS) Observation of MBIST results  */
#define LPMCU_MISC_REGS_MBIST_STATUS_MBIST_BUS_Msk (0x1FFFFFul << LPMCU_MISC_REGS_MBIST_STATUS_MBIST_BUS_Pos)
#define LPMCU_MISC_REGS_MBIST_STATUS_MBIST_BUS(value) (LPMCU_MISC_REGS_MBIST_STATUS_MBIST_BUS_Msk & ((value) << LPMCU_MISC_REGS_MBIST_STATUS_MBIST_BUS_Pos))  
#define LPMCU_MISC_REGS_MBIST_STATUS_MBIST_BLOCK_SEL_Pos 21  /**< \brief (LPMCU_MISC_REGS_MBIST_STATUS) Observation of block field of MBIST control */
#define LPMCU_MISC_REGS_MBIST_STATUS_MBIST_BLOCK_SEL_Msk (0x1Ful << LPMCU_MISC_REGS_MBIST_STATUS_MBIST_BLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_MBIST_STATUS_MBIST_BLOCK_SEL(value) (LPMCU_MISC_REGS_MBIST_STATUS_MBIST_BLOCK_SEL_Msk & ((value) << LPMCU_MISC_REGS_MBIST_STATUS_MBIST_BLOCK_SEL_Pos))  
#define LPMCU_MISC_REGS_MBIST_STATUS_MBIST_WRAPPER_SEL_Pos 26  /**< \brief (LPMCU_MISC_REGS_MBIST_STATUS) Observation of wrapper field of MBIST control */
#define LPMCU_MISC_REGS_MBIST_STATUS_MBIST_WRAPPER_SEL_Msk (0x1Ful << LPMCU_MISC_REGS_MBIST_STATUS_MBIST_WRAPPER_SEL_Pos)
#define LPMCU_MISC_REGS_MBIST_STATUS_MBIST_WRAPPER_SEL(value) (LPMCU_MISC_REGS_MBIST_STATUS_MBIST_WRAPPER_SEL_Msk & ((value) << LPMCU_MISC_REGS_MBIST_STATUS_MBIST_WRAPPER_SEL_Pos))  
#define LPMCU_MISC_REGS_MBIST_STATUS_MBIST_MODE_Pos 31  /**< \brief (LPMCU_MISC_REGS_MBIST_STATUS) Observation of mbist_mode signal */
#define LPMCU_MISC_REGS_MBIST_STATUS_MBIST_MODE (0x1ul << LPMCU_MISC_REGS_MBIST_STATUS_MBIST_MODE_Pos)  
#define LPMCU_MISC_REGS_MBIST_STATUS_MASK     0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_MBIST_STATUS) Register MASK */

/* -------- LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL : (LPMCU_MISC_REGS Offset: 0x2c) (R/W  16) Enables MBIST algorithms -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t MARCH2_ENABLE:1;           /*!< bit:      0  Enables the march2 algorithm             */
    uint16_t UNIQUE_ENABLE:1;           /*!< bit:      1  Enables the unique address algorithm     */
    uint16_t CHECKERBOARD_ENABLE:1;     /*!< bit:      2  Enables the checkerboard algorithm       */
    uint16_t DIAGONAL_ENABLE:1;         /*!< bit:      3  Enables the diagonal algorithm           */
    uint16_t ADDRDEC0_ENABLE:1;         /*!< bit:      4  Enables the address decoder bg0 algorithm */
    uint16_t ADDRDEC1_ENABLE:1;         /*!< bit:      5  Enables the address decoder bg1 algorithm */
    uint16_t COLMARCH1_ENABLE:1;        /*!< bit:      6  Enables the col_march1 algorithm         */
    uint16_t FILLWITH0_ENABLE:1;        /*!< bit:      7  Enables the fillwith0 algorithm          */
    uint16_t RET_READ_ZEROS_ENABLE:1;   /*!< bit:      8  Enables the ret read zeros algorithm     */
    uint16_t RET_WRITE_ZEROS_ENABLE:1;  /*!< bit:      9  Enables the ret write zeros algorithm    */
    uint16_t RET_READ_ONES_ENABLE:1;    /*!< bit:     10  Enables the ret read ones algorithm      */
    uint16_t RET_WRITE_ONES_ENABLE:1;   /*!< bit:     11  Enables the ret write ones algorithm     */
    uint16_t RET_READ_CB_ENABLE:1;      /*!< bit:     12  Enables the ret read checkerboard algorithm */
    uint16_t RET_WRITE_CB_ENABLE:1;     /*!< bit:     13  Enables the ret write checkerboard algorithm */
    uint16_t RET_READ_INVCB_ENABLE:1;   /*!< bit:     14  Enables the ret read inv checkerboard algorithm */
    uint16_t RET_WRITE_INVCB_ENABLE:1;  /*!< bit:     15  Enables the ret write inv checkerboard algorithm */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_OFFSET 0x2C           /**<  \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL offset) Enables MBIST algorithms */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RESETVALUE 0x4Ful         /**<  \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL reset_value) Enables MBIST algorithms */

#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_MARCH2_ENABLE_Pos 0  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the march2 algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_MARCH2_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_MARCH2_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_UNIQUE_ENABLE_Pos 1  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the unique address algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_UNIQUE_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_UNIQUE_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_CHECKERBOARD_ENABLE_Pos 2  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the checkerboard algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_CHECKERBOARD_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_CHECKERBOARD_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_DIAGONAL_ENABLE_Pos 3  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the diagonal algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_DIAGONAL_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_DIAGONAL_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_ADDRDEC0_ENABLE_Pos 4  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the address decoder bg0 algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_ADDRDEC0_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_ADDRDEC0_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_ADDRDEC1_ENABLE_Pos 5  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the address decoder bg1 algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_ADDRDEC1_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_ADDRDEC1_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_COLMARCH1_ENABLE_Pos 6  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the col_march1 algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_COLMARCH1_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_COLMARCH1_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_FILLWITH0_ENABLE_Pos 7  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the fillwith0 algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_FILLWITH0_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_FILLWITH0_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_READ_ZEROS_ENABLE_Pos 8  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the ret read zeros algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_READ_ZEROS_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_READ_ZEROS_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_WRITE_ZEROS_ENABLE_Pos 9  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the ret write zeros algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_WRITE_ZEROS_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_WRITE_ZEROS_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_READ_ONES_ENABLE_Pos 10  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the ret read ones algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_READ_ONES_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_READ_ONES_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_WRITE_ONES_ENABLE_Pos 11  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the ret write ones algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_WRITE_ONES_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_WRITE_ONES_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_READ_CB_ENABLE_Pos 12  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the ret read checkerboard algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_READ_CB_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_READ_CB_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_WRITE_CB_ENABLE_Pos 13  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the ret write checkerboard algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_WRITE_CB_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_WRITE_CB_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_READ_INVCB_ENABLE_Pos 14  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the ret read inv checkerboard algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_READ_INVCB_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_READ_INVCB_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_WRITE_INVCB_ENABLE_Pos 15  /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Enables the ret write inv checkerboard algorithm */
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_WRITE_INVCB_ENABLE (0x1ul << LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_RET_WRITE_INVCB_ENABLE_Pos)  
#define LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_MASK 0xFFFFul    /**< \brief (LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL) Register MASK */

/* -------- LPMCU_MISC_REGS_MBIST_BG : (LPMCU_MISC_REGS Offset: 0x30) (R/W  32) MBIST Background for MARCH2 algorithm (bits 31:0) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t MBIST_BG:32;               /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_MBIST_BG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_MBIST_BG_OFFSET       0x30           /**<  \brief (LPMCU_MISC_REGS_MBIST_BG offset) MBIST Background for MARCH2 algorithm (bits 31:0) */
#define LPMCU_MISC_REGS_MBIST_BG_RESETVALUE   0x00ul         /**<  \brief (LPMCU_MISC_REGS_MBIST_BG reset_value) MBIST Background for MARCH2 algorithm (bits 31:0) */

#define LPMCU_MISC_REGS_MBIST_BG_MBIST_BG_Pos 0  /**< \brief (LPMCU_MISC_REGS_MBIST_BG)                                   */
#define LPMCU_MISC_REGS_MBIST_BG_MBIST_BG_Msk (0xFFFFFFFFul << LPMCU_MISC_REGS_MBIST_BG_MBIST_BG_Pos)
#define LPMCU_MISC_REGS_MBIST_BG_MBIST_BG(value) (LPMCU_MISC_REGS_MBIST_BG_MBIST_BG_Msk & ((value) << LPMCU_MISC_REGS_MBIST_BG_MBIST_BG_Pos))  
#define LPMCU_MISC_REGS_MBIST_BG_MASK         0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_MBIST_BG) Register MASK */

/* -------- LPMCU_MISC_REGS_TEST_BUS_CONTROL : (LPMCU_MISC_REGS Offset: 0x38) (R/W  8) Controls all of the test bus functionality -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  TEST_ENABLE_ARM:1;         /*!< bit:      0  Selects periph test bus                  */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_TEST_BUS_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_TEST_BUS_CONTROL_OFFSET 0x38           /**<  \brief (LPMCU_MISC_REGS_TEST_BUS_CONTROL offset) Controls all of the test bus functionality */
#define LPMCU_MISC_REGS_TEST_BUS_CONTROL_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_TEST_BUS_CONTROL reset_value) Controls all of the test bus functionality */

#define LPMCU_MISC_REGS_TEST_BUS_CONTROL_TEST_ENABLE_ARM_Pos 0  /**< \brief (LPMCU_MISC_REGS_TEST_BUS_CONTROL) Selects periph test bus   */
#define LPMCU_MISC_REGS_TEST_BUS_CONTROL_TEST_ENABLE_ARM (0x1ul << LPMCU_MISC_REGS_TEST_BUS_CONTROL_TEST_ENABLE_ARM_Pos)  
#define LPMCU_MISC_REGS_TEST_BUS_CONTROL_MASK 0x01ul    /**< \brief (LPMCU_MISC_REGS_TEST_BUS_CONTROL) Register MASK */

/* -------- LPMCU_MISC_REGS_WP3_MISR_DATAOUT : (LPMCU_MISC_REGS Offset: 0x3c) (R/  32) ROM MBIST Signature -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t WP3_MISR_DATAOUT:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_WP3_MISR_DATAOUT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_WP3_MISR_DATAOUT_OFFSET 0x3C           /**<  \brief (LPMCU_MISC_REGS_WP3_MISR_DATAOUT offset) ROM MBIST Signature */
#define LPMCU_MISC_REGS_WP3_MISR_DATAOUT_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_WP3_MISR_DATAOUT reset_value) ROM MBIST Signature */

#define LPMCU_MISC_REGS_WP3_MISR_DATAOUT_WP3_MISR_DATAOUT_Pos 0  /**< \brief (LPMCU_MISC_REGS_WP3_MISR_DATAOUT)                           */
#define LPMCU_MISC_REGS_WP3_MISR_DATAOUT_WP3_MISR_DATAOUT_Msk (0xFFFFFFFFul << LPMCU_MISC_REGS_WP3_MISR_DATAOUT_WP3_MISR_DATAOUT_Pos)
#define LPMCU_MISC_REGS_WP3_MISR_DATAOUT_WP3_MISR_DATAOUT(value) (LPMCU_MISC_REGS_WP3_MISR_DATAOUT_WP3_MISR_DATAOUT_Msk & ((value) << LPMCU_MISC_REGS_WP3_MISR_DATAOUT_WP3_MISR_DATAOUT_Pos))  
#define LPMCU_MISC_REGS_WP3_MISR_DATAOUT_MASK 0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_WP3_MISR_DATAOUT) Register MASK */

/* -------- LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL : (LPMCU_MISC_REGS Offset: 0x40) (R/W  32) Invert Output Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t LP_GPIO_0:1;               /*!< bit:      0  Invert the output for lp_gpio_0          */
    uint32_t LP_GPIO_1:1;               /*!< bit:      1  Invert the output for lp_gpio_1          */
    uint32_t LP_GPIO_2:1;               /*!< bit:      2  Invert the output for lp_gpio_2          */
    uint32_t LP_GPIO_3:1;               /*!< bit:      3  Invert the output for lp_gpio_3          */
    uint32_t LP_GPIO_4:1;               /*!< bit:      4  Invert the output for lp_gpio_4          */
    uint32_t LP_GPIO_5:1;               /*!< bit:      5  Invert the output for lp_gpio_5          */
    uint32_t LP_GPIO_6:1;               /*!< bit:      6  Invert the output for lp_gpio_6          */
    uint32_t LP_GPIO_7:1;               /*!< bit:      7  Invert the output for lp_gpio_7          */
    uint32_t LP_GPIO_8:1;               /*!< bit:      8  Invert the output for lp_gpio_8          */
    uint32_t LP_GPIO_9:1;               /*!< bit:      9  Invert the output for lp_gpio_9          */
    uint32_t LP_GPIO_10:1;              /*!< bit:     10  Invert the output for lp_gpio_10         */
    uint32_t LP_GPIO_11:1;              /*!< bit:     11  Invert the output for lp_gpio_11         */
    uint32_t LP_GPIO_12:1;              /*!< bit:     12  Invert the output for lp_gpio_12         */
    uint32_t LP_GPIO_13:1;              /*!< bit:     13  Invert the output for lp_gpio_13         */
    uint32_t LP_GPIO_14:1;              /*!< bit:     14  Invert the output for lp_gpio_14         */
    uint32_t LP_GPIO_15:1;              /*!< bit:     15  Invert the output for lp_gpio_15         */
    uint32_t LP_GPIO_16:1;              /*!< bit:     16  Invert the output for lp_gpio_16         */
    uint32_t LP_GPIO_17:1;              /*!< bit:     17  Invert the output for lp_gpio_17         */
    uint32_t LP_GPIO_18:1;              /*!< bit:     18  Invert the output for lp_gpio_18         */
    uint32_t LP_GPIO_19:1;              /*!< bit:     19  Invert the output for lp_gpio_19         */
    uint32_t LP_GPIO_20:1;              /*!< bit:     20  Invert the output for lp_gpio_20         */
    uint32_t LP_GPIO_21:1;              /*!< bit:     21  Invert the output for lp_gpio_21         */
    uint32_t LP_GPIO_22:1;              /*!< bit:     22  Invert the output for lp_gpio_22         */
    uint32_t LP_GPIO_23:1;              /*!< bit:     23  Invert the output for lp_gpio_23         */
    uint32_t :3;                        /*!< bit: 24..26  Reserved                                 */
    uint32_t LP_SIP_0:1;                /*!< bit:     27  Invert the output for lp_sip_0           */
    uint32_t LP_SIP_1:1;                /*!< bit:     28  Invert the output for lp_sip_1           */
    uint32_t LP_SIP_2:1;                /*!< bit:     29  Invert the output for lp_sip_2           */
    uint32_t LP_SIP_3:1;                /*!< bit:     30  Invert the output for lp_sip_3           */
    uint32_t LP_SIP_4:1;                /*!< bit:     31  Invert the output for lp_sip_4           */
  } bit;                                /*!< Structure used for bit  access                        */
  struct {
    uint32_t LP_GPIO_:24;               /*!< bit:  0..23  Invert the output for lp_gpio_x          */
    uint32_t :3;                        /*!< bit: 24..26  Reserved                                 */
    uint32_t LP_SIP_:5;                 /*!< bit: 27..31  Invert the output for lp_sip_4           */
  } vec;                                /*!< Structure used for vec  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_OFFSET 0x40           /**<  \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL offset) Invert Output Control */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL reset_value) Invert Output Control */

#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_0_Pos 0  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_0 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_0 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_0_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_1_Pos 1  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_1 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_1 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_1_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_2_Pos 2  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_2 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_2 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_2_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_3_Pos 3  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_3 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_3 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_3_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_4_Pos 4  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_4 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_4 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_4_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_5_Pos 5  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_5 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_5 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_5_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_6_Pos 6  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_6 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_6 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_6_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_7_Pos 7  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_7 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_7 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_7_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_8_Pos 8  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_8 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_8 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_8_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_9_Pos 9  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_9 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_9 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_9_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_10_Pos 10  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_10 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_10 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_10_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_11_Pos 11  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_11 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_11 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_11_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_12_Pos 12  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_12 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_12 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_12_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_13_Pos 13  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_13 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_13 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_13_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_14_Pos 14  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_14 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_14 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_14_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_15_Pos 15  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_15 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_15 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_15_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_16_Pos 16  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_16 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_16 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_16_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_17_Pos 17  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_17 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_17 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_17_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_18_Pos 18  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_18 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_18 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_18_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_19_Pos 19  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_19 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_19 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_19_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_20_Pos 20  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_20 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_20 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_20_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_21_Pos 21  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_21 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_21 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_21_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_22_Pos 22  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_22 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_22 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_22_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_23_Pos 23  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_23 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_23 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_23_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_0_Pos 27  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_sip_0 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_0 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_0_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_1_Pos 28  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_sip_1 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_1 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_1_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_2_Pos 29  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_sip_2 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_2 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_2_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_3_Pos 30  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_sip_3 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_3 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_3_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_4_Pos 31  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_sip_4 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_4 (0x1ul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_4_Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO__Pos 0  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_gpio_x */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO__Msk (0xFFFFFFul << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO__Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO_(value) (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO__Msk & ((value) << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_GPIO__Pos))  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP__Pos 27  /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Invert the output for lp_sip_4 */
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP__Msk (0x1Ful << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP__Pos)  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP_(value) (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP__Msk & ((value) << LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_LP_SIP__Pos))  
#define LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_MASK 0xF8FFFFFFul    /**< \brief (LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL) Register MASK */

/* -------- LPMCU_MISC_REGS_PINMUX_SEL_0 : (LPMCU_MISC_REGS Offset: 0x44) (R/W  32) Pinmux select for LP_GPIO_0, LP_GPIO_1, LP_GPIO_2, LP_GPIO_3, LP_GPIO_4, LP_GPIO_5, LP_GPIO_6, LP_GPIO_7 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t LP_GPIO_0_SEL:3;           /*!< bit:   0..2  Pinmux select for LP_GPIO_0              */
    uint32_t :1;                        /*!< bit:      3  Reserved                                 */
    uint32_t LP_GPIO_1_SEL:3;           /*!< bit:   4..6  Pinmux select for LP_GPIO_1              */
    uint32_t :1;                        /*!< bit:      7  Reserved                                 */
    uint32_t LP_GPIO_2_SEL:3;           /*!< bit:  8..10  Pinmux select for LP_GPIO_2              */
    uint32_t :1;                        /*!< bit:     11  Reserved                                 */
    uint32_t LP_GPIO_3_SEL:3;           /*!< bit: 12..14  Pinmux select for LP_GPIO_3              */
    uint32_t :1;                        /*!< bit:     15  Reserved                                 */
    uint32_t LP_GPIO_4_SEL:3;           /*!< bit: 16..18  Pinmux select for LP_GPIO_4              */
    uint32_t :1;                        /*!< bit:     19  Reserved                                 */
    uint32_t LP_GPIO_5_SEL:3;           /*!< bit: 20..22  Pinmux select for LP_GPIO_5              */
    uint32_t :1;                        /*!< bit:     23  Reserved                                 */
    uint32_t LP_GPIO_6_SEL:3;           /*!< bit: 24..26  Pinmux select for LP_GPIO_6              */
    uint32_t :1;                        /*!< bit:     27  Reserved                                 */
    uint32_t LP_GPIO_7_SEL:3;           /*!< bit: 28..30  Pinmux select for LP_GPIO_7              */
    uint32_t :1;                        /*!< bit:     31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_PINMUX_SEL_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_PINMUX_SEL_0_OFFSET   0x44           /**<  \brief (LPMCU_MISC_REGS_PINMUX_SEL_0 offset) Pinmux select for LP_GPIO_0, LP_GPIO_1, LP_GPIO_2, LP_GPIO_3, LP_GPIO_4, LP_GPIO_5, LP_GPIO_6, LP_GPIO_7 */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_RESETVALUE 0x22ul         /**<  \brief (LPMCU_MISC_REGS_PINMUX_SEL_0 reset_value) Pinmux select for LP_GPIO_0, LP_GPIO_1, LP_GPIO_2, LP_GPIO_3, LP_GPIO_4, LP_GPIO_5, LP_GPIO_6, LP_GPIO_7 */

#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_Pos 0  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) Pinmux select for LP_GPIO_0   */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_Pos 4  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) Pinmux select for LP_GPIO_1   */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_Pos 8  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) Pinmux select for LP_GPIO_2   */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_Pos 12  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) Pinmux select for LP_GPIO_3   */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_Pos 16  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) Pinmux select for LP_GPIO_4   */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_Pos 20  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) Pinmux select for LP_GPIO_5   */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_5_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_Pos 24  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) Pinmux select for LP_GPIO_6   */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_6_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_Pos 28  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) Pinmux select for LP_GPIO_7   */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_0_LP_GPIO_7_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_0_MASK     0x77777777ul    /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_0) Register MASK */

/* -------- LPMCU_MISC_REGS_PINMUX_SEL_1 : (LPMCU_MISC_REGS Offset: 0x48) (R/W  32) Pinmux select for LP_GPIO_8, LP_GPIO_9, LP_GPIO_10, LP_GPIO_11, LP_GPIO_12, LP_GPIO_13, LP_GPIO_14, LP_GPIO_15 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t LP_GPIO_8_SEL:3;           /*!< bit:   0..2  Pinmux select for LP_GPIO_8              */
    uint32_t :1;                        /*!< bit:      3  Reserved                                 */
    uint32_t LP_GPIO_9_SEL:3;           /*!< bit:   4..6  Pinmux select for LP_GPIO_9              */
    uint32_t :1;                        /*!< bit:      7  Reserved                                 */
    uint32_t LP_GPIO_10_SEL:3;          /*!< bit:  8..10  Pinmux select for LP_GPIO_10             */
    uint32_t :1;                        /*!< bit:     11  Reserved                                 */
    uint32_t LP_GPIO_11_SEL:3;          /*!< bit: 12..14  Pinmux select for LP_GPIO_11             */
    uint32_t :1;                        /*!< bit:     15  Reserved                                 */
    uint32_t LP_GPIO_12_SEL:3;          /*!< bit: 16..18  Pinmux select for LP_GPIO_12             */
    uint32_t :1;                        /*!< bit:     19  Reserved                                 */
    uint32_t LP_GPIO_13_SEL:3;          /*!< bit: 20..22  Pinmux select for LP_GPIO_13             */
    uint32_t :1;                        /*!< bit:     23  Reserved                                 */
    uint32_t LP_GPIO_14_SEL:3;          /*!< bit: 24..26  Pinmux select for LP_GPIO_14             */
    uint32_t :1;                        /*!< bit:     27  Reserved                                 */
    uint32_t LP_GPIO_15_SEL:3;          /*!< bit: 28..30  Pinmux select for LP_GPIO_15             */
    uint32_t :1;                        /*!< bit:     31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_PINMUX_SEL_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_PINMUX_SEL_1_OFFSET   0x48           /**<  \brief (LPMCU_MISC_REGS_PINMUX_SEL_1 offset) Pinmux select for LP_GPIO_8, LP_GPIO_9, LP_GPIO_10, LP_GPIO_11, LP_GPIO_12, LP_GPIO_13, LP_GPIO_14, LP_GPIO_15 */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_RESETVALUE 0x33ul         /**<  \brief (LPMCU_MISC_REGS_PINMUX_SEL_1 reset_value) Pinmux select for LP_GPIO_8, LP_GPIO_9, LP_GPIO_10, LP_GPIO_11, LP_GPIO_12, LP_GPIO_13, LP_GPIO_14, LP_GPIO_15 */

#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_Pos 0  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) Pinmux select for LP_GPIO_8   */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_8_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_Pos 4  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) Pinmux select for LP_GPIO_9   */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_9_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_Pos 8  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) Pinmux select for LP_GPIO_10  */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_10_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_Pos 12  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) Pinmux select for LP_GPIO_11  */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_11_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_Pos 16  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) Pinmux select for LP_GPIO_12  */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_12_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_Pos 20  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) Pinmux select for LP_GPIO_13  */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_13_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_Pos 24  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) Pinmux select for LP_GPIO_14  */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_14_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_Pos 28  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) Pinmux select for LP_GPIO_15  */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_1_LP_GPIO_15_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_1_MASK     0x77777777ul    /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_1) Register MASK */

/* -------- LPMCU_MISC_REGS_PINMUX_SEL_2 : (LPMCU_MISC_REGS Offset: 0x4c) (R/W  32) Pinmux select for LP_GPIO_16, LP_GPIO_17, LP_GPIO_18, LP_GPIO_19, LP_GPIO_20, LP_GPIO_21, LP_GPIO_22, LP_GPIO_23 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t LP_GPIO_16_SEL:3;          /*!< bit:   0..2  Pinmux select for LP_GPIO_16             */
    uint32_t :1;                        /*!< bit:      3  Reserved                                 */
    uint32_t LP_GPIO_17_SEL:3;          /*!< bit:   4..6  Pinmux select for LP_GPIO_17             */
    uint32_t :1;                        /*!< bit:      7  Reserved                                 */
    uint32_t LP_GPIO_18_SEL:3;          /*!< bit:  8..10  Pinmux select for LP_GPIO_18             */
    uint32_t :1;                        /*!< bit:     11  Reserved                                 */
    uint32_t LP_GPIO_19_SEL:3;          /*!< bit: 12..14  Pinmux select for LP_GPIO_19             */
    uint32_t :1;                        /*!< bit:     15  Reserved                                 */
    uint32_t LP_GPIO_20_SEL:3;          /*!< bit: 16..18  Pinmux select for LP_GPIO_20             */
    uint32_t :1;                        /*!< bit:     19  Reserved                                 */
    uint32_t LP_GPIO_21_SEL:3;          /*!< bit: 20..22  Pinmux select for LP_GPIO_21             */
    uint32_t :1;                        /*!< bit:     23  Reserved                                 */
    uint32_t LP_GPIO_22_SEL:3;          /*!< bit: 24..26  Pinmux select for LP_GPIO_22             */
    uint32_t :1;                        /*!< bit:     27  Reserved                                 */
    uint32_t LP_GPIO_23_SEL:3;          /*!< bit: 28..30  Pinmux select for LP_GPIO_23             */
    uint32_t :1;                        /*!< bit:     31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_PINMUX_SEL_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_PINMUX_SEL_2_OFFSET   0x4C           /**<  \brief (LPMCU_MISC_REGS_PINMUX_SEL_2 offset) Pinmux select for LP_GPIO_16, LP_GPIO_17, LP_GPIO_18, LP_GPIO_19, LP_GPIO_20, LP_GPIO_21, LP_GPIO_22, LP_GPIO_23 */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_PINMUX_SEL_2 reset_value) Pinmux select for LP_GPIO_16, LP_GPIO_17, LP_GPIO_18, LP_GPIO_19, LP_GPIO_20, LP_GPIO_21, LP_GPIO_22, LP_GPIO_23 */

#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_Pos 0  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) Pinmux select for LP_GPIO_16  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_16_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_Pos 4  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) Pinmux select for LP_GPIO_17  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_17_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_Pos 8  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) Pinmux select for LP_GPIO_18  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_18_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_Pos 12  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) Pinmux select for LP_GPIO_19  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_19_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_Pos 16  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) Pinmux select for LP_GPIO_20  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_20_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_Pos 20  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) Pinmux select for LP_GPIO_21  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_21_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_Pos 24  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) Pinmux select for LP_GPIO_22  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_22_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_Pos 28  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) Pinmux select for LP_GPIO_23  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_2_LP_GPIO_23_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_2_MASK     0x77777777ul    /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_2) Register MASK */

/* -------- LPMCU_MISC_REGS_PULL_ENABLE : (LPMCU_MISC_REGS Offset: 0x50) (R/W  32) Active Low Pull Enables for LPMCU Pads -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t LP_GPIO_0:1;               /*!< bit:      0  Pull Enable for LP_GPIO_0                */
    uint32_t LP_GPIO_1:1;               /*!< bit:      1  Pull Enable for LP_GPIO_1                */
    uint32_t LP_GPIO_2:1;               /*!< bit:      2  Pull Enable for LP_GPIO_2                */
    uint32_t LP_GPIO_3:1;               /*!< bit:      3  Pull Enable for LP_GPIO_3                */
    uint32_t LP_GPIO_4:1;               /*!< bit:      4  Pull Enable for LP_GPIO_4                */
    uint32_t LP_GPIO_5:1;               /*!< bit:      5  Pull Enable for LP_GPIO_5                */
    uint32_t LP_GPIO_6:1;               /*!< bit:      6  Pull Enable for LP_GPIO_6                */
    uint32_t LP_GPIO_7:1;               /*!< bit:      7  Pull Enable for LP_GPIO_7                */
    uint32_t LP_GPIO_8:1;               /*!< bit:      8  Pull Enable for LP_GPIO_8                */
    uint32_t LP_GPIO_9:1;               /*!< bit:      9  Pull Enable for LP_GPIO_9                */
    uint32_t LP_GPIO_10:1;              /*!< bit:     10  Pull Enable for LP_GPIO_10               */
    uint32_t LP_GPIO_11:1;              /*!< bit:     11  Pull Enable for LP_GPIO_11               */
    uint32_t LP_GPIO_12:1;              /*!< bit:     12  Pull Enable for LP_GPIO_12               */
    uint32_t LP_GPIO_13:1;              /*!< bit:     13  Pull Enable for LP_GPIO_13               */
    uint32_t LP_GPIO_14:1;              /*!< bit:     14  Pull Enable for LP_GPIO_14               */
    uint32_t LP_GPIO_15:1;              /*!< bit:     15  Pull Enable for LP_GPIO_15               */
    uint32_t LP_GPIO_16:1;              /*!< bit:     16  Pull Enable for LP_GPIO_16               */
    uint32_t LP_GPIO_17:1;              /*!< bit:     17  Pull Enable for LP_GPIO_17               */
    uint32_t LP_GPIO_18:1;              /*!< bit:     18  Pull Enable for LP_GPIO_18               */
    uint32_t LP_GPIO_19:1;              /*!< bit:     19  Pull Enable for LP_GPIO_19               */
    uint32_t LP_GPIO_20:1;              /*!< bit:     20  Pull Enable for LP_GPIO_20               */
    uint32_t LP_GPIO_21:1;              /*!< bit:     21  Pull Enable for LP_GPIO_21               */
    uint32_t LP_GPIO_22:1;              /*!< bit:     22  Pull Enable for LP_GPIO_22               */
    uint32_t LP_GPIO_23:1;              /*!< bit:     23  Pull Enable for LP_GPIO_23               */
    uint32_t :3;                        /*!< bit: 24..26  Reserved                                 */
    uint32_t LP_SIP_0:1;                /*!< bit:     27  Pull Enable for LP_SIP_0                 */
    uint32_t LP_SIP_1:1;                /*!< bit:     28  Pull Enable for LP_SIP_1                 */
    uint32_t LP_SIP_2:1;                /*!< bit:     29  Pull Enable for LP_SIP_2                 */
    uint32_t LP_SIP_3:1;                /*!< bit:     30  Pull Enable for LP_SIP_3                 */
    uint32_t LP_SIP_4:1;                /*!< bit:     31  Pull Enable for LP_SIP_4                 */
  } bit;                                /*!< Structure used for bit  access                        */
  struct {
    uint32_t LP_GPIO_:24;               /*!< bit:  0..23  Pull Enable for LP_GPIO_x                */
    uint32_t :3;                        /*!< bit: 24..26  Reserved                                 */
    uint32_t LP_SIP_:5;                 /*!< bit: 27..31  Pull Enable for LP_SIP_4                 */
  } vec;                                /*!< Structure used for vec  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_PULL_ENABLE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_PULL_ENABLE_OFFSET    0x50           /**<  \brief (LPMCU_MISC_REGS_PULL_ENABLE offset) Active Low Pull Enables for LPMCU Pads */
#define LPMCU_MISC_REGS_PULL_ENABLE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_PULL_ENABLE reset_value) Active Low Pull Enables for LPMCU Pads */

#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_0_Pos 0  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_0      */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_0 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_0_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_1_Pos 1  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_1      */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_1 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_1_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_2_Pos 2  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_2      */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_2 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_2_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_3_Pos 3  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_3      */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_3 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_3_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_4_Pos 4  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_4      */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_4 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_4_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_5_Pos 5  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_5      */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_5 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_5_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_6_Pos 6  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_6      */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_6 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_6_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_7_Pos 7  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_7      */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_7 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_7_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_8_Pos 8  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_8      */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_8 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_8_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_9_Pos 9  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_9      */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_9 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_9_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_10_Pos 10  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_10     */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_10 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_10_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_11_Pos 11  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_11     */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_11 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_11_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_12_Pos 12  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_12     */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_12 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_12_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_13_Pos 13  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_13     */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_13 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_13_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_14_Pos 14  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_14     */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_14 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_14_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_15_Pos 15  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_15     */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_15 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_15_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_16_Pos 16  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_16     */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_16 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_16_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_17_Pos 17  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_17     */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_17 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_17_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_18_Pos 18  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_18     */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_18 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_18_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_19_Pos 19  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_19     */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_19 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_19_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_20_Pos 20  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_20     */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_20 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_20_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_21_Pos 21  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_21     */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_21 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_21_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_22_Pos 22  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_22     */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_22 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_22_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_23_Pos 23  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_23     */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_23 (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_23_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_0_Pos 27  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_SIP_0       */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_0  (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_0_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_1_Pos 28  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_SIP_1       */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_1  (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_1_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_2_Pos 29  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_SIP_2       */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_2  (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_2_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_3_Pos 30  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_SIP_3       */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_3  (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_3_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_4_Pos 31  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_SIP_4       */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_4  (0x1ul << LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_4_Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO__Pos 0  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_GPIO_x */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO__Msk (0xFFFFFFul << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO__Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO_(value) (LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO__Msk & ((value) << LPMCU_MISC_REGS_PULL_ENABLE_LP_GPIO__Pos))  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP__Pos 27  /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Pull Enable for LP_SIP_4 */
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP__Msk (0x1Ful << LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP__Pos)  
#define LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP_(value) (LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP__Msk & ((value) << LPMCU_MISC_REGS_PULL_ENABLE_LP_SIP__Pos))  
#define LPMCU_MISC_REGS_PULL_ENABLE_MASK      0xF8FFFFFFul    /**< \brief (LPMCU_MISC_REGS_PULL_ENABLE) Register MASK */

/* -------- LPMCU_MISC_REGS_RTYPE_PAD_0 : (LPMCU_MISC_REGS Offset: 0x54) (R/W  32) Controls the RTYPE (Pull Level) pad value for LPMCU Pads (0 = Pull Up) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t LP_GPIO_0:1;               /*!< bit:      0  Controls RTYPE (Pull Level) value for LP_GPIO_0 */
    uint32_t LP_GPIO_1:1;               /*!< bit:      1  Controls RTYPE (Pull Level) value LP_GPIO_1 */
    uint32_t LP_GPIO_2:1;               /*!< bit:      2  Controls RTYPE (Pull Level) value LP_GPIO_2 */
    uint32_t LP_GPIO_3:1;               /*!< bit:      3  Controls RTYPE (Pull Level) value LP_GPIO_3 */
    uint32_t LP_GPIO_4:1;               /*!< bit:      4  Controls RTYPE (Pull Level) value LP_GPIO_4 */
    uint32_t LP_GPIO_5:1;               /*!< bit:      5  Controls RTYPE (Pull Level) value LP_GPIO_5 */
    uint32_t LP_GPIO_6:1;               /*!< bit:      6  Controls RTYPE (Pull Level) value LP_GPIO_6 */
    uint32_t LP_GPIO_7:1;               /*!< bit:      7  Controls RTYPE (Pull Level) value LP_GPIO_7 */
    uint32_t LP_GPIO_8:1;               /*!< bit:      8  Controls RTYPE (Pull Level) value for LP_GPIO_8 */
    uint32_t LP_GPIO_9:1;               /*!< bit:      9  Controls RTYPE (Pull Level) value LP_GPIO_9 */
    uint32_t LP_GPIO_10:1;              /*!< bit:     10  Controls RTYPE (Pull Level) value LP_GPIO_10 */
    uint32_t LP_GPIO_11:1;              /*!< bit:     11  Controls RTYPE (Pull Level) value LP_GPIO_11 */
    uint32_t LP_GPIO_12:1;              /*!< bit:     12  Controls RTYPE (Pull Level) value LP_GPIO_12 */
    uint32_t LP_GPIO_13:1;              /*!< bit:     13  Controls RTYPE (Pull Level) value LP_GPIO_13 */
    uint32_t LP_GPIO_14:1;              /*!< bit:     14  Controls RTYPE (Pull Level) value LP_GPIO_14 */
    uint32_t LP_GPIO_15:1;              /*!< bit:     15  Controls RTYPE (Pull Level) value LP_GPIO_15 */
    uint32_t LP_GPIO_16:1;              /*!< bit:     16  Controls RTYPE (Pull Level) value LP_GPIO_16 */
    uint32_t LP_GPIO_17:1;              /*!< bit:     17  Controls RTYPE (Pull Level) value LP_GPIO_17 */
    uint32_t LP_GPIO_18:1;              /*!< bit:     18  Controls RTYPE (Pull Level) value LP_GPIO_18 */
    uint32_t LP_GPIO_19:1;              /*!< bit:     19  Controls RTYPE (Pull Level) value LP_GPIO_19 */
    uint32_t LP_GPIO_20:1;              /*!< bit:     20  Controls RTYPE (Pull Level) value LP_GPIO_20 */
    uint32_t LP_GPIO_21:1;              /*!< bit:     21  Controls RTYPE (Pull Level) value LP_GPIO_21 */
    uint32_t LP_GPIO_22:1;              /*!< bit:     22  Controls RTYPE (Pull Level) value LP_GPIO_22 */
    uint32_t LP_GPIO_23:1;              /*!< bit:     23  Controls RTYPE (Pull Level) value LP_GPIO_23 */
    uint32_t :8;                        /*!< bit: 24..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  struct {
    uint32_t LP_GPIO_:24;               /*!< bit:  0..23  Controls RTYPE (Pull Level) value LP_GPIO_23 */
    uint32_t :8;                        /*!< bit: 24..31 Reserved                                  */
  } vec;                                /*!< Structure used for vec  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_RTYPE_PAD_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_RTYPE_PAD_0_OFFSET    0x54           /**<  \brief (LPMCU_MISC_REGS_RTYPE_PAD_0 offset) Controls the RTYPE (Pull Level) pad value for LPMCU Pads (0 = Pull Up) */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_RTYPE_PAD_0 reset_value) Controls the RTYPE (Pull Level) pad value for LPMCU Pads (0 = Pull Up) */

#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_0_Pos 0  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value for LP_GPIO_0 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_0 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_0_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_1_Pos 1  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_1 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_1 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_1_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_2_Pos 2  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_2 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_2 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_2_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_3_Pos 3  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_3 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_3 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_3_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_4_Pos 4  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_4 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_4 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_4_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_5_Pos 5  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_5 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_5 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_5_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_6_Pos 6  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_6 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_6 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_6_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_7_Pos 7  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_7 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_7 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_7_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_8_Pos 8  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value for LP_GPIO_8 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_8 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_8_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_9_Pos 9  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_9 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_9 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_9_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_10_Pos 10  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_10 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_10 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_10_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_11_Pos 11  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_11 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_11 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_11_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_12_Pos 12  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_12 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_12 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_12_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_13_Pos 13  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_13 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_13 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_13_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_14_Pos 14  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_14 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_14 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_14_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_15_Pos 15  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_15 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_15 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_15_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_16_Pos 16  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_16 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_16 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_16_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_17_Pos 17  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_17 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_17 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_17_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_18_Pos 18  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_18 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_18 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_18_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_19_Pos 19  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_19 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_19 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_19_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_20_Pos 20  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_20 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_20 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_20_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_21_Pos 21  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_21 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_21 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_21_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_22_Pos 22  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_22 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_22 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_22_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_23_Pos 23  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_23 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_23 (0x1ul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_23_Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO__Pos 0  /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Controls RTYPE (Pull Level) value LP_GPIO_23 */
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO__Msk (0xFFFFFFul << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO__Pos)  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO_(value) (LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO__Msk & ((value) << LPMCU_MISC_REGS_RTYPE_PAD_0_LP_GPIO__Pos))  
#define LPMCU_MISC_REGS_RTYPE_PAD_0_MASK      0xFFFFFFul    /**< \brief (LPMCU_MISC_REGS_RTYPE_PAD_0) Register MASK */

/* -------- LPMCU_MISC_REGS_PINMUX_SEL_3 : (LPMCU_MISC_REGS Offset: 0x68) (R/W  32) Pinmux select for LP_SIP_0, LP_SIP_1, LP_SIP_2, LP_SIP_3, LP_SIP_4 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t LP_SIP_0_SEL:3;            /*!< bit:   0..2  Pinmux select for LP_SIP_0               */
    uint32_t :1;                        /*!< bit:      3  Reserved                                 */
    uint32_t LP_SIP_1_SEL:3;            /*!< bit:   4..6  Pinmux select for LP_SIP_1               */
    uint32_t :1;                        /*!< bit:      7  Reserved                                 */
    uint32_t LP_SIP_2_SEL:3;            /*!< bit:  8..10  Pinmux select for LP_SIP_2               */
    uint32_t :1;                        /*!< bit:     11  Reserved                                 */
    uint32_t LP_SIP_3_SEL:3;            /*!< bit: 12..14  Pinmux select for LP_SIP_3               */
    uint32_t :1;                        /*!< bit:     15  Reserved                                 */
    uint32_t LP_SIP_4_SEL:3;            /*!< bit: 16..18  Pinmux select for LP_SIP_4               */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_PINMUX_SEL_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_PINMUX_SEL_3_OFFSET   0x68           /**<  \brief (LPMCU_MISC_REGS_PINMUX_SEL_3 offset) Pinmux select for LP_SIP_0, LP_SIP_1, LP_SIP_2, LP_SIP_3, LP_SIP_4 */
#define LPMCU_MISC_REGS_PINMUX_SEL_3_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_PINMUX_SEL_3 reset_value) Pinmux select for LP_SIP_0, LP_SIP_1, LP_SIP_2, LP_SIP_3, LP_SIP_4 */

#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_Pos 0  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) Pinmux select for LP_SIP_0    */
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_0_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_Pos 4  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) Pinmux select for LP_SIP_1    */
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_1_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_Pos 8  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) Pinmux select for LP_SIP_2    */
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_2_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_Pos 12  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) Pinmux select for LP_SIP_3    */
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_3_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_Pos 16  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) Pinmux select for LP_SIP_4    */
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_Msk (0x7ul << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL(value) (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_Msk & ((value) << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_Pos))  
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 0  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 1  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 2  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 3  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 4  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 5  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 6  */
#define   LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) MUX function 7  */
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX0    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX0_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX1    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX1_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX2    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX2_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX3    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX3_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX4    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX4_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX5    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX5_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX6    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX6_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX7    (LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_MUX7_Val << LPMCU_MISC_REGS_PINMUX_SEL_3_LP_SIP_4_SEL_Pos)
#define LPMCU_MISC_REGS_PINMUX_SEL_3_MASK     0x77777ul    /**< \brief (LPMCU_MISC_REGS_PINMUX_SEL_3) Register MASK */

/* -------- LPMCU_MISC_REGS_ISHAPE_PAD_3 : (LPMCU_MISC_REGS Offset: 0x6c) (R/W  32) Controls the ISHAPE pad value for LPMCU SIP Pads -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t LP_SIP_0:3;                /*!< bit:   0..2  Controls ISHAPE value LP_SIP_0           */
    uint32_t :1;                        /*!< bit:      3  Reserved                                 */
    uint32_t LP_SIP_1:3;                /*!< bit:   4..6  Controls ISHAPE value LP_SIP_1           */
    uint32_t :1;                        /*!< bit:      7  Reserved                                 */
    uint32_t LP_SIP_2:3;                /*!< bit:  8..10  Controls ISHAPE value LP_SIP_2           */
    uint32_t :1;                        /*!< bit:     11  Reserved                                 */
    uint32_t LP_SIP_3:3;                /*!< bit: 12..14  Controls ISHAPE value LP_SIP_3           */
    uint32_t :1;                        /*!< bit:     15  Reserved                                 */
    uint32_t LP_SIP_4:3;                /*!< bit: 16..18  Controls ISHAPE value LP_SIP_4           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_ISHAPE_PAD_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_ISHAPE_PAD_3_OFFSET   0x6C           /**<  \brief (LPMCU_MISC_REGS_ISHAPE_PAD_3 offset) Controls the ISHAPE pad value for LPMCU SIP Pads */
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_RESETVALUE 0x55555ul      /**<  \brief (LPMCU_MISC_REGS_ISHAPE_PAD_3 reset_value) Controls the ISHAPE pad value for LPMCU SIP Pads */

#define LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_0_Pos 0  /**< \brief (LPMCU_MISC_REGS_ISHAPE_PAD_3) Controls ISHAPE value LP_SIP_0 */
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_0_Msk (0x7ul << LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_0_Pos)
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_0(value) (LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_0_Msk & ((value) << LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_0_Pos))  
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_1_Pos 4  /**< \brief (LPMCU_MISC_REGS_ISHAPE_PAD_3) Controls ISHAPE value LP_SIP_1 */
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_1_Msk (0x7ul << LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_1_Pos)
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_1(value) (LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_1_Msk & ((value) << LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_1_Pos))  
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_2_Pos 8  /**< \brief (LPMCU_MISC_REGS_ISHAPE_PAD_3) Controls ISHAPE value LP_SIP_2 */
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_2_Msk (0x7ul << LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_2_Pos)
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_2(value) (LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_2_Msk & ((value) << LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_2_Pos))  
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_3_Pos 12  /**< \brief (LPMCU_MISC_REGS_ISHAPE_PAD_3) Controls ISHAPE value LP_SIP_3 */
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_3_Msk (0x7ul << LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_3_Pos)
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_3(value) (LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_3_Msk & ((value) << LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_3_Pos))  
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_4_Pos 16  /**< \brief (LPMCU_MISC_REGS_ISHAPE_PAD_3) Controls ISHAPE value LP_SIP_4 */
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_4_Msk (0x7ul << LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_4_Pos)
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_4(value) (LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_4_Msk & ((value) << LPMCU_MISC_REGS_ISHAPE_PAD_3_LP_SIP_4_Pos))  
#define LPMCU_MISC_REGS_ISHAPE_PAD_3_MASK     0x77777ul    /**< \brief (LPMCU_MISC_REGS_ISHAPE_PAD_3) Register MASK */

/* -------- LPMCU_MISC_REGS_LPMCU_CONTROL_2 : (LPMCU_MISC_REGS Offset: 0x90) (R/W  8) Misc control for the LPMCU -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  SPI_FLASH_CLOCK_FRAC_VALUE:8;  /*!< bit:   0..7  SPI Flash Fractional Divider Value       */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_LPMCU_CONTROL_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_LPMCU_CONTROL_2_OFFSET 0x90           /**<  \brief (LPMCU_MISC_REGS_LPMCU_CONTROL_2 offset) Misc control for the LPMCU */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_2_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_LPMCU_CONTROL_2 reset_value) Misc control for the LPMCU */

#define LPMCU_MISC_REGS_LPMCU_CONTROL_2_SPI_FLASH_CLOCK_FRAC_VALUE_Pos 0  /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL_2) SPI Flash Fractional Divider Value */
#define LPMCU_MISC_REGS_LPMCU_CONTROL_2_SPI_FLASH_CLOCK_FRAC_VALUE_Msk (0xFFul << LPMCU_MISC_REGS_LPMCU_CONTROL_2_SPI_FLASH_CLOCK_FRAC_VALUE_Pos)
#define LPMCU_MISC_REGS_LPMCU_CONTROL_2_SPI_FLASH_CLOCK_FRAC_VALUE(value) (LPMCU_MISC_REGS_LPMCU_CONTROL_2_SPI_FLASH_CLOCK_FRAC_VALUE_Msk & ((value) << LPMCU_MISC_REGS_LPMCU_CONTROL_2_SPI_FLASH_CLOCK_FRAC_VALUE_Pos))  
#define LPMCU_MISC_REGS_LPMCU_CONTROL_2_MASK  0xFFul    /**< \brief (LPMCU_MISC_REGS_LPMCU_CONTROL_2) Register MASK */

/* -------- LPMCU_MISC_REGS_SPIFLASH_VDDIO_CTRL : (LPMCU_MISC_REGS Offset: 0xa0) (R/W  8) Control for VDDIO of SPI FLASH -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ENABLE:1;                  /*!< bit:      0  Enables power for the stacked (internal) SPI FLASH */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_SPIFLASH_VDDIO_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_SPIFLASH_VDDIO_CTRL_OFFSET 0xA0           /**<  \brief (LPMCU_MISC_REGS_SPIFLASH_VDDIO_CTRL offset) Control for VDDIO of SPI FLASH */
#define LPMCU_MISC_REGS_SPIFLASH_VDDIO_CTRL_RESETVALUE 0x01ul         /**<  \brief (LPMCU_MISC_REGS_SPIFLASH_VDDIO_CTRL reset_value) Control for VDDIO of SPI FLASH */

#define LPMCU_MISC_REGS_SPIFLASH_VDDIO_CTRL_ENABLE_Pos 0  /**< \brief (LPMCU_MISC_REGS_SPIFLASH_VDDIO_CTRL) Enables power for the stacked (internal) SPI FLASH */
#define LPMCU_MISC_REGS_SPIFLASH_VDDIO_CTRL_ENABLE (0x1ul << LPMCU_MISC_REGS_SPIFLASH_VDDIO_CTRL_ENABLE_Pos)  
#define LPMCU_MISC_REGS_SPIFLASH_VDDIO_CTRL_MASK 0x01ul    /**< \brief (LPMCU_MISC_REGS_SPIFLASH_VDDIO_CTRL) Register MASK */

/* -------- LPMCU_MISC_REGS_SPIFLASH_BYPASS : (LPMCU_MISC_REGS Offset: 0xa4) (R/W  8) SPI FLASH Bypass -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ENABLE:1;                  /*!< bit:      0  Enables Bypass of SPI Flash Controller   */
    uint8_t  :7;                        /*!< bit:   1..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_SPIFLASH_BYPASS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_SPIFLASH_BYPASS_OFFSET 0xA4           /**<  \brief (LPMCU_MISC_REGS_SPIFLASH_BYPASS offset) SPI FLASH Bypass */
#define LPMCU_MISC_REGS_SPIFLASH_BYPASS_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_SPIFLASH_BYPASS reset_value) SPI FLASH Bypass */

#define LPMCU_MISC_REGS_SPIFLASH_BYPASS_ENABLE_Pos 0  /**< \brief (LPMCU_MISC_REGS_SPIFLASH_BYPASS) Enables Bypass of SPI Flash Controller */
#define LPMCU_MISC_REGS_SPIFLASH_BYPASS_ENABLE (0x1ul << LPMCU_MISC_REGS_SPIFLASH_BYPASS_ENABLE_Pos)  
#define LPMCU_MISC_REGS_SPIFLASH_BYPASS_MASK  0x01ul    /**< \brief (LPMCU_MISC_REGS_SPIFLASH_BYPASS) Register MASK */

/* -------- LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0 : (LPMCU_MISC_REGS Offset: 0xc0) (R/W  32) ARM Cortex IRQ Mux Selection -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t MUX_0:5;                   /*!< bit:   0..4  IRQ_0 Source Selection                   */
    uint32_t :3;                        /*!< bit:   5..7  Reserved                                 */
    uint32_t MUX_1:5;                   /*!< bit:  8..12  IRQ_1 Source Selection                   */
    uint32_t :3;                        /*!< bit: 13..15  Reserved                                 */
    uint32_t MUX_2:5;                   /*!< bit: 16..20  IRQ_2 Source Selection                   */
    uint32_t :3;                        /*!< bit: 21..23  Reserved                                 */
    uint32_t MUX_3:5;                   /*!< bit: 24..28  IRQ_3 Source Selection                   */
    uint32_t :3;                        /*!< bit: 29..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_OFFSET 0xC0           /**<  \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0 offset) ARM Cortex IRQ Mux Selection */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0 reset_value) ARM Cortex IRQ Mux Selection */

#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos 0  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) IRQ_0 Source Selection    */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_0_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos 8  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) IRQ_1 Source Selection    */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_1_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos 16  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) IRQ_2 Source Selection    */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_2_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos 24  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) IRQ_3 Source Selection    */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MUX_3_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_MASK 0x1F1F1F1Ful    /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0) Register MASK */

/* -------- LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1 : (LPMCU_MISC_REGS Offset: 0xc4) (R/W  32) ARM Cortex IRQ Mux Selection -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t MUX_4:5;                   /*!< bit:   0..4  IRQ_4 Source Selection                   */
    uint32_t :3;                        /*!< bit:   5..7  Reserved                                 */
    uint32_t MUX_5:5;                   /*!< bit:  8..12  IRQ_5 Source Selection                   */
    uint32_t :3;                        /*!< bit: 13..15  Reserved                                 */
    uint32_t MUX_6:5;                   /*!< bit: 16..20  IRQ_6 Source Selection                   */
    uint32_t :3;                        /*!< bit: 21..23  Reserved                                 */
    uint32_t MUX_7:5;                   /*!< bit: 24..28  IRQ_7 Source Selection                   */
    uint32_t :3;                        /*!< bit: 29..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_OFFSET 0xC4           /**<  \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1 offset) ARM Cortex IRQ Mux Selection */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1 reset_value) ARM Cortex IRQ Mux Selection */

#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos 0  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) IRQ_4 Source Selection    */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_4_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos 8  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) IRQ_5 Source Selection    */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_5_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos 16  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) IRQ_6 Source Selection    */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_6_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos 24  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) IRQ_7 Source Selection    */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MUX_7_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_MASK 0x1F1F1F1Ful    /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1) Register MASK */

/* -------- LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2 : (LPMCU_MISC_REGS Offset: 0xc8) (R/W  32) ARM Cortex IRQ Mux Selection -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t MUX_8:5;                   /*!< bit:   0..4  IRQ_8 Source Selection                   */
    uint32_t :3;                        /*!< bit:   5..7  Reserved                                 */
    uint32_t MUX_9:5;                   /*!< bit:  8..12  IRQ_9 Source Selection                   */
    uint32_t :3;                        /*!< bit: 13..15  Reserved                                 */
    uint32_t MUX_10:5;                  /*!< bit: 16..20  IRQ_10 Source Selection                  */
    uint32_t :3;                        /*!< bit: 21..23  Reserved                                 */
    uint32_t MUX_11:5;                  /*!< bit: 24..28  IRQ_11 Source Selection                  */
    uint32_t :3;                        /*!< bit: 29..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_OFFSET 0xC8           /**<  \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2 offset) ARM Cortex IRQ Mux Selection */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2 reset_value) ARM Cortex IRQ Mux Selection */

#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos 0  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) IRQ_8 Source Selection    */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_8_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos 8  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) IRQ_9 Source Selection    */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_9_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos 16  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) IRQ_10 Source Selection   */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_10_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos 24  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) IRQ_11 Source Selection   */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MUX_11_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_MASK 0x1F1F1F1Ful    /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2) Register MASK */

/* -------- LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3 : (LPMCU_MISC_REGS Offset: 0xcc) (R/W  32) ARM Cortex IRQ Mux Selection -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t MUX_12:5;                  /*!< bit:   0..4  IRQ_12 Source Selection                  */
    uint32_t :3;                        /*!< bit:   5..7  Reserved                                 */
    uint32_t MUX_13:5;                  /*!< bit:  8..12  IRQ_13 Source Selection                  */
    uint32_t :3;                        /*!< bit: 13..15  Reserved                                 */
    uint32_t MUX_14:5;                  /*!< bit: 16..20  IRQ_14 Source Selection                  */
    uint32_t :3;                        /*!< bit: 21..23  Reserved                                 */
    uint32_t MUX_15:5;                  /*!< bit: 24..28  IRQ_15 Source Selection                  */
    uint32_t :3;                        /*!< bit: 29..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_OFFSET 0xCC           /**<  \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3 offset) ARM Cortex IRQ Mux Selection */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3 reset_value) ARM Cortex IRQ Mux Selection */

#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos 0  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) IRQ_12 Source Selection   */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_12_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos 8  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) IRQ_13 Source Selection   */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_13_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos 16  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) IRQ_14 Source Selection   */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_14_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos 24  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) IRQ_15 Source Selection   */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MUX_15_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_MASK 0x1F1F1F1Ful    /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3) Register MASK */

/* -------- LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4 : (LPMCU_MISC_REGS Offset: 0xd0) (R/W  32) ARM Cortex IRQ Mux Selection -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t MUX_16:5;                  /*!< bit:   0..4  IRQ_16 Source Selection                  */
    uint32_t :3;                        /*!< bit:   5..7  Reserved                                 */
    uint32_t MUX_17:5;                  /*!< bit:  8..12  IRQ_17 Source Selection                  */
    uint32_t :3;                        /*!< bit: 13..15  Reserved                                 */
    uint32_t MUX_18:5;                  /*!< bit: 16..20  IRQ_18 Source Selection                  */
    uint32_t :3;                        /*!< bit: 21..23  Reserved                                 */
    uint32_t MUX_19:5;                  /*!< bit: 24..28  IRQ_19 Source Selection                  */
    uint32_t :3;                        /*!< bit: 29..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_OFFSET 0xD0           /**<  \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4 offset) ARM Cortex IRQ Mux Selection */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4 reset_value) ARM Cortex IRQ Mux Selection */

#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos 0  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) IRQ_16 Source Selection   */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_16_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos 8  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) IRQ_17 Source Selection   */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_17_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos 16  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) IRQ_18 Source Selection   */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_18_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos 24  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) IRQ_19 Source Selection   */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MUX_19_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_MASK 0x1F1F1F1Ful    /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4) Register MASK */

/* -------- LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5 : (LPMCU_MISC_REGS Offset: 0xd4) (R/W  8) ARM Cortex IRQ Mux Selection -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  MUX_20:5;                  /*!< bit:   0..4  IRQ_20 Source Selection                  */
    uint8_t  :3;                        /*!< bit:   5..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_OFFSET 0xD4           /**<  \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5 offset) ARM Cortex IRQ Mux Selection */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5 reset_value) ARM Cortex IRQ Mux Selection */

#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos 0  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) IRQ_20 Source Selection   */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Msk (0x1Ful << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20(value) (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Msk & ((value) << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos))  
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) BROWNOUT_DETECTED  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) UART0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) UART0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) UART1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) UART1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) SPI0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) SPI0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) SPI1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) SPI1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) I2C0 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) I2C0 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) I2C1 RX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) I2C1 TX  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) WDT0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) WDT1  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) DUALTIMER0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) PROV_DMA_CTRL0  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) SECURITY  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) EFUSE_OUT_OF_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) QUAD_DEC0_1_2  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) BLE_FRONTEND  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) PROG_AHB_TRIG_TIMEOUT  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) SXPLL_NEED_RESET  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) LP_CLK_CAL_DONE  */
#define   LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) BROWNOUT_DETECTED  */
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_0    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_0_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_1    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_1_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_2    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_2_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_3    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_3_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_4    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_4_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_5    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_5_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_6    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_6_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_7    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_7_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_8    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_8_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_9    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_9_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_10    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_10_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_11    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_11_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_12    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_12_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_13    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_13_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_14    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_14_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_15    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_15_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_16    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_16_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_17    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_17_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_18    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_18_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_19    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_19_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_20    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_20_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_21    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_21_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_22    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_22_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_23    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_23_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_24    (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_24_Val << LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MUX_20_Pos)
#define LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_MASK 0x1Ful    /**< \brief (LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5) Register MASK */

/* -------- LPMCU_MISC_REGS_PWM_1_CONTROL : (LPMCU_MISC_REGS Offset: 0x160) (R/W  32) PWM 1 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t PWM_EN:1;                  /*!< bit:      0  Active High PWM Enable                   */
    uint32_t OUTPUT_POLARITY:1;         /*!< bit:      1  1 to inverse the polarity                */
    uint32_t AGCDATA_FMT:1;             /*!< bit:      2  AGC data format                          */
    uint32_t SAMPLE_METHOD:1;           /*!< bit:      3  Sample Method                            */
    uint32_t :1;                        /*!< bit:      4  Reserved                                 */
    uint32_t PWM_PERIOD:4;              /*!< bit:   5..8  programmable PWM update period           */
    uint32_t AGCDATA_IN:10;             /*!< bit:  9..18  agc value from AGC                       */
    uint32_t :2;                        /*!< bit: 19..20  Reserved                                 */
    uint32_t CLOCK_SEL:2;               /*!< bit: 21..22  PWM Source Clock Frequency Select        */
    uint32_t :9;                        /*!< bit: 23..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_PWM_1_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_PWM_1_CONTROL_OFFSET  0x160          /**<  \brief (LPMCU_MISC_REGS_PWM_1_CONTROL offset) PWM 1 Control Register */
#define LPMCU_MISC_REGS_PWM_1_CONTROL_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_PWM_1_CONTROL reset_value) PWM 1 Control Register */

#define LPMCU_MISC_REGS_PWM_1_CONTROL_PWM_EN_Pos 0  /**< \brief (LPMCU_MISC_REGS_PWM_1_CONTROL) Active High PWM Enable       */
#define LPMCU_MISC_REGS_PWM_1_CONTROL_PWM_EN  (0x1ul << LPMCU_MISC_REGS_PWM_1_CONTROL_PWM_EN_Pos)  
#define LPMCU_MISC_REGS_PWM_1_CONTROL_OUTPUT_POLARITY_Pos 1  /**< \brief (LPMCU_MISC_REGS_PWM_1_CONTROL) 1 to inverse the polarity    */
#define LPMCU_MISC_REGS_PWM_1_CONTROL_OUTPUT_POLARITY (0x1ul << LPMCU_MISC_REGS_PWM_1_CONTROL_OUTPUT_POLARITY_Pos)  
#define LPMCU_MISC_REGS_PWM_1_CONTROL_AGCDATA_FMT_Pos 2  /**< \brief (LPMCU_MISC_REGS_PWM_1_CONTROL) AGC data format              */
#define LPMCU_MISC_REGS_PWM_1_CONTROL_AGCDATA_FMT (0x1ul << LPMCU_MISC_REGS_PWM_1_CONTROL_AGCDATA_FMT_Pos)  
#define LPMCU_MISC_REGS_PWM_1_CONTROL_SAMPLE_METHOD_Pos 3  /**< \brief (LPMCU_MISC_REGS_PWM_1_CONTROL) Sample Method                */
#define LPMCU_MISC_REGS_PWM_1_CONTROL_SAMPLE_METHOD_Msk (0x1ul << LPMCU_MISC_REGS_PWM_1_CONTROL_SAMPLE_METHOD_Pos)
#define LPMCU_MISC_REGS_PWM_1_CONTROL_SAMPLE_METHOD(value) (LPMCU_MISC_REGS_PWM_1_CONTROL_SAMPLE_METHOD_Msk & ((value) << LPMCU_MISC_REGS_PWM_1_CONTROL_SAMPLE_METHOD_Pos))  
#define   LPMCU_MISC_REGS_PWM_1_CONTROL_SAMPLE_METHOD_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PWM_1_CONTROL) Samples agcdata at >= 1024 cycles and does not lose precision  */
#define   LPMCU_MISC_REGS_PWM_1_CONTROL_SAMPLE_METHOD_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PWM_1_CONTROL) Samples at PWM period but will lose LSBs if less than 1024  */
#define LPMCU_MISC_REGS_PWM_1_CONTROL_SAMPLE_METHOD_0    (LPMCU_MISC_REGS_PWM_1_CONTROL_SAMPLE_METHOD_0_Val << LPMCU_MISC_REGS_PWM_1_CONTROL_SAMPLE_METHOD_Pos)
#define LPMCU_MISC_REGS_PWM_1_CONTROL_SAMPLE_METHOD_1    (LPMCU_MISC_REGS_PWM_1_CONTROL_SAMPLE_METHOD_1_Val << LPMCU_MISC_REGS_PWM_1_CONTROL_SAMPLE_METHOD_Pos)
#define LPMCU_MISC_REGS_PWM_1_CONTROL_PWM_PERIOD_Pos 5  /**< \brief (LPMCU_MISC_REGS_PWM_1_CONTROL) programmable PWM update period */
#define LPMCU_MISC_REGS_PWM_1_CONTROL_PWM_PERIOD_Msk (0xFul << LPMCU_MISC_REGS_PWM_1_CONTROL_PWM_PERIOD_Pos)
#define LPMCU_MISC_REGS_PWM_1_CONTROL_PWM_PERIOD(value) (LPMCU_MISC_REGS_PWM_1_CONTROL_PWM_PERIOD_Msk & ((value) << LPMCU_MISC_REGS_PWM_1_CONTROL_PWM_PERIOD_Pos))  
#define LPMCU_MISC_REGS_PWM_1_CONTROL_AGCDATA_IN_Pos 9  /**< \brief (LPMCU_MISC_REGS_PWM_1_CONTROL) agc value from AGC           */
#define LPMCU_MISC_REGS_PWM_1_CONTROL_AGCDATA_IN_Msk (0x3FFul << LPMCU_MISC_REGS_PWM_1_CONTROL_AGCDATA_IN_Pos)
#define LPMCU_MISC_REGS_PWM_1_CONTROL_AGCDATA_IN(value) (LPMCU_MISC_REGS_PWM_1_CONTROL_AGCDATA_IN_Msk & ((value) << LPMCU_MISC_REGS_PWM_1_CONTROL_AGCDATA_IN_Pos))  
#define LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_Pos 21  /**< \brief (LPMCU_MISC_REGS_PWM_1_CONTROL) PWM Source Clock Frequency Select */
#define LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_Msk (0x3ul << LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL(value) (LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_Msk & ((value) << LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_Pos))  
#define   LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PWM_1_CONTROL) 26MHz  */
#define   LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PWM_1_CONTROL) 13MHz  */
#define   LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PWM_1_CONTROL) 6.5MHz  */
#define   LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PWM_1_CONTROL) 3.25MHz  */
#define LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_0    (LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_0_Val << LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_1    (LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_1_Val << LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_2    (LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_2_Val << LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_3    (LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_3_Val << LPMCU_MISC_REGS_PWM_1_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_1_CONTROL_MASK    0x67FFEFul    /**< \brief (LPMCU_MISC_REGS_PWM_1_CONTROL) Register MASK */

/* -------- LPMCU_MISC_REGS_PWM_2_CONTROL : (LPMCU_MISC_REGS Offset: 0x164) (R/W  32) PWM 2 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t PWM_EN:1;                  /*!< bit:      0  Active High PWM Enable                   */
    uint32_t OUTPUT_POLARITY:1;         /*!< bit:      1  1 to inverse the polarity                */
    uint32_t AGCDATA_FMT:1;             /*!< bit:      2  AGC data format                          */
    uint32_t SAMPLE_METHOD:1;           /*!< bit:      3  Sample Method                            */
    uint32_t :1;                        /*!< bit:      4  Reserved                                 */
    uint32_t PWM_PERIOD:4;              /*!< bit:   5..8  programmable PWM update period           */
    uint32_t AGCDATA_IN:10;             /*!< bit:  9..18  agc value from AGC                       */
    uint32_t :2;                        /*!< bit: 19..20  Reserved                                 */
    uint32_t CLOCK_SEL:2;               /*!< bit: 21..22  PWM Source Clock Frequency Select        */
    uint32_t :9;                        /*!< bit: 23..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_PWM_2_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_PWM_2_CONTROL_OFFSET  0x164          /**<  \brief (LPMCU_MISC_REGS_PWM_2_CONTROL offset) PWM 2 Control Register */
#define LPMCU_MISC_REGS_PWM_2_CONTROL_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_PWM_2_CONTROL reset_value) PWM 2 Control Register */

#define LPMCU_MISC_REGS_PWM_2_CONTROL_PWM_EN_Pos 0  /**< \brief (LPMCU_MISC_REGS_PWM_2_CONTROL) Active High PWM Enable       */
#define LPMCU_MISC_REGS_PWM_2_CONTROL_PWM_EN  (0x1ul << LPMCU_MISC_REGS_PWM_2_CONTROL_PWM_EN_Pos)  
#define LPMCU_MISC_REGS_PWM_2_CONTROL_OUTPUT_POLARITY_Pos 1  /**< \brief (LPMCU_MISC_REGS_PWM_2_CONTROL) 1 to inverse the polarity    */
#define LPMCU_MISC_REGS_PWM_2_CONTROL_OUTPUT_POLARITY (0x1ul << LPMCU_MISC_REGS_PWM_2_CONTROL_OUTPUT_POLARITY_Pos)  
#define LPMCU_MISC_REGS_PWM_2_CONTROL_AGCDATA_FMT_Pos 2  /**< \brief (LPMCU_MISC_REGS_PWM_2_CONTROL) AGC data format              */
#define LPMCU_MISC_REGS_PWM_2_CONTROL_AGCDATA_FMT (0x1ul << LPMCU_MISC_REGS_PWM_2_CONTROL_AGCDATA_FMT_Pos)  
#define LPMCU_MISC_REGS_PWM_2_CONTROL_SAMPLE_METHOD_Pos 3  /**< \brief (LPMCU_MISC_REGS_PWM_2_CONTROL) Sample Method                */
#define LPMCU_MISC_REGS_PWM_2_CONTROL_SAMPLE_METHOD_Msk (0x1ul << LPMCU_MISC_REGS_PWM_2_CONTROL_SAMPLE_METHOD_Pos)
#define LPMCU_MISC_REGS_PWM_2_CONTROL_SAMPLE_METHOD(value) (LPMCU_MISC_REGS_PWM_2_CONTROL_SAMPLE_METHOD_Msk & ((value) << LPMCU_MISC_REGS_PWM_2_CONTROL_SAMPLE_METHOD_Pos))  
#define   LPMCU_MISC_REGS_PWM_2_CONTROL_SAMPLE_METHOD_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PWM_2_CONTROL) Samples agcdata at >= 1024 cycles and does not lose precision  */
#define   LPMCU_MISC_REGS_PWM_2_CONTROL_SAMPLE_METHOD_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PWM_2_CONTROL) Samples at PWM period but will lose LSBs if less than 1024  */
#define LPMCU_MISC_REGS_PWM_2_CONTROL_SAMPLE_METHOD_0    (LPMCU_MISC_REGS_PWM_2_CONTROL_SAMPLE_METHOD_0_Val << LPMCU_MISC_REGS_PWM_2_CONTROL_SAMPLE_METHOD_Pos)
#define LPMCU_MISC_REGS_PWM_2_CONTROL_SAMPLE_METHOD_1    (LPMCU_MISC_REGS_PWM_2_CONTROL_SAMPLE_METHOD_1_Val << LPMCU_MISC_REGS_PWM_2_CONTROL_SAMPLE_METHOD_Pos)
#define LPMCU_MISC_REGS_PWM_2_CONTROL_PWM_PERIOD_Pos 5  /**< \brief (LPMCU_MISC_REGS_PWM_2_CONTROL) programmable PWM update period */
#define LPMCU_MISC_REGS_PWM_2_CONTROL_PWM_PERIOD_Msk (0xFul << LPMCU_MISC_REGS_PWM_2_CONTROL_PWM_PERIOD_Pos)
#define LPMCU_MISC_REGS_PWM_2_CONTROL_PWM_PERIOD(value) (LPMCU_MISC_REGS_PWM_2_CONTROL_PWM_PERIOD_Msk & ((value) << LPMCU_MISC_REGS_PWM_2_CONTROL_PWM_PERIOD_Pos))  
#define LPMCU_MISC_REGS_PWM_2_CONTROL_AGCDATA_IN_Pos 9  /**< \brief (LPMCU_MISC_REGS_PWM_2_CONTROL) agc value from AGC           */
#define LPMCU_MISC_REGS_PWM_2_CONTROL_AGCDATA_IN_Msk (0x3FFul << LPMCU_MISC_REGS_PWM_2_CONTROL_AGCDATA_IN_Pos)
#define LPMCU_MISC_REGS_PWM_2_CONTROL_AGCDATA_IN(value) (LPMCU_MISC_REGS_PWM_2_CONTROL_AGCDATA_IN_Msk & ((value) << LPMCU_MISC_REGS_PWM_2_CONTROL_AGCDATA_IN_Pos))  
#define LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_Pos 21  /**< \brief (LPMCU_MISC_REGS_PWM_2_CONTROL) PWM Source Clock Frequency Select */
#define LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_Msk (0x3ul << LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL(value) (LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_Msk & ((value) << LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_Pos))  
#define   LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PWM_2_CONTROL) 26MHz  */
#define   LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PWM_2_CONTROL) 13MHz  */
#define   LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PWM_2_CONTROL) 6.5MHz  */
#define   LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PWM_2_CONTROL) 3.25MHz  */
#define LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_0    (LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_0_Val << LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_1    (LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_1_Val << LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_2    (LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_2_Val << LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_3    (LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_3_Val << LPMCU_MISC_REGS_PWM_2_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_2_CONTROL_MASK    0x67FFEFul    /**< \brief (LPMCU_MISC_REGS_PWM_2_CONTROL) Register MASK */

/* -------- LPMCU_MISC_REGS_PWM_3_CONTROL : (LPMCU_MISC_REGS Offset: 0x168) (R/W  32) PWM 3 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t PWM_EN:1;                  /*!< bit:      0  Active High PWM Enable                   */
    uint32_t OUTPUT_POLARITY:1;         /*!< bit:      1  1 to inverse the polarity                */
    uint32_t AGCDATA_FMT:1;             /*!< bit:      2  AGC data format                          */
    uint32_t SAMPLE_METHOD:1;           /*!< bit:      3  Sample Method                            */
    uint32_t :1;                        /*!< bit:      4  Reserved                                 */
    uint32_t PWM_PERIOD:4;              /*!< bit:   5..8  programmable PWM update period           */
    uint32_t AGCDATA_IN:10;             /*!< bit:  9..18  agc value from AGC                       */
    uint32_t :2;                        /*!< bit: 19..20  Reserved                                 */
    uint32_t CLOCK_SEL:2;               /*!< bit: 21..22  PWM Source Clock Frequency Select        */
    uint32_t :9;                        /*!< bit: 23..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_PWM_3_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_PWM_3_CONTROL_OFFSET  0x168          /**<  \brief (LPMCU_MISC_REGS_PWM_3_CONTROL offset) PWM 3 Control Register */
#define LPMCU_MISC_REGS_PWM_3_CONTROL_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_PWM_3_CONTROL reset_value) PWM 3 Control Register */

#define LPMCU_MISC_REGS_PWM_3_CONTROL_PWM_EN_Pos 0  /**< \brief (LPMCU_MISC_REGS_PWM_3_CONTROL) Active High PWM Enable       */
#define LPMCU_MISC_REGS_PWM_3_CONTROL_PWM_EN  (0x1ul << LPMCU_MISC_REGS_PWM_3_CONTROL_PWM_EN_Pos)  
#define LPMCU_MISC_REGS_PWM_3_CONTROL_OUTPUT_POLARITY_Pos 1  /**< \brief (LPMCU_MISC_REGS_PWM_3_CONTROL) 1 to inverse the polarity    */
#define LPMCU_MISC_REGS_PWM_3_CONTROL_OUTPUT_POLARITY (0x1ul << LPMCU_MISC_REGS_PWM_3_CONTROL_OUTPUT_POLARITY_Pos)  
#define LPMCU_MISC_REGS_PWM_3_CONTROL_AGCDATA_FMT_Pos 2  /**< \brief (LPMCU_MISC_REGS_PWM_3_CONTROL) AGC data format              */
#define LPMCU_MISC_REGS_PWM_3_CONTROL_AGCDATA_FMT (0x1ul << LPMCU_MISC_REGS_PWM_3_CONTROL_AGCDATA_FMT_Pos)  
#define LPMCU_MISC_REGS_PWM_3_CONTROL_SAMPLE_METHOD_Pos 3  /**< \brief (LPMCU_MISC_REGS_PWM_3_CONTROL) Sample Method                */
#define LPMCU_MISC_REGS_PWM_3_CONTROL_SAMPLE_METHOD_Msk (0x1ul << LPMCU_MISC_REGS_PWM_3_CONTROL_SAMPLE_METHOD_Pos)
#define LPMCU_MISC_REGS_PWM_3_CONTROL_SAMPLE_METHOD(value) (LPMCU_MISC_REGS_PWM_3_CONTROL_SAMPLE_METHOD_Msk & ((value) << LPMCU_MISC_REGS_PWM_3_CONTROL_SAMPLE_METHOD_Pos))  
#define   LPMCU_MISC_REGS_PWM_3_CONTROL_SAMPLE_METHOD_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PWM_3_CONTROL) Samples agcdata at >= 1024 cycles and does not lose precision  */
#define   LPMCU_MISC_REGS_PWM_3_CONTROL_SAMPLE_METHOD_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PWM_3_CONTROL) Samples at PWM period but will lose LSBs if less than 1024  */
#define LPMCU_MISC_REGS_PWM_3_CONTROL_SAMPLE_METHOD_0    (LPMCU_MISC_REGS_PWM_3_CONTROL_SAMPLE_METHOD_0_Val << LPMCU_MISC_REGS_PWM_3_CONTROL_SAMPLE_METHOD_Pos)
#define LPMCU_MISC_REGS_PWM_3_CONTROL_SAMPLE_METHOD_1    (LPMCU_MISC_REGS_PWM_3_CONTROL_SAMPLE_METHOD_1_Val << LPMCU_MISC_REGS_PWM_3_CONTROL_SAMPLE_METHOD_Pos)
#define LPMCU_MISC_REGS_PWM_3_CONTROL_PWM_PERIOD_Pos 5  /**< \brief (LPMCU_MISC_REGS_PWM_3_CONTROL) programmable PWM update period */
#define LPMCU_MISC_REGS_PWM_3_CONTROL_PWM_PERIOD_Msk (0xFul << LPMCU_MISC_REGS_PWM_3_CONTROL_PWM_PERIOD_Pos)
#define LPMCU_MISC_REGS_PWM_3_CONTROL_PWM_PERIOD(value) (LPMCU_MISC_REGS_PWM_3_CONTROL_PWM_PERIOD_Msk & ((value) << LPMCU_MISC_REGS_PWM_3_CONTROL_PWM_PERIOD_Pos))  
#define LPMCU_MISC_REGS_PWM_3_CONTROL_AGCDATA_IN_Pos 9  /**< \brief (LPMCU_MISC_REGS_PWM_3_CONTROL) agc value from AGC           */
#define LPMCU_MISC_REGS_PWM_3_CONTROL_AGCDATA_IN_Msk (0x3FFul << LPMCU_MISC_REGS_PWM_3_CONTROL_AGCDATA_IN_Pos)
#define LPMCU_MISC_REGS_PWM_3_CONTROL_AGCDATA_IN(value) (LPMCU_MISC_REGS_PWM_3_CONTROL_AGCDATA_IN_Msk & ((value) << LPMCU_MISC_REGS_PWM_3_CONTROL_AGCDATA_IN_Pos))  
#define LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_Pos 21  /**< \brief (LPMCU_MISC_REGS_PWM_3_CONTROL) PWM Source Clock Frequency Select */
#define LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_Msk (0x3ul << LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL(value) (LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_Msk & ((value) << LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_Pos))  
#define   LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PWM_3_CONTROL) 26MHz  */
#define   LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PWM_3_CONTROL) 13MHz  */
#define   LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PWM_3_CONTROL) 6.5MHz  */
#define   LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PWM_3_CONTROL) 3.25MHz  */
#define LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_0    (LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_0_Val << LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_1    (LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_1_Val << LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_2    (LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_2_Val << LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_3    (LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_3_Val << LPMCU_MISC_REGS_PWM_3_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_3_CONTROL_MASK    0x67FFEFul    /**< \brief (LPMCU_MISC_REGS_PWM_3_CONTROL) Register MASK */

/* -------- LPMCU_MISC_REGS_PWM_4_CONTROL : (LPMCU_MISC_REGS Offset: 0x16c) (R/W  32) PWM 4 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t PWM_EN:1;                  /*!< bit:      0  Active High PWM Enable                   */
    uint32_t OUTPUT_POLARITY:1;         /*!< bit:      1  1 to inverse the polarity                */
    uint32_t AGCDATA_FMT:1;             /*!< bit:      2  AGC data format                          */
    uint32_t SAMPLE_METHOD:1;           /*!< bit:      3  Sample Method                            */
    uint32_t :1;                        /*!< bit:      4  Reserved                                 */
    uint32_t PWM_PERIOD:4;              /*!< bit:   5..8  programmable PWM update period           */
    uint32_t AGCDATA_IN:10;             /*!< bit:  9..18  agc value from AGC                       */
    uint32_t :2;                        /*!< bit: 19..20  Reserved                                 */
    uint32_t CLOCK_SEL:2;               /*!< bit: 21..22  PWM Source Clock Frequency Select        */
    uint32_t :9;                        /*!< bit: 23..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_PWM_4_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_PWM_4_CONTROL_OFFSET  0x16C          /**<  \brief (LPMCU_MISC_REGS_PWM_4_CONTROL offset) PWM 4 Control Register */
#define LPMCU_MISC_REGS_PWM_4_CONTROL_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_PWM_4_CONTROL reset_value) PWM 4 Control Register */

#define LPMCU_MISC_REGS_PWM_4_CONTROL_PWM_EN_Pos 0  /**< \brief (LPMCU_MISC_REGS_PWM_4_CONTROL) Active High PWM Enable       */
#define LPMCU_MISC_REGS_PWM_4_CONTROL_PWM_EN  (0x1ul << LPMCU_MISC_REGS_PWM_4_CONTROL_PWM_EN_Pos)  
#define LPMCU_MISC_REGS_PWM_4_CONTROL_OUTPUT_POLARITY_Pos 1  /**< \brief (LPMCU_MISC_REGS_PWM_4_CONTROL) 1 to inverse the polarity    */
#define LPMCU_MISC_REGS_PWM_4_CONTROL_OUTPUT_POLARITY (0x1ul << LPMCU_MISC_REGS_PWM_4_CONTROL_OUTPUT_POLARITY_Pos)  
#define LPMCU_MISC_REGS_PWM_4_CONTROL_AGCDATA_FMT_Pos 2  /**< \brief (LPMCU_MISC_REGS_PWM_4_CONTROL) AGC data format              */
#define LPMCU_MISC_REGS_PWM_4_CONTROL_AGCDATA_FMT (0x1ul << LPMCU_MISC_REGS_PWM_4_CONTROL_AGCDATA_FMT_Pos)  
#define LPMCU_MISC_REGS_PWM_4_CONTROL_SAMPLE_METHOD_Pos 3  /**< \brief (LPMCU_MISC_REGS_PWM_4_CONTROL) Sample Method                */
#define LPMCU_MISC_REGS_PWM_4_CONTROL_SAMPLE_METHOD_Msk (0x1ul << LPMCU_MISC_REGS_PWM_4_CONTROL_SAMPLE_METHOD_Pos)
#define LPMCU_MISC_REGS_PWM_4_CONTROL_SAMPLE_METHOD(value) (LPMCU_MISC_REGS_PWM_4_CONTROL_SAMPLE_METHOD_Msk & ((value) << LPMCU_MISC_REGS_PWM_4_CONTROL_SAMPLE_METHOD_Pos))  
#define   LPMCU_MISC_REGS_PWM_4_CONTROL_SAMPLE_METHOD_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PWM_4_CONTROL) Samples agcdata at >= 1024 cycles and does not lose precision  */
#define   LPMCU_MISC_REGS_PWM_4_CONTROL_SAMPLE_METHOD_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PWM_4_CONTROL) Samples at PWM period but will lose LSBs if less than 1024  */
#define LPMCU_MISC_REGS_PWM_4_CONTROL_SAMPLE_METHOD_0    (LPMCU_MISC_REGS_PWM_4_CONTROL_SAMPLE_METHOD_0_Val << LPMCU_MISC_REGS_PWM_4_CONTROL_SAMPLE_METHOD_Pos)
#define LPMCU_MISC_REGS_PWM_4_CONTROL_SAMPLE_METHOD_1    (LPMCU_MISC_REGS_PWM_4_CONTROL_SAMPLE_METHOD_1_Val << LPMCU_MISC_REGS_PWM_4_CONTROL_SAMPLE_METHOD_Pos)
#define LPMCU_MISC_REGS_PWM_4_CONTROL_PWM_PERIOD_Pos 5  /**< \brief (LPMCU_MISC_REGS_PWM_4_CONTROL) programmable PWM update period */
#define LPMCU_MISC_REGS_PWM_4_CONTROL_PWM_PERIOD_Msk (0xFul << LPMCU_MISC_REGS_PWM_4_CONTROL_PWM_PERIOD_Pos)
#define LPMCU_MISC_REGS_PWM_4_CONTROL_PWM_PERIOD(value) (LPMCU_MISC_REGS_PWM_4_CONTROL_PWM_PERIOD_Msk & ((value) << LPMCU_MISC_REGS_PWM_4_CONTROL_PWM_PERIOD_Pos))  
#define LPMCU_MISC_REGS_PWM_4_CONTROL_AGCDATA_IN_Pos 9  /**< \brief (LPMCU_MISC_REGS_PWM_4_CONTROL) agc value from AGC           */
#define LPMCU_MISC_REGS_PWM_4_CONTROL_AGCDATA_IN_Msk (0x3FFul << LPMCU_MISC_REGS_PWM_4_CONTROL_AGCDATA_IN_Pos)
#define LPMCU_MISC_REGS_PWM_4_CONTROL_AGCDATA_IN(value) (LPMCU_MISC_REGS_PWM_4_CONTROL_AGCDATA_IN_Msk & ((value) << LPMCU_MISC_REGS_PWM_4_CONTROL_AGCDATA_IN_Pos))  
#define LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_Pos 21  /**< \brief (LPMCU_MISC_REGS_PWM_4_CONTROL) PWM Source Clock Frequency Select */
#define LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_Msk (0x3ul << LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL(value) (LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_Msk & ((value) << LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_Pos))  
#define   LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_PWM_4_CONTROL) 26MHz  */
#define   LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_PWM_4_CONTROL) 13MHz  */
#define   LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_PWM_4_CONTROL) 6.5MHz  */
#define   LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_PWM_4_CONTROL) 3.25MHz  */
#define LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_0    (LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_0_Val << LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_1    (LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_1_Val << LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_2    (LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_2_Val << LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_3    (LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_3_Val << LPMCU_MISC_REGS_PWM_4_CONTROL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_PWM_4_CONTROL_MASK    0x67FFEFul    /**< \brief (LPMCU_MISC_REGS_PWM_4_CONTROL) Register MASK */

/* -------- LPMCU_MISC_REGS_MBIST_DUAL_STATUS : (LPMCU_MISC_REGS Offset: 0x170) (R/  32) Reflects the status of MBIST from lpmcu and btmcu -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t MBIST_BUS:21;              /*!< bit:  0..20  Observation of lpmcu and btmcu MBIST results */
    uint32_t :11;                       /*!< bit: 21..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_MBIST_DUAL_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_MBIST_DUAL_STATUS_OFFSET 0x170          /**<  \brief (LPMCU_MISC_REGS_MBIST_DUAL_STATUS offset) Reflects the status of MBIST from lpmcu and btmcu */
#define LPMCU_MISC_REGS_MBIST_DUAL_STATUS_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_MBIST_DUAL_STATUS reset_value) Reflects the status of MBIST from lpmcu and btmcu */

#define LPMCU_MISC_REGS_MBIST_DUAL_STATUS_MBIST_BUS_Pos 0  /**< \brief (LPMCU_MISC_REGS_MBIST_DUAL_STATUS) Observation of lpmcu and btmcu MBIST results */
#define LPMCU_MISC_REGS_MBIST_DUAL_STATUS_MBIST_BUS_Msk (0x1FFFFFul << LPMCU_MISC_REGS_MBIST_DUAL_STATUS_MBIST_BUS_Pos)
#define LPMCU_MISC_REGS_MBIST_DUAL_STATUS_MBIST_BUS(value) (LPMCU_MISC_REGS_MBIST_DUAL_STATUS_MBIST_BUS_Msk & ((value) << LPMCU_MISC_REGS_MBIST_DUAL_STATUS_MBIST_BUS_Pos))  
#define LPMCU_MISC_REGS_MBIST_DUAL_STATUS_MASK 0x1FFFFFul    /**< \brief (LPMCU_MISC_REGS_MBIST_DUAL_STATUS) Register MASK */

/* -------- LPMCU_MISC_REGS_DUALTIMER_CTRL : (LPMCU_MISC_REGS Offset: 0x188) (R/W  8) Dual Timer Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CNTR_1_ENABLE:1;           /*!< bit:      0  Enable Dual Timer 1 Decoder              */
    uint8_t  CNTR_2_ENABLE:1;           /*!< bit:      1  Enable Dual Timer 2 Decoder              */
    uint8_t  :6;                        /*!< bit:   2..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_DUALTIMER_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_DUALTIMER_CTRL_OFFSET 0x188          /**<  \brief (LPMCU_MISC_REGS_DUALTIMER_CTRL offset) Dual Timer Control */
#define LPMCU_MISC_REGS_DUALTIMER_CTRL_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_DUALTIMER_CTRL reset_value) Dual Timer Control */

#define LPMCU_MISC_REGS_DUALTIMER_CTRL_CNTR_1_ENABLE_Pos 0  /**< \brief (LPMCU_MISC_REGS_DUALTIMER_CTRL) Enable Dual Timer 1 Decoder */
#define LPMCU_MISC_REGS_DUALTIMER_CTRL_CNTR_1_ENABLE (0x1ul << LPMCU_MISC_REGS_DUALTIMER_CTRL_CNTR_1_ENABLE_Pos)  
#define LPMCU_MISC_REGS_DUALTIMER_CTRL_CNTR_2_ENABLE_Pos 1  /**< \brief (LPMCU_MISC_REGS_DUALTIMER_CTRL) Enable Dual Timer 2 Decoder */
#define LPMCU_MISC_REGS_DUALTIMER_CTRL_CNTR_2_ENABLE (0x1ul << LPMCU_MISC_REGS_DUALTIMER_CTRL_CNTR_2_ENABLE_Pos)  
#define LPMCU_MISC_REGS_DUALTIMER_CTRL_MASK   0x03ul    /**< \brief (LPMCU_MISC_REGS_DUALTIMER_CTRL) Register MASK */

/* -------- LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL : (LPMCU_MISC_REGS Offset: 0x190) (R/W  32) Sleep and Wakeup Control for the AON Power Sequencer -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t SLEEP_1:1;                 /*!< bit:      0  Sleep Request 1 from the ARM to the AON Power Sequencer */
    uint32_t :15;                       /*!< bit:  1..15  Reserved                                 */
    uint32_t WAKEUP:1;                  /*!< bit:     16  Wakeup Request from the ARM to the AON Power Sequencer */
    uint32_t :7;                        /*!< bit: 17..23  Reserved                                 */
    uint32_t RXTX_WAKEUP:1;             /*!< bit:     24  Wakeup Request from the ARM to the RxTx Sequencer */
    uint32_t :7;                        /*!< bit: 25..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL_OFFSET 0x190          /**<  \brief (LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL offset) Sleep and Wakeup Control for the AON Power Sequencer */
#define LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL_RESETVALUE 0x1000000ul    /**<  \brief (LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL reset_value) Sleep and Wakeup Control for the AON Power Sequencer */

#define LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL_SLEEP_1_Pos 0  /**< \brief (LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL) Sleep Request 1 from the ARM to the AON Power Sequencer */
#define LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL_SLEEP_1 (0x1ul << LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL_SLEEP_1_Pos)  
#define LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL_WAKEUP_Pos 16  /**< \brief (LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL) Wakeup Request from the ARM to the AON Power Sequencer */
#define LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL_WAKEUP (0x1ul << LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL_WAKEUP_Pos)  
#define LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL_RXTX_WAKEUP_Pos 24  /**< \brief (LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL) Wakeup Request from the ARM to the RxTx Sequencer */
#define LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL_RXTX_WAKEUP (0x1ul << LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL_RXTX_WAKEUP_Pos)  
#define LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL_MASK 0x1010001ul    /**< \brief (LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL) Register MASK */

/* -------- LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0 : (LPMCU_MISC_REGS Offset: 0x1a0) (R/W  32) Mega Mux Selection -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t LP_GPIO_0:6;               /*!< bit:   0..5  LP_GPIO_0 mega mux selection             */
    uint32_t :2;                        /*!< bit:   6..7  Reserved                                 */
    uint32_t LP_GPIO_1:6;               /*!< bit:  8..13  LP_GPIO_1 mega mux selection             */
    uint32_t :2;                        /*!< bit: 14..15  Reserved                                 */
    uint32_t LP_GPIO_2:6;               /*!< bit: 16..21  LP_GPIO_2 mega mux selection             */
    uint32_t :2;                        /*!< bit: 22..23  Reserved                                 */
    uint32_t LP_GPIO_3:6;               /*!< bit: 24..29  LP_GPIO_3 mega mux selection             */
    uint32_t :2;                        /*!< bit: 30..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_OFFSET 0x1A0          /**<  \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0 offset) Mega Mux Selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_RESETVALUE 0x3F3F3F3Ful   /**<  \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0 reset_value) Mega Mux Selection */

#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos 0  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) LP_GPIO_0 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_0_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos 8  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) LP_GPIO_1 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_1_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos 16  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) LP_GPIO_2 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_2_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos 24  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) LP_GPIO_3 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_LP_GPIO_3_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_MASK 0x3F3F3F3Ful    /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0) Register MASK */

/* -------- LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1 : (LPMCU_MISC_REGS Offset: 0x1a4) (R/W  32) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t LP_GPIO_4:6;               /*!< bit:   0..5  LP_GPIO_4 mega mux selection             */
    uint32_t :2;                        /*!< bit:   6..7  Reserved                                 */
    uint32_t LP_GPIO_5:6;               /*!< bit:  8..13  LP_GPIO_5 mega mux selection             */
    uint32_t :2;                        /*!< bit: 14..15  Reserved                                 */
    uint32_t LP_GPIO_6:6;               /*!< bit: 16..21  LP_GPIO_6 mega mux selection             */
    uint32_t :2;                        /*!< bit: 22..23  Reserved                                 */
    uint32_t LP_GPIO_7:6;               /*!< bit: 24..29  LP_GPIO_7 mega mux selection             */
    uint32_t :2;                        /*!< bit: 30..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_OFFSET 0x1A4          /**<  \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1 offset) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_RESETVALUE 0x3F3F3F3Ful   /**<  \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1 reset_value) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */

#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos 0  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) LP_GPIO_4 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_4_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos 8  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) LP_GPIO_5 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_5_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos 16  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) LP_GPIO_6 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_6_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos 24  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) LP_GPIO_7 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_LP_GPIO_7_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_MASK 0x3F3F3F3Ful    /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1) Register MASK */

/* -------- LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2 : (LPMCU_MISC_REGS Offset: 0x1a8) (R/W  32) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t LP_GPIO_8:6;               /*!< bit:   0..5  LP_GPIO_8 mega mux selection             */
    uint32_t :2;                        /*!< bit:   6..7  Reserved                                 */
    uint32_t LP_GPIO_9:6;               /*!< bit:  8..13  LP_GPIO_9 mega mux selection             */
    uint32_t :2;                        /*!< bit: 14..15  Reserved                                 */
    uint32_t LP_GPIO_10:6;              /*!< bit: 16..21  LP_GPIO_10 mega mux selection            */
    uint32_t :2;                        /*!< bit: 22..23  Reserved                                 */
    uint32_t LP_GPIO_11:6;              /*!< bit: 24..29  LP_GPIO_11 mega mux selection            */
    uint32_t :2;                        /*!< bit: 30..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_OFFSET 0x1A8          /**<  \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2 offset) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_RESETVALUE 0x3F3F3F3Ful   /**<  \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2 reset_value) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */

#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos 0  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) LP_GPIO_8 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_8_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos 8  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) LP_GPIO_9 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_9_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos 16  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) LP_GPIO_10 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_10_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos 24  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) LP_GPIO_11 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_LP_GPIO_11_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_MASK 0x3F3F3F3Ful    /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2) Register MASK */

/* -------- LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3 : (LPMCU_MISC_REGS Offset: 0x1ac) (R/W  32) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t LP_GPIO_12:6;              /*!< bit:   0..5  LP_GPIO_12 mega mux selection            */
    uint32_t :2;                        /*!< bit:   6..7  Reserved                                 */
    uint32_t LP_GPIO_13:6;              /*!< bit:  8..13  LP_GPIO_13 mega mux selection            */
    uint32_t :2;                        /*!< bit: 14..15  Reserved                                 */
    uint32_t LP_GPIO_14:6;              /*!< bit: 16..21  LP_GPIO_14 mega mux selection            */
    uint32_t :2;                        /*!< bit: 22..23  Reserved                                 */
    uint32_t LP_GPIO_15:6;              /*!< bit: 24..29  LP_GPIO_15 mega mux selection            */
    uint32_t :2;                        /*!< bit: 30..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_OFFSET 0x1AC          /**<  \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3 offset) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_RESETVALUE 0x3F3F3F3Ful   /**<  \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3 reset_value) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */

#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos 0  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) LP_GPIO_12 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_12_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos 8  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) LP_GPIO_13 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_13_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos 16  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) LP_GPIO_14 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_14_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos 24  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) LP_GPIO_15 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_LP_GPIO_15_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_MASK 0x3F3F3F3Ful    /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3) Register MASK */

/* -------- LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4 : (LPMCU_MISC_REGS Offset: 0x1b0) (R/W  32) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t LP_GPIO_16:6;              /*!< bit:   0..5  LP_GPIO_16 mega mux selection            */
    uint32_t :2;                        /*!< bit:   6..7  Reserved                                 */
    uint32_t LP_GPIO_17:6;              /*!< bit:  8..13  LP_GPIO_17 mega mux selection            */
    uint32_t :2;                        /*!< bit: 14..15  Reserved                                 */
    uint32_t LP_GPIO_18:6;              /*!< bit: 16..21  LP_GPIO_18 mega mux selection            */
    uint32_t :2;                        /*!< bit: 22..23  Reserved                                 */
    uint32_t LP_GPIO_19:6;              /*!< bit: 24..29  LP_GPIO_19 mega mux selection            */
    uint32_t :2;                        /*!< bit: 30..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_OFFSET 0x1B0          /**<  \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4 offset) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_RESETVALUE 0x3F3F3F3Ful   /**<  \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4 reset_value) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */

#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos 0  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) LP_GPIO_16 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_16_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos 8  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) LP_GPIO_17 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_17_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos 16  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) LP_GPIO_18 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_18_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos 24  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) LP_GPIO_19 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_LP_GPIO_19_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_MASK 0x3F3F3F3Ful    /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4) Register MASK */

/* -------- LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5 : (LPMCU_MISC_REGS Offset: 0x1b4) (R/W  32) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t LP_GPIO_20:6;              /*!< bit:   0..5  LP_GPIO_20 mega mux selection            */
    uint32_t :2;                        /*!< bit:   6..7  Reserved                                 */
    uint32_t LP_GPIO_21:6;              /*!< bit:  8..13  LP_GPIO_21 mega mux selection            */
    uint32_t :2;                        /*!< bit: 14..15  Reserved                                 */
    uint32_t LP_GPIO_22:6;              /*!< bit: 16..21  LP_GPIO_22 mega mux selection            */
    uint32_t :2;                        /*!< bit: 22..23  Reserved                                 */
    uint32_t LP_GPIO_23:6;              /*!< bit: 24..29  LP_GPIO_23 mega mux selection            */
    uint32_t :2;                        /*!< bit: 30..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_OFFSET 0x1B4          /**<  \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5 offset) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_RESETVALUE 0x3F3F3F3Ful   /**<  \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5 reset_value) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */

#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos 0  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) LP_GPIO_20 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_20_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos 8  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) LP_GPIO_21 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_21_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos 16  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) LP_GPIO_22 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_22_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos 24  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) LP_GPIO_23 mega mux selection */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Msk (0x3Ful << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23(value) (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Msk & ((value) << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos))  
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART0_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_4_Val        0X4ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_RXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_5_Val        0X5ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_TXD  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_6_Val        0X6ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_CTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_7_Val        0X7ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) UART1_RTS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_8_Val        0X8ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C0_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_9_Val        0X9ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C0_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_10_Val        0XAul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C1_SDA  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_11_Val        0XBul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) I2C1_SCL  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_12_Val        0XCul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM0_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_13_Val        0XDul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM1_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_14_Val        0XEul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM2_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_15_Val        0XFul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) PWM3_OUT  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_16_Val       0X10ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) 32KHZ_CLK  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_17_Val       0X11ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_WLAN_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_18_Val       0X12ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_WLAN_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_19_Val       0X13ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_TX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_20_Val       0X14ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_RX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_21_Val       0X15ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_IN_PROCESS  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_22_Val       0X16ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_MBSY  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_23_Val       0X17ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_SYNC  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_24_Val       0X18ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_RXNTX  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_25_Val       0X19ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_0  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_26_Val       0X1Aul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_1  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_27_Val       0X1Bul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_2  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_28_Val       0X1Cul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) COEX_BLE_PTI_3  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_29_Val       0X1Dul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC0_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_30_Val       0X1Eul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC0_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_31_Val       0X1Ful  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC1_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_32_Val       0X20ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC1_B  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_33_Val       0X21ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC2_A  */
#define   LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_34_Val       0X22ul  /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) QUAD_DEC2_B  */
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_0    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_0_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_1    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_1_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_2    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_2_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_3    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_3_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_4    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_4_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_5    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_5_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_6    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_6_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_7    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_7_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_8    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_8_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_9    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_9_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_10    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_10_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_11    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_11_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_12    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_12_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_13    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_13_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_14    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_14_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_15    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_15_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_16    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_16_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_17    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_17_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_18    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_18_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_19    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_19_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_20    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_20_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_21    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_21_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_22    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_22_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_23    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_23_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_24    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_24_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_25    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_25_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_26    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_26_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_27    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_27_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_28    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_28_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_29    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_29_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_30    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_30_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_31    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_31_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_32    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_32_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_33    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_33_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_34    (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_34_Val << LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_LP_GPIO_23_Pos)
#define LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_MASK 0x3F3F3F3Ful    /**< \brief (LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5) Register MASK */

/* -------- LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL : (LPMCU_MISC_REGS Offset: 0x1c0) (R/W  32) Clock control for the Sensor ADC -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FRAC_PART:8;               /*!< bit:   0..7  Fractional part for the clock divider    */
    uint32_t INT_PART:12;               /*!< bit:  8..19  Integer part for the clock divider       */
    uint32_t INVERT:1;                  /*!< bit:     20  Invert Sens ADC Clock                    */
    uint32_t :11;                       /*!< bit: 21..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_OFFSET 0x1C0          /**<  \brief (LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL offset) Clock control for the Sensor ADC */
#define LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_RESETVALUE 0x1A00ul       /**<  \brief (LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL reset_value) Clock control for the Sensor ADC */

#define LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_FRAC_PART_Pos 0  /**< \brief (LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL) Fractional part for the clock divider */
#define LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_FRAC_PART_Msk (0xFFul << LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_FRAC_PART_Pos)
#define LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_FRAC_PART(value) (LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_FRAC_PART_Msk & ((value) << LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_FRAC_PART_Pos))  
#define LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_INT_PART_Pos 8  /**< \brief (LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL) Integer part for the clock divider */
#define LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_INT_PART_Msk (0xFFFul << LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_INT_PART_Pos)
#define LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_INT_PART(value) (LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_INT_PART_Msk & ((value) << LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_INT_PART_Pos))  
#define LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_INVERT_Pos 20  /**< \brief (LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL) Invert Sens ADC Clock    */
#define LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_INVERT (0x1ul << LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_INVERT_Pos)  
#define LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_MASK 0x1FFFFFul    /**< \brief (LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL) Register MASK */

/* -------- LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS : (LPMCU_MISC_REGS Offset: 0x1c4) (R/  32) Raw Status from the Sensor ADC -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t ADC_OUT:11;                /*!< bit:  0..10  Raw Status of the sens_adc_out port of the PMU */
    uint32_t :1;                        /*!< bit:     11  Reserved                                 */
    uint32_t ADC_CH:2;                  /*!< bit: 12..13  Raw Status of the sens_adc_ch port of the PMU */
    uint32_t :2;                        /*!< bit: 14..15  Reserved                                 */
    uint32_t ADC_DONE:1;                /*!< bit:     16  Raw Status of the sens_adc_done port of the PMU */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_OFFSET 0x1C4          /**<  \brief (LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS offset) Raw Status from the Sensor ADC */
#define LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS reset_value) Raw Status from the Sensor ADC */

#define LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_ADC_OUT_Pos 0  /**< \brief (LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS) Raw Status of the sens_adc_out port of the PMU */
#define LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_ADC_OUT_Msk (0x7FFul << LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_ADC_OUT_Pos)
#define LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_ADC_OUT(value) (LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_ADC_OUT_Msk & ((value) << LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_ADC_OUT_Pos))  
#define LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_ADC_CH_Pos 12  /**< \brief (LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS) Raw Status of the sens_adc_ch port of the PMU */
#define LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_ADC_CH_Msk (0x3ul << LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_ADC_CH_Pos)
#define LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_ADC_CH(value) (LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_ADC_CH_Msk & ((value) << LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_ADC_CH_Pos))  
#define LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_ADC_DONE_Pos 16  /**< \brief (LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS) Raw Status of the sens_adc_done port of the PMU */
#define LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_ADC_DONE (0x1ul << LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_ADC_DONE_Pos)  
#define LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_MASK 0x137FFul    /**< \brief (LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS) Register MASK */

/* -------- LPMCU_MISC_REGS_SENS_ADC_CH0_DATA : (LPMCU_MISC_REGS Offset: 0x1c8) (R/  16) Current data of the Sensor ADC for Channel 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t SENS_ADC_CH0_DATA:11;      /*!< bit:  0..10                                           */
    uint16_t :5;                        /*!< bit: 11..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_SENS_ADC_CH0_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_SENS_ADC_CH0_DATA_OFFSET 0x1C8          /**<  \brief (LPMCU_MISC_REGS_SENS_ADC_CH0_DATA offset) Current data of the Sensor ADC for Channel 0 */
#define LPMCU_MISC_REGS_SENS_ADC_CH0_DATA_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_SENS_ADC_CH0_DATA reset_value) Current data of the Sensor ADC for Channel 0 */

#define LPMCU_MISC_REGS_SENS_ADC_CH0_DATA_SENS_ADC_CH0_DATA_Pos 0  /**< \brief (LPMCU_MISC_REGS_SENS_ADC_CH0_DATA)                          */
#define LPMCU_MISC_REGS_SENS_ADC_CH0_DATA_SENS_ADC_CH0_DATA_Msk (0x7FFul << LPMCU_MISC_REGS_SENS_ADC_CH0_DATA_SENS_ADC_CH0_DATA_Pos)
#define LPMCU_MISC_REGS_SENS_ADC_CH0_DATA_SENS_ADC_CH0_DATA(value) (LPMCU_MISC_REGS_SENS_ADC_CH0_DATA_SENS_ADC_CH0_DATA_Msk & ((value) << LPMCU_MISC_REGS_SENS_ADC_CH0_DATA_SENS_ADC_CH0_DATA_Pos))  
#define LPMCU_MISC_REGS_SENS_ADC_CH0_DATA_MASK 0x7FFul    /**< \brief (LPMCU_MISC_REGS_SENS_ADC_CH0_DATA) Register MASK */

/* -------- LPMCU_MISC_REGS_SENS_ADC_CH1_DATA : (LPMCU_MISC_REGS Offset: 0x1cc) (R/  16) Current data of the Sensor ADC for Channel 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t SENS_ADC_CH1_DATA:11;      /*!< bit:  0..10                                           */
    uint16_t :5;                        /*!< bit: 11..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_SENS_ADC_CH1_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_SENS_ADC_CH1_DATA_OFFSET 0x1CC          /**<  \brief (LPMCU_MISC_REGS_SENS_ADC_CH1_DATA offset) Current data of the Sensor ADC for Channel 1 */
#define LPMCU_MISC_REGS_SENS_ADC_CH1_DATA_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_SENS_ADC_CH1_DATA reset_value) Current data of the Sensor ADC for Channel 1 */

#define LPMCU_MISC_REGS_SENS_ADC_CH1_DATA_SENS_ADC_CH1_DATA_Pos 0  /**< \brief (LPMCU_MISC_REGS_SENS_ADC_CH1_DATA)                          */
#define LPMCU_MISC_REGS_SENS_ADC_CH1_DATA_SENS_ADC_CH1_DATA_Msk (0x7FFul << LPMCU_MISC_REGS_SENS_ADC_CH1_DATA_SENS_ADC_CH1_DATA_Pos)
#define LPMCU_MISC_REGS_SENS_ADC_CH1_DATA_SENS_ADC_CH1_DATA(value) (LPMCU_MISC_REGS_SENS_ADC_CH1_DATA_SENS_ADC_CH1_DATA_Msk & ((value) << LPMCU_MISC_REGS_SENS_ADC_CH1_DATA_SENS_ADC_CH1_DATA_Pos))  
#define LPMCU_MISC_REGS_SENS_ADC_CH1_DATA_MASK 0x7FFul    /**< \brief (LPMCU_MISC_REGS_SENS_ADC_CH1_DATA) Register MASK */

/* -------- LPMCU_MISC_REGS_SENS_ADC_CH2_DATA : (LPMCU_MISC_REGS Offset: 0x1d0) (R/  16) Current data of the Sensor ADC for Channel 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t SENS_ADC_CH2_DATA:11;      /*!< bit:  0..10                                           */
    uint16_t :5;                        /*!< bit: 11..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_SENS_ADC_CH2_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_SENS_ADC_CH2_DATA_OFFSET 0x1D0          /**<  \brief (LPMCU_MISC_REGS_SENS_ADC_CH2_DATA offset) Current data of the Sensor ADC for Channel 2 */
#define LPMCU_MISC_REGS_SENS_ADC_CH2_DATA_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_SENS_ADC_CH2_DATA reset_value) Current data of the Sensor ADC for Channel 2 */

#define LPMCU_MISC_REGS_SENS_ADC_CH2_DATA_SENS_ADC_CH2_DATA_Pos 0  /**< \brief (LPMCU_MISC_REGS_SENS_ADC_CH2_DATA)                          */
#define LPMCU_MISC_REGS_SENS_ADC_CH2_DATA_SENS_ADC_CH2_DATA_Msk (0x7FFul << LPMCU_MISC_REGS_SENS_ADC_CH2_DATA_SENS_ADC_CH2_DATA_Pos)
#define LPMCU_MISC_REGS_SENS_ADC_CH2_DATA_SENS_ADC_CH2_DATA(value) (LPMCU_MISC_REGS_SENS_ADC_CH2_DATA_SENS_ADC_CH2_DATA_Msk & ((value) << LPMCU_MISC_REGS_SENS_ADC_CH2_DATA_SENS_ADC_CH2_DATA_Pos))  
#define LPMCU_MISC_REGS_SENS_ADC_CH2_DATA_MASK 0x7FFul    /**< \brief (LPMCU_MISC_REGS_SENS_ADC_CH2_DATA) Register MASK */

/* -------- LPMCU_MISC_REGS_SENS_ADC_CH3_DATA : (LPMCU_MISC_REGS Offset: 0x1d4) (R/  16) Current data of the Sensor ADC for Channel 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t SENS_ADC_CH3_DATA:11;      /*!< bit:  0..10                                           */
    uint16_t :5;                        /*!< bit: 11..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_SENS_ADC_CH3_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_SENS_ADC_CH3_DATA_OFFSET 0x1D4          /**<  \brief (LPMCU_MISC_REGS_SENS_ADC_CH3_DATA offset) Current data of the Sensor ADC for Channel 3 */
#define LPMCU_MISC_REGS_SENS_ADC_CH3_DATA_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_SENS_ADC_CH3_DATA reset_value) Current data of the Sensor ADC for Channel 3 */

#define LPMCU_MISC_REGS_SENS_ADC_CH3_DATA_SENS_ADC_CH3_DATA_Pos 0  /**< \brief (LPMCU_MISC_REGS_SENS_ADC_CH3_DATA)                          */
#define LPMCU_MISC_REGS_SENS_ADC_CH3_DATA_SENS_ADC_CH3_DATA_Msk (0x7FFul << LPMCU_MISC_REGS_SENS_ADC_CH3_DATA_SENS_ADC_CH3_DATA_Pos)
#define LPMCU_MISC_REGS_SENS_ADC_CH3_DATA_SENS_ADC_CH3_DATA(value) (LPMCU_MISC_REGS_SENS_ADC_CH3_DATA_SENS_ADC_CH3_DATA_Msk & ((value) << LPMCU_MISC_REGS_SENS_ADC_CH3_DATA_SENS_ADC_CH3_DATA_Pos))  
#define LPMCU_MISC_REGS_SENS_ADC_CH3_DATA_MASK 0x7FFul    /**< \brief (LPMCU_MISC_REGS_SENS_ADC_CH3_DATA) Register MASK */

/* -------- LPMCU_MISC_REGS_IRQ_CTRL : (LPMCU_MISC_REGS Offset: 0x1e8) (R/W  16) Configure the IRQ inputs to the system as either Rising Edge or Level Shift -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t BLE_LVL_OSC_EN_IRQ_EN:1;   /*!< bit:      0  Enable the OSC_en signal for Level Shift and Clear Mode */
    uint16_t BLE_LVL_OSC_EN_IRQ_CLR:1;  /*!< bit:      1  if ble_lvl_osc_en_irq_en is enabled, setting irq clr to 1 will clear the irq request */
    uint16_t BLE_LVL_WAKEUP_LP_IRQ_EN:1;  /*!< bit:      2  Enable the wakeup_lp signal for Level Shift and Clear Mode */
    uint16_t BLE_LVL_WAKEUP_LP_IRQ_CLR:1;  /*!< bit:      3  if ble_lvl_wakeup_lp_irq_en is enabled, setting irq clr to 1 will clear the irq request */
    uint16_t BLE_LVL_BLE_LP_OUT_OF_RESET_IRQ_EN:1;  /*!< bit:      4  Enable the lp_out_of_reset signal for Level Shift and Clear Mode */
    uint16_t BLE_LVL_BLE_LP_OUT_OF_RESET_IRQ_CLR:1;  /*!< bit:      5  if lp_out_of_reset is enabled, setting irq clr to 1 will clear the irq request */
    uint16_t BLE_LVL_BLE_CORE_OUT_OF_RESET_IRQ_EN:1;  /*!< bit:      6  Enable the core_out_of_reset signal for Level Shift and Clear Mode */
    uint16_t BLE_LVL_BLE_CORE_OUT_OF_RESET_IRQ_CLR:1;  /*!< bit:      7  if core_out_of_reset is enabled, setting irq clr to 1 will clear the irq request */
    uint16_t RXTX_LVL_RXTX_SEQ_IN_SLEEP_IRQ_EN:1;  /*!< bit:      8  Enable the rxtx_seq_in_sleep signal for Level Shift and Clear Mode */
    uint16_t RXTX_LVL_RXTX_SEQ_IN_SLEEP_IRQ_CLR:1;  /*!< bit:      9  if rxtx_seq_in_sleep is enabled, setting irq clr to 1 will clear the irq request */
    uint16_t :6;                        /*!< bit: 10..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_IRQ_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_IRQ_CTRL_OFFSET       0x1E8          /**<  \brief (LPMCU_MISC_REGS_IRQ_CTRL offset) Configure the IRQ inputs to the system as either Rising Edge or Level Shift */
#define LPMCU_MISC_REGS_IRQ_CTRL_RESETVALUE   0x00ul         /**<  \brief (LPMCU_MISC_REGS_IRQ_CTRL reset_value) Configure the IRQ inputs to the system as either Rising Edge or Level Shift */

#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_OSC_EN_IRQ_EN_Pos 0  /**< \brief (LPMCU_MISC_REGS_IRQ_CTRL) Enable the OSC_en signal for Level Shift and Clear Mode */
#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_OSC_EN_IRQ_EN (0x1ul << LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_OSC_EN_IRQ_EN_Pos)  
#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_OSC_EN_IRQ_CLR_Pos 1  /**< \brief (LPMCU_MISC_REGS_IRQ_CTRL) if ble_lvl_osc_en_irq_en is enabled, setting irq clr to 1 will clear the irq request */
#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_OSC_EN_IRQ_CLR (0x1ul << LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_OSC_EN_IRQ_CLR_Pos)  
#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_WAKEUP_LP_IRQ_EN_Pos 2  /**< \brief (LPMCU_MISC_REGS_IRQ_CTRL) Enable the wakeup_lp signal for Level Shift and Clear Mode */
#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_WAKEUP_LP_IRQ_EN (0x1ul << LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_WAKEUP_LP_IRQ_EN_Pos)  
#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_WAKEUP_LP_IRQ_CLR_Pos 3  /**< \brief (LPMCU_MISC_REGS_IRQ_CTRL) if ble_lvl_wakeup_lp_irq_en is enabled, setting irq clr to 1 will clear the irq request */
#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_WAKEUP_LP_IRQ_CLR (0x1ul << LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_WAKEUP_LP_IRQ_CLR_Pos)  
#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_BLE_LP_OUT_OF_RESET_IRQ_EN_Pos 4  /**< \brief (LPMCU_MISC_REGS_IRQ_CTRL) Enable the lp_out_of_reset signal for Level Shift and Clear Mode */
#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_BLE_LP_OUT_OF_RESET_IRQ_EN (0x1ul << LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_BLE_LP_OUT_OF_RESET_IRQ_EN_Pos)  
#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_BLE_LP_OUT_OF_RESET_IRQ_CLR_Pos 5  /**< \brief (LPMCU_MISC_REGS_IRQ_CTRL) if lp_out_of_reset is enabled, setting irq clr to 1 will clear the irq request */
#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_BLE_LP_OUT_OF_RESET_IRQ_CLR (0x1ul << LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_BLE_LP_OUT_OF_RESET_IRQ_CLR_Pos)  
#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_BLE_CORE_OUT_OF_RESET_IRQ_EN_Pos 6  /**< \brief (LPMCU_MISC_REGS_IRQ_CTRL) Enable the core_out_of_reset signal for Level Shift and Clear Mode */
#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_BLE_CORE_OUT_OF_RESET_IRQ_EN (0x1ul << LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_BLE_CORE_OUT_OF_RESET_IRQ_EN_Pos)  
#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_BLE_CORE_OUT_OF_RESET_IRQ_CLR_Pos 7  /**< \brief (LPMCU_MISC_REGS_IRQ_CTRL) if core_out_of_reset is enabled, setting irq clr to 1 will clear the irq request */
#define LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_BLE_CORE_OUT_OF_RESET_IRQ_CLR (0x1ul << LPMCU_MISC_REGS_IRQ_CTRL_BLE_LVL_BLE_CORE_OUT_OF_RESET_IRQ_CLR_Pos)  
#define LPMCU_MISC_REGS_IRQ_CTRL_RXTX_LVL_RXTX_SEQ_IN_SLEEP_IRQ_EN_Pos 8  /**< \brief (LPMCU_MISC_REGS_IRQ_CTRL) Enable the rxtx_seq_in_sleep signal for Level Shift and Clear Mode */
#define LPMCU_MISC_REGS_IRQ_CTRL_RXTX_LVL_RXTX_SEQ_IN_SLEEP_IRQ_EN (0x1ul << LPMCU_MISC_REGS_IRQ_CTRL_RXTX_LVL_RXTX_SEQ_IN_SLEEP_IRQ_EN_Pos)  
#define LPMCU_MISC_REGS_IRQ_CTRL_RXTX_LVL_RXTX_SEQ_IN_SLEEP_IRQ_CLR_Pos 9  /**< \brief (LPMCU_MISC_REGS_IRQ_CTRL) if rxtx_seq_in_sleep is enabled, setting irq clr to 1 will clear the irq request */
#define LPMCU_MISC_REGS_IRQ_CTRL_RXTX_LVL_RXTX_SEQ_IN_SLEEP_IRQ_CLR (0x1ul << LPMCU_MISC_REGS_IRQ_CTRL_RXTX_LVL_RXTX_SEQ_IN_SLEEP_IRQ_CLR_Pos)  
#define LPMCU_MISC_REGS_IRQ_CTRL_MASK         0x3FFul    /**< \brief (LPMCU_MISC_REGS_IRQ_CTRL) Register MASK */

/* -------- LPMCU_MISC_REGS_IRQ_STS : (LPMCU_MISC_REGS Offset: 0x1ec) (R/  8) Read the raw (no level or rise detect) IRQ inputs to the system from the designated cores -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  BLE_OSC_EN_IRQ:1;          /*!< bit:      0  Read the OSC_en signal from the lp core  */
    uint8_t  BLE_WAKEUP_LP_IRQ:1;       /*!< bit:      1  Read the wakeup_lp_irq signal from the lp core */
    uint8_t  BLE_LP_OUT_OF_RESET_IRQ:1;  /*!< bit:      2  Read the ble_lp_out_of_reset signal from the ble lp core */
    uint8_t  BLE_CORE_OUT_OF_RESET_IRQ_EN:1;  /*!< bit:      3  Read the ble_core_out_of_reset_irq signal from the ble core */
    uint8_t  EFUSE_OUT_OF_RESET:1;      /*!< bit:      4  Read the efuse_out_of_reset signal from the efuse wrapper */
    uint8_t  :3;                        /*!< bit:   5..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_IRQ_STS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_IRQ_STS_OFFSET        0x1EC          /**<  \brief (LPMCU_MISC_REGS_IRQ_STS offset) Read the raw (no level or rise detect) IRQ inputs to the system from the designated cores */
#define LPMCU_MISC_REGS_IRQ_STS_RESETVALUE    0x00ul         /**<  \brief (LPMCU_MISC_REGS_IRQ_STS reset_value) Read the raw (no level or rise detect) IRQ inputs to the system from the designated cores */

#define LPMCU_MISC_REGS_IRQ_STS_BLE_OSC_EN_IRQ_Pos 0  /**< \brief (LPMCU_MISC_REGS_IRQ_STS) Read the OSC_en signal from the lp core */
#define LPMCU_MISC_REGS_IRQ_STS_BLE_OSC_EN_IRQ (0x1ul << LPMCU_MISC_REGS_IRQ_STS_BLE_OSC_EN_IRQ_Pos)  
#define LPMCU_MISC_REGS_IRQ_STS_BLE_WAKEUP_LP_IRQ_Pos 1  /**< \brief (LPMCU_MISC_REGS_IRQ_STS) Read the wakeup_lp_irq signal from the lp core */
#define LPMCU_MISC_REGS_IRQ_STS_BLE_WAKEUP_LP_IRQ (0x1ul << LPMCU_MISC_REGS_IRQ_STS_BLE_WAKEUP_LP_IRQ_Pos)  
#define LPMCU_MISC_REGS_IRQ_STS_BLE_LP_OUT_OF_RESET_IRQ_Pos 2  /**< \brief (LPMCU_MISC_REGS_IRQ_STS) Read the ble_lp_out_of_reset signal from the ble lp core */
#define LPMCU_MISC_REGS_IRQ_STS_BLE_LP_OUT_OF_RESET_IRQ (0x1ul << LPMCU_MISC_REGS_IRQ_STS_BLE_LP_OUT_OF_RESET_IRQ_Pos)  
#define LPMCU_MISC_REGS_IRQ_STS_BLE_CORE_OUT_OF_RESET_IRQ_EN_Pos 3  /**< \brief (LPMCU_MISC_REGS_IRQ_STS) Read the ble_core_out_of_reset_irq signal from the ble core */
#define LPMCU_MISC_REGS_IRQ_STS_BLE_CORE_OUT_OF_RESET_IRQ_EN (0x1ul << LPMCU_MISC_REGS_IRQ_STS_BLE_CORE_OUT_OF_RESET_IRQ_EN_Pos)  
#define LPMCU_MISC_REGS_IRQ_STS_EFUSE_OUT_OF_RESET_Pos 4  /**< \brief (LPMCU_MISC_REGS_IRQ_STS) Read the efuse_out_of_reset signal from the efuse wrapper */
#define LPMCU_MISC_REGS_IRQ_STS_EFUSE_OUT_OF_RESET (0x1ul << LPMCU_MISC_REGS_IRQ_STS_EFUSE_OUT_OF_RESET_Pos)  
#define LPMCU_MISC_REGS_IRQ_STS_MASK          0x1Ful    /**< \brief (LPMCU_MISC_REGS_IRQ_STS) Register MASK */

/* -------- LPMCU_MISC_REGS_MSEMI_MEM_CTRL : (LPMCU_MISC_REGS Offset: 0x200) (R/W  32) Control the rwm, rm and wm on the Mobile Semi Memories -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t PD2A_MEM_RWM_EN:1;         /*!< bit:      0  RWM control for pd2a memory              */
    uint32_t PD2A_MEM_WM_EN:1;          /*!< bit:      1  WM control for pd2a memory               */
    uint32_t PD2A_MEM_RM_EN:1;          /*!< bit:      2  RM control for pd2a memory               */
    uint32_t :1;                        /*!< bit:      3  Reserved                                 */
    uint32_t PD2B_MEM_RWM_EN:1;         /*!< bit:      4  RWM control for pd2b memory              */
    uint32_t PD2B_MEM_WM_EN:1;          /*!< bit:      5  WM control for pd2b memory               */
    uint32_t PD2B_MEM_RM_EN:1;          /*!< bit:      6  RM control for pd2b memory               */
    uint32_t :1;                        /*!< bit:      7  Reserved                                 */
    uint32_t PD3A_MEM_RWM_EN:1;         /*!< bit:      8  RWM control for pd3a memory              */
    uint32_t PD3A_MEM_WM_EN:1;          /*!< bit:      9  WM control for pd3a memory               */
    uint32_t PD3A_MEM_RM_EN:1;          /*!< bit:     10  RM control for pd3a memory               */
    uint32_t :1;                        /*!< bit:     11  Reserved                                 */
    uint32_t PD3B_MEM_RWM_EN:1;         /*!< bit:     12  RWM control for pd3b memory              */
    uint32_t PD3B_MEM_WM_EN:1;          /*!< bit:     13  WM control for pd3b memory               */
    uint32_t PD3B_MEM_RM_EN:1;          /*!< bit:     14  RM control for pd3b memory               */
    uint32_t :1;                        /*!< bit:     15  Reserved                                 */
    uint32_t PD3C_MEM_RWM_EN:1;         /*!< bit:     16  RWM control for pd3c memory              */
    uint32_t PD3C_MEM_WM_EN:1;          /*!< bit:     17  WM control for pd3c memory               */
    uint32_t PD3C_MEM_RM_EN:1;          /*!< bit:     18  RM control for pd3c memory               */
    uint32_t :1;                        /*!< bit:     19  Reserved                                 */
    uint32_t PD5_MEM_RWM_EN:1;          /*!< bit:     20  RWM control for pd5 memory               */
    uint32_t PD5_MEM_WM_EN:1;           /*!< bit:     21  WM control for pd5 memory                */
    uint32_t PD5_MEM_RM_EN:1;           /*!< bit:     22  RM control for pd5 memory                */
    uint32_t :1;                        /*!< bit:     23  Reserved                                 */
    uint32_t PD8_MEM_RWM_EN:1;          /*!< bit:     24  RWM control for pd8 memory               */
    uint32_t PD8_MEM_WM_EN:1;           /*!< bit:     25  WM control for pd8 memory                */
    uint32_t PD8_MEM_RM_EN:1;           /*!< bit:     26  RM control for pd8 memory                */
    uint32_t :5;                        /*!< bit: 27..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_MSEMI_MEM_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_OFFSET 0x200          /**<  \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL offset) Control the rwm, rm and wm on the Mobile Semi Memories */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL reset_value) Control the rwm, rm and wm on the Mobile Semi Memories */

#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2A_MEM_RWM_EN_Pos 0  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) RWM control for pd2a memory */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2A_MEM_RWM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2A_MEM_RWM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2A_MEM_WM_EN_Pos 1  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) WM control for pd2a memory  */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2A_MEM_WM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2A_MEM_WM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2A_MEM_RM_EN_Pos 2  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) RM control for pd2a memory  */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2A_MEM_RM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2A_MEM_RM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2B_MEM_RWM_EN_Pos 4  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) RWM control for pd2b memory */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2B_MEM_RWM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2B_MEM_RWM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2B_MEM_WM_EN_Pos 5  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) WM control for pd2b memory  */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2B_MEM_WM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2B_MEM_WM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2B_MEM_RM_EN_Pos 6  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) RM control for pd2b memory  */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2B_MEM_RM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD2B_MEM_RM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3A_MEM_RWM_EN_Pos 8  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) RWM control for pd3a memory */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3A_MEM_RWM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3A_MEM_RWM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3A_MEM_WM_EN_Pos 9  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) WM control for pd3a memory  */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3A_MEM_WM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3A_MEM_WM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3A_MEM_RM_EN_Pos 10  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) RM control for pd3a memory  */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3A_MEM_RM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3A_MEM_RM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3B_MEM_RWM_EN_Pos 12  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) RWM control for pd3b memory */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3B_MEM_RWM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3B_MEM_RWM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3B_MEM_WM_EN_Pos 13  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) WM control for pd3b memory  */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3B_MEM_WM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3B_MEM_WM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3B_MEM_RM_EN_Pos 14  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) RM control for pd3b memory  */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3B_MEM_RM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3B_MEM_RM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3C_MEM_RWM_EN_Pos 16  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) RWM control for pd3c memory */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3C_MEM_RWM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3C_MEM_RWM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3C_MEM_WM_EN_Pos 17  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) WM control for pd3c memory  */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3C_MEM_WM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3C_MEM_WM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3C_MEM_RM_EN_Pos 18  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) RM control for pd3c memory  */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3C_MEM_RM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD3C_MEM_RM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD5_MEM_RWM_EN_Pos 20  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) RWM control for pd5 memory  */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD5_MEM_RWM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD5_MEM_RWM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD5_MEM_WM_EN_Pos 21  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) WM control for pd5 memory   */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD5_MEM_WM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD5_MEM_WM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD5_MEM_RM_EN_Pos 22  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) RM control for pd5 memory   */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD5_MEM_RM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD5_MEM_RM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD8_MEM_RWM_EN_Pos 24  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) RWM control for pd8 memory  */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD8_MEM_RWM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD8_MEM_RWM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD8_MEM_WM_EN_Pos 25  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) WM control for pd8 memory   */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD8_MEM_WM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD8_MEM_WM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD8_MEM_RM_EN_Pos 26  /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) RM control for pd8 memory   */
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD8_MEM_RM_EN (0x1ul << LPMCU_MISC_REGS_MSEMI_MEM_CTRL_PD8_MEM_RM_EN_Pos)  
#define LPMCU_MISC_REGS_MSEMI_MEM_CTRL_MASK   0x7777777ul    /**< \brief (LPMCU_MISC_REGS_MSEMI_MEM_CTRL) Register MASK */

/* -------- LPMCU_MISC_REGS_EFUSE_1_STATUS_3 : (LPMCU_MISC_REGS Offset: 0x204) (R/W  32) EFUSE_1_3 Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t EFUSE_1_STATUS_3:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_EFUSE_1_STATUS_3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_EFUSE_1_STATUS_3_OFFSET 0x204          /**<  \brief (LPMCU_MISC_REGS_EFUSE_1_STATUS_3 offset) EFUSE_1_3 Status */
#define LPMCU_MISC_REGS_EFUSE_1_STATUS_3_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_EFUSE_1_STATUS_3 reset_value) EFUSE_1_3 Status */

#define LPMCU_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3_Pos 0  /**< \brief (LPMCU_MISC_REGS_EFUSE_1_STATUS_3)                           */
#define LPMCU_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3_Msk (0xFFFFFFFFul << LPMCU_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3_Pos)
#define LPMCU_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3(value) (LPMCU_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3_Msk & ((value) << LPMCU_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3_Pos))  
#define LPMCU_MISC_REGS_EFUSE_1_STATUS_3_MASK 0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_EFUSE_1_STATUS_3) Register MASK */

/* -------- LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL : (LPMCU_MISC_REGS Offset: 0x210) (R/W  16) Miscellaneous Force control values for LPMCU -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t SCLK_EN:1;                 /*!< bit:      0  Enable Force Control of SCLK             */
    uint16_t SCLK_VAL:1;                /*!< bit:      1  Enable Force Control of SCLK Value       */
    uint16_t DCLK_EN:1;                 /*!< bit:      2  Enable Force Control of DCLK             */
    uint16_t DCLK_VAL:1;                /*!< bit:      3  Enable Force Control of DCLK Value       */
    uint16_t PCLKG_EN:1;                /*!< bit:      4  Enable Force Control of PCLKG            */
    uint16_t PCLKG_VAL:1;               /*!< bit:      5  Enable Force Control of PCLKG Value      */
    uint16_t WICENREQ_EN:1;             /*!< bit:      6  Enable Force Control of WIC Enable Request to use WIC during Sleep Conditions */
    uint16_t WICENREQ_VAL:1;            /*!< bit:      7  Enable Force Control of WIC Enable Value */
    uint16_t GPIO_GCLK_EN:1;            /*!< bit:      8  Enable Force Control of GPIO Modules Clk (override clock gating and enable) */
    uint16_t COUNTER_PGCLK_EN:1;        /*!< bit:      9  Enable Force Control of Counter Modules Clk (override clock gating and enable) */
    uint16_t DUALTIMER_PGCLK_EN:1;      /*!< bit:     10  Enable Force Control of DualTimer Modules PGClk (override clock gating and enable) */
    uint16_t WICENACK_EN:1;             /*!< bit:     11  Enable Force Control of WIC ACK to use WIC during Sleep Conditions - Requires Handshake from WIC when its ok to sleep */
    uint16_t WICENACK_VAL:1;            /*!< bit:     12  Enable Force Control of WIC Enable Value - Requires Handshake from WIC when its ok to sleep */
    uint16_t :3;                        /*!< bit: 13..15  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_OFFSET 0x210          /**<  \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL offset) Miscellaneous Force control values for LPMCU */
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_RESETVALUE 0xF7Ful        /**<  \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL reset_value) Miscellaneous Force control values for LPMCU */

#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_SCLK_EN_Pos 0  /**< \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL) Enable Force Control of SCLK */
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_SCLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_SCLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_SCLK_VAL_Pos 1  /**< \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL) Enable Force Control of SCLK Value */
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_SCLK_VAL (0x1ul << LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_SCLK_VAL_Pos)  
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_DCLK_EN_Pos 2  /**< \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL) Enable Force Control of DCLK */
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_DCLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_DCLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_DCLK_VAL_Pos 3  /**< \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL) Enable Force Control of DCLK Value */
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_DCLK_VAL (0x1ul << LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_DCLK_VAL_Pos)  
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_PCLKG_EN_Pos 4  /**< \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL) Enable Force Control of PCLKG */
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_PCLKG_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_PCLKG_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_PCLKG_VAL_Pos 5  /**< \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL) Enable Force Control of PCLKG Value */
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_PCLKG_VAL (0x1ul << LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_PCLKG_VAL_Pos)  
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_WICENREQ_EN_Pos 6  /**< \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL) Enable Force Control of WIC Enable Request to use WIC during Sleep Conditions */
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_WICENREQ_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_WICENREQ_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_WICENREQ_VAL_Pos 7  /**< \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL) Enable Force Control of WIC Enable Value */
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_WICENREQ_VAL (0x1ul << LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_WICENREQ_VAL_Pos)  
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_GPIO_GCLK_EN_Pos 8  /**< \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL) Enable Force Control of GPIO Modules Clk (override clock gating and enable) */
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_GPIO_GCLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_GPIO_GCLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_COUNTER_PGCLK_EN_Pos 9  /**< \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL) Enable Force Control of Counter Modules Clk (override clock gating and enable) */
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_COUNTER_PGCLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_COUNTER_PGCLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_DUALTIMER_PGCLK_EN_Pos 10  /**< \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL) Enable Force Control of DualTimer Modules PGClk (override clock gating and enable) */
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_DUALTIMER_PGCLK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_DUALTIMER_PGCLK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_WICENACK_EN_Pos 11  /**< \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL) Enable Force Control of WIC ACK to use WIC during Sleep Conditions - Requires Handshake from WIC when its ok to sleep */
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_WICENACK_EN (0x1ul << LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_WICENACK_EN_Pos)  
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_WICENACK_VAL_Pos 12  /**< \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL) Enable Force Control of WIC Enable Value - Requires Handshake from WIC when its ok to sleep */
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_WICENACK_VAL (0x1ul << LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_WICENACK_VAL_Pos)  
#define LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_MASK 0x1FFFul    /**< \brief (LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL) Register MASK */

/* -------- LPMCU_MISC_REGS_ARM_IRQ_STATUS_0 : (LPMCU_MISC_REGS Offset: 0x214) (R/  32) ARM Cortex M0 IRQ Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t ARM_IRQ_STATUS_0:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_ARM_IRQ_STATUS_0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_ARM_IRQ_STATUS_0_OFFSET 0x214          /**<  \brief (LPMCU_MISC_REGS_ARM_IRQ_STATUS_0 offset) ARM Cortex M0 IRQ Status */
#define LPMCU_MISC_REGS_ARM_IRQ_STATUS_0_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_ARM_IRQ_STATUS_0 reset_value) ARM Cortex M0 IRQ Status */

#define LPMCU_MISC_REGS_ARM_IRQ_STATUS_0_ARM_IRQ_STATUS_0_Pos 0  /**< \brief (LPMCU_MISC_REGS_ARM_IRQ_STATUS_0)                           */
#define LPMCU_MISC_REGS_ARM_IRQ_STATUS_0_ARM_IRQ_STATUS_0_Msk (0xFFFFFFFFul << LPMCU_MISC_REGS_ARM_IRQ_STATUS_0_ARM_IRQ_STATUS_0_Pos)
#define LPMCU_MISC_REGS_ARM_IRQ_STATUS_0_ARM_IRQ_STATUS_0(value) (LPMCU_MISC_REGS_ARM_IRQ_STATUS_0_ARM_IRQ_STATUS_0_Msk & ((value) << LPMCU_MISC_REGS_ARM_IRQ_STATUS_0_ARM_IRQ_STATUS_0_Pos))  
#define LPMCU_MISC_REGS_ARM_IRQ_STATUS_0_MASK 0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_ARM_IRQ_STATUS_0) Register MASK */

/* -------- LPMCU_MISC_REGS_ARM_IRQ_STATUS_1 : (LPMCU_MISC_REGS Offset: 0x218) (R/  32) ARM Cortex M0 IRQ Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t ARM_IRQ_STATUS_1:32;       /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_ARM_IRQ_STATUS_1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_ARM_IRQ_STATUS_1_OFFSET 0x218          /**<  \brief (LPMCU_MISC_REGS_ARM_IRQ_STATUS_1 offset) ARM Cortex M0 IRQ Status */
#define LPMCU_MISC_REGS_ARM_IRQ_STATUS_1_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_ARM_IRQ_STATUS_1 reset_value) ARM Cortex M0 IRQ Status */

#define LPMCU_MISC_REGS_ARM_IRQ_STATUS_1_ARM_IRQ_STATUS_1_Pos 0  /**< \brief (LPMCU_MISC_REGS_ARM_IRQ_STATUS_1)                           */
#define LPMCU_MISC_REGS_ARM_IRQ_STATUS_1_ARM_IRQ_STATUS_1_Msk (0xFFFFFFFFul << LPMCU_MISC_REGS_ARM_IRQ_STATUS_1_ARM_IRQ_STATUS_1_Pos)
#define LPMCU_MISC_REGS_ARM_IRQ_STATUS_1_ARM_IRQ_STATUS_1(value) (LPMCU_MISC_REGS_ARM_IRQ_STATUS_1_ARM_IRQ_STATUS_1_Msk & ((value) << LPMCU_MISC_REGS_ARM_IRQ_STATUS_1_ARM_IRQ_STATUS_1_Pos))  
#define LPMCU_MISC_REGS_ARM_IRQ_STATUS_1_MASK 0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_ARM_IRQ_STATUS_1) Register MASK */

/* -------- LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES : (LPMCU_MISC_REGS Offset: 0x240) (R/W  8) BLE Deep Sleep Enables -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  FW_TIMER_CORR_EN:1;        /*!< bit:      0  Enables FW Timer Correction Operation    */
    uint8_t  HW_TIMER_CORR_EN:1;        /*!< bit:      1  Enables HW Timer Correction Operation    */
    uint8_t  :6;                        /*!< bit:   2..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES_OFFSET 0x240          /**<  \brief (LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES offset) BLE Deep Sleep Enables */
#define LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES_RESETVALUE 0x01ul         /**<  \brief (LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES reset_value) BLE Deep Sleep Enables */

#define LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES_FW_TIMER_CORR_EN_Pos 0  /**< \brief (LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES) Enables FW Timer Correction Operation */
#define LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES_FW_TIMER_CORR_EN (0x1ul << LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES_FW_TIMER_CORR_EN_Pos)  
#define LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES_HW_TIMER_CORR_EN_Pos 1  /**< \brief (LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES) Enables HW Timer Correction Operation */
#define LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES_HW_TIMER_CORR_EN (0x1ul << LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES_HW_TIMER_CORR_EN_Pos)  
#define LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES_MASK 0x03ul    /**< \brief (LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES) Register MASK */

/* -------- LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR : (LPMCU_MISC_REGS Offset: 0x244) (R/W  32) Configures the HW auto correction algorithm of the fine/base timers after wakeup from deep sleep -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t WAIT:10;                   /*!< bit:   0..9  Wait time in us after wakeup before correction begins */
    uint32_t :2;                        /*!< bit: 10..11  Reserved                                 */
    uint32_t RTC_TOSC:18;               /*!< bit: 12..29  Period of RTC clock in us [7.11]         */
    uint32_t :2;                        /*!< bit: 30..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_OFFSET 0x244          /**<  \brief (LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR offset) Configures the HW auto correction algorithm of the fine/base timers after wakeup from deep sleep */
#define LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_RESETVALUE 0xF424000ul    /**<  \brief (LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR reset_value) Configures the HW auto correction algorithm of the fine/base timers after wakeup from deep sleep */

#define LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_WAIT_Pos 0  /**< \brief (LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR) Wait time in us after wakeup before correction begins */
#define LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_WAIT_Msk (0x3FFul << LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_WAIT_Pos)
#define LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_WAIT(value) (LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_WAIT_Msk & ((value) << LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_WAIT_Pos))  
#define LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_RTC_TOSC_Pos 12  /**< \brief (LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR) Period of RTC clock in us [7.11] */
#define LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_RTC_TOSC_Msk (0x3FFFFul << LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_RTC_TOSC_Pos)
#define LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_RTC_TOSC(value) (LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_RTC_TOSC_Msk & ((value) << LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_RTC_TOSC_Pos))  
#define LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_MASK 0x3FFFF3FFul    /**< \brief (LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR) Register MASK */

/* -------- LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR : (LPMCU_MISC_REGS Offset: 0x254) (R/W  32) ARM Cortex M0 idram 1 remap base addr -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t REMAP_IDRAM1_BASE_ADDR:32;  /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR_OFFSET 0x254          /**<  \brief (LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR offset) ARM Cortex M0 idram 1 remap base addr */
#define LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR_RESETVALUE 0x8000ul       /**<  \brief (LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR reset_value) ARM Cortex M0 idram 1 remap base addr */

#define LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR_REMAP_IDRAM1_BASE_ADDR_Pos 0  /**< \brief (LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR)                     */
#define LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR_REMAP_IDRAM1_BASE_ADDR_Msk (0xFFFFFFFFul << LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR_REMAP_IDRAM1_BASE_ADDR_Pos)
#define LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR_REMAP_IDRAM1_BASE_ADDR(value) (LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR_REMAP_IDRAM1_BASE_ADDR_Msk & ((value) << LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR_REMAP_IDRAM1_BASE_ADDR_Pos))  
#define LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR_MASK 0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR) Register MASK */

/* -------- LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR : (LPMCU_MISC_REGS Offset: 0x258) (R/W  32) ARM Cortex M0 idram 1 remap end addr -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t REMAP_IDRAM1_END_ADDR:32;  /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR_OFFSET 0x258          /**<  \brief (LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR offset) ARM Cortex M0 idram 1 remap end addr */
#define LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR_RESETVALUE 0x1FFFFul      /**<  \brief (LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR reset_value) ARM Cortex M0 idram 1 remap end addr */

#define LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR_REMAP_IDRAM1_END_ADDR_Pos 0  /**< \brief (LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR)                      */
#define LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR_REMAP_IDRAM1_END_ADDR_Msk (0xFFFFFFFFul << LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR_REMAP_IDRAM1_END_ADDR_Pos)
#define LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR_REMAP_IDRAM1_END_ADDR(value) (LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR_REMAP_IDRAM1_END_ADDR_Msk & ((value) << LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR_REMAP_IDRAM1_END_ADDR_Pos))  
#define LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR_MASK 0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR) Register MASK */

/* -------- LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR : (LPMCU_MISC_REGS Offset: 0x25c) (R/W  32) ARM Cortex M0 idram 2 remap base addr -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t REMAP_IDRAM2_BASE_ADDR:32;  /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR_OFFSET 0x25C          /**<  \brief (LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR offset) ARM Cortex M0 idram 2 remap base addr */
#define LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR reset_value) ARM Cortex M0 idram 2 remap base addr */

#define LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR_REMAP_IDRAM2_BASE_ADDR_Pos 0  /**< \brief (LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR)                     */
#define LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR_REMAP_IDRAM2_BASE_ADDR_Msk (0xFFFFFFFFul << LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR_REMAP_IDRAM2_BASE_ADDR_Pos)
#define LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR_REMAP_IDRAM2_BASE_ADDR(value) (LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR_REMAP_IDRAM2_BASE_ADDR_Msk & ((value) << LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR_REMAP_IDRAM2_BASE_ADDR_Pos))  
#define LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR_MASK 0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR) Register MASK */

/* -------- LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR : (LPMCU_MISC_REGS Offset: 0x260) (R/W  32) ARM Cortex M0 idram 2 remap end addr -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t REMAP_IDRAM2_END_ADDR:32;  /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR_OFFSET 0x260          /**<  \brief (LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR offset) ARM Cortex M0 idram 2 remap end addr */
#define LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR_RESETVALUE 0x7FFFul       /**<  \brief (LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR reset_value) ARM Cortex M0 idram 2 remap end addr */

#define LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR_REMAP_IDRAM2_END_ADDR_Pos 0  /**< \brief (LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR)                      */
#define LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR_REMAP_IDRAM2_END_ADDR_Msk (0xFFFFFFFFul << LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR_REMAP_IDRAM2_END_ADDR_Pos)
#define LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR_REMAP_IDRAM2_END_ADDR(value) (LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR_REMAP_IDRAM2_END_ADDR_Msk & ((value) << LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR_REMAP_IDRAM2_END_ADDR_Pos))  
#define LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR_MASK 0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR) Register MASK */

/* -------- LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR : (LPMCU_MISC_REGS Offset: 0x264) (R/W  32) ARM Cortex M0 bootrom remap base addr -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t REMAP_BOOT_BASE_ADDR:32;   /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR_OFFSET 0x264          /**<  \brief (LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR offset) ARM Cortex M0 bootrom remap base addr */
#define LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR_RESETVALUE 0x10000000ul   /**<  \brief (LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR reset_value) ARM Cortex M0 bootrom remap base addr */

#define LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR_REMAP_BOOT_BASE_ADDR_Pos 0  /**< \brief (LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR)                       */
#define LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR_REMAP_BOOT_BASE_ADDR_Msk (0xFFFFFFFFul << LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR_REMAP_BOOT_BASE_ADDR_Pos)
#define LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR_REMAP_BOOT_BASE_ADDR(value) (LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR_REMAP_BOOT_BASE_ADDR_Msk & ((value) << LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR_REMAP_BOOT_BASE_ADDR_Pos))  
#define LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR_MASK 0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR) Register MASK */

/* -------- LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR : (LPMCU_MISC_REGS Offset: 0x268) (R/W  32) ARM Cortex M0 bootrom remap end addr -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t REMAP_BOOT_END_ADDR:32;    /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR_OFFSET 0x268          /**<  \brief (LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR offset) ARM Cortex M0 bootrom remap end addr */
#define LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR_RESETVALUE 0x1001FFFFul   /**<  \brief (LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR reset_value) ARM Cortex M0 bootrom remap end addr */

#define LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR_REMAP_BOOT_END_ADDR_Pos 0  /**< \brief (LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR)                        */
#define LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR_REMAP_BOOT_END_ADDR_Msk (0xFFFFFFFFul << LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR_REMAP_BOOT_END_ADDR_Pos)
#define LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR_REMAP_BOOT_END_ADDR(value) (LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR_REMAP_BOOT_END_ADDR_Msk & ((value) << LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR_REMAP_BOOT_END_ADDR_Pos))  
#define LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR_MASK 0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR) Register MASK */

/* -------- LPMCU_MISC_REGS_QUAD_DEC_IRQS : (LPMCU_MISC_REGS Offset: 0x280) (R/  8) Reflects the IRQ status of the Quad Decoders -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  QUAD_DEC_1_IRQ:1;          /*!< bit:      0  Observation of IRQ from the Quad Decoder 1 */
    uint8_t  QUAD_DEC_2_IRQ:1;          /*!< bit:      1  Observation of IRQ from the Quad Decoder 2 */
    uint8_t  QUAD_DEC_3_IRQ:1;          /*!< bit:      2  Observation of IRQ from the Quad Decoder 3 */
    uint8_t  :5;                        /*!< bit:   3..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_QUAD_DEC_IRQS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_QUAD_DEC_IRQS_OFFSET  0x280          /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_IRQS offset) Reflects the IRQ status of the Quad Decoders */
#define LPMCU_MISC_REGS_QUAD_DEC_IRQS_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_IRQS reset_value) Reflects the IRQ status of the Quad Decoders */

#define LPMCU_MISC_REGS_QUAD_DEC_IRQS_QUAD_DEC_1_IRQ_Pos 0  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_IRQS) Observation of IRQ from the Quad Decoder 1 */
#define LPMCU_MISC_REGS_QUAD_DEC_IRQS_QUAD_DEC_1_IRQ (0x1ul << LPMCU_MISC_REGS_QUAD_DEC_IRQS_QUAD_DEC_1_IRQ_Pos)  
#define LPMCU_MISC_REGS_QUAD_DEC_IRQS_QUAD_DEC_2_IRQ_Pos 1  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_IRQS) Observation of IRQ from the Quad Decoder 2 */
#define LPMCU_MISC_REGS_QUAD_DEC_IRQS_QUAD_DEC_2_IRQ (0x1ul << LPMCU_MISC_REGS_QUAD_DEC_IRQS_QUAD_DEC_2_IRQ_Pos)  
#define LPMCU_MISC_REGS_QUAD_DEC_IRQS_QUAD_DEC_3_IRQ_Pos 2  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_IRQS) Observation of IRQ from the Quad Decoder 3 */
#define LPMCU_MISC_REGS_QUAD_DEC_IRQS_QUAD_DEC_3_IRQ (0x1ul << LPMCU_MISC_REGS_QUAD_DEC_IRQS_QUAD_DEC_3_IRQ_Pos)  
#define LPMCU_MISC_REGS_QUAD_DEC_IRQS_MASK    0x07ul    /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_IRQS) Register MASK */

/* -------- LPMCU_MISC_REGS_QUAD_DEC_1_STATUS : (LPMCU_MISC_REGS Offset: 0x284) (R/  16) Current status of Quad Decoder 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t COUNT:16;                  /*!< bit:  0..15  Current count of Quad Decoder 1          */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_QUAD_DEC_1_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_QUAD_DEC_1_STATUS_OFFSET 0x284          /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_1_STATUS offset) Current status of Quad Decoder 1 */
#define LPMCU_MISC_REGS_QUAD_DEC_1_STATUS_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_1_STATUS reset_value) Current status of Quad Decoder 1 */

#define LPMCU_MISC_REGS_QUAD_DEC_1_STATUS_COUNT_Pos 0  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_1_STATUS) Current count of Quad Decoder 1 */
#define LPMCU_MISC_REGS_QUAD_DEC_1_STATUS_COUNT_Msk (0xFFFFul << LPMCU_MISC_REGS_QUAD_DEC_1_STATUS_COUNT_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_1_STATUS_COUNT(value) (LPMCU_MISC_REGS_QUAD_DEC_1_STATUS_COUNT_Msk & ((value) << LPMCU_MISC_REGS_QUAD_DEC_1_STATUS_COUNT_Pos))  
#define LPMCU_MISC_REGS_QUAD_DEC_1_STATUS_MASK 0xFFFFul    /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_1_STATUS) Register MASK */

/* -------- LPMCU_MISC_REGS_QUAD_DEC_2_STATUS : (LPMCU_MISC_REGS Offset: 0x288) (R/  16) Current status of Quad Decoder 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t COUNT:16;                  /*!< bit:  0..15  Current count of Quad Decoder 2          */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_QUAD_DEC_2_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_QUAD_DEC_2_STATUS_OFFSET 0x288          /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_2_STATUS offset) Current status of Quad Decoder 2 */
#define LPMCU_MISC_REGS_QUAD_DEC_2_STATUS_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_2_STATUS reset_value) Current status of Quad Decoder 2 */

#define LPMCU_MISC_REGS_QUAD_DEC_2_STATUS_COUNT_Pos 0  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_2_STATUS) Current count of Quad Decoder 2 */
#define LPMCU_MISC_REGS_QUAD_DEC_2_STATUS_COUNT_Msk (0xFFFFul << LPMCU_MISC_REGS_QUAD_DEC_2_STATUS_COUNT_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_2_STATUS_COUNT(value) (LPMCU_MISC_REGS_QUAD_DEC_2_STATUS_COUNT_Msk & ((value) << LPMCU_MISC_REGS_QUAD_DEC_2_STATUS_COUNT_Pos))  
#define LPMCU_MISC_REGS_QUAD_DEC_2_STATUS_MASK 0xFFFFul    /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_2_STATUS) Register MASK */

/* -------- LPMCU_MISC_REGS_QUAD_DEC_3_STATUS : (LPMCU_MISC_REGS Offset: 0x28c) (R/  16) Current status of Quad Decoder 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t COUNT:16;                  /*!< bit:  0..15  Current count of Quad Decoder 3          */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_QUAD_DEC_3_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_QUAD_DEC_3_STATUS_OFFSET 0x28C          /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_3_STATUS offset) Current status of Quad Decoder 3 */
#define LPMCU_MISC_REGS_QUAD_DEC_3_STATUS_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_3_STATUS reset_value) Current status of Quad Decoder 3 */

#define LPMCU_MISC_REGS_QUAD_DEC_3_STATUS_COUNT_Pos 0  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_3_STATUS) Current count of Quad Decoder 3 */
#define LPMCU_MISC_REGS_QUAD_DEC_3_STATUS_COUNT_Msk (0xFFFFul << LPMCU_MISC_REGS_QUAD_DEC_3_STATUS_COUNT_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_3_STATUS_COUNT(value) (LPMCU_MISC_REGS_QUAD_DEC_3_STATUS_COUNT_Msk & ((value) << LPMCU_MISC_REGS_QUAD_DEC_3_STATUS_COUNT_Pos))  
#define LPMCU_MISC_REGS_QUAD_DEC_3_STATUS_MASK 0xFFFFul    /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_3_STATUS) Register MASK */

/* -------- LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD : (LPMCU_MISC_REGS Offset: 0x290) (R/W  32) Thresholds for Quad Decoder 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t UPPER:16;                  /*!< bit:  0..15  Upper Threshold of counter for Quad Decoder 1 */
    uint32_t LOWER:16;                  /*!< bit: 16..31  Lower Threshold of counter for Quad Decoder 1 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_OFFSET 0x290          /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD offset) Thresholds for Quad Decoder 1 */
#define LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_RESETVALUE 0xFFFF00ul     /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD reset_value) Thresholds for Quad Decoder 1 */

#define LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_UPPER_Pos 0  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD) Upper Threshold of counter for Quad Decoder 1 */
#define LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_UPPER_Msk (0xFFFFul << LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_UPPER_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_UPPER(value) (LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_UPPER_Msk & ((value) << LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_UPPER_Pos))  
#define LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_LOWER_Pos 16  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD) Lower Threshold of counter for Quad Decoder 1 */
#define LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_LOWER_Msk (0xFFFFul << LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_LOWER_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_LOWER(value) (LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_LOWER_Msk & ((value) << LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_LOWER_Pos))  
#define LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_MASK 0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD) Register MASK */

/* -------- LPMCU_MISC_REGS_QUAD_DEC_1_CTRL : (LPMCU_MISC_REGS Offset: 0x294) (R/W  8) Control for Quad Decoder 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ENABLE:1;                  /*!< bit:      0  Enable Quad Decoder                      */
    uint8_t  CLR_IRQ:1;                 /*!< bit:      1  Clear IRQ From Quad Decoder              */
    uint8_t  CLOCK_SEL:2;               /*!< bit:   2..3  Quad Decoder Source Clock Frequency Select */
    uint8_t  :4;                        /*!< bit:   4..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_OFFSET 0x294          /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_1_CTRL offset) Control for Quad Decoder 1 */
#define LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_1_CTRL reset_value) Control for Quad Decoder 1 */

#define LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_ENABLE_Pos 0  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_1_CTRL) Enable Quad Decoder        */
#define LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_ENABLE (0x1ul << LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_ENABLE_Pos)  
#define LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLR_IRQ_Pos 1  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_1_CTRL) Clear IRQ From Quad Decoder */
#define LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLR_IRQ (0x1ul << LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLR_IRQ_Pos)  
#define LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_Pos 2  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_1_CTRL) Quad Decoder Source Clock Frequency Select */
#define LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_Msk (0x3ul << LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL(value) (LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_Msk & ((value) << LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_Pos))  
#define   LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_1_CTRL) 26MHz  */
#define   LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_1_CTRL) 13MHz  */
#define   LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_1_CTRL) 6.5MHz  */
#define   LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_1_CTRL) 3.25MHz  */
#define LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_0    (LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_0_Val << LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_1    (LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_1_Val << LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_2    (LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_2_Val << LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_3    (LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_3_Val << LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_MASK  0x0Ful    /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_1_CTRL) Register MASK */

/* -------- LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD : (LPMCU_MISC_REGS Offset: 0x2a0) (R/W  32) Thresholds for Quad Decoder 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t UPPER:16;                  /*!< bit:  0..15  Upper Threshold of counter for Quad Decoder 2 */
    uint32_t LOWER:16;                  /*!< bit: 16..31  Lower Threshold of counter for Quad Decoder 2 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_OFFSET 0x2A0          /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD offset) Thresholds for Quad Decoder 2 */
#define LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_RESETVALUE 0xFFFF00ul     /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD reset_value) Thresholds for Quad Decoder 2 */

#define LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_UPPER_Pos 0  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD) Upper Threshold of counter for Quad Decoder 2 */
#define LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_UPPER_Msk (0xFFFFul << LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_UPPER_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_UPPER(value) (LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_UPPER_Msk & ((value) << LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_UPPER_Pos))  
#define LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_LOWER_Pos 16  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD) Lower Threshold of counter for Quad Decoder 2 */
#define LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_LOWER_Msk (0xFFFFul << LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_LOWER_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_LOWER(value) (LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_LOWER_Msk & ((value) << LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_LOWER_Pos))  
#define LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_MASK 0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD) Register MASK */

/* -------- LPMCU_MISC_REGS_QUAD_DEC_2_CTRL : (LPMCU_MISC_REGS Offset: 0x2a4) (R/W  8) Control for Quad Decoder 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ENABLE:1;                  /*!< bit:      0  Enable Quad Decoder                      */
    uint8_t  CLR_IRQ:1;                 /*!< bit:      1  Clear IRQ From Quad Decoder              */
    uint8_t  CLOCK_SEL:2;               /*!< bit:   2..3  Quad Decoder Source Clock Frequency Select */
    uint8_t  :4;                        /*!< bit:   4..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_OFFSET 0x2A4          /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_2_CTRL offset) Control for Quad Decoder 2 */
#define LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_2_CTRL reset_value) Control for Quad Decoder 2 */

#define LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_ENABLE_Pos 0  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_2_CTRL) Enable Quad Decoder        */
#define LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_ENABLE (0x1ul << LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_ENABLE_Pos)  
#define LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLR_IRQ_Pos 1  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_2_CTRL) Clear IRQ From Quad Decoder */
#define LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLR_IRQ (0x1ul << LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLR_IRQ_Pos)  
#define LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_Pos 2  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_2_CTRL) Quad Decoder Source Clock Frequency Select */
#define LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_Msk (0x3ul << LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL(value) (LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_Msk & ((value) << LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_Pos))  
#define   LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_2_CTRL) 26MHz  */
#define   LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_2_CTRL) 13MHz  */
#define   LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_2_CTRL) 6.5MHz  */
#define   LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_2_CTRL) 3.25MHz  */
#define LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_0    (LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_0_Val << LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_1    (LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_1_Val << LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_2    (LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_2_Val << LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_3    (LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_3_Val << LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_MASK  0x0Ful    /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_2_CTRL) Register MASK */

/* -------- LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD : (LPMCU_MISC_REGS Offset: 0x2b0) (R/W  32) Thresholds for Quad Decoder 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t UPPER:16;                  /*!< bit:  0..15  Upper Threshold of counter for Quad Decoder 3 */
    uint32_t LOWER:16;                  /*!< bit: 16..31  Lower Threshold of counter for Quad Decoder 3 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_OFFSET 0x2B0          /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD offset) Thresholds for Quad Decoder 3 */
#define LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_RESETVALUE 0xFFFF00ul     /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD reset_value) Thresholds for Quad Decoder 3 */

#define LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_UPPER_Pos 0  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD) Upper Threshold of counter for Quad Decoder 3 */
#define LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_UPPER_Msk (0xFFFFul << LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_UPPER_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_UPPER(value) (LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_UPPER_Msk & ((value) << LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_UPPER_Pos))  
#define LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_LOWER_Pos 16  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD) Lower Threshold of counter for Quad Decoder 3 */
#define LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_LOWER_Msk (0xFFFFul << LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_LOWER_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_LOWER(value) (LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_LOWER_Msk & ((value) << LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_LOWER_Pos))  
#define LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_MASK 0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD) Register MASK */

/* -------- LPMCU_MISC_REGS_QUAD_DEC_3_CTRL : (LPMCU_MISC_REGS Offset: 0x2b4) (R/W  8) Control for Quad Decoder 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  ENABLE:1;                  /*!< bit:      0  Enable Quad Decoder                      */
    uint8_t  CLR_IRQ:1;                 /*!< bit:      1  Clear IRQ From Quad Decoder              */
    uint8_t  CLOCK_SEL:2;               /*!< bit:   2..3  Quad Decoder Source Clock Frequency Select */
    uint8_t  :4;                        /*!< bit:   4..7  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_OFFSET 0x2B4          /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_3_CTRL offset) Control for Quad Decoder 3 */
#define LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_QUAD_DEC_3_CTRL reset_value) Control for Quad Decoder 3 */

#define LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_ENABLE_Pos 0  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_3_CTRL) Enable Quad Decoder        */
#define LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_ENABLE (0x1ul << LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_ENABLE_Pos)  
#define LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLR_IRQ_Pos 1  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_3_CTRL) Clear IRQ From Quad Decoder */
#define LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLR_IRQ (0x1ul << LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLR_IRQ_Pos)  
#define LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_Pos 2  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_3_CTRL) Quad Decoder Source Clock Frequency Select */
#define LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_Msk (0x3ul << LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL(value) (LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_Msk & ((value) << LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_Pos))  
#define   LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_0_Val        0X0ul  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_3_CTRL) 26MHz  */
#define   LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_1_Val        0X1ul  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_3_CTRL) 13MHz  */
#define   LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_2_Val        0X2ul  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_3_CTRL) 6.5MHz  */
#define   LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_3_Val        0X3ul  /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_3_CTRL) 3.25MHz  */
#define LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_0    (LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_0_Val << LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_1    (LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_1_Val << LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_2    (LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_2_Val << LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_3    (LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_3_Val << LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_CLOCK_SEL_Pos)
#define LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_MASK  0x0Ful    /**< \brief (LPMCU_MISC_REGS_QUAD_DEC_3_CTRL) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP0_COMP : (LPMCU_MISC_REGS Offset: 0x2c0) (R/W  32) Flash Breakpoint Compare Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP0_COMP:17;          /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP0_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP0_COMP_OFFSET  0x2C0          /**<  \brief (LPMCU_MISC_REGS_FP_COMP0_COMP offset) Flash Breakpoint Compare Register 0 */
#define LPMCU_MISC_REGS_FP_COMP0_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP0_COMP reset_value) Flash Breakpoint Compare Register 0 */

#define LPMCU_MISC_REGS_FP_COMP0_COMP_FP_COMP0_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP0_COMP)                              */
#define LPMCU_MISC_REGS_FP_COMP0_COMP_FP_COMP0_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP0_COMP_FP_COMP0_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP0_COMP_FP_COMP0_COMP(value) (LPMCU_MISC_REGS_FP_COMP0_COMP_FP_COMP0_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP0_COMP_FP_COMP0_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP0_COMP_MASK    0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP0_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP1_COMP : (LPMCU_MISC_REGS Offset: 0x2c4) (R/W  32) Flash Breakpoint Compare Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP1_COMP:17;          /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP1_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP1_COMP_OFFSET  0x2C4          /**<  \brief (LPMCU_MISC_REGS_FP_COMP1_COMP offset) Flash Breakpoint Compare Register 1 */
#define LPMCU_MISC_REGS_FP_COMP1_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP1_COMP reset_value) Flash Breakpoint Compare Register 1 */

#define LPMCU_MISC_REGS_FP_COMP1_COMP_FP_COMP1_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP1_COMP)                              */
#define LPMCU_MISC_REGS_FP_COMP1_COMP_FP_COMP1_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP1_COMP_FP_COMP1_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP1_COMP_FP_COMP1_COMP(value) (LPMCU_MISC_REGS_FP_COMP1_COMP_FP_COMP1_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP1_COMP_FP_COMP1_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP1_COMP_MASK    0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP1_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP2_COMP : (LPMCU_MISC_REGS Offset: 0x2c8) (R/W  32) Flash Breakpoint Compare Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP2_COMP:17;          /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP2_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP2_COMP_OFFSET  0x2C8          /**<  \brief (LPMCU_MISC_REGS_FP_COMP2_COMP offset) Flash Breakpoint Compare Register 2 */
#define LPMCU_MISC_REGS_FP_COMP2_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP2_COMP reset_value) Flash Breakpoint Compare Register 2 */

#define LPMCU_MISC_REGS_FP_COMP2_COMP_FP_COMP2_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP2_COMP)                              */
#define LPMCU_MISC_REGS_FP_COMP2_COMP_FP_COMP2_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP2_COMP_FP_COMP2_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP2_COMP_FP_COMP2_COMP(value) (LPMCU_MISC_REGS_FP_COMP2_COMP_FP_COMP2_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP2_COMP_FP_COMP2_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP2_COMP_MASK    0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP2_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP3_COMP : (LPMCU_MISC_REGS Offset: 0x2cc) (R/W  32) Flash Breakpoint Compare Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP3_COMP:17;          /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP3_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP3_COMP_OFFSET  0x2CC          /**<  \brief (LPMCU_MISC_REGS_FP_COMP3_COMP offset) Flash Breakpoint Compare Register 3 */
#define LPMCU_MISC_REGS_FP_COMP3_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP3_COMP reset_value) Flash Breakpoint Compare Register 3 */

#define LPMCU_MISC_REGS_FP_COMP3_COMP_FP_COMP3_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP3_COMP)                              */
#define LPMCU_MISC_REGS_FP_COMP3_COMP_FP_COMP3_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP3_COMP_FP_COMP3_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP3_COMP_FP_COMP3_COMP(value) (LPMCU_MISC_REGS_FP_COMP3_COMP_FP_COMP3_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP3_COMP_FP_COMP3_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP3_COMP_MASK    0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP3_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP4_COMP : (LPMCU_MISC_REGS Offset: 0x2d0) (R/W  32) Flash Breakpoint Compare Register 4 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP4_COMP:17;          /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP4_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP4_COMP_OFFSET  0x2D0          /**<  \brief (LPMCU_MISC_REGS_FP_COMP4_COMP offset) Flash Breakpoint Compare Register 4 */
#define LPMCU_MISC_REGS_FP_COMP4_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP4_COMP reset_value) Flash Breakpoint Compare Register 4 */

#define LPMCU_MISC_REGS_FP_COMP4_COMP_FP_COMP4_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP4_COMP)                              */
#define LPMCU_MISC_REGS_FP_COMP4_COMP_FP_COMP4_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP4_COMP_FP_COMP4_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP4_COMP_FP_COMP4_COMP(value) (LPMCU_MISC_REGS_FP_COMP4_COMP_FP_COMP4_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP4_COMP_FP_COMP4_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP4_COMP_MASK    0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP4_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP5_COMP : (LPMCU_MISC_REGS Offset: 0x2d4) (R/W  32) Flash Breakpoint Compare Register 5 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP5_COMP:17;          /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP5_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP5_COMP_OFFSET  0x2D4          /**<  \brief (LPMCU_MISC_REGS_FP_COMP5_COMP offset) Flash Breakpoint Compare Register 5 */
#define LPMCU_MISC_REGS_FP_COMP5_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP5_COMP reset_value) Flash Breakpoint Compare Register 5 */

#define LPMCU_MISC_REGS_FP_COMP5_COMP_FP_COMP5_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP5_COMP)                              */
#define LPMCU_MISC_REGS_FP_COMP5_COMP_FP_COMP5_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP5_COMP_FP_COMP5_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP5_COMP_FP_COMP5_COMP(value) (LPMCU_MISC_REGS_FP_COMP5_COMP_FP_COMP5_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP5_COMP_FP_COMP5_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP5_COMP_MASK    0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP5_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP6_COMP : (LPMCU_MISC_REGS Offset: 0x2d8) (R/W  32) Flash Breakpoint Compare Register 6 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP6_COMP:17;          /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP6_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP6_COMP_OFFSET  0x2D8          /**<  \brief (LPMCU_MISC_REGS_FP_COMP6_COMP offset) Flash Breakpoint Compare Register 6 */
#define LPMCU_MISC_REGS_FP_COMP6_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP6_COMP reset_value) Flash Breakpoint Compare Register 6 */

#define LPMCU_MISC_REGS_FP_COMP6_COMP_FP_COMP6_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP6_COMP)                              */
#define LPMCU_MISC_REGS_FP_COMP6_COMP_FP_COMP6_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP6_COMP_FP_COMP6_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP6_COMP_FP_COMP6_COMP(value) (LPMCU_MISC_REGS_FP_COMP6_COMP_FP_COMP6_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP6_COMP_FP_COMP6_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP6_COMP_MASK    0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP6_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP7_COMP : (LPMCU_MISC_REGS Offset: 0x2dc) (R/W  32) Flash Breakpoint Compare Register 7 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP7_COMP:17;          /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP7_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP7_COMP_OFFSET  0x2DC          /**<  \brief (LPMCU_MISC_REGS_FP_COMP7_COMP offset) Flash Breakpoint Compare Register 7 */
#define LPMCU_MISC_REGS_FP_COMP7_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP7_COMP reset_value) Flash Breakpoint Compare Register 7 */

#define LPMCU_MISC_REGS_FP_COMP7_COMP_FP_COMP7_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP7_COMP)                              */
#define LPMCU_MISC_REGS_FP_COMP7_COMP_FP_COMP7_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP7_COMP_FP_COMP7_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP7_COMP_FP_COMP7_COMP(value) (LPMCU_MISC_REGS_FP_COMP7_COMP_FP_COMP7_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP7_COMP_FP_COMP7_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP7_COMP_MASK    0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP7_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP8_COMP : (LPMCU_MISC_REGS Offset: 0x2e0) (R/W  32) Flash Breakpoint Compare Register 8 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP8_COMP:17;          /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP8_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP8_COMP_OFFSET  0x2E0          /**<  \brief (LPMCU_MISC_REGS_FP_COMP8_COMP offset) Flash Breakpoint Compare Register 8 */
#define LPMCU_MISC_REGS_FP_COMP8_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP8_COMP reset_value) Flash Breakpoint Compare Register 8 */

#define LPMCU_MISC_REGS_FP_COMP8_COMP_FP_COMP8_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP8_COMP)                              */
#define LPMCU_MISC_REGS_FP_COMP8_COMP_FP_COMP8_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP8_COMP_FP_COMP8_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP8_COMP_FP_COMP8_COMP(value) (LPMCU_MISC_REGS_FP_COMP8_COMP_FP_COMP8_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP8_COMP_FP_COMP8_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP8_COMP_MASK    0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP8_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP9_COMP : (LPMCU_MISC_REGS Offset: 0x2e4) (R/W  32) Flash Breakpoint Compare Register 9 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP9_COMP:17;          /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP9_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP9_COMP_OFFSET  0x2E4          /**<  \brief (LPMCU_MISC_REGS_FP_COMP9_COMP offset) Flash Breakpoint Compare Register 9 */
#define LPMCU_MISC_REGS_FP_COMP9_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP9_COMP reset_value) Flash Breakpoint Compare Register 9 */

#define LPMCU_MISC_REGS_FP_COMP9_COMP_FP_COMP9_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP9_COMP)                              */
#define LPMCU_MISC_REGS_FP_COMP9_COMP_FP_COMP9_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP9_COMP_FP_COMP9_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP9_COMP_FP_COMP9_COMP(value) (LPMCU_MISC_REGS_FP_COMP9_COMP_FP_COMP9_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP9_COMP_FP_COMP9_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP9_COMP_MASK    0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP9_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP10_COMP : (LPMCU_MISC_REGS Offset: 0x2e8) (R/W  32) Flash Breakpoint Compare Register 10 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP10_COMP:17;         /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP10_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP10_COMP_OFFSET 0x2E8          /**<  \brief (LPMCU_MISC_REGS_FP_COMP10_COMP offset) Flash Breakpoint Compare Register 10 */
#define LPMCU_MISC_REGS_FP_COMP10_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP10_COMP reset_value) Flash Breakpoint Compare Register 10 */

#define LPMCU_MISC_REGS_FP_COMP10_COMP_FP_COMP10_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP10_COMP)                             */
#define LPMCU_MISC_REGS_FP_COMP10_COMP_FP_COMP10_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP10_COMP_FP_COMP10_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP10_COMP_FP_COMP10_COMP(value) (LPMCU_MISC_REGS_FP_COMP10_COMP_FP_COMP10_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP10_COMP_FP_COMP10_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP10_COMP_MASK   0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP10_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP11_COMP : (LPMCU_MISC_REGS Offset: 0x2ec) (R/W  32) Flash Breakpoint Compare Register 11 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP11_COMP:17;         /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP11_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP11_COMP_OFFSET 0x2EC          /**<  \brief (LPMCU_MISC_REGS_FP_COMP11_COMP offset) Flash Breakpoint Compare Register 11 */
#define LPMCU_MISC_REGS_FP_COMP11_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP11_COMP reset_value) Flash Breakpoint Compare Register 11 */

#define LPMCU_MISC_REGS_FP_COMP11_COMP_FP_COMP11_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP11_COMP)                             */
#define LPMCU_MISC_REGS_FP_COMP11_COMP_FP_COMP11_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP11_COMP_FP_COMP11_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP11_COMP_FP_COMP11_COMP(value) (LPMCU_MISC_REGS_FP_COMP11_COMP_FP_COMP11_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP11_COMP_FP_COMP11_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP11_COMP_MASK   0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP11_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP12_COMP : (LPMCU_MISC_REGS Offset: 0x2f0) (R/W  32) Flash Breakpoint Compare Register 12 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP12_COMP:17;         /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP12_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP12_COMP_OFFSET 0x2F0          /**<  \brief (LPMCU_MISC_REGS_FP_COMP12_COMP offset) Flash Breakpoint Compare Register 12 */
#define LPMCU_MISC_REGS_FP_COMP12_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP12_COMP reset_value) Flash Breakpoint Compare Register 12 */

#define LPMCU_MISC_REGS_FP_COMP12_COMP_FP_COMP12_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP12_COMP)                             */
#define LPMCU_MISC_REGS_FP_COMP12_COMP_FP_COMP12_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP12_COMP_FP_COMP12_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP12_COMP_FP_COMP12_COMP(value) (LPMCU_MISC_REGS_FP_COMP12_COMP_FP_COMP12_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP12_COMP_FP_COMP12_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP12_COMP_MASK   0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP12_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP13_COMP : (LPMCU_MISC_REGS Offset: 0x2f4) (R/W  32) Flash Breakpoint Compare Register 13 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP13_COMP:17;         /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP13_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP13_COMP_OFFSET 0x2F4          /**<  \brief (LPMCU_MISC_REGS_FP_COMP13_COMP offset) Flash Breakpoint Compare Register 13 */
#define LPMCU_MISC_REGS_FP_COMP13_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP13_COMP reset_value) Flash Breakpoint Compare Register 13 */

#define LPMCU_MISC_REGS_FP_COMP13_COMP_FP_COMP13_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP13_COMP)                             */
#define LPMCU_MISC_REGS_FP_COMP13_COMP_FP_COMP13_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP13_COMP_FP_COMP13_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP13_COMP_FP_COMP13_COMP(value) (LPMCU_MISC_REGS_FP_COMP13_COMP_FP_COMP13_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP13_COMP_FP_COMP13_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP13_COMP_MASK   0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP13_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP14_COMP : (LPMCU_MISC_REGS Offset: 0x2f8) (R/W  32) Flash Breakpoint Compare Register 14 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP14_COMP:17;         /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP14_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP14_COMP_OFFSET 0x2F8          /**<  \brief (LPMCU_MISC_REGS_FP_COMP14_COMP offset) Flash Breakpoint Compare Register 14 */
#define LPMCU_MISC_REGS_FP_COMP14_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP14_COMP reset_value) Flash Breakpoint Compare Register 14 */

#define LPMCU_MISC_REGS_FP_COMP14_COMP_FP_COMP14_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP14_COMP)                             */
#define LPMCU_MISC_REGS_FP_COMP14_COMP_FP_COMP14_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP14_COMP_FP_COMP14_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP14_COMP_FP_COMP14_COMP(value) (LPMCU_MISC_REGS_FP_COMP14_COMP_FP_COMP14_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP14_COMP_FP_COMP14_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP14_COMP_MASK   0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP14_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP15_COMP : (LPMCU_MISC_REGS Offset: 0x2fc) (R/W  32) Flash Breakpoint Compare Register 15 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP15_COMP:17;         /*!< bit:  0..16                                           */
    uint32_t :15;                       /*!< bit: 17..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP15_COMP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP15_COMP_OFFSET 0x2FC          /**<  \brief (LPMCU_MISC_REGS_FP_COMP15_COMP offset) Flash Breakpoint Compare Register 15 */
#define LPMCU_MISC_REGS_FP_COMP15_COMP_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP15_COMP reset_value) Flash Breakpoint Compare Register 15 */

#define LPMCU_MISC_REGS_FP_COMP15_COMP_FP_COMP15_COMP_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP15_COMP)                             */
#define LPMCU_MISC_REGS_FP_COMP15_COMP_FP_COMP15_COMP_Msk (0x1FFFFul << LPMCU_MISC_REGS_FP_COMP15_COMP_FP_COMP15_COMP_Pos)
#define LPMCU_MISC_REGS_FP_COMP15_COMP_FP_COMP15_COMP(value) (LPMCU_MISC_REGS_FP_COMP15_COMP_FP_COMP15_COMP_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP15_COMP_FP_COMP15_COMP_Pos))  
#define LPMCU_MISC_REGS_FP_COMP15_COMP_MASK   0x1FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP15_COMP) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP0_REPLACE : (LPMCU_MISC_REGS Offset: 0x300) (R/W  32) Flash Breakpoint Replace Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP0_REPLACE:19;       /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP0_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP0_REPLACE_OFFSET 0x300          /**<  \brief (LPMCU_MISC_REGS_FP_COMP0_REPLACE offset) Flash Breakpoint Replace Register 0 */
#define LPMCU_MISC_REGS_FP_COMP0_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP0_REPLACE reset_value) Flash Breakpoint Replace Register 0 */

#define LPMCU_MISC_REGS_FP_COMP0_REPLACE_FP_COMP0_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP0_REPLACE)                           */
#define LPMCU_MISC_REGS_FP_COMP0_REPLACE_FP_COMP0_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP0_REPLACE_FP_COMP0_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP0_REPLACE_FP_COMP0_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP0_REPLACE_FP_COMP0_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP0_REPLACE_FP_COMP0_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP0_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP0_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP1_REPLACE : (LPMCU_MISC_REGS Offset: 0x304) (R/W  32) Flash Breakpoint Replace Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP1_REPLACE:19;       /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP1_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP1_REPLACE_OFFSET 0x304          /**<  \brief (LPMCU_MISC_REGS_FP_COMP1_REPLACE offset) Flash Breakpoint Replace Register 1 */
#define LPMCU_MISC_REGS_FP_COMP1_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP1_REPLACE reset_value) Flash Breakpoint Replace Register 1 */

#define LPMCU_MISC_REGS_FP_COMP1_REPLACE_FP_COMP1_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP1_REPLACE)                           */
#define LPMCU_MISC_REGS_FP_COMP1_REPLACE_FP_COMP1_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP1_REPLACE_FP_COMP1_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP1_REPLACE_FP_COMP1_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP1_REPLACE_FP_COMP1_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP1_REPLACE_FP_COMP1_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP1_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP1_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP2_REPLACE : (LPMCU_MISC_REGS Offset: 0x308) (R/W  32) Flash Breakpoint Replace Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP2_REPLACE:19;       /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP2_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP2_REPLACE_OFFSET 0x308          /**<  \brief (LPMCU_MISC_REGS_FP_COMP2_REPLACE offset) Flash Breakpoint Replace Register 2 */
#define LPMCU_MISC_REGS_FP_COMP2_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP2_REPLACE reset_value) Flash Breakpoint Replace Register 2 */

#define LPMCU_MISC_REGS_FP_COMP2_REPLACE_FP_COMP2_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP2_REPLACE)                           */
#define LPMCU_MISC_REGS_FP_COMP2_REPLACE_FP_COMP2_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP2_REPLACE_FP_COMP2_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP2_REPLACE_FP_COMP2_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP2_REPLACE_FP_COMP2_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP2_REPLACE_FP_COMP2_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP2_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP2_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP3_REPLACE : (LPMCU_MISC_REGS Offset: 0x30c) (R/W  32) Flash Breakpoint Replace Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP3_REPLACE:19;       /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP3_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP3_REPLACE_OFFSET 0x30C          /**<  \brief (LPMCU_MISC_REGS_FP_COMP3_REPLACE offset) Flash Breakpoint Replace Register 3 */
#define LPMCU_MISC_REGS_FP_COMP3_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP3_REPLACE reset_value) Flash Breakpoint Replace Register 3 */

#define LPMCU_MISC_REGS_FP_COMP3_REPLACE_FP_COMP3_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP3_REPLACE)                           */
#define LPMCU_MISC_REGS_FP_COMP3_REPLACE_FP_COMP3_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP3_REPLACE_FP_COMP3_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP3_REPLACE_FP_COMP3_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP3_REPLACE_FP_COMP3_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP3_REPLACE_FP_COMP3_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP3_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP3_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP4_REPLACE : (LPMCU_MISC_REGS Offset: 0x310) (R/W  32) Flash Breakpoint Replace Register 4 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP4_REPLACE:19;       /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP4_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP4_REPLACE_OFFSET 0x310          /**<  \brief (LPMCU_MISC_REGS_FP_COMP4_REPLACE offset) Flash Breakpoint Replace Register 4 */
#define LPMCU_MISC_REGS_FP_COMP4_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP4_REPLACE reset_value) Flash Breakpoint Replace Register 4 */

#define LPMCU_MISC_REGS_FP_COMP4_REPLACE_FP_COMP4_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP4_REPLACE)                           */
#define LPMCU_MISC_REGS_FP_COMP4_REPLACE_FP_COMP4_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP4_REPLACE_FP_COMP4_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP4_REPLACE_FP_COMP4_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP4_REPLACE_FP_COMP4_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP4_REPLACE_FP_COMP4_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP4_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP4_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP5_REPLACE : (LPMCU_MISC_REGS Offset: 0x314) (R/W  32) Flash Breakpoint Replace Register 5 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP5_REPLACE:19;       /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP5_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP5_REPLACE_OFFSET 0x314          /**<  \brief (LPMCU_MISC_REGS_FP_COMP5_REPLACE offset) Flash Breakpoint Replace Register 5 */
#define LPMCU_MISC_REGS_FP_COMP5_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP5_REPLACE reset_value) Flash Breakpoint Replace Register 5 */

#define LPMCU_MISC_REGS_FP_COMP5_REPLACE_FP_COMP5_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP5_REPLACE)                           */
#define LPMCU_MISC_REGS_FP_COMP5_REPLACE_FP_COMP5_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP5_REPLACE_FP_COMP5_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP5_REPLACE_FP_COMP5_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP5_REPLACE_FP_COMP5_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP5_REPLACE_FP_COMP5_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP5_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP5_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP6_REPLACE : (LPMCU_MISC_REGS Offset: 0x318) (R/W  32) Flash Breakpoint Replace Register 6 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP6_REPLACE:19;       /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP6_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP6_REPLACE_OFFSET 0x318          /**<  \brief (LPMCU_MISC_REGS_FP_COMP6_REPLACE offset) Flash Breakpoint Replace Register 6 */
#define LPMCU_MISC_REGS_FP_COMP6_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP6_REPLACE reset_value) Flash Breakpoint Replace Register 6 */

#define LPMCU_MISC_REGS_FP_COMP6_REPLACE_FP_COMP6_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP6_REPLACE)                           */
#define LPMCU_MISC_REGS_FP_COMP6_REPLACE_FP_COMP6_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP6_REPLACE_FP_COMP6_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP6_REPLACE_FP_COMP6_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP6_REPLACE_FP_COMP6_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP6_REPLACE_FP_COMP6_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP6_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP6_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP7_REPLACE : (LPMCU_MISC_REGS Offset: 0x31c) (R/W  32) Flash Breakpoint Replace Register 7 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP7_REPLACE:19;       /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP7_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP7_REPLACE_OFFSET 0x31C          /**<  \brief (LPMCU_MISC_REGS_FP_COMP7_REPLACE offset) Flash Breakpoint Replace Register 7 */
#define LPMCU_MISC_REGS_FP_COMP7_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP7_REPLACE reset_value) Flash Breakpoint Replace Register 7 */

#define LPMCU_MISC_REGS_FP_COMP7_REPLACE_FP_COMP7_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP7_REPLACE)                           */
#define LPMCU_MISC_REGS_FP_COMP7_REPLACE_FP_COMP7_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP7_REPLACE_FP_COMP7_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP7_REPLACE_FP_COMP7_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP7_REPLACE_FP_COMP7_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP7_REPLACE_FP_COMP7_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP7_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP7_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP8_REPLACE : (LPMCU_MISC_REGS Offset: 0x320) (R/W  32) Flash Breakpoint Replace Register 8 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP8_REPLACE:19;       /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP8_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP8_REPLACE_OFFSET 0x320          /**<  \brief (LPMCU_MISC_REGS_FP_COMP8_REPLACE offset) Flash Breakpoint Replace Register 8 */
#define LPMCU_MISC_REGS_FP_COMP8_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP8_REPLACE reset_value) Flash Breakpoint Replace Register 8 */

#define LPMCU_MISC_REGS_FP_COMP8_REPLACE_FP_COMP8_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP8_REPLACE)                           */
#define LPMCU_MISC_REGS_FP_COMP8_REPLACE_FP_COMP8_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP8_REPLACE_FP_COMP8_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP8_REPLACE_FP_COMP8_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP8_REPLACE_FP_COMP8_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP8_REPLACE_FP_COMP8_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP8_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP8_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP9_REPLACE : (LPMCU_MISC_REGS Offset: 0x324) (R/W  32) Flash Breakpoint Replace Register 9 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP9_REPLACE:19;       /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP9_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP9_REPLACE_OFFSET 0x324          /**<  \brief (LPMCU_MISC_REGS_FP_COMP9_REPLACE offset) Flash Breakpoint Replace Register 9 */
#define LPMCU_MISC_REGS_FP_COMP9_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP9_REPLACE reset_value) Flash Breakpoint Replace Register 9 */

#define LPMCU_MISC_REGS_FP_COMP9_REPLACE_FP_COMP9_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP9_REPLACE)                           */
#define LPMCU_MISC_REGS_FP_COMP9_REPLACE_FP_COMP9_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP9_REPLACE_FP_COMP9_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP9_REPLACE_FP_COMP9_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP9_REPLACE_FP_COMP9_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP9_REPLACE_FP_COMP9_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP9_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP9_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP10_REPLACE : (LPMCU_MISC_REGS Offset: 0x328) (R/W  32) Flash Breakpoint Replace Register 10 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP10_REPLACE:19;      /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP10_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP10_REPLACE_OFFSET 0x328          /**<  \brief (LPMCU_MISC_REGS_FP_COMP10_REPLACE offset) Flash Breakpoint Replace Register 10 */
#define LPMCU_MISC_REGS_FP_COMP10_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP10_REPLACE reset_value) Flash Breakpoint Replace Register 10 */

#define LPMCU_MISC_REGS_FP_COMP10_REPLACE_FP_COMP10_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP10_REPLACE)                          */
#define LPMCU_MISC_REGS_FP_COMP10_REPLACE_FP_COMP10_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP10_REPLACE_FP_COMP10_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP10_REPLACE_FP_COMP10_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP10_REPLACE_FP_COMP10_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP10_REPLACE_FP_COMP10_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP10_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP10_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP11_REPLACE : (LPMCU_MISC_REGS Offset: 0x32c) (R/W  32) Flash Breakpoint Replace Register 11 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP11_REPLACE:19;      /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP11_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP11_REPLACE_OFFSET 0x32C          /**<  \brief (LPMCU_MISC_REGS_FP_COMP11_REPLACE offset) Flash Breakpoint Replace Register 11 */
#define LPMCU_MISC_REGS_FP_COMP11_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP11_REPLACE reset_value) Flash Breakpoint Replace Register 11 */

#define LPMCU_MISC_REGS_FP_COMP11_REPLACE_FP_COMP11_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP11_REPLACE)                          */
#define LPMCU_MISC_REGS_FP_COMP11_REPLACE_FP_COMP11_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP11_REPLACE_FP_COMP11_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP11_REPLACE_FP_COMP11_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP11_REPLACE_FP_COMP11_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP11_REPLACE_FP_COMP11_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP11_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP11_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP12_REPLACE : (LPMCU_MISC_REGS Offset: 0x330) (R/W  32) Flash Breakpoint Replace Register 12 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP12_REPLACE:19;      /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP12_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP12_REPLACE_OFFSET 0x330          /**<  \brief (LPMCU_MISC_REGS_FP_COMP12_REPLACE offset) Flash Breakpoint Replace Register 12 */
#define LPMCU_MISC_REGS_FP_COMP12_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP12_REPLACE reset_value) Flash Breakpoint Replace Register 12 */

#define LPMCU_MISC_REGS_FP_COMP12_REPLACE_FP_COMP12_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP12_REPLACE)                          */
#define LPMCU_MISC_REGS_FP_COMP12_REPLACE_FP_COMP12_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP12_REPLACE_FP_COMP12_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP12_REPLACE_FP_COMP12_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP12_REPLACE_FP_COMP12_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP12_REPLACE_FP_COMP12_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP12_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP12_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP13_REPLACE : (LPMCU_MISC_REGS Offset: 0x334) (R/W  32) Flash Breakpoint Replace Register 13 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP13_REPLACE:19;      /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP13_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP13_REPLACE_OFFSET 0x334          /**<  \brief (LPMCU_MISC_REGS_FP_COMP13_REPLACE offset) Flash Breakpoint Replace Register 13 */
#define LPMCU_MISC_REGS_FP_COMP13_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP13_REPLACE reset_value) Flash Breakpoint Replace Register 13 */

#define LPMCU_MISC_REGS_FP_COMP13_REPLACE_FP_COMP13_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP13_REPLACE)                          */
#define LPMCU_MISC_REGS_FP_COMP13_REPLACE_FP_COMP13_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP13_REPLACE_FP_COMP13_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP13_REPLACE_FP_COMP13_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP13_REPLACE_FP_COMP13_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP13_REPLACE_FP_COMP13_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP13_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP13_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP14_REPLACE : (LPMCU_MISC_REGS Offset: 0x338) (R/W  32) Flash Breakpoint Replace Register 14 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP14_REPLACE:19;      /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP14_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP14_REPLACE_OFFSET 0x338          /**<  \brief (LPMCU_MISC_REGS_FP_COMP14_REPLACE offset) Flash Breakpoint Replace Register 14 */
#define LPMCU_MISC_REGS_FP_COMP14_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP14_REPLACE reset_value) Flash Breakpoint Replace Register 14 */

#define LPMCU_MISC_REGS_FP_COMP14_REPLACE_FP_COMP14_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP14_REPLACE)                          */
#define LPMCU_MISC_REGS_FP_COMP14_REPLACE_FP_COMP14_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP14_REPLACE_FP_COMP14_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP14_REPLACE_FP_COMP14_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP14_REPLACE_FP_COMP14_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP14_REPLACE_FP_COMP14_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP14_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP14_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP15_REPLACE : (LPMCU_MISC_REGS Offset: 0x33c) (R/W  32) Flash Breakpoint Replace Register 14 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t FP_COMP15_REPLACE:19;      /*!< bit:  0..18                                           */
    uint32_t :13;                       /*!< bit: 19..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP15_REPLACE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP15_REPLACE_OFFSET 0x33C          /**<  \brief (LPMCU_MISC_REGS_FP_COMP15_REPLACE offset) Flash Breakpoint Replace Register 14 */
#define LPMCU_MISC_REGS_FP_COMP15_REPLACE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP15_REPLACE reset_value) Flash Breakpoint Replace Register 14 */

#define LPMCU_MISC_REGS_FP_COMP15_REPLACE_FP_COMP15_REPLACE_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP15_REPLACE)                          */
#define LPMCU_MISC_REGS_FP_COMP15_REPLACE_FP_COMP15_REPLACE_Msk (0x7FFFFul << LPMCU_MISC_REGS_FP_COMP15_REPLACE_FP_COMP15_REPLACE_Pos)
#define LPMCU_MISC_REGS_FP_COMP15_REPLACE_FP_COMP15_REPLACE(value) (LPMCU_MISC_REGS_FP_COMP15_REPLACE_FP_COMP15_REPLACE_Msk & ((value) << LPMCU_MISC_REGS_FP_COMP15_REPLACE_FP_COMP15_REPLACE_Pos))  
#define LPMCU_MISC_REGS_FP_COMP15_REPLACE_MASK 0x7FFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP15_REPLACE) Register MASK */

/* -------- LPMCU_MISC_REGS_FP_COMP_ENABLE : (LPMCU_MISC_REGS Offset: 0x340) (R/W  16) Flash Breakpoint Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t CMP_0_EN:1;                /*!< bit:      0  Enable Compare 0                         */
    uint16_t CMP_1_EN:1;                /*!< bit:      1  Enable Compare 1                         */
    uint16_t CMP_2_EN:1;                /*!< bit:      2  Enable Compare 2                         */
    uint16_t CMP_3_EN:1;                /*!< bit:      3  Enable Compare 3                         */
    uint16_t CMP_4_EN:1;                /*!< bit:      4  Enable Compare 4                         */
    uint16_t CMP_5_EN:1;                /*!< bit:      5  Enable Compare 5                         */
    uint16_t CMP_6_EN:1;                /*!< bit:      6  Enable Compare 6                         */
    uint16_t CMP_7_EN:1;                /*!< bit:      7  Enable Compare 7                         */
    uint16_t CMP_8_EN:1;                /*!< bit:      8  Enable Compare 8                         */
    uint16_t CMP_9_EN:1;                /*!< bit:      9  Enable Compare 9                         */
    uint16_t CMP_10_EN:1;               /*!< bit:     10  Enable Compare 10                        */
    uint16_t CMP_11_EN:1;               /*!< bit:     11  Enable Compare 11                        */
    uint16_t CMP_12_EN:1;               /*!< bit:     12  Enable Compare 12                        */
    uint16_t CMP_13_EN:1;               /*!< bit:     13  Enable Compare 13                        */
    uint16_t CMP_14_EN:1;               /*!< bit:     14  Enable Compare 14                        */
    uint16_t CMP_15_EN:1;               /*!< bit:     15  Enable Compare 15                        */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_FP_COMP_ENABLE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_FP_COMP_ENABLE_OFFSET 0x340          /**<  \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE offset) Flash Breakpoint Enable Register */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE reset_value) Flash Breakpoint Enable Register */

#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_0_EN_Pos 0  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 0            */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_0_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_0_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_1_EN_Pos 1  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 1            */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_1_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_1_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_2_EN_Pos 2  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 2            */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_2_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_2_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_3_EN_Pos 3  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 3            */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_3_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_3_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_4_EN_Pos 4  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 4            */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_4_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_4_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_5_EN_Pos 5  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 5            */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_5_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_5_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_6_EN_Pos 6  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 6            */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_6_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_6_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_7_EN_Pos 7  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 7            */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_7_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_7_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_8_EN_Pos 8  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 8            */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_8_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_8_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_9_EN_Pos 9  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 9            */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_9_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_9_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_10_EN_Pos 10  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 10           */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_10_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_10_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_11_EN_Pos 11  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 11           */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_11_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_11_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_12_EN_Pos 12  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 12           */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_12_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_12_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_13_EN_Pos 13  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 13           */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_13_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_13_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_14_EN_Pos 14  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 14           */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_14_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_14_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_15_EN_Pos 15  /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Enable Compare 15           */
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_15_EN (0x1ul << LPMCU_MISC_REGS_FP_COMP_ENABLE_CMP_15_EN_Pos)  
#define LPMCU_MISC_REGS_FP_COMP_ENABLE_MASK   0xFFFFul    /**< \brief (LPMCU_MISC_REGS_FP_COMP_ENABLE) Register MASK */

/* -------- LPMCU_MISC_REGS_PMU_READ_REGS : (LPMCU_MISC_REGS Offset: 0x410) (R/  32) PMU Status Registers -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t READREG1:8;                /*!< bit:   0..7  PMU Read Register 1                      */
    uint32_t READREG2:8;                /*!< bit:  8..15  PMU Read Register 2                      */
    uint32_t READREG3:8;                /*!< bit: 16..23  PMU Read Register 3                      */
    uint32_t :8;                        /*!< bit: 24..31  Reserved                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_PMU_READ_REGS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_PMU_READ_REGS_OFFSET  0x410          /**<  \brief (LPMCU_MISC_REGS_PMU_READ_REGS offset) PMU Status Registers */
#define LPMCU_MISC_REGS_PMU_READ_REGS_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_PMU_READ_REGS reset_value) PMU Status Registers */

#define LPMCU_MISC_REGS_PMU_READ_REGS_READREG1_Pos 0  /**< \brief (LPMCU_MISC_REGS_PMU_READ_REGS) PMU Read Register 1          */
#define LPMCU_MISC_REGS_PMU_READ_REGS_READREG1_Msk (0xFFul << LPMCU_MISC_REGS_PMU_READ_REGS_READREG1_Pos)
#define LPMCU_MISC_REGS_PMU_READ_REGS_READREG1(value) (LPMCU_MISC_REGS_PMU_READ_REGS_READREG1_Msk & ((value) << LPMCU_MISC_REGS_PMU_READ_REGS_READREG1_Pos))  
#define LPMCU_MISC_REGS_PMU_READ_REGS_READREG2_Pos 8  /**< \brief (LPMCU_MISC_REGS_PMU_READ_REGS) PMU Read Register 2          */
#define LPMCU_MISC_REGS_PMU_READ_REGS_READREG2_Msk (0xFFul << LPMCU_MISC_REGS_PMU_READ_REGS_READREG2_Pos)
#define LPMCU_MISC_REGS_PMU_READ_REGS_READREG2(value) (LPMCU_MISC_REGS_PMU_READ_REGS_READREG2_Msk & ((value) << LPMCU_MISC_REGS_PMU_READ_REGS_READREG2_Pos))  
#define LPMCU_MISC_REGS_PMU_READ_REGS_READREG3_Pos 16  /**< \brief (LPMCU_MISC_REGS_PMU_READ_REGS) PMU Read Register 3          */
#define LPMCU_MISC_REGS_PMU_READ_REGS_READREG3_Msk (0xFFul << LPMCU_MISC_REGS_PMU_READ_REGS_READREG3_Pos)
#define LPMCU_MISC_REGS_PMU_READ_REGS_READREG3(value) (LPMCU_MISC_REGS_PMU_READ_REGS_READREG3_Msk & ((value) << LPMCU_MISC_REGS_PMU_READ_REGS_READREG3_Pos))  
#define LPMCU_MISC_REGS_PMU_READ_REGS_MASK    0xFFFFFFul    /**< \brief (LPMCU_MISC_REGS_PMU_READ_REGS) Register MASK */

/* -------- LPMCU_MISC_REGS_MS_GPIO : (LPMCU_MISC_REGS Offset: 0x414) (R/W  8) Control for Mixed Signal GPIOs -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PULL_TYPE_44:1;            /*!< bit:      0  Mixed Signal LP_GPIO_44 Pull Type Select. 1: PD, 0: PU. */
    uint8_t  PULL_TYPE_45:1;            /*!< bit:      1  Mixed Signal LP_GPIO_45 Pull Type Select. 1: PD, 0: PU. */
    uint8_t  PULL_TYPE_46:1;            /*!< bit:      2  Mixed Signal LP_GPIO_46 Pull Type Select. 1: PD, 0: PU. */
    uint8_t  PULL_TYPE_47:1;            /*!< bit:      3  Mixed Signal LP_GPIO_47 Pull Type Select. 1: PD, 0: PU. */
    uint8_t  PULL_ENABLE_44:1;          /*!< bit:      4  Active Low Pull Enable for Mixed Signal LP_GPIO_44 */
    uint8_t  PULL_ENABLE_45:1;          /*!< bit:      5  Active Low Pull Enable for Mixed Signal LP_GPIO_45 */
    uint8_t  PULL_ENABLE_46:1;          /*!< bit:      6  Active Low Pull Enable for Mixed Signal LP_GPIO_46 */
    uint8_t  PULL_ENABLE_47:1;          /*!< bit:      7  Active Low Pull Enable for Mixed Signal LP_GPIO_47 */
  } bit;                                /*!< Structure used for bit  access                        */
  struct {
    uint8_t  PULL_TYPE_:4;              /*!< bit:   0..3  Mixed Signal LP_GPIO_44 Pull Type Select. x: PD, x: PU. */
    uint8_t  PULL_ENABLE_:4;            /*!< bit:   4..7  Active Low Pull Enable for Mixed Signal LP_GPIO_47 */
  } vec;                                /*!< Structure used for vec  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_MS_GPIO_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_MS_GPIO_OFFSET        0x414          /**<  \brief (LPMCU_MISC_REGS_MS_GPIO offset) Control for Mixed Signal GPIOs */
#define LPMCU_MISC_REGS_MS_GPIO_RESETVALUE    0xF0ul         /**<  \brief (LPMCU_MISC_REGS_MS_GPIO reset_value) Control for Mixed Signal GPIOs */

#define LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE_44_Pos 0  /**< \brief (LPMCU_MISC_REGS_MS_GPIO) Mixed Signal LP_GPIO_44 Pull Type Select. 1: PD, 0: PU. */
#define LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE_44  (0x1ul << LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE_44_Pos)  
#define LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE_45_Pos 1  /**< \brief (LPMCU_MISC_REGS_MS_GPIO) Mixed Signal LP_GPIO_45 Pull Type Select. 1: PD, 0: PU. */
#define LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE_45  (0x1ul << LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE_45_Pos)  
#define LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE_46_Pos 2  /**< \brief (LPMCU_MISC_REGS_MS_GPIO) Mixed Signal LP_GPIO_46 Pull Type Select. 1: PD, 0: PU. */
#define LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE_46  (0x1ul << LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE_46_Pos)  
#define LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE_47_Pos 3  /**< \brief (LPMCU_MISC_REGS_MS_GPIO) Mixed Signal LP_GPIO_47 Pull Type Select. 1: PD, 0: PU. */
#define LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE_47  (0x1ul << LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE_47_Pos)  
#define LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE_44_Pos 4  /**< \brief (LPMCU_MISC_REGS_MS_GPIO) Active Low Pull Enable for Mixed Signal LP_GPIO_44 */
#define LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE_44 (0x1ul << LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE_44_Pos)  
#define LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE_45_Pos 5  /**< \brief (LPMCU_MISC_REGS_MS_GPIO) Active Low Pull Enable for Mixed Signal LP_GPIO_45 */
#define LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE_45 (0x1ul << LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE_45_Pos)  
#define LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE_46_Pos 6  /**< \brief (LPMCU_MISC_REGS_MS_GPIO) Active Low Pull Enable for Mixed Signal LP_GPIO_46 */
#define LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE_46 (0x1ul << LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE_46_Pos)  
#define LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE_47_Pos 7  /**< \brief (LPMCU_MISC_REGS_MS_GPIO) Active Low Pull Enable for Mixed Signal LP_GPIO_47 */
#define LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE_47 (0x1ul << LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE_47_Pos)  
#define LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE__Pos 0  /**< \brief (LPMCU_MISC_REGS_MS_GPIO) Mixed Signal LP_GPIO_44 Pull Type Select. x: PD, x: PU. */
#define LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE__Msk (0xFul << LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE__Pos)  
#define LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE_(value) (LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE__Msk & ((value) << LPMCU_MISC_REGS_MS_GPIO_PULL_TYPE__Pos))  
#define LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE__Pos 4  /**< \brief (LPMCU_MISC_REGS_MS_GPIO) Active Low Pull Enable for Mixed Signal LP_GPIO_47 */
#define LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE__Msk (0xFul << LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE__Pos)  
#define LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE_(value) (LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE__Msk & ((value) << LPMCU_MISC_REGS_MS_GPIO_PULL_ENABLE__Pos))  
#define LPMCU_MISC_REGS_MS_GPIO_MASK          0xFFul    /**< \brief (LPMCU_MISC_REGS_MS_GPIO) Register MASK */

/* -------- LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER : (LPMCU_MISC_REGS Offset: 0x420) (R/  32) Current value of the AON Sleep Timer (syncd to ARM clock) -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t AON_SLEEP_TIMER_COUNTER:32;  /*!< bit:  0..31                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint32_t reg;                         /*!< Type used for register access                         */
} LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER_OFFSET 0x420          /**<  \brief (LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER offset) Current value of the AON Sleep Timer (syncd to ARM clock) */
#define LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER_RESETVALUE 0x00ul         /**<  \brief (LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER reset_value) Current value of the AON Sleep Timer (syncd to ARM clock) */

#define LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER_AON_SLEEP_TIMER_COUNTER_Pos 0  /**< \brief (LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER)                    */
#define LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER_AON_SLEEP_TIMER_COUNTER_Msk (0xFFFFFFFFul << LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER_AON_SLEEP_TIMER_COUNTER_Pos)
#define LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER_AON_SLEEP_TIMER_COUNTER(value) (LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER_AON_SLEEP_TIMER_COUNTER_Msk & ((value) << LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER_AON_SLEEP_TIMER_COUNTER_Pos))  
#define LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER_MASK 0xFFFFFFFFul    /**< \brief (LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER) Register MASK */

/** \brief LPMCU_MISC_REGS hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* LPMCU Misc Registers */
  __I  LPMCU_MISC_REGS_LPMCU_CHIP_ID_Type LPMCU_CHIP_ID;  /**< \brief Offset: 0x00 (R/   32) The hard-coded ID for the chip. */
  __IO LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_0_Type LPMCU_GLOBAL_RESET_0; /**< \brief Offset: 0x04 (R/W  32) Active Low Global Reset */
  __IO LPMCU_MISC_REGS_LPMCU_GLOBAL_RESET_1_Type LPMCU_GLOBAL_RESET_1; /**< \brief Offset: 0x08 (R/W  16) Active Low Global Reset */
       RoReg8                         Reserved1[0x2];
  __IO LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_0_Type LPMCU_CLOCK_ENABLES_0; /**< \brief Offset: 0x0C (R/W  32) LPMCU Clock Enables */
  __IO LPMCU_MISC_REGS_LPMCU_CLOCK_ENABLES_1_Type LPMCU_CLOCK_ENABLES_1; /**< \brief Offset: 0x10 (R/W  32) LPMCU Clock Enables */
  __IO LPMCU_MISC_REGS_BTMCU_CONTROL_Type BTMCU_CONTROL;  /**< \brief Offset: 0x14 (R/W   8) Miscellaneous BLE control */
       RoReg8                         Reserved2[0x3];
  __IO LPMCU_MISC_REGS_LPMCU_CONTROL_Type LPMCU_CONTROL;  /**< \brief Offset: 0x18 (R/W  32) Miscellaneous LPMCU control */
  __IO LPMCU_MISC_REGS_LPMCU_MBIST_Type LPMCU_MBIST;    /**< \brief Offset: 0x1C (R/W   8) MBIST designation */
       RoReg8                         Reserved3[0x3];
  __IO LPMCU_MISC_REGS_BLE_CTRL_Type  BLE_CTRL;       /**< \brief Offset: 0x20 (R/W   8) BLE Control */
       RoReg8                         Reserved4[0x3];
  __IO LPMCU_MISC_REGS_MBIST_CONTROL_Type MBIST_CONTROL;  /**< \brief Offset: 0x24 (R/W  32) MBIST Control Register */
  __I  LPMCU_MISC_REGS_MBIST_STATUS_Type MBIST_STATUS;   /**< \brief Offset: 0x28 (R/   32) MBIST Status Register */
  __IO LPMCU_MISC_REGS_MBIST_SRAM_ALG_SEL_Type MBIST_SRAM_ALG_SEL; /**< \brief Offset: 0x2C (R/W  16) Enables MBIST algorithms */
       RoReg8                         Reserved5[0x2];
  __IO LPMCU_MISC_REGS_MBIST_BG_Type  MBIST_BG;       /**< \brief Offset: 0x30 (R/W  32) MBIST Background for MARCH2 algorithm (bits 31:0) */
       RoReg8                         Reserved6[0x4];
  __IO LPMCU_MISC_REGS_TEST_BUS_CONTROL_Type TEST_BUS_CONTROL; /**< \brief Offset: 0x38 (R/W   8) Controls all of the test bus functionality */
       RoReg8                         Reserved7[0x3];
  __I  LPMCU_MISC_REGS_WP3_MISR_DATAOUT_Type WP3_MISR_DATAOUT; /**< \brief Offset: 0x3C (R/   32) ROM MBIST Signature */
  __IO LPMCU_MISC_REGS_INVERT_OUTPUT_CTRL_Type INVERT_OUTPUT_CTRL; /**< \brief Offset: 0x40 (R/W  32) Invert Output Control */
  __IO LPMCU_MISC_REGS_PINMUX_SEL_0_Type PINMUX_SEL_0;   /**< \brief Offset: 0x44 (R/W  32) Pinmux select for LP_GPIO_0, LP_GPIO_1, LP_GPIO_2, LP_GPIO_3, LP_GPIO_4, LP_GPIO_5, LP_GPIO_6, LP_GPIO_7 */
  __IO LPMCU_MISC_REGS_PINMUX_SEL_1_Type PINMUX_SEL_1;   /**< \brief Offset: 0x48 (R/W  32) Pinmux select for LP_GPIO_8, LP_GPIO_9, LP_GPIO_10, LP_GPIO_11, LP_GPIO_12, LP_GPIO_13, LP_GPIO_14, LP_GPIO_15 */
  __IO LPMCU_MISC_REGS_PINMUX_SEL_2_Type PINMUX_SEL_2;   /**< \brief Offset: 0x4C (R/W  32) Pinmux select for LP_GPIO_16, LP_GPIO_17, LP_GPIO_18, LP_GPIO_19, LP_GPIO_20, LP_GPIO_21, LP_GPIO_22, LP_GPIO_23 */
  __IO LPMCU_MISC_REGS_PULL_ENABLE_Type PULL_ENABLE;    /**< \brief Offset: 0x50 (R/W  32) Active Low Pull Enables for LPMCU Pads */
  __IO LPMCU_MISC_REGS_RTYPE_PAD_0_Type RTYPE_PAD_0;    /**< \brief Offset: 0x54 (R/W  32) Controls the RTYPE (Pull Level) pad value for LPMCU Pads (0 = Pull Up) */
       RoReg8                         Reserved8[0x10];
  __IO LPMCU_MISC_REGS_PINMUX_SEL_3_Type PINMUX_SEL_3;   /**< \brief Offset: 0x68 (R/W  32) Pinmux select for LP_SIP_0, LP_SIP_1, LP_SIP_2, LP_SIP_3, LP_SIP_4 */
  __IO LPMCU_MISC_REGS_ISHAPE_PAD_3_Type ISHAPE_PAD_3;   /**< \brief Offset: 0x6C (R/W  32) Controls the ISHAPE pad value for LPMCU SIP Pads */
       RoReg8                         Reserved9[0x20];
  __IO LPMCU_MISC_REGS_LPMCU_CONTROL_2_Type LPMCU_CONTROL_2; /**< \brief Offset: 0x90 (R/W   8) Misc control for the LPMCU */
       RoReg8                         Reserved10[0xF];
  __IO LPMCU_MISC_REGS_SPIFLASH_VDDIO_CTRL_Type SPIFLASH_VDDIO_CTRL; /**< \brief Offset: 0xA0 (R/W   8) Control for VDDIO of SPI FLASH */
       RoReg8                         Reserved11[0x3];
  __IO LPMCU_MISC_REGS_SPIFLASH_BYPASS_Type SPIFLASH_BYPASS; /**< \brief Offset: 0xA4 (R/W   8) SPI FLASH Bypass */
       RoReg8                         Reserved12[0x1B];
  __IO LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_0_Type IRQ_MUX_IO_SEL_0; /**< \brief Offset: 0xC0 (R/W  32) ARM Cortex IRQ Mux Selection */
  __IO LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_1_Type IRQ_MUX_IO_SEL_1; /**< \brief Offset: 0xC4 (R/W  32) ARM Cortex IRQ Mux Selection */
  __IO LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_2_Type IRQ_MUX_IO_SEL_2; /**< \brief Offset: 0xC8 (R/W  32) ARM Cortex IRQ Mux Selection */
  __IO LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_3_Type IRQ_MUX_IO_SEL_3; /**< \brief Offset: 0xCC (R/W  32) ARM Cortex IRQ Mux Selection */
  __IO LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_4_Type IRQ_MUX_IO_SEL_4; /**< \brief Offset: 0xD0 (R/W  32) ARM Cortex IRQ Mux Selection */
  __IO LPMCU_MISC_REGS_IRQ_MUX_IO_SEL_5_Type IRQ_MUX_IO_SEL_5; /**< \brief Offset: 0xD4 (R/W   8) ARM Cortex IRQ Mux Selection */
       RoReg8                         Reserved13[0x8B];
  __IO LPMCU_MISC_REGS_PWM_1_CONTROL_Type PWM_1_CONTROL;  /**< \brief Offset: 0x160 (R/W  32) PWM 1 Control Register */
  __IO LPMCU_MISC_REGS_PWM_2_CONTROL_Type PWM_2_CONTROL;  /**< \brief Offset: 0x164 (R/W  32) PWM 2 Control Register */
  __IO LPMCU_MISC_REGS_PWM_3_CONTROL_Type PWM_3_CONTROL;  /**< \brief Offset: 0x168 (R/W  32) PWM 3 Control Register */
  __IO LPMCU_MISC_REGS_PWM_4_CONTROL_Type PWM_4_CONTROL;  /**< \brief Offset: 0x16C (R/W  32) PWM 4 Control Register */
  __I  LPMCU_MISC_REGS_MBIST_DUAL_STATUS_Type MBIST_DUAL_STATUS; /**< \brief Offset: 0x170 (R/   32) Reflects the status of MBIST from lpmcu and btmcu */
       RoReg8                         Reserved14[0x14];
  __IO LPMCU_MISC_REGS_DUALTIMER_CTRL_Type DUALTIMER_CTRL; /**< \brief Offset: 0x188 (R/W   8) Dual Timer Control */
       RoReg8                         Reserved15[0x7];
  __IO LPMCU_MISC_REGS_ARM_SLEEP_WAKEUP_CTRL_Type ARM_SLEEP_WAKEUP_CTRL; /**< \brief Offset: 0x190 (R/W  32) Sleep and Wakeup Control for the AON Power Sequencer */
       RoReg8                         Reserved16[0xC];
  __IO LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_0_Type MEGA_MUX_IO_SEL_0; /**< \brief Offset: 0x1A0 (R/W  32) Mega Mux Selection */
  __IO LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_1_Type MEGA_MUX_IO_SEL_1; /**< \brief Offset: 0x1A4 (R/W  32) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
  __IO LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_2_Type MEGA_MUX_IO_SEL_2; /**< \brief Offset: 0x1A8 (R/W  32) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
  __IO LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_3_Type MEGA_MUX_IO_SEL_3; /**< \brief Offset: 0x1AC (R/W  32) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
  __IO LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_4_Type MEGA_MUX_IO_SEL_4; /**< \brief Offset: 0x1B0 (R/W  32) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
  __IO LPMCU_MISC_REGS_MEGA_MUX_IO_SEL_5_Type MEGA_MUX_IO_SEL_5; /**< \brief Offset: 0x1B4 (R/W  32) Mega Mux Selection (Refer to Mega_Mux_IO Spreadsheet) */
       RoReg8                         Reserved17[0x8];
  __IO LPMCU_MISC_REGS_SENS_ADC_CLK_CTRL_Type SENS_ADC_CLK_CTRL; /**< \brief Offset: 0x1C0 (R/W  32) Clock control for the Sensor ADC */
  __I  LPMCU_MISC_REGS_SENS_ADC_RAW_STATUS_Type SENS_ADC_RAW_STATUS; /**< \brief Offset: 0x1C4 (R/   32) Raw Status from the Sensor ADC */
  __I  LPMCU_MISC_REGS_SENS_ADC_CH0_DATA_Type SENS_ADC_CH0_DATA; /**< \brief Offset: 0x1C8 (R/   16) Current data of the Sensor ADC for Channel 0 */
       RoReg8                         Reserved18[0x2];
  __I  LPMCU_MISC_REGS_SENS_ADC_CH1_DATA_Type SENS_ADC_CH1_DATA; /**< \brief Offset: 0x1CC (R/   16) Current data of the Sensor ADC for Channel 1 */
       RoReg8                         Reserved19[0x2];
  __I  LPMCU_MISC_REGS_SENS_ADC_CH2_DATA_Type SENS_ADC_CH2_DATA; /**< \brief Offset: 0x1D0 (R/   16) Current data of the Sensor ADC for Channel 2 */
       RoReg8                         Reserved20[0x2];
  __I  LPMCU_MISC_REGS_SENS_ADC_CH3_DATA_Type SENS_ADC_CH3_DATA; /**< \brief Offset: 0x1D4 (R/   16) Current data of the Sensor ADC for Channel 3 */
       RoReg8                         Reserved21[0x12];
  __IO LPMCU_MISC_REGS_IRQ_CTRL_Type  IRQ_CTRL;       /**< \brief Offset: 0x1E8 (R/W  16) Configure the IRQ inputs to the system as either Rising Edge or Level Shift */
       RoReg8                         Reserved22[0x2];
  __I  LPMCU_MISC_REGS_IRQ_STS_Type   IRQ_STS;        /**< \brief Offset: 0x1EC (R/    8) Read the raw (no level or rise detect) IRQ inputs to the system from the designated cores */
       RoReg8                         Reserved23[0x13];
  __IO LPMCU_MISC_REGS_MSEMI_MEM_CTRL_Type MSEMI_MEM_CTRL; /**< \brief Offset: 0x200 (R/W  32) Control the rwm, rm and wm on the Mobile Semi Memories */
  __IO LPMCU_MISC_REGS_EFUSE_1_STATUS_3_Type EFUSE_1_STATUS_3; /**< \brief Offset: 0x204 (R/W  32) EFUSE_1_3 Status */
       RoReg8                         Reserved24[0x8];
  __IO LPMCU_MISC_REGS_LPMCU_FORCE_CONTROL_Type LPMCU_FORCE_CONTROL; /**< \brief Offset: 0x210 (R/W  16) Miscellaneous Force control values for LPMCU */
       RoReg8                         Reserved25[0x2];
  __I  LPMCU_MISC_REGS_ARM_IRQ_STATUS_0_Type ARM_IRQ_STATUS_0; /**< \brief Offset: 0x214 (R/   32) ARM Cortex M0 IRQ Status */
  __I  LPMCU_MISC_REGS_ARM_IRQ_STATUS_1_Type ARM_IRQ_STATUS_1; /**< \brief Offset: 0x218 (R/   32) ARM Cortex M0 IRQ Status */
       RoReg8                         Reserved26[0x24];
  __IO LPMCU_MISC_REGS_BLE_DEEP_SLEEP_ENABLES_Type BLE_DEEP_SLEEP_ENABLES; /**< \brief Offset: 0x240 (R/W   8) BLE Deep Sleep Enables */
       RoReg8                         Reserved27[0x3];
  __IO LPMCU_MISC_REGS_DEEP_SLEEP_HW_TIMER_CORR_Type DEEP_SLEEP_HW_TIMER_CORR; /**< \brief Offset: 0x244 (R/W  32) Configures the HW auto correction algorithm of the fine/base timers after wakeup from deep sleep */
       RoReg8                         Reserved28[0xC];
  __IO LPMCU_MISC_REGS_REMAP_IDRAM1_BASE_ADDR_Type REMAP_IDRAM1_BASE_ADDR; /**< \brief Offset: 0x254 (R/W  32) ARM Cortex M0 idram 1 remap base addr */
  __IO LPMCU_MISC_REGS_REMAP_IDRAM1_END_ADDR_Type REMAP_IDRAM1_END_ADDR; /**< \brief Offset: 0x258 (R/W  32) ARM Cortex M0 idram 1 remap end addr */
  __IO LPMCU_MISC_REGS_REMAP_IDRAM2_BASE_ADDR_Type REMAP_IDRAM2_BASE_ADDR; /**< \brief Offset: 0x25C (R/W  32) ARM Cortex M0 idram 2 remap base addr */
  __IO LPMCU_MISC_REGS_REMAP_IDRAM2_END_ADDR_Type REMAP_IDRAM2_END_ADDR; /**< \brief Offset: 0x260 (R/W  32) ARM Cortex M0 idram 2 remap end addr */
  __IO LPMCU_MISC_REGS_REMAP_BOOT_BASE_ADDR_Type REMAP_BOOT_BASE_ADDR; /**< \brief Offset: 0x264 (R/W  32) ARM Cortex M0 bootrom remap base addr */
  __IO LPMCU_MISC_REGS_REMAP_BOOT_END_ADDR_Type REMAP_BOOT_END_ADDR; /**< \brief Offset: 0x268 (R/W  32) ARM Cortex M0 bootrom remap end addr */
       RoReg8                         Reserved29[0x14];
  __I  LPMCU_MISC_REGS_QUAD_DEC_IRQS_Type QUAD_DEC_IRQS;  /**< \brief Offset: 0x280 (R/    8) Reflects the IRQ status of the Quad Decoders */
       RoReg8                         Reserved30[0x3];
  __I  LPMCU_MISC_REGS_QUAD_DEC_1_STATUS_Type QUAD_DEC_1_STATUS; /**< \brief Offset: 0x284 (R/   16) Current status of Quad Decoder 1 */
       RoReg8                         Reserved31[0x2];
  __I  LPMCU_MISC_REGS_QUAD_DEC_2_STATUS_Type QUAD_DEC_2_STATUS; /**< \brief Offset: 0x288 (R/   16) Current status of Quad Decoder 2 */
       RoReg8                         Reserved32[0x2];
  __I  LPMCU_MISC_REGS_QUAD_DEC_3_STATUS_Type QUAD_DEC_3_STATUS; /**< \brief Offset: 0x28C (R/   16) Current status of Quad Decoder 3 */
       RoReg8                         Reserved33[0x2];
  __IO LPMCU_MISC_REGS_QUAD_DEC_1_THRESHOLD_Type QUAD_DEC_1_THRESHOLD; /**< \brief Offset: 0x290 (R/W  32) Thresholds for Quad Decoder 1 */
  __IO LPMCU_MISC_REGS_QUAD_DEC_1_CTRL_Type QUAD_DEC_1_CTRL; /**< \brief Offset: 0x294 (R/W   8) Control for Quad Decoder 1 */
       RoReg8                         Reserved34[0xB];
  __IO LPMCU_MISC_REGS_QUAD_DEC_2_THRESHOLD_Type QUAD_DEC_2_THRESHOLD; /**< \brief Offset: 0x2A0 (R/W  32) Thresholds for Quad Decoder 2 */
  __IO LPMCU_MISC_REGS_QUAD_DEC_2_CTRL_Type QUAD_DEC_2_CTRL; /**< \brief Offset: 0x2A4 (R/W   8) Control for Quad Decoder 2 */
       RoReg8                         Reserved35[0xB];
  __IO LPMCU_MISC_REGS_QUAD_DEC_3_THRESHOLD_Type QUAD_DEC_3_THRESHOLD; /**< \brief Offset: 0x2B0 (R/W  32) Thresholds for Quad Decoder 3 */
  __IO LPMCU_MISC_REGS_QUAD_DEC_3_CTRL_Type QUAD_DEC_3_CTRL; /**< \brief Offset: 0x2B4 (R/W   8) Control for Quad Decoder 3 */
       RoReg8                         Reserved36[0xB];
  __IO LPMCU_MISC_REGS_FP_COMP0_COMP_Type FP_COMP0_COMP;  /**< \brief Offset: 0x2C0 (R/W  32) Flash Breakpoint Compare Register 0 */
  __IO LPMCU_MISC_REGS_FP_COMP1_COMP_Type FP_COMP1_COMP;  /**< \brief Offset: 0x2C4 (R/W  32) Flash Breakpoint Compare Register 1 */
  __IO LPMCU_MISC_REGS_FP_COMP2_COMP_Type FP_COMP2_COMP;  /**< \brief Offset: 0x2C8 (R/W  32) Flash Breakpoint Compare Register 2 */
  __IO LPMCU_MISC_REGS_FP_COMP3_COMP_Type FP_COMP3_COMP;  /**< \brief Offset: 0x2CC (R/W  32) Flash Breakpoint Compare Register 3 */
  __IO LPMCU_MISC_REGS_FP_COMP4_COMP_Type FP_COMP4_COMP;  /**< \brief Offset: 0x2D0 (R/W  32) Flash Breakpoint Compare Register 4 */
  __IO LPMCU_MISC_REGS_FP_COMP5_COMP_Type FP_COMP5_COMP;  /**< \brief Offset: 0x2D4 (R/W  32) Flash Breakpoint Compare Register 5 */
  __IO LPMCU_MISC_REGS_FP_COMP6_COMP_Type FP_COMP6_COMP;  /**< \brief Offset: 0x2D8 (R/W  32) Flash Breakpoint Compare Register 6 */
  __IO LPMCU_MISC_REGS_FP_COMP7_COMP_Type FP_COMP7_COMP;  /**< \brief Offset: 0x2DC (R/W  32) Flash Breakpoint Compare Register 7 */
  __IO LPMCU_MISC_REGS_FP_COMP8_COMP_Type FP_COMP8_COMP;  /**< \brief Offset: 0x2E0 (R/W  32) Flash Breakpoint Compare Register 8 */
  __IO LPMCU_MISC_REGS_FP_COMP9_COMP_Type FP_COMP9_COMP;  /**< \brief Offset: 0x2E4 (R/W  32) Flash Breakpoint Compare Register 9 */
  __IO LPMCU_MISC_REGS_FP_COMP10_COMP_Type FP_COMP10_COMP; /**< \brief Offset: 0x2E8 (R/W  32) Flash Breakpoint Compare Register 10 */
  __IO LPMCU_MISC_REGS_FP_COMP11_COMP_Type FP_COMP11_COMP; /**< \brief Offset: 0x2EC (R/W  32) Flash Breakpoint Compare Register 11 */
  __IO LPMCU_MISC_REGS_FP_COMP12_COMP_Type FP_COMP12_COMP; /**< \brief Offset: 0x2F0 (R/W  32) Flash Breakpoint Compare Register 12 */
  __IO LPMCU_MISC_REGS_FP_COMP13_COMP_Type FP_COMP13_COMP; /**< \brief Offset: 0x2F4 (R/W  32) Flash Breakpoint Compare Register 13 */
  __IO LPMCU_MISC_REGS_FP_COMP14_COMP_Type FP_COMP14_COMP; /**< \brief Offset: 0x2F8 (R/W  32) Flash Breakpoint Compare Register 14 */
  __IO LPMCU_MISC_REGS_FP_COMP15_COMP_Type FP_COMP15_COMP; /**< \brief Offset: 0x2FC (R/W  32) Flash Breakpoint Compare Register 15 */
  __IO LPMCU_MISC_REGS_FP_COMP0_REPLACE_Type FP_COMP0_REPLACE; /**< \brief Offset: 0x300 (R/W  32) Flash Breakpoint Replace Register 0 */
  __IO LPMCU_MISC_REGS_FP_COMP1_REPLACE_Type FP_COMP1_REPLACE; /**< \brief Offset: 0x304 (R/W  32) Flash Breakpoint Replace Register 1 */
  __IO LPMCU_MISC_REGS_FP_COMP2_REPLACE_Type FP_COMP2_REPLACE; /**< \brief Offset: 0x308 (R/W  32) Flash Breakpoint Replace Register 2 */
  __IO LPMCU_MISC_REGS_FP_COMP3_REPLACE_Type FP_COMP3_REPLACE; /**< \brief Offset: 0x30C (R/W  32) Flash Breakpoint Replace Register 3 */
  __IO LPMCU_MISC_REGS_FP_COMP4_REPLACE_Type FP_COMP4_REPLACE; /**< \brief Offset: 0x310 (R/W  32) Flash Breakpoint Replace Register 4 */
  __IO LPMCU_MISC_REGS_FP_COMP5_REPLACE_Type FP_COMP5_REPLACE; /**< \brief Offset: 0x314 (R/W  32) Flash Breakpoint Replace Register 5 */
  __IO LPMCU_MISC_REGS_FP_COMP6_REPLACE_Type FP_COMP6_REPLACE; /**< \brief Offset: 0x318 (R/W  32) Flash Breakpoint Replace Register 6 */
  __IO LPMCU_MISC_REGS_FP_COMP7_REPLACE_Type FP_COMP7_REPLACE; /**< \brief Offset: 0x31C (R/W  32) Flash Breakpoint Replace Register 7 */
  __IO LPMCU_MISC_REGS_FP_COMP8_REPLACE_Type FP_COMP8_REPLACE; /**< \brief Offset: 0x320 (R/W  32) Flash Breakpoint Replace Register 8 */
  __IO LPMCU_MISC_REGS_FP_COMP9_REPLACE_Type FP_COMP9_REPLACE; /**< \brief Offset: 0x324 (R/W  32) Flash Breakpoint Replace Register 9 */
  __IO LPMCU_MISC_REGS_FP_COMP10_REPLACE_Type FP_COMP10_REPLACE; /**< \brief Offset: 0x328 (R/W  32) Flash Breakpoint Replace Register 10 */
  __IO LPMCU_MISC_REGS_FP_COMP11_REPLACE_Type FP_COMP11_REPLACE; /**< \brief Offset: 0x32C (R/W  32) Flash Breakpoint Replace Register 11 */
  __IO LPMCU_MISC_REGS_FP_COMP12_REPLACE_Type FP_COMP12_REPLACE; /**< \brief Offset: 0x330 (R/W  32) Flash Breakpoint Replace Register 12 */
  __IO LPMCU_MISC_REGS_FP_COMP13_REPLACE_Type FP_COMP13_REPLACE; /**< \brief Offset: 0x334 (R/W  32) Flash Breakpoint Replace Register 13 */
  __IO LPMCU_MISC_REGS_FP_COMP14_REPLACE_Type FP_COMP14_REPLACE; /**< \brief Offset: 0x338 (R/W  32) Flash Breakpoint Replace Register 14 */
  __IO LPMCU_MISC_REGS_FP_COMP15_REPLACE_Type FP_COMP15_REPLACE; /**< \brief Offset: 0x33C (R/W  32) Flash Breakpoint Replace Register 14 */
  __IO LPMCU_MISC_REGS_FP_COMP_ENABLE_Type FP_COMP_ENABLE; /**< \brief Offset: 0x340 (R/W  16) Flash Breakpoint Enable Register */
       RoReg8                         Reserved37[0xCE];
  __I  LPMCU_MISC_REGS_PMU_READ_REGS_Type PMU_READ_REGS;  /**< \brief Offset: 0x410 (R/   32) PMU Status Registers */
  __IO LPMCU_MISC_REGS_MS_GPIO_Type   MS_GPIO;        /**< \brief Offset: 0x414 (R/W   8) Control for Mixed Signal GPIOs */
       RoReg8                         Reserved38[0xB];
  __I  LPMCU_MISC_REGS_AON_SLEEP_TIMER_COUNTER_Type AON_SLEEP_TIMER_COUNTER; /**< \brief Offset: 0x420 (R/   32) Current value of the AON Sleep Timer (syncd to ARM clock) */
} LpmcuMiscRegs;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_LPMCU_MISC_REGS_COMPONENT_ */
