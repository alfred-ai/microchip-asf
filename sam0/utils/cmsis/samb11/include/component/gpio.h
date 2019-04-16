/**
 * \file
 *
 * \brief Component description for GPIO
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

#ifndef _SAMB11_GPIO_COMPONENT_
#define _SAMB11_GPIO_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR GPIO */
/* ========================================================================== */
/** \addtogroup SAMB11_GPIO GPIO Controller */
/*@{*/

#define GPIO_G1234
#define REV_GPIO                         0x100

/* -------- GPIO_DATA : (GPIO Offset: 0x00) (R/W  16) Data Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t VALUE:16;                  /*!< bit:  0..15  Read = Sampled at Pin : Write = To Output Data Register */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} GPIO_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_DATA_OFFSET                      0x00           /**<  \brief (GPIO_DATA offset) Data Value */
#define GPIO_DATA_RESETVALUE                  0x00ul         /**<  \brief (GPIO_DATA reset_value) Data Value */

#define GPIO_DATA_VALUE_Pos                   0  /**< \brief (GPIO_DATA) Read = Sampled at Pin : Write = To Output Data Register */
#define GPIO_DATA_VALUE_Msk                   (0xFFFFul << GPIO_DATA_VALUE_Pos)
#define GPIO_DATA_VALUE(value)                (GPIO_DATA_VALUE_Msk & ((value) << GPIO_DATA_VALUE_Pos))  
#define GPIO_DATA_MASK                        0xFFFFul    /**< \brief (GPIO_DATA) Register MASK */

/* -------- GPIO_DATAOUT : (GPIO Offset: 0x04) (R/W  16) Data Output Register Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t VALUE:16;                  /*!< bit:  0..15  Read = Current Value of Data Output Register : Write = To Output Data Register */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} GPIO_DATAOUT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_DATAOUT_OFFSET                   0x04           /**<  \brief (GPIO_DATAOUT offset) Data Output Register Value */
#define GPIO_DATAOUT_RESETVALUE               0x00ul         /**<  \brief (GPIO_DATAOUT reset_value) Data Output Register Value */

#define GPIO_DATAOUT_VALUE_Pos                0  /**< \brief (GPIO_DATAOUT) Read = Current Value of Data Output Register : Write = To Output Data Register */
#define GPIO_DATAOUT_VALUE_Msk                (0xFFFFul << GPIO_DATAOUT_VALUE_Pos)
#define GPIO_DATAOUT_VALUE(value)             (GPIO_DATAOUT_VALUE_Msk & ((value) << GPIO_DATAOUT_VALUE_Pos))  
#define GPIO_DATAOUT_MASK                     0xFFFFul    /**< \brief (GPIO_DATAOUT) Register MASK */

/* -------- GPIO_OUTENSET : (GPIO Offset: 0x10) (R/W  16) Output Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t VALUE:16;                  /*!< bit:  0..15  Write 1 to set the output enable bit     */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} GPIO_OUTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_OUTENSET_OFFSET                  0x10           /**<  \brief (GPIO_OUTENSET offset) Output Enable Set */
#define GPIO_OUTENSET_RESETVALUE              0x00ul         /**<  \brief (GPIO_OUTENSET reset_value) Output Enable Set */

#define GPIO_OUTENSET_VALUE_Pos               0  /**< \brief (GPIO_OUTENSET) Write 1 to set the output enable bit         */
#define GPIO_OUTENSET_VALUE_Msk               (0xFFFFul << GPIO_OUTENSET_VALUE_Pos)
#define GPIO_OUTENSET_VALUE(value)            (GPIO_OUTENSET_VALUE_Msk & ((value) << GPIO_OUTENSET_VALUE_Pos))  
#define GPIO_OUTENSET_MASK                    0xFFFFul    /**< \brief (GPIO_OUTENSET) Register MASK */

/* -------- GPIO_OUTENCLR : (GPIO Offset: 0x14) (R/W  16) Output Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t VALUE:16;                  /*!< bit:  0..15  Write 1 to clear the output enable bit   */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} GPIO_OUTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_OUTENCLR_OFFSET                  0x14           /**<  \brief (GPIO_OUTENCLR offset) Output Enable Clear */
#define GPIO_OUTENCLR_RESETVALUE              0x00ul         /**<  \brief (GPIO_OUTENCLR reset_value) Output Enable Clear */

