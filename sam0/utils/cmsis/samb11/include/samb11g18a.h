/**
 * \file
 *
 * \brief Header file for ATSAMB11G18A
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

#ifndef _SAMB11G18A_
#define _SAMB11G18A_

/** \addtogroup SAMB11G18A_definitions SAMB11G18A definitions
 * This file defines all structures and symbols for SAMB11G18A:
 *   - registers and bitfields
 *   - peripheral base address
 *   - peripheral ID
 *   - PIO definitions
*/
/*@{*/

#ifdef __cplusplus
 extern "C" {
#endif

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#include <stdint.h>
#ifndef __cplusplus
typedef volatile const uint32_t RoReg;   /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile const uint16_t RoReg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile const uint8_t  RoReg8;  /**< Read only  8-bit register (volatile const unsigned int) */
#else
typedef volatile       uint32_t RoReg;   /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile       uint16_t RoReg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile       uint8_t  RoReg8;  /**< Read only  8-bit register (volatile const unsigned int) */
#endif
typedef volatile       uint32_t WoReg;   /**< Write only 32-bit register (volatile unsigned int) */
typedef volatile       uint16_t WoReg16; /**< Write only 16-bit register (volatile unsigned int) */
typedef volatile       uint32_t WoReg8;  /**< Write only  8-bit register (volatile unsigned int) */
typedef volatile       uint32_t RwReg;   /**< Read-Write 32-bit register (volatile unsigned int) */
typedef volatile       uint16_t RwReg16; /**< Read-Write 16-bit register (volatile unsigned int) */
typedef volatile       uint8_t  RwReg8;  /**< Read-Write  8-bit register (volatile unsigned int) */
#define CAST(type, value) ((type *)(value))
#define REG_ACCESS(type, address) (*(type*)(address)) /**< C code: Register value */
#else
#define CAST(type, value) (value)
#define REG_ACCESS(type, address) (address) /**< Assembly code: Register address */
#endif

/* ************************************************************************** */
/*   CMSIS DEFINITIONS FOR SAMB11G18A */
/* ************************************************************************** */
/** \addtogroup SAMB11G18A_cmsis CMSIS Definitions */
/*@{*/

/** Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M0 Processor Exceptions Numbers ******************************/
  NonMaskableInt_IRQn       = -14, /**< 2   Non Maskable Interrupt               */
  HardFault_IRQn            = -13, /**< 3   Hard Fault Interrupt                 */
  SVCall_IRQn               = -5 , /**< 11  SV Call Interrupt                    */
  PendSV_IRQn               = -2 , /**< 14  Pend SV Interrupt                    */
  SysTick_IRQn              = -1 , /**< 15  System Tick Interrupt                */
/******  SAMB11G18A specific Interrupt Numbers ***********************************/
  UART0_RX_IRQn             = 0  , /**< 0   SAMB11G18A UART Controller (UART0)  */
  UART0_TX_IRQn             = 1  , /**< 1   SAMB11G18A UART Controller (UART0)  */
  UART1_RX_IRQn             = 2  , /**< 2   SAMB11G18A UART Controller (UART1)  */
  UART1_TX_IRQn             = 3  , /**< 3   SAMB11G18A UART Controller (UART1)  */
  SPI0_RX_IRQn              = 4  , /**< 4   SAMB11G18A SPI Master/Slave Controller (SPI0) */
  SPI0_TX_IRQn              = 5  , /**< 5   SAMB11G18A SPI Master/Slave Controller (SPI0) */
  SPI1_RX_IRQn              = 6  , /**< 6   SAMB11G18A SPI Master/Slave Controller (SPI1) */
  SPI1_TX_IRQn              = 7  , /**< 7   SAMB11G18A SPI Master/Slave Controller (SPI1) */
  I2C0_RX_IRQn              = 8  , /**< 8   SAMB11G18A I2C Master/Slave Controller (I2C0) */
  I2C0_TX_IRQn              = 9  , /**< 9   SAMB11G18A I2C Master/Slave Controller (I2C0) */
  I2C1_RX_IRQn              = 10 , /**< 10  SAMB11G18A I2C Master/Slave Controller (I2C1) */
  I2C1_TX_IRQn              = 11 , /**< 11  SAMB11G18A I2C Master/Slave Controller (I2C1) */
  WDT0_IRQn                 = 12 , /**< 12  SAMB11G18A Watchdog0 Timer (WDT0)   */
  WDT1_IRQn                 = 13 , /**< 13  SAMB11G18A Watchdog0 Timer (WDT1)   */
  DUALTIMER0_IRQn           = 14 , /**< 14  SAMB11G18A ARM General Purpose Dual Timer (DUALTIMER0) */
  PROV_DMA_CTRL0_IRQn       = 15 , /**< 15  SAMB11G18A 4 Channel DMA Controller (PROV_DMA_CTRL0) */
  SPI_FLASH0_IRQn           = 18 , /**< 18  SAMB11G18A SPI Flash Controller (SPI_FLASH0) */
  GPIO0_IRQn                = 23 , /**< 23  SAMB11G18A GPIO Controller (GPIO0)  */
  GPIO1_IRQn                = 24 , /**< 24  SAMB11G18A GPIO Controller (GPIO1)  */
  GPIO2_IRQn                = 25 , /**< 25  SAMB11G18A GPIO Controller (GPIO2)  */
  TIMER0_IRQn               = 26 , /**< 26  SAMB11G18A ARM General Purpose Timer (TIMER0) */
  AON_SLEEP_TIMER_IRQn      = 27 , /**< 27  SAMB11G18A ARM Always on Sleep Timer (AON_SLEEP_TIMER) */
} IRQn_Type;

typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;

  /* Cortex-M handlers */
  void* pfnReset_Handler;                        /* 0   Reset handler                        */
  void* pfnNonMaskableInt_Handler;               /* 2   Non Maskable Interrupt               */
  void* pfnHardFault_Handler;                    /* 3   Hard Fault Interrupt                 */
  void* pfnReservedM12;
  void* pfnReservedM11;
  void* pfnReservedM10;
  void* pfnReservedM9;
  void* pfnReservedM8;
  void* pfnReservedM7;
  void* pfnReservedM6;
  void* pfnSVCall_Handler;                       /* 11  SV Call Interrupt                    */
  void* pfnReservedM4;
  void* pfnReservedM3;
  void* pfnPendSV_Handler;                       /* 14  Pend SV Interrupt                    */
  void* pfnSysTick_Handler;                      /* 15  System Tick Interrupt                */

  /* Peripheral handlers */
  void* pfnUART0_RX_Handler;                     /* 0   SAMB11G18A UART Controller (UART0) */
  void* pfnUART0_TX_Handler;                     /* 1   SAMB11G18A UART Controller (UART0) */
  void* pfnUART1_RX_Handler;                     /* 2   SAMB11G18A UART Controller (UART1) */
  void* pfnUART1_TX_Handler;                     /* 3   SAMB11G18A UART Controller (UART1) */
  void* pfnSPI0_RX_Handler;                      /* 4   SAMB11G18A SPI Master/Slave Controller (SPI0) */
  void* pfnSPI0_TX_Handler;                      /* 5   SAMB11G18A SPI Master/Slave Controller (SPI0) */
  void* pfnSPI1_RX_Handler;                      /* 6   SAMB11G18A SPI Master/Slave Controller (SPI1) */
  void* pfnSPI1_TX_Handler;                      /* 7   SAMB11G18A SPI Master/Slave Controller (SPI1) */
  void* pfnI2C0_RX_Handler;                      /* 8   SAMB11G18A I2C Master/Slave Controller (I2C0) */
  void* pfnI2C0_TX_Handler;                      /* 9   SAMB11G18A I2C Master/Slave Controller (I2C0) */
  void* pfnI2C1_RX_Handler;                      /* 10  SAMB11G18A I2C Master/Slave Controller (I2C1) */
  void* pfnI2C1_TX_Handler;                      /* 11  SAMB11G18A I2C Master/Slave Controller (I2C1) */
  void* pfnWDT0_Handler;                         /* 12  SAMB11G18A Watchdog0 Timer (WDT0) */
  void* pfnWDT1_Handler;                         /* 13  SAMB11G18A Watchdog0 Timer (WDT1) */
  void* pfnDUALTIMER0_Handler;                   /* 14  SAMB11G18A ARM General Purpose Dual Timer (DUALTIMER0) */
  void* pfnPROV_DMA_CTRL0_Handler;               /* 15  SAMB11G18A 4 Channel DMA Controller (PROV_DMA_CTRL0) */
  void* pfnReserved16;
  void* pfnReserved17;
  void* pfnSPI_FLASH0_Handler;                   /* 18  SAMB11G18A SPI Flash Controller (SPI_FLASH0) */
  void* pfnReserved19;
  void* pfnReserved20;
  void* pfnReserved21;
  void* pfnReserved22;
  void* pfnGPIO0_Handler;                        /* 23  SAMB11G18A GPIO Controller (GPIO0) */
  void* pfnGPIO1_Handler;                        /* 24  SAMB11G18A GPIO Controller (GPIO1) */
  void* pfnGPIO2_Handler;                        /* 25  SAMB11G18A GPIO Controller (GPIO2) */
  void* pfnTIMER0_Handler;                       /* 26  SAMB11G18A ARM General Purpose Timer (TIMER0) */
  void* pfnReserved27;
} DeviceVectors;

