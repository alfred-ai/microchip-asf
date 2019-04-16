/**
 * \file *********************************************************************
 *
 * \brief Serial Input & Output configuration
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
 */

#ifndef CONF_SIO2HOST_H_INCLUDED
#define CONF_SIO2HOST_H_INCLUDED

/** USART Interface */
#define USART_NCP                 USART1
/** Baudrate setting */
#define USART_NCP_BAUDRATE        9600
/** Character length setting */
#define USART_NCP_CHAR_LENGTH     US_MR_CHRL_8_BIT
/** Parity setting */
#define USART_NCP_PARITY          US_MR_PAR_NO
/** Stop bits setting */
#define USART_NCP_STOP_BITS       US_MR_NBSTOP_1_BIT

#define USART_NCP_ISR_VECT()      ISR(USART1_Handler)

#define USART_NCP_IRQn            USART1_IRQn

#define USART_NCP_RX_ISR_ENABLE() usart_enable_interrupt(USART_NCP, \
		US_IER_RXRDY); \
	NVIC_EnableIRQ(USART_NCP_IRQn);

#endif /* CONF_SIO2HOST_H_INCLUDED */