#define GPIO_OUTENCLR_VALUE_Pos               0  /**< \brief (GPIO_OUTENCLR) Write 1 to clear the output enable bit       */
#define GPIO_OUTENCLR_VALUE_Msk               (0xFFFFul << GPIO_OUTENCLR_VALUE_Pos)
#define GPIO_OUTENCLR_VALUE(value)            (GPIO_OUTENCLR_VALUE_Msk & ((value) << GPIO_OUTENCLR_VALUE_Pos))  
#define GPIO_OUTENCLR_MASK                    0xFFFFul    /**< \brief (GPIO_OUTENCLR) Register MASK */

/* -------- GPIO_INTENSET : (GPIO Offset: 0x20) (R/W  16) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t VALUE:16;                  /*!< bit:  0..15  Write 1 to set the enable bit            */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} GPIO_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_INTENSET_OFFSET                  0x20           /**<  \brief (GPIO_INTENSET offset) Interrupt Enable Set */
#define GPIO_INTENSET_RESETVALUE              0x00ul         /**<  \brief (GPIO_INTENSET reset_value) Interrupt Enable Set */

#define GPIO_INTENSET_VALUE_Pos               0  /**< \brief (GPIO_INTENSET) Write 1 to set the enable bit                */
#define GPIO_INTENSET_VALUE_Msk               (0xFFFFul << GPIO_INTENSET_VALUE_Pos)
#define GPIO_INTENSET_VALUE(value)            (GPIO_INTENSET_VALUE_Msk & ((value) << GPIO_INTENSET_VALUE_Pos))  
#define GPIO_INTENSET_MASK                    0xFFFFul    /**< \brief (GPIO_INTENSET) Register MASK */

/* -------- GPIO_INTENCLR : (GPIO Offset: 0x24) (R/W  16) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t VALUE:16;                  /*!< bit:  0..15  Write 1 to clear the enable bit          */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} GPIO_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_INTENCLR_OFFSET                  0x24           /**<  \brief (GPIO_INTENCLR offset) Interrupt Enable Clear */
#define GPIO_INTENCLR_RESETVALUE              0x00ul         /**<  \brief (GPIO_INTENCLR reset_value) Interrupt Enable Clear */

#define GPIO_INTENCLR_VALUE_Pos               0  /**< \brief (GPIO_INTENCLR) Write 1 to clear the enable bit              */
#define GPIO_INTENCLR_VALUE_Msk               (0xFFFFul << GPIO_INTENCLR_VALUE_Pos)
#define GPIO_INTENCLR_VALUE(value)            (GPIO_INTENCLR_VALUE_Msk & ((value) << GPIO_INTENCLR_VALUE_Pos))  
#define GPIO_INTENCLR_MASK                    0xFFFFul    /**< \brief (GPIO_INTENCLR) Register MASK */

/* -------- GPIO_INTTYPESET : (GPIO Offset: 0x28) (R/W  16) Interrupt Type Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t VALUE:16;                  /*!< bit:  0..15  Write 1 for edge                         */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} GPIO_INTTYPESET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_INTTYPESET_OFFSET                0x28           /**<  \brief (GPIO_INTTYPESET offset) Interrupt Type Set */
#define GPIO_INTTYPESET_RESETVALUE            0x00ul         /**<  \brief (GPIO_INTTYPESET reset_value) Interrupt Type Set */

#define GPIO_INTTYPESET_VALUE_Pos             0  /**< \brief (GPIO_INTTYPESET) Write 1 for edge                           */
#define GPIO_INTTYPESET_VALUE_Msk             (0xFFFFul << GPIO_INTTYPESET_VALUE_Pos)
#define GPIO_INTTYPESET_VALUE(value)          (GPIO_INTTYPESET_VALUE_Msk & ((value) << GPIO_INTTYPESET_VALUE_Pos))  
#define GPIO_INTTYPESET_MASK                  0xFFFFul    /**< \brief (GPIO_INTTYPESET) Register MASK */

