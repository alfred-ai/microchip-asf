/**
* \file
*
* \brief ANCS Profile
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
*    Atmel micro controller product.
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
* This is the reference manual for the Time Information Profile
*/
/***********************************************************************************
 *									Includes		                               *
 **********************************************************************************/
#include <string.h>
#include "at_ble_api.h"
#include "ble_manager.h"
#include "ble_utils.h"
#include "ancs_profile.h"
#include "ancs.h"

/***********************************************************************************
 *									Globals			                               *
 **********************************************************************************/
/*Profile Information*/
app_anp_data_t app_anp_info;

/*ANCS profile data*/
ancs_prf_t ancs_data;

static uint8_t scan_rsp_data[SCAN_RESP_LEN] = {0x09,0xFF, 0x00, 0x06, 0x28, 0x75, 0x11, 0x6a, 0x7f, 0x7f};


/***********************************************************************************
 *									Implementation	                               *
 **********************************************************************************/
/**
 * @brief Initializing the info init
 */
void anp_info_init(void)
{
	memset((uint8_t *)&app_anp_info, 0, sizeof(app_anp_data_t));
	app_anp_info.devicedb = FALSE;
	app_anp_info.discover_role = DISCOVER_SERVICE;
}

/**
 * @brief anp_client_adv sets the advertisement data and starts advertisement
 */
void anp_client_adv(void)
{
	uint8_t idx = 0;
	uint8_t adv_data[ANP_ADV_DATA_NAME_LEN + ANP_SOLICITATION_LEN + 2*2];
	
	// Prepare ADV Data
	adv_data[idx++] = ANP_ADV_DATA_NAME_LEN + ADV_TYPE_LEN;
	adv_data[idx++] = ANP_ADV_DATA_NAME_TYPE;
	memcpy(&adv_data[idx], ANP_ADV_DATA_NAME_DATA, ANP_ADV_DATA_NAME_LEN);
	idx += ANP_ADV_DATA_NAME_LEN;
	
	adv_data[idx++] = ANP_SOLICITATION_LEN + ADV_TYPE_LEN;
	adv_data[idx++] = ANP_ADV_DATA_SERVSOLICITATION_128UUID_TYPE;
	memcpy(&adv_data[idx], ANP_ANCS_SERVICE_UUID, ANP_SOLICITATION_LEN);
	idx += ANP_SOLICITATION_LEN;
	
	if (at_ble_adv_data_set(adv_data, idx, scan_rsp_data, SCAN_RESP_LEN) != AT_BLE_SUCCESS) 
	{
		DBG_LOG("adv set data not successful");
	}
	
	if(at_ble_adv_start(AT_BLE_ADV_TYPE_UNDIRECTED, AT_BLE_ADV_GEN_DISCOVERABLE, NULL, AT_BLE_ADV_FP_ANY,
	APP_ANP_FAST_ADV, APP_ANP_ADV_TIMEOUT, 0) != AT_BLE_SUCCESS)
	{
		DBG_LOG("Failed to start advertisement");
	} else {
		DBG_LOG("Device is in Advertising Mode");
	}
}


/**
 * @brief Handler for connection event 
 * @param[in] connected event parameter containing details like handle
 * \note Called by the ble_manager after receiving connection event
 */
void anp_client_connected_state_handler(at_ble_connected_t *params)
{
	at_ble_status_t status;
	
	memcpy((uint8_t *)&app_anp_info.conn_params, params, sizeof(at_ble_connected_t));		

	ancs_enable(&ancs_data, app_anp_info.conn_params.handle);
	
	if(!app_anp_info.devicedb)
	{		
		//app_anp_info.discover_role = DISCOVER_SERVICE;			
		/* Discover Remote Service by service UUID */
		status = at_ble_primary_service_discover_by_uuid(app_anp_info.conn_params.handle,START_HANDLE, END_HANDLE, &ancs_data.ancs_serv.service_uuid);
		if(status != AT_BLE_SUCCESS)
		{
			DBG_LOG("Failed to start service discovery. status = %d", status);
		}		
	}

}

/**
 * @brief Handler for discovery complete event
 * @param[in] discovery complete event which contains result of discovery event
 * \note Called by the ble_manager after receiving discovery complete event
 */
