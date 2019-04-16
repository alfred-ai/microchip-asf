/**
 * \file
 *
 * \brief BLE Startup Template
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

/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel
 * Support</a>
 */

/**
 * \mainpage
 * \section preface Preface
 * This is the reference manual for the Startup Template
 */
/*- Includes ---------------------------------------------------------------*/
#include <asf.h>
#include "platform.h"
#include "at_ble_api.h"
#include "profiles.h"
#include "console_serial.h"
#include "timer_hw.h"
#include "conf_extint.h"
#include "conf_serialdrv.h"
#include "ble_manager.h"
#include "ble_utils.h"

#include "startup_template.h"

/* BLE Advertisement */
/** @brief scan_resp_len is the length of the scan response data */
#define SCAN_RESP_LEN						(10)

/** @brief Scan response data*/
uint8_t scan_rsp_data[SCAN_RESP_LEN] = {0x09, 0xff, 0x00, 0x06, 0xd6, \
										0xb2, 0xf0, 0x05, 0xf0, 0xf8};

/* Advertisement data set and Advertisement start */
static at_ble_status_t advertisement_template(void)
{
	/* Advertisement data length */
	uint8_t adv_len = 0;
	
	/* Allocating the memory for advertisement data with two services, keeping 
	maximum length of advertisement data(31 bytes). 2 bytes are 
	allocated for adv length and adv type for each advertisement data type*/
	uint8_t adv_data[31];
	
	/* Appending the list of 16-bit service UUID to adv data, list is having two services*/
	adv_data[adv_len++] = ADV_DATA_UUID1_LEN + ADV_DATA_UUID2_LEN + ADV_TYPE_LEN;
	adv_data[adv_len++] = ADV_DATA_TYPE_UUID16_LIST;

	adv_data[adv_len++] = (uint8_t)SERVICE_UUID1;
	adv_data[adv_len++] = (uint8_t)(SERVICE_UUID1 >> 8);
	
	adv_data[adv_len++] = (uint8_t)SERVICE_UUID2;
	adv_data[adv_len++] = (uint8_t)(SERVICE_UUID2 >> 8);
		
	/* Appending the complete name to the Ad packet */
	adv_data[adv_len++] = ADV_DATA_NAME_LEN + ADV_TYPE_LEN;
	adv_data[adv_len++] = ADV_DATA_TYPE_COMP_NAME;
	
	memcpy(&adv_data[adv_len], ADV_DATA_NAME_DATA, ADV_DATA_NAME_LEN );
	adv_len += ADV_DATA_NAME_LEN;
	
	/* Adding the advertisement data and scan response data */
	if(!(at_ble_adv_data_set(adv_data, adv_len, scan_rsp_data, SCAN_RESP_LEN) == \
	 AT_BLE_SUCCESS) )
	{
		DBG_LOG("Failed to set advertisement data");
		return AT_BLE_FAILURE;
	}
	return AT_BLE_SUCCESS;
}

static at_ble_status_t start_advertisement(void)
{
	/* Start of advertisement */
	if(at_ble_adv_start(AT_BLE_ADV_TYPE_UNDIRECTED, AT_BLE_ADV_GEN_DISCOVERABLE, \
		NULL, AT_BLE_ADV_FP_ANY, APP_FAST_ADV, APP_ADV_TIMEOUT, 0) == \
		AT_BLE_SUCCESS)
	{
		DBG_LOG("BLE Started Advertisement");
		return AT_BLE_SUCCESS;
	}
	else
	{
		DBG_LOG("BLE Advertisement start Failed");
	}
	return AT_BLE_FAILURE;
}


/* Callback functions */

/* Callback registered for AT_BLE_PAIR_DONE event from stack */
static void ble_paired_app_event(at_ble_handle_t conn_handle)
{
	ALL_UNUSED(conn_handle);
}

/* Callback registered for AT_BLE_DISCONNECTED event from stack */
static void ble_disconnected_app_event(at_ble_handle_t conn_handle)
{
	start_advertisement();
	ALL_UNUSED(conn_handle);
}

/* Callback registered for AT_BLE_NOTIFICATION_CONFIRMED event from stack */
static void ble_notification_confirmed_app_event(at_ble_cmd_complete_event_t *notification_status)
{
	if(!notification_status->status)
	{
		DBG_LOG_DEV("Notification sent successfully");
	}
}

/* Callback registered for AT_BLE_CHARACTERISTIC_CHANGED event from stack */
static at_ble_status_t ble_char_changed_app_event(at_ble_characteristic_changed_t *char_handle)
{
	ALL_UNUSED(char_handle);
	return AT_BLE_SUCCESS;
}

/* timer callback function */
static void timer_callback_fn(void)
{
	/* Add timer callback functionality here */
}

void button_cb(void)
{
	/* Add button callback functionality here */
}


int main(void)
{
	#if SAMG55
	/* Initialize the SAM system. */
	sysclk_init();
	board_init();
	#elif SAM0
	system_init();
	#endif

	/* Initialize serial console */
	serial_console_init();
	
	/* Hardware timer */
	hw_timer_init();
	
	/* button initialization */
	button_init();
	
	hw_timer_register_callback(timer_callback_fn);

	DBG_LOG("Initializing BLE Application");
	
	/* initialize the BLE chip  and Set the Device Address */
	ble_device_init(NULL);
	
	/* Register BLE Event callbacks */
	
	/* Register callback for paired event */
	register_ble_paired_event_cb(ble_paired_app_event);
	
	/* Register callback for disconnected event */
	register_ble_disconnected_event_cb(ble_disconnected_app_event);
	
	/* Register callback for notification confirmed event */
	register_ble_notification_confirmed_cb(ble_notification_confirmed_app_event);
	
	/* Register callback for characteristic changed event */
	register_ble_characteristic_changed_cb(ble_char_changed_app_event);
	
	/* Register Primary/Included service in case of GATT Server */
	
	/* set the advertisement data */
	advertisement_template();
	
	/* Start the advertisement */
	start_advertisement();
	
	while(true)
	{
		/* BLE Event task */
		ble_event_task();
		
		/* Write application task */
	}

}