/* -------- GPIO_INTTYPECLR : (GPIO Offset: 0x2c) (R/W  16) Interrupt Type Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t VALUE:16;                  /*!< bit:  0..15  Write 1 to clear the interrupt type      */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} GPIO_INTTYPECLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_INTTYPECLR_OFFSET                0x2C           /**<  \brief (GPIO_INTTYPECLR offset) Interrupt Type Clear */
#define GPIO_INTTYPECLR_RESETVALUE            0x00ul         /**<  \brief (GPIO_INTTYPECLR reset_value) Interrupt Type Clear */

#define GPIO_INTTYPECLR_VALUE_Pos             0  /**< \brief (GPIO_INTTYPECLR) Write 1 to clear the interrupt type        */
#define GPIO_INTTYPECLR_VALUE_Msk             (0xFFFFul << GPIO_INTTYPECLR_VALUE_Pos)
#define GPIO_INTTYPECLR_VALUE(value)          (GPIO_INTTYPECLR_VALUE_Msk & ((value) << GPIO_INTTYPECLR_VALUE_Pos))  
#define GPIO_INTTYPECLR_MASK                  0xFFFFul    /**< \brief (GPIO_INTTYPECLR) Register MASK */

/* -------- GPIO_INTPOLSET : (GPIO Offset: 0x30) (R/W  16) Polarity-level, edge IRQ Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t VALUE:16;                  /*!< bit:  0..15  Write 1 for HIGH level or rising edge    */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} GPIO_INTPOLSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_INTPOLSET_OFFSET                 0x30           /**<  \brief (GPIO_INTPOLSET offset) Polarity-level, edge IRQ Configuration */
#define GPIO_INTPOLSET_RESETVALUE             0x00ul         /**<  \brief (GPIO_INTPOLSET reset_value) Polarity-level, edge IRQ Configuration */

#define GPIO_INTPOLSET_VALUE_Pos              0  /**< \brief (GPIO_INTPOLSET) Write 1 for HIGH level or rising edge       */
#define GPIO_INTPOLSET_VALUE_Msk              (0xFFFFul << GPIO_INTPOLSET_VALUE_Pos)
#define GPIO_INTPOLSET_VALUE(value)           (GPIO_INTPOLSET_VALUE_Msk & ((value) << GPIO_INTPOLSET_VALUE_Pos))  
#define GPIO_INTPOLSET_MASK                   0xFFFFul    /**< \brief (GPIO_INTPOLSET) Register MASK */

/* -------- GPIO_INTPOLCLR : (GPIO Offset: 0x34) (R/W  16) IRQ Configuration Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t VALUE:16;                  /*!< bit:  0..15  Write 1 to Clear Interrupt Polarity Bit  */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} GPIO_INTPOLCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_INTPOLCLR_OFFSET                 0x34           /**<  \brief (GPIO_INTPOLCLR offset) IRQ Configuration Clear */
#define GPIO_INTPOLCLR_RESETVALUE             0x00ul         /**<  \brief (GPIO_INTPOLCLR reset_value) IRQ Configuration Clear */

#define GPIO_INTPOLCLR_VALUE_Pos              0  /**< \brief (GPIO_INTPOLCLR) Write 1 to Clear Interrupt Polarity Bit     */
#define GPIO_INTPOLCLR_VALUE_Msk              (0xFFFFul << GPIO_INTPOLCLR_VALUE_Pos)
#define GPIO_INTPOLCLR_VALUE(value)           (GPIO_INTPOLCLR_VALUE_Msk & ((value) << GPIO_INTPOLCLR_VALUE_Pos))  
#define GPIO_INTPOLCLR_MASK                   0xFFFFul    /**< \brief (GPIO_INTPOLCLR) Register MASK */

/* -------- GPIO_INTSTATUSCLEAR : (GPIO Offset: 0x38) (R/W  16) Interrupt Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint16_t VALUE:16;                  /*!< bit:  0..15  Write 1 to Clear Interrupt               */
  } bit;                                /*!< Structure used for bit  access                        */
  uint16_t reg;                         /*!< Type used for register access                         */
} GPIO_INTSTATUSCLEAR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_INTSTATUSCLEAR_OFFSET            0x38           /**<  \brief (GPIO_INTSTATUSCLEAR offset) Interrupt Status */
#define GPIO_INTSTATUSCLEAR_RESETVALUE        0x00ul         /**<  \brief (GPIO_INTSTATUSCLEAR reset_value) Interrupt Status */