void anp_client_discovery_complete_handler(at_ble_discovery_complete_t *params)
{
		at_ble_discovery_complete_t discover_status;
		memcpy((uint8_t *)&discover_status, params, sizeof(at_ble_discovery_complete_t));
		
		if(discover_status.status == AT_DISCOVER_SUCCESS || discover_status.status == AT_BLE_SUCCESS) {
			if(discover_status.operation == AT_BLE_DISC_BY_UUID_SVC) {	
				if(at_ble_characteristic_discover_all(app_anp_info.conn_params.handle, 
														ancs_data.ancs_serv.start_handle,
														 ancs_data.ancs_serv.end_handle) != AT_BLE_SUCCESS){
					DBG_LOG("Fail to start discover characteristic");
				}
			} else if(discover_status.operation == AT_BLE_DISC_ALL_CHAR) {
				if(at_ble_descriptor_discover_all(ancs_data.notification_source_char.conn_handle,
												(ancs_data.notification_source_char.value_handle+1),
												(ancs_data.data_source_char.char_handle-1)) != AT_BLE_SUCCESS) {
					DBG_LOG("Descriptor Discovery Failed");
				}
			} else if(discover_status.operation == AT_BLE_DISC_DESC_CHAR) {
				app_anp_info.devicedb = TRUE;
				if(ble_send_slave_sec_request(app_anp_info.conn_params.handle) != AT_BLE_SUCCESS) {
					DBG_LOG("Fail to start security procedure");
				}
				
			}
		}
}

/**
 * @brief Handler for service found event
 * @param[in] service found event parameter containing details like service handle,uuid
 * \note Called by the ble_manager after receiving service found event
 */
void anp_client_service_found_handler(at_ble_primary_service_found_t * params)
{
	memcpy((uint8_t *)&ancs_data.ancs_serv, params, sizeof(at_ble_primary_service_found_t));
	
	DBG_LOG_DEV("Discover service Info:\r\n -->ConnHandle 0x%02x\r\n -->start handle 0x%02x\r\n -->End handle : 0x%02x",
	ancs_data.ancs_serv.conn_handle,
	ancs_data.ancs_serv.start_handle,
	ancs_data.ancs_serv.end_handle);	
}


/**
 * @brief Handler for characteristic found event
 * @param[in] characteristic found event parameter containing details like characteristic handle,uuid
 * \note Called by the ble_manager after receiving characteristic found event
 */
void anp_client_characteristic_found_handler(at_ble_characteristic_found_t *params)
{
	memcpy((uint8_t *)&app_anp_info.char_info, params, sizeof(at_ble_characteristic_found_t));
	
	if(!(memcmp(app_anp_info.char_info.char_uuid.uuid, ANCS_CHAR_NOTIFICATION_SOURCE_UUID, 16)))
	{
		memcpy((uint8_t *)&ancs_data.notification_source_char, &app_anp_info.char_info, sizeof(at_ble_characteristic_found_t));
	}
	else if(!(memcmp(app_anp_info.char_info.char_uuid.uuid, ANCS_CHAR_CONTROL_POINT, 16)))
	{
		memcpy((uint8_t *)&ancs_data.control_point_char, &app_anp_info.char_info, sizeof(at_ble_characteristic_found_t));
	}
	else if(!(memcmp(app_anp_info.char_info.char_uuid.uuid, ANCS_CHAR_DATA_SOURCE, 16)))
	{
		memcpy((uint8_t *)&ancs_data.data_source_char, &app_anp_info.char_info, sizeof(at_ble_characteristic_found_t));
	}
	
	DBG_LOG("Characteristic Info:\r\n -->ConnHandle: 0x%02x\r\n -->Char handle: "
			"0x%02x\r\n -->Value handle: 0x%02x\r\n -->Properties: 0x%02x",
			app_anp_info.char_info.conn_handle,
			app_anp_info.char_info.char_handle,
			app_anp_info.char_info.value_handle,
			app_anp_info.char_info.properties);	
}

/**
 * @brief Handler for disconnection event
 * @param[in] disconnected event parameter containing details like handle
 * \note Called by the ble_manager after receiving disconnection event
 */