/* CORTEX-M0 core handlers */
void Reset_Handler        ( void );
void NonMaskableInt_Handler ( void );
void HardFault_Handler    ( void );
void SVCall_Handler       ( void );
void PendSV_Handler       ( void );
void SysTick_Handler      ( void );

/* Peripherals handlers */
void UART0_RX_Handler    ( void );
void UART0_TX_Handler    ( void );
void UART1_RX_Handler    ( void );
void UART1_TX_Handler    ( void );
void SPI0_RX_Handler     ( void );
void SPI0_TX_Handler     ( void );
void SPI1_RX_Handler     ( void );
void SPI1_TX_Handler     ( void );
void I2C0_RX_Handler     ( void );
void I2C0_TX_Handler     ( void );
void I2C1_RX_Handler     ( void );
void I2C1_TX_Handler     ( void );
void WDT0_Handler        ( void );
void WDT1_Handler        ( void );
void DUALTIMER0_Handler  ( void );
void PROV_DMA_CTRL0_Handler( void );
void SPI_FLASH0_Handler  ( void );
void GPIO0_Handler       ( void );
void GPIO1_Handler       ( void );
void GPIO2_Handler       ( void );
void TIMER0_Handler      ( void );

/*
 * \brief Configuration of the CORTEX-M0 Processor and Core Peripherals
 */

#define __CM0_REV               0
#define __FPU_PRESENT           0
#define PIO_API                 samb
#define __Vendor_SysTickConfig  0
#define LITTLE_ENDIAN           1
#define __NVIC_PRIO_BITS        2
/*
 * \brief CMSIS includes
 */

#include <core_cm0.h>
#if !defined DONT_USE_CMSIS_INIT
#include "system_samb11.h"
#endif /* DONT_USE_CMSIS_INIT */

