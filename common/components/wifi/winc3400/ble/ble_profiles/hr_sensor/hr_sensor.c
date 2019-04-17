/**
 * \file
 *
 * \brief Heart Rate Sensor Profile
 *
 * Copyright (c) 2017 Atmel Corporation. All rights reserved.
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
 *Support</a>
 */

/****************************************************************************************
*							        Includes	
*                                       *
****************************************************************************************/
#include "ble_manager.h"
#include "heart_rate.h"
#include "bsp/include/nm_bsp_samd21_app.h"
#include <asf.h>
#include "at_ble_api.h"
#include "hr_sensor.h"

/****************************************************************************************
*							        Globals		
*                                       *
****************************************************************************************/
static  gatt_service_handler_t heart_rate_serv_handler;

/** @brief Scan response data*/
static const uint8_t SCAN_RESP_DATA[SCAN_RESP_LEN] = {0x09,0xff, 0x00, 0x06, 0xd6, 0xb2, 0xf0, 0x05, 0xf0, 0xf8};

static uint8_t led_toggle;

uint8_t activity = 0; /*!< activiy which will determine the */
uint16_t energy_expended_val = ENERGY_EXP_NORMAL; /*!< to count the energy expended*/
uint8_t energy_inclusion = 0;/*!<To check for including the energy in hr measurement*/
uint16_t energy_incrementor ;	/*!< energy incrementor for various heart rate values*/
uint16_t heart_rate_value = HEART_RATE_MIN_NORM; /*!< to count the heart rate value*/
uint8_t hr_min_value;/*!<the minimum heart rate value*/
uint8_t hr_max_value;/*!<the maximum heart rate value*/
uint8_t inc_changer	= HEART_RATE_INCREMENT_VALUE;/*!< increment operator to change heart rate */\
uint8_t notification_flag = 0; /*!< flag to show notification*/
uint8_t prev_activity = DEFAULT_ACTIVITY;/*!< previous activity */
uint8_t second_counter = 0;	/*!< second_counter to count the time*/
bool volatile timer_cb_done = false;
uint8_t time_operator ;/*!< operator to change the seconds */

/****************************************************************************************
*							        Implementations
*                                       *
****************************************************************************************/

at_ble_status_t ble_heart_rate_start_advertise(void)
{
	uint8_t idx = 0;
	uint8_t adv_data [ HRS_ADV_DATA_NAME_LEN + HRS_ADV_DATA_UUID_LEN   + (2*2)];
	
	adv_data[idx++] = HRS_ADV_DATA_UUID_LEN + ADV_TYPE_LEN;
	adv_data[idx++] = HRS_ADV_DATA_UUID_TYPE;

	/* Appending the UUID */
	adv_data[idx++] = (uint8_t)HEART_RATE_SERVICE_UUID;
	adv_data[idx++] = (uint8_t)(HEART_RATE_SERVICE_UUID >> 8);
	
	//Appending the complete name to the Ad packet
	adv_data[idx++] = HRS_ADV_DATA_NAME_LEN + ADV_TYPE_LEN;
	adv_data[idx++] = HRS_ADV_DATA_NAME_TYPE;
	
	memcpy(&adv_data[idx], HRS_ADV_DATA_NAME_DATA, HRS_ADV_DATA_NAME_LEN);
	idx += HRS_ADV_DATA_NAME_LEN;
	
	/* Adding the advertisement data and scan response data */
	if (at_ble_adv_data_set(adv_data, idx, SCAN_RESP_DATA, SCAN_RESP_LEN) != AT_BLE_SUCCESS)
	{
		DBG_LOG("Failed to set adv data");
		return AT_BLE_FAILURE;
	}
	
	at_ble_set_dev_config(AT_BLE_GAP_PERIPHERAL_SLV);
	
	/* Start of advertisement */
	if (at_ble_adv_start(AT_BLE_ADV_TYPE_UNDIRECTED, AT_BLE_ADV_GEN_DISCOVERABLE, NULL,
			AT_BLE_ADV_FP_ANY, APP_HRS_FAST_ADV, APP_HRS_ADV_TIMEOUT, 0) != AT_BLE_SUCCESS)
	{
		DBG_LOG("BLE Adv start Failed");
		return AT_BLE_FAILURE;
	}
	
	DBG_LOG("BLE Started Adv\n");
	return AT_BLE_SUCCESS;
}