#define GPIO_INTSTATUSCLEAR_VALUE_Pos         0  /**< \brief (GPIO_INTSTATUSCLEAR) Write 1 to Clear Interrupt             */
#define GPIO_INTSTATUSCLEAR_VALUE_Msk         (0xFFFFul << GPIO_INTSTATUSCLEAR_VALUE_Pos)
#define GPIO_INTSTATUSCLEAR_VALUE(value)      (GPIO_INTSTATUSCLEAR_VALUE_Msk & ((value) << GPIO_INTSTATUSCLEAR_VALUE_Pos))  
#define GPIO_INTSTATUSCLEAR_MASK              0xFFFFul    /**< \brief (GPIO_INTSTATUSCLEAR) Register MASK */

/* -------- GPIO_PID4 : (GPIO Offset: 0xfd0) (R/  8) Peripheral ID Register 4 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_C_CODE:4;           /*!< bit:   0..3  JEP106 C Code                            */
    uint8_t  BLOCK_COUNT:4;             /*!< bit:   4..7  Block Count                              */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} GPIO_PID4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PID4_OFFSET                      0xFD0          /**<  \brief (GPIO_PID4 offset) Peripheral ID Register 4 */
#define GPIO_PID4_RESETVALUE                  0x04ul         /**<  \brief (GPIO_PID4 reset_value) Peripheral ID Register 4 */

#define GPIO_PID4_JEP106_C_CODE_Pos           0  /**< \brief (GPIO_PID4) JEP106 C Code                                    */
#define GPIO_PID4_JEP106_C_CODE_Msk           (0xFul << GPIO_PID4_JEP106_C_CODE_Pos)
#define GPIO_PID4_JEP106_C_CODE(value)        (GPIO_PID4_JEP106_C_CODE_Msk & ((value) << GPIO_PID4_JEP106_C_CODE_Pos))  
#define GPIO_PID4_BLOCK_COUNT_Pos             4  /**< \brief (GPIO_PID4) Block Count                                      */
#define GPIO_PID4_BLOCK_COUNT_Msk             (0xFul << GPIO_PID4_BLOCK_COUNT_Pos)
#define GPIO_PID4_BLOCK_COUNT(value)          (GPIO_PID4_BLOCK_COUNT_Msk & ((value) << GPIO_PID4_BLOCK_COUNT_Pos))  
#define GPIO_PID4_MASK                        0xFFul    /**< \brief (GPIO_PID4) Register MASK */

/* -------- GPIO_PID5 : (GPIO Offset: 0xfd4) (R/  8) Peripheral ID Register 5 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PID5:8;                    /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} GPIO_PID5_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PID5_OFFSET                      0xFD4          /**<  \brief (GPIO_PID5 offset) Peripheral ID Register 5 */
#define GPIO_PID5_RESETVALUE                  0x00ul         /**<  \brief (GPIO_PID5 reset_value) Peripheral ID Register 5 */

#define GPIO_PID5_PID5_Pos                    0  /**< \brief (GPIO_PID5)                                                  */
#define GPIO_PID5_PID5_Msk                    (0xFFul << GPIO_PID5_PID5_Pos)
#define GPIO_PID5_PID5(value)                 (GPIO_PID5_PID5_Msk & ((value) << GPIO_PID5_PID5_Pos))  
#define GPIO_PID5_MASK                        0xFFul    /**< \brief (GPIO_PID5) Register MASK */

/* -------- GPIO_PID6 : (GPIO Offset: 0xfd8) (R/  8) Peripheral ID Register 6 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PID6:8;                    /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} GPIO_PID6_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PID6_OFFSET                      0xFD8          /**<  \brief (GPIO_PID6 offset) Peripheral ID Register 6 */
#define GPIO_PID6_RESETVALUE                  0x00ul         /**<  \brief (GPIO_PID6 reset_value) Peripheral ID Register 6 */

