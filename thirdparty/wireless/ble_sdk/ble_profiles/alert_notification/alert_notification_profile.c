/**
* \file
*
* \brief Alert Notification Profile
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
#include "alert_notification_profile.h"

#if defined ANS_CLIENT_SERVICE
#include "alert_notification.h"
#endif

/***********************************************************************************
 *									Globals			                               *
 **********************************************************************************/
#if defined ANS_CLIENT_SERVICE
/*Support new alert characteristic value array*/
uint8_t supp_new_char_data[ANS_SUP_NEW_READ_LENGTH];
/*Support new alert characteristic value array*/
uint8_t new_alert_char_data[ANS_NEW_ALERT_READ_LENGTH];
/*Support new alert characteristic value array*/
uint8_t supp_unread_char_data[ANS_SUP_UNREA_READ_LENGTH];
/*Support new alert characteristic value array*/
uint8_t unread_alert_char_data[ANS_UNREA_ALERT_READ_LENGTH];
/*Support new alert characteristic value array*/
uint8_t alert_np_char_data[ANS_ALERT_NP_READ_LENGTH];

/*Support ANP Service Handle*/
gatt_anp_handler_t anp_handle = {0,0,AT_BLE_SUCCESS,AT_BLE_SUCCESS,
								AT_BLE_INVALID_PARAM, NULL, AT_BLE_INVALID_PARAM,
								NULL, AT_BLE_INVALID_PARAM,AT_BLE_INVALID_PARAM, 
								NULL, AT_BLE_INVALID_PARAM, NULL,AT_BLE_INVALID_PARAM,
								AT_BLE_INVALID_PARAM, NULL};
#endif

static uint8_t scan_rsp_data[SCAN_RESP_LEN] = {0x09,0xFF, 0x00, 0x06, 
												0x28,0x75, 0x11, 0x6a, 0x7f,
												0x7f};

extern at_ble_connected_t ble_connected_dev_info[MAX_DEVICE_CONNECTED];

connected_callback_t connected_cb;

uint8_t start_notification = 0;

/***********************************************************************************
 *									Implementation	                               *
 **********************************************************************************/

/**
 * @brief register the call back for notification of ringer setting
 * @param[in] app_connected_cb application callback function
 * @return none
 */
void register_connected_callback(connected_callback_t app_connected_cb)
{
	connected_cb = app_connected_cb ;
}

/**
 * @brief invoked by ble manager for initializing the profile
 * @param[in] void params passed by the blemanager,app may use it or may not
 * @return none
 */
void anp_client_init( void *params)
{
	anp_info_init();
	anp_client_adv();
	UNUSED(params);
}

/**
 * @brief Initializing and allocation of memory for respective service
 * @param[in] none
 * @return none
 */
void anp_info_init(void)
{
	#if defined ANS_CLIENT_SERVICE
	anp_handle.supp_new_char_data = supp_new_char_data;
	anp_handle.new_alert_char_data = new_alert_char_data;
	anp_handle.supp_unread_char_data = supp_unread_char_data;
	anp_handle.unread_alert_char_data = unread_alert_char_data;
	anp_handle.alert_np_data = alert_np_char_data;
	#endif
}

/**
 * @brief Sets the advertisements and starts the advertisement
 */
void anp_client_adv(void)
{
	uint8_t idx = 0;
	uint16_t adv_service_uuid;
	
	adv_service_uuid = ANP_SERVICE_UUID ;
	uint8_t adv_data[ANP_ADV_DATA_NAME_LEN + ANP_ADV_DATA_UUID_LEN  + 2*2];
	
	// Prepare ADV Data
	adv_data[idx++] = ANP_ADV_DATA_NAME_LEN + ADV_TYPE_LEN;
	adv_data[idx++] = ANP_ADV_DATA_NAME_TYPE;
	memcpy(&adv_data[idx], ANP_ADV_DATA_NAME_DATA, ANP_ADV_DATA_NAME_LEN);
	idx += ANP_ADV_DATA_NAME_LEN;
	
	adv_data[idx++] = ANP_ADV_DATA_UUID_LEN  + ADV_TYPE_LEN;
	adv_data[idx++] = ANP_ADV_DATA_UUID_TYPE;
	memcpy(&adv_data[idx], &adv_service_uuid, ANP_ADV_DATA_UUID_LEN );
	idx += ANP_ADV_DATA_UUID_LEN;
	
	if (at_ble_adv_data_set(adv_data, idx, scan_rsp_data, SCAN_RESP_LEN) 
							!= AT_BLE_SUCCESS) {
		DBG_LOG("adv set data not successful");
	}
	
	if(at_ble_adv_start(AT_BLE_ADV_TYPE_UNDIRECTED, AT_BLE_ADV_GEN_DISCOVERABLE,
						NULL, AT_BLE_ADV_FP_ANY,APP_ANP_FAST_ADV, APP_ANP_ADV_TIMEOUT,
						 0) != AT_BLE_SUCCESS) {
		DBG_LOG("Failed to start advertisement");
	} else {
		DBG_LOG("Device is in Advertising Mode");
	}
}

