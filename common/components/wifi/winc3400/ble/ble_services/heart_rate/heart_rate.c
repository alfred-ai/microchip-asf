/**
 * \file
 *
 * \brief Heart Rate service
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
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */

/* can only have one mainpage/preface for doxygen see ble_sdk\ble_services\tx_power\tx_power.c */

/****************************************************************************************
*							        Includes	                                     	*
****************************************************************************************/

#include "heart_rate.h"

/************************************************************************/
/*							Globals	
 *                                   */
/************************************************************************/
/** initial heart rate measurement value */
uint16_t hr_measurement_value = 0;

/** initial body sensor location value */
uint8_t body_sensor_location_value = CHEST;

/** initial heart rate control point value */
uint8_t hr_control_point_value = 0;

extern at_ble_connected_t ble_connected_dev_info[MAX_DEVICE_CONNECTED];

/**@brief Initialize the service with its included service, characteristics, and descriptors
 *
 * @param[in] heart_rate_serv gatt service information
 *
 * @return none
 */
void heart_rate_init_service(gatt_service_handler_t *heart_rate_serv)
{
	heart_rate_serv->serv_handle = 0;
	heart_rate_serv->serv_uuid.type = AT_BLE_UUID_16;
	heart_rate_serv->serv_uuid.uuid[0] = (uint8_t) HEART_RATE_SERVICE_UUID;
	heart_rate_serv->serv_uuid.uuid[1] = (uint8_t) (HEART_RATE_SERVICE_UUID >> 8);

	/*Characteristic Info for Heart Rate Measurement*/

	/* handle stored here */
	heart_rate_serv->serv_chars[0].char_val_handle = 0;
	heart_rate_serv->serv_chars[0].uuid.type = AT_BLE_UUID_16;

	/* UUID : Heart Rate Measurement Characteristic */
	heart_rate_serv->serv_chars[0].uuid.uuid[0]
		= (uint8_t)HEART_RATE_MEASUREMENT_CHAR_UUID;
	heart_rate_serv->serv_chars[0].uuid.uuid[1]
		= (uint8_t)(HEART_RATE_MEASUREMENT_CHAR_UUID >> 8);

	/* Properties */
	heart_rate_serv->serv_chars[0].properties = AT_BLE_CHAR_NOTIFY;

	heart_rate_serv->serv_chars[0].init_value = (uint8_t *)&hr_measurement_value;
	heart_rate_serv->serv_chars[0].value_init_len = sizeof(uint16_t);

	heart_rate_serv->serv_chars[0].value_max_len = HR_MM_FLAGS_SIZE +
			HR_MM_VAL_SIZE + HR_MM_EX_SIZE + HR_MM_RR_SIZE;
	
	/* Permissions */
	heart_rate_serv->serv_chars[0].value_permissions
							= AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR|AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;
	
	/* user defined name */
	heart_rate_serv->serv_chars[0].user_desc = NULL;
	heart_rate_serv->serv_chars[0].user_desc_len = 0;
	heart_rate_serv->serv_chars[0].user_desc_max_len = 0;
	/*user description permissions*/
	heart_rate_serv->serv_chars[0].user_desc_permissions
		= AT_BLE_ATTR_NO_PERMISSIONS;
	
	/* client config permissions */
#if BLE_PAIR_ENABLE
	heart_rate_serv->serv_chars[0].client_config_permissions
							= (AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR);
	
#else 
	heart_rate_serv->serv_chars[0].client_config_permissions
							= (AT_BLE_ATTR_NO_PERMISSIONS);
#endif 
	
	
	/*server config permissions*/
	heart_rate_serv->serv_chars[0].server_config_permissions
		= AT_BLE_ATTR_NO_PERMISSIONS;
	/*user desc handles*/
	heart_rate_serv->serv_chars[0].user_desc_handle = 0;
	/*client config handles*/
	heart_rate_serv->serv_chars[0].client_config_handle = 0;
	/*server config handles*/
	heart_rate_serv->serv_chars[0].server_config_handle = 0;
	/* presentation format */
	heart_rate_serv->serv_chars[0].presentation_format = NULL;

    	/* Characteristic Info for Body Sensor Location */
	heart_rate_serv->serv_chars[1].char_val_handle = 0;          /* handle
	                                                              *stored
	                                                              *here */
	heart_rate_serv->serv_chars[1].uuid.type = AT_BLE_UUID_16;
	/* UUID : Body Sensor Location*/
	heart_rate_serv->serv_chars[1].uuid.uuid[0]
		= (uint8_t)BODY_SENSOR_LOCATION_CHAR_UUID;
	/* UUID : Body Sensor location*/
	heart_rate_serv->serv_chars[1].uuid.uuid[1]
		= (uint8_t)(BODY_SENSOR_LOCATION_CHAR_UUID >> 8);
	/* Properties */
	heart_rate_serv->serv_chars[1].properties = AT_BLE_CHAR_READ;

	heart_rate_serv->serv_chars[1].init_value = &body_sensor_location_value;

	heart_rate_serv->serv_chars[1].value_init_len = sizeof(uint8_t);
	heart_rate_serv->serv_chars[1].value_max_len = sizeof(uint8_t);

	/* permissions */
	
	#if BLE_PAIR_ENABLE
		heart_rate_serv->serv_chars[1].value_permissions
							= (AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR);
	#else	
		heart_rate_serv->serv_chars[1].value_permissions
							= (AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR);
	#endif
	
	/* user defined name */
	heart_rate_serv->serv_chars[1].user_desc = NULL;
	heart_rate_serv->serv_chars[1].user_desc_len = 0;
	heart_rate_serv->serv_chars[1].user_desc_max_len = 0;
	/*user description permissions*/
	heart_rate_serv->serv_chars[1].user_desc_permissions
		= AT_BLE_ATTR_NO_PERMISSIONS;
	/*client config permissions*/
	heart_rate_serv->serv_chars[1].client_config_permissions
		= AT_BLE_ATTR_NO_PERMISSIONS;
	/*server config permissions*/
	heart_rate_serv->serv_chars[1].server_config_permissions
		= AT_BLE_ATTR_NO_PERMISSIONS;
	/*user desc handles*/
	heart_rate_serv->serv_chars[1].user_desc_handle = 0;
	/*client config handles*/
	heart_rate_serv->serv_chars[1].client_config_handle = 0;
	/*server config handles*/
	heart_rate_serv->serv_chars[1].server_config_handle = 0;
	/* presentation format */
	heart_rate_serv->serv_chars[1].presentation_format = NULL;

	/* Characteristic Info for Heart Rate Control Point */
	/* handle stored here */
	heart_rate_serv->serv_chars[2].char_val_handle = 0;
	heart_rate_serv->serv_chars[2].uuid.type = AT_BLE_UUID_16;
	/* UUID : Heart Rate Control Point*/
	heart_rate_serv->serv_chars[2].uuid.uuid[0]
		= (uint8_t)HEART_RATE_CONTROL_POINT_CHAR_UUID;
	/* UUID : Heart Rate Control Point*/
	heart_rate_serv->serv_chars[2].uuid.uuid[1]
		= (uint8_t)(HEART_RATE_CONTROL_POINT_CHAR_UUID >> 8);
	/* Properties */
	heart_rate_serv->serv_chars[2].properties = AT_BLE_CHAR_WRITE;

	/* Initial Value */
	heart_rate_serv->serv_chars[2].init_value = &hr_control_point_value;

	heart_rate_serv->serv_chars[2].value_init_len = sizeof(uint8_t);
	heart_rate_serv->serv_chars[2].value_max_len = sizeof(uint8_t);
	
	/* permissions */
	
	#if BLE_PAIR_ENABLE
		heart_rate_serv->serv_chars[2].value_permissions
							= (AT_BLE_ATTR_WRITABLE_REQ_AUTHN_REQ_AUTHR);
	#else
		heart_rate_serv->serv_chars[2].value_permissions
							= (AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR);
	
	#endif
	
	/* user defined name */
	heart_rate_serv->serv_chars[2].user_desc = NULL;
	heart_rate_serv->serv_chars[2].user_desc_len = 0;
	heart_rate_serv->serv_chars[2].user_desc_max_len = 0;
	/*user description permissions*/
	heart_rate_serv->serv_chars[2].user_desc_permissions
		= AT_BLE_ATTR_NO_PERMISSIONS;
	/*client config permissions*/
	heart_rate_serv->serv_chars[2].client_config_permissions
		= AT_BLE_ATTR_NO_PERMISSIONS;
	/*server config permissions*/
	heart_rate_serv->serv_chars[2].server_config_permissions
		= AT_BLE_ATTR_NO_PERMISSIONS;
	/*user desc handles*/
	heart_rate_serv->serv_chars[2].user_desc_handle = 0;
	/*client config handles*/
	heart_rate_serv->serv_chars[2].client_config_handle = 0;
	/*server config handles*/
	heart_rate_serv->serv_chars[2].server_config_handle = 0;
	/* presentation format */
	heart_rate_serv->serv_chars[2].presentation_format = NULL;

}

