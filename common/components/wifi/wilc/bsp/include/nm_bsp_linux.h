/**
 *
 * \file
 *
 * \brief This module contains SAM4S BSP APIs declarations.
 *
 * Copyright (c) 2018 Atmel Corporation. All rights reserved.
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

#ifndef _NM_BSP_SAM4S_H_
#define _NM_BSP_SAM4S_H_

#include "linux/kernel.h"
#define NM_LEVEL_INTERRUPT		(1)
#ifdef NMI_SDIO
#define CONF_WIFI_USE_SDIO
#ifdef NMI_SDIO_IRQ_GPIO
#define CONF_WIFI_USE_SDIO_EXT_IRQ
#endif
#else
#define CONF_WIFI_USE_SPI
#endif
#define ETH_MODE


#define CONF_WIFI_M2M_DEBUG					(1)
#define CONF_WIFI_M2M_PRINTF				printk



#define NM_DEBUG		CONF_WIFI_M2M_DEBUG
#define NM_BSP_PRINTF	CONF_WIFI_M2M_PRINTF

#endif /* _NM_BSP_SAM4S_H_ */