/*@}*/

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAMB11G18A */
/* ************************************************************************** */
/** \defgroup SAMB11G18A_api Peripheral Software API */
/*@{*/
#include "component/timer.h"
#include "component/dualtimer.h"
#include "component/prov_dma_ctrl.h"
#include "component/i2c.h"
#include "component/uart.h"
#include "component/spi.h"
#include "component/wdt.h"
#include "component/efuse_misc_regs.h"
#include "component/lpmcu_misc_regs.h"
#include "component/lp_clk_cal_regs.h"
#include "component/aon_sleep_timer.h"
#include "component/aon_pwr_seq.h"
#include "component/aon_gp_regs.h"
#include "component/gpio.h"
#include "component/spi_flash.h"
#include "component/arm_sysctrl.h"
#include "component/arm_bpu.h"
#include "component/arm_dwt.h"
#include "component/arm_rom.h"
/*@}*/
/* ************************************************************************** */
/*   REGISTER ACCESS DEFINITIONS FOR SAMB11G18A */
/* ************************************************************************** */
/** \addtogroup SAMB11G18A_reg Registers Access Definitions */
/*@{*/
#include "instance/timer0.h"
#include "instance/dualtimer0.h"
#include "instance/prov_dma_ctrl0.h"
#include "instance/i2c0.h"
#include "instance/i2c1.h"
#include "instance/uart0.h"
#include "instance/uart1.h"
#include "instance/spi0.h"
#include "instance/spi1.h"
#include "instance/wdt0.h"
#include "instance/wdt1.h"
#include "instance/efuse_misc_regs0.h"
#include "instance/lpmcu_misc_regs0.h"
#include "instance/lp_clk_cal_regs0.h"
#include "instance/aon_sleep_timer0.h"
#include "instance/aon_pwr_seq0.h"
#include "instance/aon_gp_regs0.h"
#include "instance/gpio0.h"
#include "instance/gpio1.h"
#include "instance/gpio2.h"
#include "instance/spi_flash0.h"
#include "instance/arm_sysctrl0.h"
#include "instance/arm_bpu0.h"
#include "instance/arm_dwt0.h"
#include "instance/arm_rom0.h"
/*@}*/



/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAMB11G18A */
/* ************************************************************************** */
/** \addtogroup SAMB11G18A_base Peripheral Base Address Definitions 
 *  @{
 */

#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define TIMER0                 (0x40000000UL)                 /**< \brief (TIMER0    ) Base Address */
#define DUALTIMER0             (0x40001000UL)                 /**< \brief (DUALTIMER0) Base Address */
#define PROV_DMA_CTRL0         (0x40002000UL)                 /**< \brief (PROV_DMA_CTRL0) Base Address */
#define I2C0                   (0x40003000UL)                 /**< \brief (I2C0      ) Base Address */
#define I2C1                   (0x40003400UL)                 /**< \brief (I2C1      ) Base Address */
#define UART0                  (0x40004000UL)                 /**< \brief (UART0     ) Base Address */
#define UART1                  (0x40005000UL)                 /**< \brief (UART1     ) Base Address */
#define SPI0                   (0x40006000UL)                 /**< \brief (SPI0      ) Base Address */
#define SPI1                   (0x40007000UL)                 /**< \brief (SPI1      ) Base Address */
#define WDT0                   (0x40008000UL)                 /**< \brief (WDT0      ) Base Address */
#define WDT1                   (0x40009000UL)                 /**< \brief (WDT1      ) Base Address */
#define EFUSE_MISC_REGS0       (0x4000A000UL)                 /**< \brief (EFUSE_MISC_REGS0) Base Address */
#define LPMCU_MISC_REGS0       (0x4000B000UL)                 /**< \brief (LPMCU_MISC_REGS0) Base Address */
#define LP_CLK_CAL_REGS0       (0x4000C000UL)                 /**< \brief (LP_CLK_CAL_REGS0) Base Address */
#define AON_SLEEP_TIMER0       (0x4000D000UL)                 /**< \brief (AON_SLEEP_TIMER0) Base Address */
#define AON_PWR_SEQ0           (0x4000E000UL)                 /**< \brief (AON_PWR_SEQ0) Base Address */
#define AON_GP_REGS0           (0x4000F000UL)                 /**< \brief (AON_GP_REGS0) Base Address */
#define GPIO0                  (0x40010000UL)                 /**< \brief (GPIO0     ) Base Address */
#define GPIO1                  (0x40011000UL)                 /**< \brief (GPIO1     ) Base Address */
#define GPIO2                  (0x40013000UL)                 /**< \brief (GPIO2     ) Base Address */
#define SPI_FLASH0             (0x40012000UL)                 /**< \brief (SPI_FLASH0) Base Address */
#define ARM_SYSCTRL0           (0xE000E000UL)                 /**< \brief (ARM_SYSCTRL0) Base Address */
#define ARM_BPU0               (0xE0002000UL)                 /**< \brief (ARM_BPU0  ) Base Address */
#define ARM_DWT0               (0xE0001000UL)                 /**< \brief (ARM_DWT0  ) Base Address */
#define ARM_ROM0               (0xE00FF000UL)                 /**< \brief (ARM_ROM0  ) Base Address */
#else
#define TIMER0                 ((Timer *)0x40000000UL)        /**< \brief (TIMER0    ) Base Address */
#define TIMER_INST_NUM         1
#define TIMER_INSTS            { TIMER0 }

