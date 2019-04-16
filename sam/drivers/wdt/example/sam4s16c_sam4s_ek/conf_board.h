/**
 * \file
 *
 * \brief Board configuration.
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

#ifndef CONF_BOARD_H_INCLUDED
#define CONF_BOARD_H_INCLUDED

/** Enable Com Port. */
#define CONF_BOARD_UART_CONSOLE

/** Don't change WDT mode register in init.c */
#define CONF_BOARD_KEEP_WATCHDOG_AT_INIT

/** Usart Hw ID used by the console (UART0). */
#define CONSOLE_UART_ID          ID_UART0

/** Push button definition */
#define PUSHBUTTON_STRING	"USRPB1"
#define PUSHBUTTON_IRQn		PIOB_IRQn
#define PUSHBUTTON_MASK		PIN_PUSHBUTTON_1_MASK
#define PUSHBUTTON_PIO		PIN_PUSHBUTTON_1_PIO
#define PUSHBUTTON_ID		PIN_PUSHBUTTON_1_ID
#define PUSHBUTTON_TYPE		PIN_PUSHBUTTON_1_TYPE
#define PUSHBUTTON_ATTR		PIN_PUSHBUTTON_1_ATTR

/** LED definition */
#define LED_MASK	PIN_LED_0_MASK
#define LED_PIO		PIN_LED_0_PIO
#define LED_ID		PIN_LED_0_ID
#define LED_TYPE	PIN_LED_0_TYPE
#define LED_ATTR	PIN_LED_0_ATTR

#endif /* CONF_BOARD_H_INCLUDED */