/**
 * @brief Discovering the services of Alert Notification
 * @param[in] at_ble_connected_t which consists of connection handle
 * @return at_ble_status_t which return AT_BLE_SUCCESS on success
 */
at_ble_status_t anp_info_service_discover(at_ble_connected_t *conn_params)
{	
	if (conn_params->conn_status != AT_BLE_SUCCESS) {
		return conn_params->conn_status;
	}
	
	if(at_ble_primary_service_discover_all(conn_params->handle, 
											GATT_DISCOVERY_STARTING_HANDLE,
											GATT_DISCOVERY_ENDING_HANDLE)
											 == AT_BLE_SUCCESS) {
		DBG_LOG_DEV("GATT Discovery request started ");
		return AT_BLE_SUCCESS;
	} else {
		DBG_LOG("GATT Discovery request failed");
	}	
	
	return AT_BLE_FAILURE;
}

/**
 * @brief Connection handler invoked by ble manager
 */
void anp_client_connected_state_handler(at_ble_connected_t *params)
{
	connected_cb(true);
	ALL_UNUSED(params);  //To avoid compiler warning
}

/**
 * @brief Discovery Complete handler invoked by ble manager
 * @param[in] at_ble_discovery_complete_t which consists of discovery status handle and params 
 * @return none
 */
void anp_client_discovery_complete_handler(at_ble_discovery_complete_t *discover_status)
{
		bool discover_char_flag = true;
		if(discover_status->status == AT_BLE_DISCOVERY_SUCCESS ||
							 discover_status->status == AT_BLE_SUCCESS) {
			#if defined ANS_CLIENT_SERVICE
			if ((anp_handle.char_discovery == AT_BLE_SUCCESS) && (discover_char_flag)) {
				if (at_ble_characteristic_discover_all(
				ble_connected_dev_info[0].handle,
				anp_handle.start_handle,
				anp_handle.end_handle) == AT_BLE_SUCCESS) {
					DBG_LOG_DEV("ANP Characteristic Discovery Started");
				}
				else {
					DBG_LOG_DEV("ANP Characteristic Discovery Failed");
				}
				anp_handle.char_discovery = AT_BLE_FAILURE;
				discover_char_flag = false;
			}
			else if (anp_handle.char_discovery == AT_BLE_INVALID_PARAM) {
				DBG_LOG("Alert Notification Service not Found");
				anp_handle.char_discovery = AT_BLE_ATT_INSUFF_RESOURCE;
				discover_char_flag = false;
			}
			
			if ((anp_handle.desc_discovery == AT_BLE_SUCCESS) && (discover_char_flag)) {
				if (at_ble_descriptor_discover_all(
				ble_connected_dev_info[0].handle,
				anp_handle.start_handle,
				anp_handle.end_handle) == AT_BLE_SUCCESS) {
					DBG_LOG_DEV("ANP Descriptors Discovery Started");
				}
				else {
					DBG_LOG_DEV("ANP Descriptors Discovery Failed");
				}
				anp_handle.desc_discovery = AT_BLE_FAILURE;
				discover_char_flag = false;
			}
		
			else if (anp_handle.desc_discovery == AT_BLE_INVALID_PARAM) {
				DBG_LOG("Alert Notification Descriptor not Found");
				anp_handle.char_discovery = AT_BLE_ATT_INSUFF_RESOURCE;
				discover_char_flag = false;
			}
			#endif
			
			if((anp_handle.char_discovery == AT_BLE_ATT_INSUFF_RESOURCE) && 
					(discover_char_flag)) {
				DBG_LOG("Alert Notification Profile Not supported");
				discover_char_flag = false;
				at_ble_disconnect(ble_connected_dev_info[0].handle, AT_BLE_TERMINATED_BY_USER);
			}
			
			if (discover_char_flag) {
				DBG_LOG("GATT characteristic discovery completed");
				if(ble_send_slave_sec_request(ble_connected_dev_info[0].handle) == AT_BLE_SUCCESS) {
					DBG_LOG_DEV("Sending slave security request");
				}
				else {
					DBG_LOG_DEV("Security Procedure not successfull");
				}
			}
		}
}