#define GPIO_PID6_PID6_Pos                    0  /**< \brief (GPIO_PID6)                                                  */
#define GPIO_PID6_PID6_Msk                    (0xFFul << GPIO_PID6_PID6_Pos)
#define GPIO_PID6_PID6(value)                 (GPIO_PID6_PID6_Msk & ((value) << GPIO_PID6_PID6_Pos))  
#define GPIO_PID6_MASK                        0xFFul    /**< \brief (GPIO_PID6) Register MASK */

/* -------- GPIO_PID7 : (GPIO Offset: 0xfdc) (R/  8) Peripheral ID Register 7 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PID7:8;                    /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} GPIO_PID7_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PID7_OFFSET                      0xFDC          /**<  \brief (GPIO_PID7 offset) Peripheral ID Register 7 */
#define GPIO_PID7_RESETVALUE                  0x00ul         /**<  \brief (GPIO_PID7 reset_value) Peripheral ID Register 7 */

#define GPIO_PID7_PID7_Pos                    0  /**< \brief (GPIO_PID7)                                                  */
#define GPIO_PID7_PID7_Msk                    (0xFFul << GPIO_PID7_PID7_Pos)
#define GPIO_PID7_PID7(value)                 (GPIO_PID7_PID7_Msk & ((value) << GPIO_PID7_PID7_Pos))  
#define GPIO_PID7_MASK                        0xFFul    /**< \brief (GPIO_PID7) Register MASK */

/* -------- GPIO_PID0 : (GPIO Offset: 0xfe0) (R/  8) Peripheral ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:8;             /*!< bit:   0..7  Part Number Bits 7:0                     */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} GPIO_PID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PID0_OFFSET                      0xFE0          /**<  \brief (GPIO_PID0 offset) Peripheral ID Register 0 */
#define GPIO_PID0_RESETVALUE                  0x20ul         /**<  \brief (GPIO_PID0 reset_value) Peripheral ID Register 0 */

#define GPIO_PID0_PART_NUMBER_Pos             0  /**< \brief (GPIO_PID0) Part Number Bits 7:0                             */
#define GPIO_PID0_PART_NUMBER_Msk             (0xFFul << GPIO_PID0_PART_NUMBER_Pos)
#define GPIO_PID0_PART_NUMBER(value)          (GPIO_PID0_PART_NUMBER_Msk & ((value) << GPIO_PID0_PART_NUMBER_Pos))  
#define GPIO_PID0_MASK                        0xFFul    /**< \brief (GPIO_PID0) Register MASK */

/* -------- GPIO_PID1 : (GPIO Offset: 0xfe4) (R/  8) Peripheral ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  PART_NUMBER:4;             /*!< bit:   0..3  Part Number Bits 11:8                    */
    uint8_t  JEP106_ID_3_0:4;           /*!< bit:   4..7  JEP106 ID Bits 3:0                       */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} GPIO_PID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PID1_OFFSET                      0xFE4          /**<  \brief (GPIO_PID1 offset) Peripheral ID Register 1 */
#define GPIO_PID1_RESETVALUE                  0xB8ul         /**<  \brief (GPIO_PID1 reset_value) Peripheral ID Register 1 */

#define GPIO_PID1_PART_NUMBER_Pos             0  /**< \brief (GPIO_PID1) Part Number Bits 11:8                            */
#define GPIO_PID1_PART_NUMBER_Msk             (0xFul << GPIO_PID1_PART_NUMBER_Pos)
#define GPIO_PID1_PART_NUMBER(value)          (GPIO_PID1_PART_NUMBER_Msk & ((value) << GPIO_PID1_PART_NUMBER_Pos))  
#define GPIO_PID1_JEP106_ID_3_0_Pos           4  /**< \brief (GPIO_PID1) JEP106 ID Bits 3:0                               */
#define GPIO_PID1_JEP106_ID_3_0_Msk           (0xFul << GPIO_PID1_JEP106_ID_3_0_Pos)
#define GPIO_PID1_JEP106_ID_3_0(value)        (GPIO_PID1_JEP106_ID_3_0_Msk & ((value) << GPIO_PID1_JEP106_ID_3_0_Pos))  
#define GPIO_PID1_MASK                        0xFFul    /**< \brief (GPIO_PID1) Register MASK */