void anp_client_disconnected_event_handler(at_ble_disconnected_t *params)
{
	at_ble_disconnected_t disconnect;
	memcpy((uint8_t *)&disconnect, params, sizeof(at_ble_disconnected_t));
	app_anp_info.devicedb = FALSE;
	
	if(at_ble_adv_start(AT_BLE_ADV_TYPE_UNDIRECTED, AT_BLE_ADV_GEN_DISCOVERABLE, NULL, AT_BLE_ADV_FP_ANY,
	APP_ANP_FAST_ADV, APP_ANP_ADV_TIMEOUT, 0) != AT_BLE_SUCCESS)
	{
		DBG_LOG("BLE Adv start Failed");
	}
	else
	{
		DBG_LOG("Device in Advertisement mode");
	}
			
}

/**
 * @brief Handler for descriptor found event
 * @param[in] descriptor found event parameter containing details like descriptor handle,uuid
 * \note Called by the ble_manager after receiving descriptor found event
 */
void anp_client_descriptor_found_handler(at_ble_descriptor_found_t *params)
{
		memcpy((uint8_t *)&ancs_data.notification_source_desc, params, sizeof(at_ble_descriptor_found_t));
					
		DBG_LOG_DEV("Descriptor Info:\r\n -->ConnHandle: 0x%02x\r\n -->Descriptor handle : 0x%02x",
					ancs_data.notification_source_desc.conn_handle,
					ancs_data.notification_source_desc.desc_handle
					);
					
		DBG_LOG_DEV(" -->UUID: 0x%02x%02x",
					ancs_data.notification_source_desc.desc_uuid.uuid[1],
					ancs_data.notification_source_desc.desc_uuid.uuid[0]);
}

/**
 * @brief Handler for char changed handler 
 * @param[in] characteristic changed event parameter containing details like characteristic handle,value
 * \note Called by the ble_manager after receiving characteristic change event
 */
void anp_client_char_changed_handler(at_ble_characteristic_changed_t *params)
{
	at_ble_characteristic_changed_t change_params;
	
	memcpy((uint8_t *)&change_params, params, sizeof(at_ble_characteristic_changed_t));
}

/**
 * @brief Handler for write response 
 * @param[in] write response parameter contating the result of write request
 * \note Called by the ble_manager after receiving write response event
 */
void anp_client_write_response_handler(at_ble_characteristic_write_response_t *params)
{
	at_ble_characteristic_write_response_t writersp;
	memcpy((uint8_t *)&writersp, params, sizeof(at_ble_characteristic_write_response_t));
}

/**
 * @brief Handler for notification event 
 * @param[in] notification received parameter containing the notification value
 * \note Called by the ble_manager after receiving the notification
 */
void anp_client_notification_handler(at_ble_notification_recieved_t *params)
{
	 at_ble_notification_recieved_t notif;
	 memcpy((uint8_t *)&notif, params, sizeof(at_ble_notification_recieved_t));
	 
	 if(notif.char_value[0] == NOTIFICATION_ADDED)
	 {
		 if(notif.char_value[2] == CATEGORY_ID_INCOMINGCALL)
		 {
			 DBG_LOG("Incoming Call Alert");
		 }
	 }
	 else if(notif.char_value[0] == NOTIFICATION_REMOVED)
	 {
		 if(notif.char_value[2] == CATEGORY_ID_INCOMINGCALL)
		 {
			 DBG_LOG("Waiting for Alert");
		 }
	 }
}

/**
 * @brief Handler for enabling the notification 
 * \note Called by the ble_manager for enabling the notification in the gatt server
 */
void anp_client_write_notification_handler(void *param)
{
	uint8_t data[2] = {1, 0};
	if(at_ble_characteristic_write(ancs_data.notification_source_desc.conn_handle, 
									ancs_data.notification_source_desc.desc_handle,
									0, 2, data,FALSE, TRUE) == AT_BLE_FAILURE) {
		DBG_LOG("\r\nFailed to send characteristic Write Request");
	}
	UNUSED(param);
}

/**
 * @brief invoked by ble manager for initializing the profro
 */
void anp_client_init( void *params)
{
	anp_info_init();
	ancs_init(&ancs_data);
	anp_client_adv();
	UNUSED(params);
}