/**
 * @brief Service found handler invoked by ble manager
 * @param[in] at_ble_primary_service_found_t which consists of starting and ending handle of service
 * @return none
 */
void anp_client_service_found_handler(at_ble_primary_service_found_t * primary_service_params)
{
	at_ble_uuid_t *anp_service_uuid;
	anp_service_uuid = &primary_service_params->service_uuid;
	
	if	(anp_service_uuid->type == AT_BLE_UUID_16) {
		uint16_t service_uuid = (uint16_t)((primary_service_params->service_uuid.uuid[0]) |	\
		(primary_service_params->service_uuid.uuid[1] << 8));
		
		/* for Alert Notification Service*/
		if(service_uuid == ANP_SERVICE_UUID) {
			anp_handle.start_handle = primary_service_params->start_handle;
			anp_handle.end_handle = primary_service_params->end_handle;
			/* make it DBG_LOG_DEV */
			DBG_LOG("Alert Notification service discovered");
			DBG_LOG_DEV("Alert Notification service discovered %04X %04X",
						 anp_handle.start_handle, anp_handle.end_handle);
			DBG_LOG_DEV("UUID : 0x%02x%02x",primary_service_params->service_uuid.uuid[1],
						primary_service_params->service_uuid.uuid[0]);
			anp_handle.char_discovery= AT_BLE_SUCCESS;
		}
	}
}


/**
 * @brief characteristic found handler invoked by ble manager
 * @param[in] at_ble_characteristic_found_t consists the characteristic handle,value handle
 * @return none
 */
void anp_client_characteristic_found_handler(at_ble_characteristic_found_t *characteristic_found)
{
	uint16_t charac_16_uuid;
	DBG_LOG_DEV("The characteristic type is %d",characteristic_found->char_uuid.type);
	
	charac_16_uuid = (uint16_t)((characteristic_found->char_uuid.uuid[0]) | \
	(characteristic_found->char_uuid.uuid[1] << 8));
	
	switch(charac_16_uuid)
	{
		/* Supported New Alert Category */
		case SUPPORT_NEW_ALERT_CHAR_UUID :
		{
			anp_handle.supp_new_char_handle = characteristic_found->value_handle;
			DBG_LOG("Supported new alert category characteristic discovered");
			DBG_LOG_DEV("Supported New Alert Category characteristics "
						"%04X",anp_handle.supp_new_char_handle);
			DBG_LOG_DEV("Characteristic Info ConnHandle 0x%02x : "
						"Char handle 0x%02x : Value handle : 0x%02x :"
						" Properties : 0x%02x",
						characteristic_found->conn_handle,
						characteristic_found->char_handle,
						characteristic_found->value_handle,
						characteristic_found->properties);
			DBG_LOG_DEV("UUID : 0x%02x%02x",characteristic_found->char_uuid.uuid[1],
						characteristic_found->char_uuid.uuid[0]);
		}
		break;
		
		/* New Alert Category */
		case NEW_ALERT_CHAR_UUID:
		{
			anp_handle.new_alert_char_handle = characteristic_found->value_handle;
			DBG_LOG("New alert category characteristic discovered");
			DBG_LOG_DEV("New Alert characteristics %04X",anp_handle.new_alert_char_handle);
			DBG_LOG_DEV("Characteristic Info ConnHandle 0x%02x : "
						"Char handle 0x%02x : Value handle : 0x%02x"
						" : Properties : 0x%02x",
						characteristic_found->conn_handle,
						characteristic_found->char_handle,
						characteristic_found->value_handle,
						characteristic_found->properties);
			DBG_LOG_DEV("UUID : 0x%02x%02x",
						characteristic_found->char_uuid.uuid[1],
						characteristic_found->char_uuid.uuid[0]);
		}
		break;
		
		/* Supported Unread Alert Category */
		case SUPPORT_UNREAD_ALERT_CHAR_UUID:
		{
			anp_handle.supp_unread_char_handle = characteristic_found->value_handle;
			DBG_LOG("Supported unread alert characteristic discovered");
			DBG_LOG_DEV("Supported Unread Alert Category characteristics "
						"%04X",anp_handle.supp_unread_char_handle);
			DBG_LOG_DEV("Characteristic Info ConnHandle 0x%02x : Char handle 0x%02x"
						" : Value handle : 0x%02x : Properties : 0x%02x",
						characteristic_found->conn_handle,
						characteristic_found->char_handle,
						characteristic_found->value_handle,
						characteristic_found->properties);
			DBG_LOG_DEV("UUID : 0x%02x%02x",characteristic_found->char_uuid.uuid[1],
											characteristic_found->char_uuid.uuid[0]);
		}
		break;
		
		/* Unread Alert Status*/
		case UNREAD_ALERT_STATUS_CHAR_UUID:
		{
			anp_handle.unread_alert_char_handle = characteristic_found->value_handle;
			DBG_LOG("Unread alert status characteristic discovered");
			DBG_LOG_DEV("Unread Alert status characteristics "
						"%04X",anp_handle.unread_alert_char_handle);
			DBG_LOG_DEV("Characteristic Info ConnHandle 0x%02x :"
						" Char handle 0x%02x : Value handle : 0x%02x : Properties : 0x%02x",
						characteristic_found->conn_handle,
						characteristic_found->char_handle,
						characteristic_found->value_handle,
						characteristic_found->properties);
			DBG_LOG_DEV("UUID : 0x%02x%02x",characteristic_found->char_uuid.uuid[1],
						characteristic_found->char_uuid.uuid[0]);
		}
		break;
		
		/* Alert Notification Control Point */
		case ALERT_NOTI_CONTROL_CHAR_UUID:
		{
			anp_handle.alert_np_char_handle = characteristic_found->value_handle;
			DBG_LOG("Alert Notification control characteristic discovered");
			DBG_LOG_DEV("Alert Notification Control Point"
						" characteristics %04X",anp_handle.alert_np_char_handle);
			DBG_LOG_DEV("Characteristic Info ConnHandle 0x%02x : Char handle 0x%02x :"
						" Value handle : 0x%02x : Properties : 0x%02x",
						characteristic_found->conn_handle,
						characteristic_found->char_handle,
						characteristic_found->value_handle,
						characteristic_found->properties);
			DBG_LOG_DEV("UUID : 0x%02x%02x",
						characteristic_found->char_uuid.uuid[1],
						characteristic_found->char_uuid.uuid[0]);
		}
		break;
	}
	anp_handle.desc_discovery= AT_BLE_SUCCESS;
}