/* -------- GPIO_PID2 : (GPIO Offset: 0xfe8) (R/  8) Peripheral ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  JEP106_ID_6_4:3;           /*!< bit:   0..2  JEP106 ID Bits 6:4                       */
    uint8_t  JEDEC_USED:1;              /*!< bit:      3  JEDEC Used                               */
    uint8_t  REVISION:4;                /*!< bit:   4..7  Revision                                 */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} GPIO_PID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PID2_OFFSET                      0xFE8          /**<  \brief (GPIO_PID2 offset) Peripheral ID Register 2 */
#define GPIO_PID2_RESETVALUE                  0x1Bul         /**<  \brief (GPIO_PID2 reset_value) Peripheral ID Register 2 */

#define GPIO_PID2_JEP106_ID_6_4_Pos           0  /**< \brief (GPIO_PID2) JEP106 ID Bits 6:4                               */
#define GPIO_PID2_JEP106_ID_6_4_Msk           (0x7ul << GPIO_PID2_JEP106_ID_6_4_Pos)
#define GPIO_PID2_JEP106_ID_6_4(value)        (GPIO_PID2_JEP106_ID_6_4_Msk & ((value) << GPIO_PID2_JEP106_ID_6_4_Pos))  
#define GPIO_PID2_JEDEC_USED_Pos              3  /**< \brief (GPIO_PID2) JEDEC Used                                       */
#define GPIO_PID2_JEDEC_USED                  (0x1ul << GPIO_PID2_JEDEC_USED_Pos)  
#define GPIO_PID2_REVISION_Pos                4  /**< \brief (GPIO_PID2) Revision                                         */
#define GPIO_PID2_REVISION_Msk                (0xFul << GPIO_PID2_REVISION_Pos)
#define GPIO_PID2_REVISION(value)             (GPIO_PID2_REVISION_Msk & ((value) << GPIO_PID2_REVISION_Pos))  
#define GPIO_PID2_MASK                        0xFFul    /**< \brief (GPIO_PID2) Register MASK */

/* -------- GPIO_PID3 : (GPIO Offset: 0xfec) (R/  8) Peripheral ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CUSTOMER_MOD_NUMBER:4;     /*!< bit:   0..3  Customer Modification Number             */
    uint8_t  ECO_REV_NUMBER:4;          /*!< bit:   4..7  ECO Revision Number                      */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} GPIO_PID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_PID3_OFFSET                      0xFEC          /**<  \brief (GPIO_PID3 offset) Peripheral ID Register 3 */
#define GPIO_PID3_RESETVALUE                  0x00ul         /**<  \brief (GPIO_PID3 reset_value) Peripheral ID Register 3 */

#define GPIO_PID3_CUSTOMER_MOD_NUMBER_Pos     0  /**< \brief (GPIO_PID3) Customer Modification Number                     */
#define GPIO_PID3_CUSTOMER_MOD_NUMBER_Msk     (0xFul << GPIO_PID3_CUSTOMER_MOD_NUMBER_Pos)
#define GPIO_PID3_CUSTOMER_MOD_NUMBER(value)  (GPIO_PID3_CUSTOMER_MOD_NUMBER_Msk & ((value) << GPIO_PID3_CUSTOMER_MOD_NUMBER_Pos))  
#define GPIO_PID3_ECO_REV_NUMBER_Pos          4  /**< \brief (GPIO_PID3) ECO Revision Number                              */
#define GPIO_PID3_ECO_REV_NUMBER_Msk          (0xFul << GPIO_PID3_ECO_REV_NUMBER_Pos)
#define GPIO_PID3_ECO_REV_NUMBER(value)       (GPIO_PID3_ECO_REV_NUMBER_Msk & ((value) << GPIO_PID3_ECO_REV_NUMBER_Pos))  
#define GPIO_PID3_MASK                        0xFFul    /**< \brief (GPIO_PID3) Register MASK */

