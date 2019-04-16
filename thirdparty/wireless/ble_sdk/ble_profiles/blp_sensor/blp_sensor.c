/**
 * \file
 *
 * \brief Blood Pressure Sensor Profile
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
 *Support</a>
 */

/****************************************************************************************
*							        Includes	
*                                       *
****************************************************************************************/
#include <asf.h>
#include <string.h>
#include "timer_hw.h"
#include "at_ble_api.h"
#include "ble_manager.h"
#include "device_info.h"
#include "blood_pressure.h"
#include "blp_sensor.h"
#include "ble_utils.h"

/****************************************************************************************
*							        Globals		
*                                       *
****************************************************************************************/
/** @brief Scan response data*/
uint8_t scan_rsp_data[SCAN_RESP_LEN]
	= {0x09, 0xff, 0x00, 0x06, 0xd6, 0xb2, 0xf0, 0x05, 0xf0, 0xf8};

/** @brief device information service handler **/
dis_gatt_service_handler_t dis_service_handler;

/** @brief blood pressure measurement service handler **/
blp_gatt_service_handler_t blp_service_handler;

/** @brief callback functions pointers contains the address of application
 *functions **/
blp_notification_callback_t notification_cb;

blp_indication_callback_t	indication_cb;

connected_callback_t connected_cb;


/** @brief contains the connection handle functions **/
at_ble_handle_t connection_handle;

/****************************************************************************************
*							        Implementations										*
****************************************************************************************/

/**
 * @brief register the call back for notification of ringer setting
 * @param[in]
 * @return none
 */
void register_connected_callback(connected_callback_t app_connected_cb)
{
	connected_cb = app_connected_cb ;
}

/** @brief register_blp_notification_handler registers the notification handler
 * passed by the application
 *  @param[in] blp_notification_callback_t address of the notification handler
 *function to be called
 */
void register_blp_notification_handler(
		blp_notification_callback_t blp_notificaton_handler)
{
	notification_cb = blp_notificaton_handler;
}


/** @brief register_blp_indication_handler registers the indication handler
 * passed by the application
 *  @param[in] blp_indication_callback_t address of the indication handler
 *function to be called
 */
void register_blp_indication_handler(
		blp_indication_callback_t blp_indication_handler)
{
		indication_cb = blp_indication_handler;
}

/** @brief blp_notification_confirmation_handler called by ble manager 
 *	to give the status of notification sent
 *  @param[in] at_ble_cmd_complete_event_t address of the cmd completion
 */	
void blp_notification_confirmation_handler(at_ble_cmd_complete_event_t *params)
{
	if (params->status == AT_BLE_SUCCESS) {
		DBG_LOG_DEV("Notification Successfully sent over the air");
	} else {
		DBG_LOG_DEV("Sending Notification over the air failed");
	}
}

/** @brief blp_indication_confirmation_handler called by ble manager 
 *	to give the status of notification sent
 *  @param[in] at_ble_cmd_complete_event_t address of the cmd completion
 */	
void blp_indication_confirmation_handler(at_ble_indication_confirmed_t *params)
{
	if (params->status == AT_BLE_SUCCESS) {
		DBG_LOG_DEV("Indication successfully sent over the air");
	} else {
		DBG_LOG_DEV("Sending Notification over the air failed");
	}
}


/** @brief blp_sensor_send_notification adds the new characteristic value and
 * sends the notification
 *  @param[in] blp_data the new hr characteristic value needs to be updated
 *  @param[in] length length of new characteristic value
 */
void blp_sensor_send_notification(uint8_t *blp_data, uint8_t length)
{
	at_ble_status_t status;

	/** Updating the new characteristic value */
	if ((status
				= at_ble_characteristic_value_set(
					blp_service_handler.serv_chars
					[1].char_val_handle, blp_data,
					length)) != AT_BLE_SUCCESS) {
		DBG_LOG("Write value for notification failed,reason %x",
				status);
	}

	/** Sending the notification for the updated characteristic */
	if ((status	= at_ble_notification_send(connection_handle,
					blp_service_handler.serv_chars[1]
					.char_val_handle))) {
		DBG_LOG("Send notification failed,reason %x", status);
	}
}

/** @brief blp_sensor_send_indication adds the new characteristic value and
 * sends the indication
 *  @param[in] blp the new blp characteristic value needs to be updated
 *  @param[in] length length of new characteristic value
 */
void blp_sensor_send_indication(uint8_t *blp_data, uint8_t length)
{
	at_ble_status_t status;

	/** Updating the new characteristic value */
	if ((status
				= at_ble_characteristic_value_set(
					blp_service_handler.serv_chars
					[0].char_val_handle, blp_data,
					length)) != AT_BLE_SUCCESS) {
		DBG_LOG("Write value for indication failed,reason %x",
				status);
	}

	/** Sending the indication for the updated characteristic */
	if ((status	= at_ble_indication_send(connection_handle,
						blp_service_handler.serv_chars[0]
						.char_val_handle))) {
			DBG_LOG("Send indication failed,reason %x", status);
	}

}


/** @brief blp_sensor_char_changed_handler called by the ble manager after a
 * change in the characteristic
 *  @param[in] at_ble_characteristic_changed_t which contains handle of
 *characteristic and new value
 */
