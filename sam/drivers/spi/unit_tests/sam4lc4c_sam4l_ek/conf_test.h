/**
 * \file
 *
 * \brief Unit test configuration.
 *
 * Copyright (c) 2011-2018 Microchip Technology Inc. and its subsidiaries.
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
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
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
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */

#ifndef CONF_TEST_H
#define CONF_TEST_H

/** Perform unit tests using SPI */
#define CONF_TEST_SPI        SPI
/** Unit test SPI ID */
#define CONF_TEST_SPI_ID     SPI_IRQn
/** Unit test SPI NPCS */
#define CONF_TEST_SPI_NPCS   1
/** Unit test SPI handler in vector table */
#define CONF_TEST_SPI_HANDLER SPI_Handler

/** \brief SPI DataFlash settings.
 *  Define \ref CONF_TEST_DF to enable DataFlash test.
 */
/** DataFlash test enable */
#define CONF_TEST_DF
/** DataFlash NPCS (using CONF_TEST_SPI for SPI) */
#define CONF_TEST_DF_NPCS        2
/** DataFlash ID expected (AT25DF641A) */
#define CONF_TEST_DF_ID          0x0000481F
/** DataFlash Page Size */
#define CONF_TEST_DF_PAGE_SIZE   256
/** DataFlash address to test (last block) */
#define CONF_TEST_DF_ADDRESS     (4*1024*1024-4*1024)

/** USART Interface  : Console UART */
#define CONF_TEST_USART      USART2
/** Baudrate setting : 115200 */
#define CONF_TEST_BAUDRATE   115200
/** Char setting     : 8-bit character length (don't care for UART) */
#define CONF_TEST_CHARLENGTH   US_MR_CHRL_8_BIT
/** Parity setting   : No parity check */
#define CONF_TEST_PARITY     US_MR_PAR_NO
/** Stopbit setting  : No extra stopbit, i.e., use 1 (don't care for UART) */
#define CONF_TEST_STOPBITS   US_MR_NBSTOP_1_BIT

#endif /* CONF_TEST_H_INCLUDED */