/* -------- GPIO_CID0 : (GPIO Offset: 0xff0) (R/  8) Component ID Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CID0:8;                    /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} GPIO_CID0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_CID0_OFFSET                      0xFF0          /**<  \brief (GPIO_CID0 offset) Component ID Register 0 */
#define GPIO_CID0_RESETVALUE                  0x0Dul         /**<  \brief (GPIO_CID0 reset_value) Component ID Register 0 */

#define GPIO_CID0_CID0_Pos                    0  /**< \brief (GPIO_CID0)                                                  */
#define GPIO_CID0_CID0_Msk                    (0xFFul << GPIO_CID0_CID0_Pos)
#define GPIO_CID0_CID0(value)                 (GPIO_CID0_CID0_Msk & ((value) << GPIO_CID0_CID0_Pos))  
#define GPIO_CID0_MASK                        0xFFul    /**< \brief (GPIO_CID0) Register MASK */

/* -------- GPIO_CID1 : (GPIO Offset: 0xff4) (R/  8) Component ID Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CID1:8;                    /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} GPIO_CID1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_CID1_OFFSET                      0xFF4          /**<  \brief (GPIO_CID1 offset) Component ID Register 1 */
#define GPIO_CID1_RESETVALUE                  0xF0ul         /**<  \brief (GPIO_CID1 reset_value) Component ID Register 1 */

#define GPIO_CID1_CID1_Pos                    0  /**< \brief (GPIO_CID1)                                                  */
#define GPIO_CID1_CID1_Msk                    (0xFFul << GPIO_CID1_CID1_Pos)
#define GPIO_CID1_CID1(value)                 (GPIO_CID1_CID1_Msk & ((value) << GPIO_CID1_CID1_Pos))  
#define GPIO_CID1_MASK                        0xFFul    /**< \brief (GPIO_CID1) Register MASK */

/* -------- GPIO_CID2 : (GPIO Offset: 0xff8) (R/  8) Component ID Register 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CID2:8;                    /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} GPIO_CID2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_CID2_OFFSET                      0xFF8          /**<  \brief (GPIO_CID2 offset) Component ID Register 2 */
#define GPIO_CID2_RESETVALUE                  0x05ul         /**<  \brief (GPIO_CID2 reset_value) Component ID Register 2 */

#define GPIO_CID2_CID2_Pos                    0  /**< \brief (GPIO_CID2)                                                  */
#define GPIO_CID2_CID2_Msk                    (0xFFul << GPIO_CID2_CID2_Pos)
#define GPIO_CID2_CID2(value)                 (GPIO_CID2_CID2_Msk & ((value) << GPIO_CID2_CID2_Pos))  
#define GPIO_CID2_MASK                        0xFFul    /**< \brief (GPIO_CID2) Register MASK */

/* -------- GPIO_CID3 : (GPIO Offset: 0xffc) (R/  8) Component ID Register 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint8_t  CID3:8;                    /*!< bit:   0..7                                           */
  } bit;                                /*!< Structure used for bit  access                        */
  uint8_t  reg;                         /*!< Type used for register access                         */
} GPIO_CID3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPIO_CID3_OFFSET                      0xFFC          /**<  \brief (GPIO_CID3 offset) Component ID Register 3 */
#define GPIO_CID3_RESETVALUE                  0xB1ul         /**<  \brief (GPIO_CID3 reset_value) Component ID Register 3 */

#define GPIO_CID3_CID3_Pos                    0  /**< \brief (GPIO_CID3)                                                  */
#define GPIO_CID3_CID3_Msk                    (0xFFul << GPIO_CID3_CID3_Pos)
#define GPIO_CID3_CID3(value)                 (GPIO_CID3_CID3_Msk & ((value) << GPIO_CID3_CID3_Pos))  
#define GPIO_CID3_MASK                        0xFFul    /**< \brief (GPIO_CID3) Register MASK */