/**@brief defining a initialized service 
 *
 * @param[in] heart_rate_service gatt service information
 *
 * @return @ref AT_BLE_SUCCESS operation completed successfully
 * @return @ref AT_BLE_FAILURE Generic error.
 */
at_ble_status_t heart_rate_primary_service_define(gatt_service_handler_t *heart_rate_service)
{
	return(at_ble_primary_service_define(&heart_rate_service->serv_uuid,
	&heart_rate_service->serv_handle,
	NULL, 0,
	heart_rate_service->serv_chars, TOTAL_CHARATERISTIC_NUM));
}

/**@brief Function used to update characteristic value
 *
 * @param[in] heart_rate_serv gatt service information
 * @param[in] char_len length of the new characteristic value
 * @param[in] char_data new characteristic value information
 * @return @ref AT_BLE_SUCCESS operation completed successfully
 * @return @ref AT_BLE_FAILURE Generic error.
 */
at_ble_status_t heart_rate_update_char_value (gatt_service_handler_t *heart_rate_serv , uint8_t *char_data, uint8_t length)
{
	/* Updating the att data base */
	if ((at_ble_characteristic_value_set(heart_rate_serv->serv_chars[0].char_val_handle, char_data, 0 , length)) == AT_BLE_FAILURE){
		DBG_LOG("updating the characteristic failed");
		return AT_BLE_FAILURE;
	} else {
		DBG_LOG_DEV("updating the characteristic value is successful");
	}

	/* sending notification to the peer about change in the heart_rate value */ 
	if((at_ble_notification_send(ble_connected_dev_info[0].handle, heart_rate_serv->serv_chars[0].char_val_handle)) == AT_BLE_FAILURE) {
		DBG_LOG("sending notification to the peer failed");
		return AT_BLE_FAILURE;
	}
	else {
		DBG_LOG_DEV("sending notification to the peer successful");
		return AT_BLE_SUCCESS;
	}
}