/**
 * @brief client descriptor found handler invoked by ble manager
 * @param[in] at_ble_descriptor_found_t consists the descriptor handle
 */
void anp_client_descriptor_found_handler(at_ble_descriptor_found_t *descriptor_found)
{
		uint16_t desc_16_uuid;
		if(descriptor_found->desc_uuid.type == AT_BLE_UUID_16) {
			desc_16_uuid = (uint16_t)((descriptor_found->desc_uuid.uuid[0]) | \
			(descriptor_found->desc_uuid.uuid[1] << 8));
			
			if(desc_16_uuid == CLIENT_CHAR_CONF_DESC_UUID) {
				if ((descriptor_found->desc_handle > anp_handle.new_alert_char_handle ) &&
					 (descriptor_found->desc_handle < (anp_handle.new_alert_char_handle+2))) {
					DBG_LOG("Client characteristic configuration descriptor for"
							" new alert discovered");
					DBG_LOG_DEV("\r\nClient Characteristics Configuration "
								"Descriptor for new alert found"
								" handle %x",descriptor_found->desc_handle);
					anp_handle.new_alert_desc_handle = descriptor_found->desc_handle;
				} else if ((descriptor_found->desc_handle > 
							anp_handle.unread_alert_char_handle) && 
							(descriptor_found->desc_handle < 
							(anp_handle.unread_alert_char_handle+2))) {
					DBG_LOG("Client characteristic configuration descriptor"
							" for unread alert discovered");
					DBG_LOG_DEV("\r\nClient Characteristics Configuration "
								"Descriptor for unread alert status found "
								"handle %x ",descriptor_found->desc_handle);
					anp_handle.unread_alert_desc_handle = descriptor_found->desc_handle;
				}
			}
		}
}

/**
 * @brief disconnected event handler invoked by ble manager
 * @param[in] at_ble_disconnected_t consists connection handle and reason
 * return none
 */
void anp_client_disconnected_event_handler(at_ble_disconnected_t *params)
{
	connected_cb(true);
	if(at_ble_adv_start(AT_BLE_ADV_TYPE_UNDIRECTED, AT_BLE_ADV_GEN_DISCOVERABLE,
						NULL, AT_BLE_ADV_FP_ANY,APP_ANP_FAST_ADV,
						APP_ANP_ADV_TIMEOUT, 0) != AT_BLE_SUCCESS) {
		DBG_LOG("BLE Adv start Failed");
	}
	else {
		DBG_LOG("Device in Advertisement mode");
	}

	ALL_UNUSED(params);  //To avoid compiler warning
}