/** \brief GPIO hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {  /* GPIO Controller */
  __IO GPIO_DATA_Type                 DATA;           /**< \brief Offset: 0x00 (R/W  16) Data Value */
       RoReg8                         Reserved1[0x2];
  __IO GPIO_DATAOUT_Type              DATAOUT;        /**< \brief Offset: 0x04 (R/W  16) Data Output Register Value */
       RoReg8                         Reserved2[0xA];
  __IO GPIO_OUTENSET_Type             OUTENSET;       /**< \brief Offset: 0x10 (R/W  16) Output Enable Set */
       RoReg8                         Reserved3[0x2];
  __IO GPIO_OUTENCLR_Type             OUTENCLR;       /**< \brief Offset: 0x14 (R/W  16) Output Enable Clear */
       RoReg8                         Reserved4[0xA];
  __IO GPIO_INTENSET_Type             INTENSET;       /**< \brief Offset: 0x20 (R/W  16) Interrupt Enable Set */
       RoReg8                         Reserved5[0x2];
  __IO GPIO_INTENCLR_Type             INTENCLR;       /**< \brief Offset: 0x24 (R/W  16) Interrupt Enable Clear */
       RoReg8                         Reserved6[0x2];
  __IO GPIO_INTTYPESET_Type           INTTYPESET;     /**< \brief Offset: 0x28 (R/W  16) Interrupt Type Set */
       RoReg8                         Reserved7[0x2];
  __IO GPIO_INTTYPECLR_Type           INTTYPECLR;     /**< \brief Offset: 0x2C (R/W  16) Interrupt Type Clear */
       RoReg8                         Reserved8[0x2];
  __IO GPIO_INTPOLSET_Type            INTPOLSET;      /**< \brief Offset: 0x30 (R/W  16) Polarity-level, edge IRQ Configuration */
       RoReg8                         Reserved9[0x2];
  __IO GPIO_INTPOLCLR_Type            INTPOLCLR;      /**< \brief Offset: 0x34 (R/W  16) IRQ Configuration Clear */
       RoReg8                         Reserved10[0x2];
  __IO GPIO_INTSTATUSCLEAR_Type       INTSTATUSCLEAR; /**< \brief Offset: 0x38 (R/W  16) Interrupt Status */
       RoReg8                         Reserved11[0xF96];
  __I  GPIO_PID4_Type                 PID4;           /**< \brief Offset: 0xFD0 (R/    8) Peripheral ID Register 4 */
       RoReg8                         Reserved12[0x3];
  __I  GPIO_PID5_Type                 PID5;           /**< \brief Offset: 0xFD4 (R/    8) Peripheral ID Register 5 */
       RoReg8                         Reserved13[0x3];
  __I  GPIO_PID6_Type                 PID6;           /**< \brief Offset: 0xFD8 (R/    8) Peripheral ID Register 6 */
       RoReg8                         Reserved14[0x3];
  __I  GPIO_PID7_Type                 PID7;           /**< \brief Offset: 0xFDC (R/    8) Peripheral ID Register 7 */
       RoReg8                         Reserved15[0x3];
  __I  GPIO_PID0_Type                 PID0;           /**< \brief Offset: 0xFE0 (R/    8) Peripheral ID Register 0 */
       RoReg8                         Reserved16[0x3];
  __I  GPIO_PID1_Type                 PID1;           /**< \brief Offset: 0xFE4 (R/    8) Peripheral ID Register 1 */
       RoReg8                         Reserved17[0x3];
  __I  GPIO_PID2_Type                 PID2;           /**< \brief Offset: 0xFE8 (R/    8) Peripheral ID Register 2 */
       RoReg8                         Reserved18[0x3];
  __I  GPIO_PID3_Type                 PID3;           /**< \brief Offset: 0xFEC (R/    8) Peripheral ID Register 3 */
       RoReg8                         Reserved19[0x3];
  __I  GPIO_CID0_Type                 CID0;           /**< \brief Offset: 0xFF0 (R/    8) Component ID Register 0 */
       RoReg8                         Reserved20[0x3];
  __I  GPIO_CID1_Type                 CID1;           /**< \brief Offset: 0xFF4 (R/    8) Component ID Register 1 */
       RoReg8                         Reserved21[0x3];
  __I  GPIO_CID2_Type                 CID2;           /**< \brief Offset: 0xFF8 (R/    8) Component ID Register 2 */
       RoReg8                         Reserved22[0x3];
  __I  GPIO_CID3_Type                 CID3;           /**< \brief Offset: 0xFFC (R/    8) Component ID Register 3 */
} Gpio;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMB11_GPIO_COMPONENT_ */
