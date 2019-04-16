/**
 * \file
 *
 * \brief BLE DTM
 *
 * Copyright (c) 2014-2015 Atmel Corporation. All rights reserved.
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

 /**
 * \mainpage
 * \section preface Preface
 * This is the reference manual for the BLE DTM
 */
/*- Includes ---------------------------------------------------------------*/

#include <asf.h>
#include "platform.h"
#include "at_ble_api.h"
#include "console_serial.h"
#include "serial_fifo.h"
#include "conf_serialdrv.h"
#include "serial_bridge.h"
#include "conf_extint.h"
			
/* Initialize the BLE */
static void ble_init(void);
/* Initialie the DTM Mode of BLE */
static void ble_dtm_init(void);

/* Critical Alert for BLE Failures */
static void ble_critical_alert(void);

volatile bool button_pressed = false;

/* Alert the user when something is failed */
static void ble_critical_alert(void)
{
	while(1)
	{
		delay_ms(200);
		LED_On(LED0);
		delay_ms(200);
		LED_Off(LED0);
	}
}

/* Button Callback function */
void button_cb(void)
{
	button_pressed = true;
}

/* Initialize the BLE */
static void ble_init(void)
{
	at_ble_init_config_t pf_cfg;
	platform_config busConfig;
	
	/*Memory allocation required by GATT Server DB*/
	pf_cfg.memPool.memSize = 0;
	pf_cfg.memPool.memStartAdd = NULL;
	/*Bus configuration*/
	busConfig.bus_type = AT_BLE_UART;
	pf_cfg.plf_config = &busConfig;
	
	/* Init BLE device */
	if(at_ble_init(&pf_cfg) != AT_BLE_SUCCESS)
	{
		ble_critical_alert();
	}
}

/* Initialize the direct test mode */
static void ble_dtm_init(void)
{
	/* initialize the BLE chip */
	ble_init();	
	LED_On(LED0);
}

/* main entry to the Direct Test mode Application */
int main (void)
{	

#if SAMG55
	/* Initialize the SAM system. */
	sysclk_init();
	board_init();
#elif SAM0
	system_init();
#endif	

	/* Button Init */
	button_init();
	
	/* DTM Initialization */
	ble_dtm_init();
	
	platform_wakeup();
	
	/* Initialize serial bridge */
	serial_bridge_init();
	
	/* Task hadle in while loop */
	while(1)
	{
		/* Serial bridge task */ 
		serial_bridge_task();
	}
}