at_ble_status_t blp_sensor_char_changed_handler(
		at_ble_characteristic_changed_t *char_handle)
{
	uint8_t action_event;
	at_ble_characteristic_changed_t change_params;
	memcpy((uint8_t *)&change_params, char_handle,
			sizeof(at_ble_characteristic_changed_t));

	action_event = blp_char_change_handler(&blp_service_handler,
			&change_params);

	if ((action_event == BLP_NOTIFICATION_ENABLE) ||
			(action_event == BLP_NOTIFICATION_DISABLE)) {
		if (action_event == BLP_NOTIFICATION_ENABLE) {
			notification_cb(true);	
		} else if (action_event == BLP_NOTIFICATION_DISABLE){
			notification_cb(false);
		}
	} else if ((action_event == BLP_INDICATION_ENABLE) ||
			(action_event == BLP_INDICATION_DISABLE)) {
		if (action_event == BLP_INDICATION_ENABLE) {
			indication_cb(true);
		} else if (action_event == BLP_INDICATION_DISABLE) {
			indication_cb(false);
		}
	}

	return AT_BLE_SUCCESS;
}

/** @brief blp_sensor_disconnect_event_handler called by ble manager after
 * disconnection event received
 *	@param[in] at_ble_disconnected_t	which has connection handle and
 *reason for disconnection
 */
at_ble_status_t blp_sensor_disconnect_event_handler(
		at_ble_disconnected_t *disconnect)
{
	blp_sensor_adv();
	connected_cb(false);
    ALL_UNUSED(disconnect);
	
	return AT_BLE_SUCCESS;
}

/** @brief blp_sensor_connected_state_handler called by ble manager after a
 * change in characteristic
 *  @param[in] at_ble_connected_t which has connection handle and the peer
 *device address
 */
at_ble_status_t blp_sensor_connected_state_handler(
		at_ble_connected_t *conn_params)
{
	connected_cb(true);
	connection_handle = (at_ble_handle_t)conn_params->handle;
		
	return AT_BLE_SUCCESS;
}



/** @brief blp_sensor_adv adds the advertisement data of the profile and starts
 * advertisement
 *
 */
void blp_sensor_adv(void)
{
	at_ble_status_t status;
	uint8_t idx = 0;
	uint8_t adv_data [ BLP_SENSOR_ADV_DATA_NAME_LEN +
	BLP_SENSOR_ADV_DATA_UUID_LEN   + (2 * 2)];

	adv_data[idx++] = BLP_SENSOR_ADV_DATA_UUID_LEN + ADV_TYPE_LEN;
	adv_data[idx++] = BLP_SENSOR_ADV_DATA_COMP_16_UUID_TYPE;

	/* Prepare ADV Data for Blood Pressure Service */
	adv_data[idx++] = (uint8_t)BLOOD_PRESSURE_SERVICE_UUID;
	adv_data[idx++] = (uint8_t)(BLOOD_PRESSURE_SERVICE_UUID >> 8);

	/* Prepare ADV Data for Device Information Service */
	adv_data[idx++] = (uint8_t)DEVICE_INFORMATION_SERVICE_UUID;
	adv_data[idx++] = (uint8_t)(DEVICE_INFORMATION_SERVICE_UUID >> 8);

	/* Appending the complete name to the Ad packet */
	adv_data[idx++] = BLP_SENSOR_ADV_DATA_NAME_LEN + ADV_TYPE_LEN;
	adv_data[idx++] = BLP_SENSOR_ADV_DATA_NAME_TYPE;

	memcpy(&adv_data[idx], BLP_SENSOR_ADV_DATA_NAME_DATA,
			BLP_SENSOR_ADV_DATA_NAME_LEN );
	idx += BLP_SENSOR_ADV_DATA_NAME_LEN;

	/* Adding the advertisement data and scan response data */
	if (!(at_ble_adv_data_set(adv_data, idx, scan_rsp_data,
			SCAN_RESP_LEN) == AT_BLE_SUCCESS)) {
		#ifdef DBG_LOG
		DBG_LOG("Failed to set advertisement data");
		#endif
	}

	/* Start of advertisement */
	if ((status
				= at_ble_adv_start(AT_BLE_ADV_TYPE_UNDIRECTED,
					AT_BLE_ADV_GEN_DISCOVERABLE, NULL,
					AT_BLE_ADV_FP_ANY,
					BLP_SENSOR_FAST_ADV,
					BLP_SENSOR_ADV_TIMEOUT,
					0)) == AT_BLE_SUCCESS) {
		DBG_LOG("Bluetooth device is in Advertising Mode");
	} else {
		DBG_LOG(
				"Bluetooth LE Advertisement failed start Failed,reason %d",
				status);
	}
}

/** @brief blp_sensor_service_define defines the services of the profile
 *
 */
void blp_sensor_service_define(void)
{
	at_ble_status_t status;

	if ((status = blp_primary_service_define(&blp_service_handler)) !=
			AT_BLE_SUCCESS) {
		DBG_LOG("Blood Pressure Service definition Failed,reason: %x",
				status);
	}
	
	if ((status = dis_primary_service_define(&dis_service_handler)) !=
			AT_BLE_SUCCESS) {
		DBG_LOG("Dis Service definition failed,reason: %x", status);
	}
	
}

/**
 * \brief Initialization of profile services
 */
void blp_sensor_service_init(void)
{
	blp_init_service(&blp_service_handler);

	dis_init_service(&dis_service_handler);
}

/** @brief blp_sensor_init initializes and defines the services of the hr profile
 *
 *  @param[in] params are unused.
 *
 */
void blp_sensor_init(void *param)
{
	blp_sensor_service_init();
	blp_sensor_service_define();
	blp_sensor_adv();
    ALL_UNUSED(param);
}