#define DUALTIMER0             ((Dualtimer *)0x40001000UL)    /**< \brief (DUALTIMER0) Base Address */
#define DUALTIMER_INST_NUM     1
#define DUALTIMER_INSTS        { DUALTIMER0 }

#define PROV_DMA_CTRL0         ((ProvDmaCtrl *)0x40002000UL)  /**< \brief (PROV_DMA_CTRL0) Base Address */
#define PROV_DMA_CTRL_INST_NUM 1
#define PROV_DMA_CTRL_INSTS    { PROV_DMA_CTRL0 }

#define I2C0                   ((I2C *)0x40003000UL)          /**< \brief (I2C0      ) Base Address */
#define I2C1                   ((I2C *)0x40003400UL)          /**< \brief (I2C1      ) Base Address */
#define I2C_INST_NUM           2
#define I2C_INSTS              { I2C0, I2C1 }

#define UART0                  ((Uart *)0x40004000UL)         /**< \brief (UART0     ) Base Address */
#define UART1                  ((Uart *)0x40005000UL)         /**< \brief (UART1     ) Base Address */
#define UART_INST_NUM          2
#define UART_INSTS             { UART0, UART1 }

#define SPI0                   ((Spi *)0x40006000UL)          /**< \brief (SPI0      ) Base Address */
#define SPI1                   ((Spi *)0x40007000UL)          /**< \brief (SPI1      ) Base Address */
#define SPI_INST_NUM           2
#define SPI_INSTS              { SPI0, SPI1 }

#define WDT0                   ((Wdt *)0x40008000UL)          /**< \brief (WDT0      ) Base Address */
#define WDT1                   ((Wdt *)0x40009000UL)          /**< \brief (WDT1      ) Base Address */
#define WDT_INST_NUM           2
#define WDT_INSTS              { WDT0, WDT1 }

#define EFUSE_MISC_REGS0       ((EfuseMiscRegs *)0x4000a000UL) /**< \brief (EFUSE_MISC_REGS0) Base Address */
#define EFUSE_MISC_REGS_INST_NUM 1
#define EFUSE_MISC_REGS_INSTS  { EFUSE_MISC_REGS0 }

#define LPMCU_MISC_REGS0       ((LpmcuMiscRegs *)0x4000b000UL) /**< \brief (LPMCU_MISC_REGS0) Base Address */
#define LPMCU_MISC_REGS_INST_NUM 1
#define LPMCU_MISC_REGS_INSTS  { LPMCU_MISC_REGS0 }

#define LP_CLK_CAL_REGS0       ((LpClkCalRegs *)0x4000c000UL) /**< \brief (LP_CLK_CAL_REGS0) Base Address */
#define LP_CLK_CAL_REGS_INST_NUM 1
#define LP_CLK_CAL_REGS_INSTS  { LP_CLK_CAL_REGS0 }

