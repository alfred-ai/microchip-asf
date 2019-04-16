/**
 * \file
 *
 * \brief Unit test configuration.
 *
 * Copyright (c) 2011-2015 Atmel Corporation. All rights reserved.
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

#ifndef CONF_TEST_H
#define CONF_TEST_H

/** USART Interface */
#define CONF_TEST_USART      CONSOLE_UART
/** Baudrate setting */
#define CONF_TEST_BAUDRATE   115200
/** Parity setting */
#define CONF_TEST_PARITY     UART_MR_PAR_NO

/* Default page count number */
#define DEFAULT_PAGE_COUNT (IFLASH0_SIZE/IFLASH0_PAGE_SIZE)

/* Default region count number */
#define DEFAULT_REGION_COUNT 1

/* Test page start address. */
#define TEST_PAGE_ADDRESS (IFLASH0_ADDR + IFLASH0_SIZE - IFLASH0_PAGE_SIZE)

/* Flash start address */
#define IFLASH_ADDR IFLASH0_ADDR

/* Flash page size */
#define IFLASH_PAGE_SIZE IFLASH0_PAGE_SIZE

/* Number of pages in a region. */
#define IFLASH_NB_OF_PAGES (IFLASH0_NB_OF_PAGES)

#endif /* CONF_TEST_H_INCLUDED */