/**
 * @brief write response handler invoked by ble manager
 * @param[in] at_ble_characteristic_write_response_t consists the char
 * @return none
 */
void anp_client_write_response_handler(at_ble_characteristic_write_response_t *params)
{
	at_ble_characteristic_write_response_t writersp;
	memcpy((uint8_t *)&writersp, params, sizeof(at_ble_characteristic_write_response_t));
	DBG_LOG_DEV("Write response received");
	if (writersp.char_handle == anp_handle.new_alert_desc_handle ) {
		DBG_LOG_DEV("write response for new alert notification descriptor");
	} else if (writersp.char_handle == anp_handle.unread_alert_desc_handle) {
		DBG_LOG_DEV("Write respone for unread alert notification descriptor");	
	}
}

/**
 * @brief invoked by ble manager on receiving notification
 * @param[in] at_ble_notification_recieved_t consists the char handle
 */
void anp_client_notification_handler(at_ble_notification_recieved_t *noti_read_resp)
{
#if defined ANS_CLIENT_SERVICE
		anp_alert_notify_response(noti_read_resp,&anp_handle);
#endif
}

/**
 * @brief invoked by ble manager for setting the notification 
 * @param[in] param's passed by the ble manager which may or may not be used
 */
void anp_client_security_done_handler(void *param)
{		
	start_notification = 0;
	
	if(anp_alert_read(ble_connected_dev_info[0].handle,
						anp_handle.supp_new_char_handle) == AT_BLE_SUCCESS) {
		DBG_LOG_DEV("Support New Alert info request success");
		LED_Toggle(LED0);
	}
	
	if(anp_alert_read( ble_connected_dev_info[0].handle, 
					anp_handle.supp_unread_char_handle) == AT_BLE_SUCCESS) {
		DBG_LOG_DEV("Support Unread Alert info request success");
	}
	
	DBG_LOG_DEV("Waiting for read response");
	UNUSED(param);
}

/**
 * @brief Handler for enabling the notification 
 * \note Called by the ble_manager for enabling the notification in the gatt server
 * @param[in] none
 * @return none 
 */
void anp_client_write_notification_handler(void )
{
	DBG_LOG_DEV("Initiating notifications for new alert and unread alert");
	/* to enable the new alert and unread alert descriptor*/
	
	if(!(anp_alert_noti(ble_connected_dev_info[0].handle,
						anp_handle.unread_alert_desc_handle,
						true) == AT_BLE_SUCCESS)) {
		DBG_LOG("Fail to set unread alert descriptor 1");
	} else {
		DBG_LOG_DEV("Successfully sent notification request for unread alert");
	}
	
	if(!(anp_alert_noti(ble_connected_dev_info[0].handle,
						anp_handle.new_alert_desc_handle,true) == AT_BLE_SUCCESS)) {
		DBG_LOG("Fail to set new alert descriptor 1");
	} else {
		DBG_LOG_DEV("Successfully sent notification request for new alert");
	}
}

/**
 * @brief invoked by app for disabling the notifications in gatt server
 * @param[in] none
 * @return none
 */
void anp_client_disable_notification(void)
{	
	DBG_LOG_DEV("Disabling notifications for unread alert and new alert");
	/* to disable the new alert and unread alert descriptor*/
	if(!(anp_alert_noti(ble_connected_dev_info[0].handle,anp_handle.unread_alert_desc_handle,false) == AT_BLE_SUCCESS)) {
		DBG_LOG("Fail to set unread alert descriptor 0");
	}
	
	if(!(anp_alert_noti(ble_connected_dev_info[0].handle,anp_handle.new_alert_desc_handle,false) == AT_BLE_SUCCESS)) {
		DBG_LOG("Fail to set new alert descriptor 0");
	}
}

/**
 * @brief char changed handler invoked by ble manager
 * @param[in] at_ble_characteristic_read_response_t consists of characteristic handle value handle
 */
void anp_client_read_response_handler(at_ble_characteristic_read_response_t *char_read_resp)
{
	uint8_t read_status;
	
	#if defined ANS_CLIENT_SERVICE
	    read_status = anp_alert_read_response(char_read_resp,&anp_handle);
		if (read_status == SUPPORTED_NEW_ALERT_READ) {
			++start_notification;
		}
		
		if (read_status == SUPPORTED_UNREAD_ALERT_READ) {
			++start_notification;
		}
		
		if (start_notification == SUPPORTED_UNREAD_ALERT_READ) {
			anp_client_write_notification_handler();
		}
	#endif	
}