#define AON_SLEEP_TIMER0       ((AonSleepTimer *)0x4000d000UL) /**< \brief (AON_SLEEP_TIMER0) Base Address */
#define AON_SLEEP_TIMER_INST_NUM 1
#define AON_SLEEP_TIMER_INSTS  { AON_SLEEP_TIMER0 }

#define AON_PWR_SEQ0           ((AonPwrSeq *)0x4000e000UL)    /**< \brief (AON_PWR_SEQ0) Base Address */
#define AON_PWR_SEQ_INST_NUM   1
#define AON_PWR_SEQ_INSTS      { AON_PWR_SEQ0 }

#define AON_GP_REGS0           ((AonGpRegs *)0x4000f000UL)    /**< \brief (AON_GP_REGS0) Base Address */
#define AON_GP_REGS_INST_NUM   1
#define AON_GP_REGS_INSTS      { AON_GP_REGS0 }

#define GPIO0                  ((Gpio *)0x40010000UL)         /**< \brief (GPIO0     ) Base Address */
#define GPIO1                  ((Gpio *)0x40011000UL)         /**< \brief (GPIO1     ) Base Address */
#define GPIO2                  ((Gpio *)0x40013000UL)         /**< \brief (GPIO2     ) Base Address */
#define GPIO_INST_NUM          3
#define GPIO_INSTS             { GPIO0, GPIO1, GPIO2 }

#define SPI_FLASH0             ((SpiFlash *)0x40012000UL)     /**< \brief (SPI_FLASH0) Base Address */
#define SPI_FLASH_INST_NUM     1
#define SPI_FLASH_INSTS        { SPI_FLASH0 }

#define ARM_SYSCTRL0           ((ArmSysctrl *)0xe000e000LUL)  /**< \brief (ARM_SYSCTRL0) Base Address */
#define ARM_SYSCTRL_INST_NUM   1
#define ARM_SYSCTRL_INSTS      { ARM_SYSCTRL0 }

#define ARM_BPU0               ((ArmBpu *)0xe0002000LUL)      /**< \brief (ARM_BPU0  ) Base Address */
#define ARM_BPU_INST_NUM       1
#define ARM_BPU_INSTS          { ARM_BPU0 }

#define ARM_DWT0               ((ArmDwt *)0xe0001000LUL)      /**< \brief (ARM_DWT0  ) Base Address */
#define ARM_DWT_INST_NUM       1
#define ARM_DWT_INSTS          { ARM_DWT0 }

#define ARM_ROM0               ((ArmRom *)0xe00ff000LUL)      /**< \brief (ARM_ROM0  ) Base Address */
#define ARM_ROM_INST_NUM       1
#define ARM_ROM_INSTS          { ARM_ROM0 }

#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** @}*/

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAMB11G18A*/
/* ************************************************************************** */
/** \addtogroup SAMB11G18A_pio Peripheral Pio Definitions */
/*@{*/

#include "pio/pio_samb11g18a.h"
/*@}*/

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAMB11G18A*/
/* ************************************************************************** */

#define BOOTROM_SIZE             0x00020000UL       /*  128kB Memory segment type: rom */
#define IDRAM_SIZE               0x00020000UL       /*  128kB Memory segment type: ram */
#define BLERAM_SIZE              0x00002000UL       /*    8kB Memory segment type: ram */
#define APB_SIZE                 0x00020000UL       /*  128kB Memory segment type: io */

#define BOOTROM_ADDR             0x00000000UL       /* Memory segment type: rom */
#define IDRAM_ADDR               0x10000000UL       /* Memory segment type: ram */
#define BLERAM_ADDR              0x10040000UL       /* Memory segment type: ram */
#define APB_ADDR                 0x40000000UL       /* Memory segment type: io */

/* ************************************************************************** */
/**  DEVICE SIGNATURES FOR SAMB11G18A */
/* ************************************************************************** */
#define LPMCU_CHIP_ID_REV_ID     0x002000b0UL


#ifdef __cplusplus
}
#endif

#endif /* _SAMB11G18A_ */