static void ble_heart_rate_value_init(void)
{
	led_toggle = true;
	
	activity = second_counter / 40;

	if (activity != prev_activity) {
		switch(activity) {
			case ACTIVITY_NORMAL:
			hr_min_value = HEART_RATE_MIN_NORM;
			hr_max_value = HEART_RATE_MAX_NORM;
			heart_rate_value = hr_min_value;
			energy_incrementor = ENERGY_EXP_NORMAL;
			break;
			
			case ACTIVITY_WALKING:
			hr_min_value = HEART_RATE_MIN_WALKING;
			hr_max_value = HEART_RATE_MAX_WALKING;
			heart_rate_value = hr_min_value;
			energy_incrementor = ENERGY_EXP_WALKING;
			break;
			
			case ACTIVITY_BRISK_WALKING:
			hr_min_value = HEART_RATE_MIN_BRISK_WALK;
			hr_max_value = HEART_RATE_MAX_BRISK_WALK;
			heart_rate_value = hr_min_value;
			energy_incrementor = ENERGY_EXP_BRISK_WALKING;
			break;
			
			case ACTIVITY_RUNNING:
			hr_min_value = HEART_RATE_MIN_RUNNING;
			hr_max_value = HEART_RATE_MAX_RUNNING;
			heart_rate_value = hr_min_value;
			energy_incrementor = ENERGY_EXP_RUNNING;
			break;
			
			case ACTIVITY_FAST_RUNNING:
			hr_min_value = HEART_RATE_MIN_FAST_RUNNING;
			hr_max_value = HEART_RATE_MAX_FAST_RUNNING;
			heart_rate_value = hr_min_value;
			energy_incrementor = ENERGY_EXP_FAST_RUNNING;
			break;
		}
		prev_activity = activity;
	}
	
	if (heart_rate_value == hr_max_value) {
		inc_changer = -1;
		} else if (heart_rate_value == hr_min_value) {
		inc_changer = 1;
	}
}

static void ble_heart_rate_handle_timer_event(void)
{
	if (led_toggle == true)
	port_pin_toggle_output_level(LED0_PIN);
	else
	port_pin_set_output_level(LED0_PIN, true);	// LED OFF

	timer_cb_done = true;
	
	if (second_counter == START_OF_FIRST_ACTIVITY) {
		time_operator = 1;
		} else if (second_counter == END_OF_LAST_ACTIVITY) {
		time_operator = -1;
	}
	second_counter += (time_operator);
	ble_heart_rate_value_init();
	notification_flag += 1;
}

void ble_heart_rate_handle_paired_event(at_ble_handle_t conn_handle)
{
	timer_cb_done = false;
	nm_bsp_stop_timer();
	nm_bsp_start_timer(ble_heart_rate_handle_timer_event, NOTIFICATION_INTERVAL);
}

// Allows the application to initialise the profile app including
// initialising services and callbacks
void ble_heart_rate_profile_init(void)
{
	DBG_LOG("Initializing Heart Rate Service Application");

	heart_rate_init_service(&heart_rate_serv_handler);
	heart_rate_primary_service_define(&heart_rate_serv_handler);

	register_ble_paired_event_cb(ble_heart_rate_handle_paired_event);
	register_ble_disconnected_event_cb(ble_heart_rate_handle_disconnect_event);

	ble_heart_rate_start_advertise();
}

void heart_rate_send_notification(uint8_t * char_data,uint8_t length)
{
    heart_rate_update_char_value(&heart_rate_serv_handler, char_data, length);
}

void ble_heart_rate_handle_disconnect_event(at_ble_handle_t conn_handle)
{
	timer_cb_done = false;
	energy_expended_val = ENERGY_EXP_NORMAL;
	second_counter = 0;
	activity = ACTIVITY_NORMAL;
	prev_activity = DEFAULT_ACTIVITY;
	energy_inclusion = 0;
	
	nm_bsp_stop_timer();
	
	ble_heart_rate_value_init();
	ble_heart_rate_start_advertise();
}


