/**
* \file
*
* \brief BLE Manager
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
* Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
*/


#include <asf.h>
#include <string.h>
#include "at_ble_api.h"
#include "ble_manager.h"
#include "ble_utils.h"
#include "platform.h"

extern volatile bool init_done;

#if defined LINK_LOSS_SERVICE
	#include "link_loss.h"
#endif /* LINK_LOSS_SERVICE */

#if defined IMMEDIATE_ALERT_SERVICE
	#include "immediate_alert.h"
#endif /* IMMEDIATE_ALERT_SERVICE */

#if defined TX_POWER_SERVICE	
	#include "tx_power.h"
#endif /* TX_POWER_SERVICE */

#if defined PROXIMITY_REPORTER
	#include "pxp_reporter.h"
	#define ATT_DB_MEMORY 1
#endif /* PROXIMITY_REPORTER */

#if defined PROXIMITY_MONITOR
	#include "pxp_monitor.h"
#endif /* PROXIMITY_MONITOR */

#if defined HID_DEVICE
	#include "hid_device.h"
#endif /*HID_DEVICE*/	

#if defined ATT_DB_MEMORY
uint8_t att_db_data[1000];
#endif

/** @brief information of the connected devices */
at_ble_connected_t ble_connected_dev_info[MAX_DEVICE_CONNECTED];

/** @brief callbacks initialized with user provided callbacks */
ble_gap_event_callback_t ble_connected_cb = NULL;
ble_gap_event_callback_t ble_disconnected_cb = NULL;
ble_gap_event_callback_t ble_paired_cb = NULL;
ble_characteristic_changed_callback_t ble_char_changed_cb = NULL;
ble_notification_confirmed_callback_t ble_notif_conf_cb = NULL;
ble_indication_confirmed_callback_t ble_indic_conf_cb = NULL;

#if ((BLE_DEVICE_ROLE == BLE_CENTRAL) || (BLE_DEVICE_ROLE == BLE_CENTRAL_AND_PERIPHERAL)|| (BLE_DEVICE_ROLE == BLE_OBSERVER))
uint8_t scan_response_count = 0;
at_ble_scan_info_t scan_info[MAX_SCAN_DEVICE];
#endif

at_ble_LTK_t app_bond_info;
bool app_device_bond;
at_ble_auth_t auth_info;

at_ble_events_t event;
uint8_t params[BLE_EVENT_PARAM_MAX_SIZE];

/** @brief initializes the platform */
static void ble_init(at_ble_init_config_t * args);

/** @brief Set BLE Address, If address is NULL then it will use BD public address */
static void ble_set_address(at_ble_addr_t *addr);

/** @brief function to get event from stack */
at_ble_status_t ble_event_task(void)
{
    if (at_ble_event_get(&event, params, BLE_EVENT_TIMEOUT) == AT_BLE_SUCCESS) 
    {
            ble_event_manager(event, params);
            return AT_BLE_SUCCESS;
    }
    
    return AT_BLE_FAILURE;
}

/** @brief BLE device initialization */
void ble_device_init(at_ble_addr_t *addr)
{
	at_ble_init_config_t pf_cfg;
	platform_config busConfig;
	char *dev_name = NULL;
	
#if defined ATT_DB_MEMORY
	pf_cfg.memPool.memSize = 1000;
	pf_cfg.memPool.memStartAdd = att_db_data;
#else
	pf_cfg.memPool.memSize = 0;
	pf_cfg.memPool.memStartAdd = NULL;
#endif
	/*Bus configuration*/
	busConfig.bus_type = AT_BLE_UART;
	pf_cfg.plf_config = &busConfig;	
	
	ble_init(&pf_cfg);
	
	init_done = true;
	
	ble_set_address(addr);	
	
	dev_name = (char *)BLE_DEVICE_NAME;
	if (ble_set_device_name((uint8_t *)dev_name, strlen(dev_name)) != AT_BLE_SUCCESS)
	{
		DBG_LOG("Device name set failed");
	}
		
	BLE_PROFILE_INIT(NULL);
}

/** @brief set device name to BLE Device*/
at_ble_status_t ble_set_device_name(uint8_t *name, uint8_t name_len)
{
	if ((name == NULL) || (name_len < 1))
	{
		return AT_BLE_INVALID_PARAM;
	}
	return at_ble_device_name_set(name, name_len);
}

/* Initialize the BLE */
static void ble_init(at_ble_init_config_t * args)
{
	/* Initialize the platform */
	DBG_LOG("Initializing BTLC1000");
	
	/* Init BLE device */
	if(at_ble_init(args) != AT_BLE_SUCCESS)
	{
		DBG_LOG("BTLC1000 Initialization failed");
		DBG_LOG("Please check the power and connection / hardware connector");	
		while(1);
	}
}


/* Set BLE Address, If address is NULL then it will use BD public address */
static void ble_set_address(at_ble_addr_t *addr)
{
	at_ble_dev_config_t stDevConfig;
	at_ble_addr_t address = {AT_BLE_ADDRESS_PUBLIC, {0xAB, 0xCD, 0xEF, 0xAB, 0xCD, 0xEF}};
	at_ble_status_t enuStatus;
	
	if (addr == NULL)
	{		
		/* get BD address from BLE device */
		if(at_ble_addr_get(&address) != AT_BLE_SUCCESS)
		{
			DBG_LOG("BD address get failed");
		}
		
		/* set the BD address */
		if(at_ble_addr_set(&address) != AT_BLE_SUCCESS)
		{
			DBG_LOG("BD address set failed");
		}
		
		DBG_LOG("BD Address:0x%02X%02X%02X%02X%02X%02X, Address Type:%d",
		address.addr[5],
		address.addr[4],
		address.addr[3],
		address.addr[2],
		address.addr[1],
		address.addr[0], address.type);
	}
	else
	{
		/* set the given BD address */
		if(at_ble_addr_set(addr) != AT_BLE_SUCCESS)
		{
			DBG_LOG("BD address set failed");
		}
		DBG_LOG("BD Address:0x%02X%02X%02X%02X%02X%02X, Address Type:%d",
		addr->addr[5],
		addr->addr[4],
		addr->addr[3],
		addr->addr[2],
		addr->addr[1],
		addr->addr[0], addr->type);
	}
	
	//Set device configuration
	////Device role
	stDevConfig.role = AT_BLE_ROLE_ALL;
	////device renew duration
	stDevConfig.renew_dur = AT_RENEW_DUR_VAL_MIN;
	////device address type
	stDevConfig.address = address;
	////Attributes
	stDevConfig.att_cfg.b2NamePerm = AT_BLE_WRITE_DISABLE;
	stDevConfig.att_cfg.b2AppearancePerm = AT_BLE_WRITE_DISABLE;
	stDevConfig.att_cfg.b1EnableSpcs = 0;
	stDevConfig.att_cfg.b1EnableServiceChanged = 0;
	stDevConfig.att_cfg.b2Rfu = AT_BLE_WRITE_DISABLE;
	////Handles
	stDevConfig.gap_start_hdl = AT_BLE_AUTO_ALLOC_HANDLE;
	stDevConfig.gatt_start_hdl = AT_BLE_AUTO_ALLOC_HANDLE;
	////MTU
	stDevConfig.max_mtu = AT_MTU_VAL_RECOMMENDED;
	
	enuStatus = at_ble_set_dev_config(&stDevConfig);
	UNUSED(enuStatus);
}

#if ((BLE_DEVICE_ROLE == BLE_CENTRAL) || (BLE_DEVICE_ROLE == BLE_CENTRAL_AND_PERIPHERAL) || (BLE_DEVICE_ROLE == BLE_OBSERVER))
/** @brief request the peer device for connection */
at_ble_status_t gap_dev_connect(at_ble_addr_t *dev_addr)
{
	at_ble_connection_params_t gap_conn_parameter;

	gap_conn_parameter.con_intv_min = GAP_CONN_INTERVAL_MIN;
	gap_conn_parameter.con_intv_max = GAP_CONN_INTERVAL_MAX;
	gap_conn_parameter.con_latency = GAP_CONN_SLAVE_LATENCY;
	gap_conn_parameter.ce_len_min = GAP_CE_LEN_MIN;
	gap_conn_parameter.ce_len_max = GAP_CE_LEN_MAX;
	gap_conn_parameter.superv_to = GAP_SUPERVISION_TIMOUT;

	return (at_ble_connect(dev_addr, GAP_CONNECT_PEER_COUNT, SCAN_INTERVAL, SCAN_WINDOW, &gap_conn_parameter));
}

/** @brief instructs device to start scanning */
at_ble_status_t gap_dev_scan(void)
{
	/* Device Scan discover started*/
	DBG_LOG("Scanning...Please wait...");
	/* make service discover counter to zero*/
	scan_response_count = 0;
	return(at_ble_scan_start(SCAN_INTERVAL, SCAN_WINDOW, SCAN_TIMEOUT, SCAN_TYPE, AT_BLE_SCAN_GEN_DISCOVERY, false,true)) ;
}

/** @brief function handling scaned information */
at_ble_status_t ble_scan_info_handler(at_ble_scan_info_t *scan_param)
{
	if(scan_response_count < MAX_SCAN_DEVICE)
	{
		// store the advertising report data into scan_info[]
		memcpy((uint8_t *)&scan_info[scan_response_count], scan_param, sizeof(at_ble_scan_info_t));
		DBG_LOG_DEV("Info:Device found address [%d]  0x%02X%02X%02X%02X%02X%02X ",
		scan_response_count,
		scan_param->dev_addr.addr[5],
		scan_param->dev_addr.addr[4],
		scan_param->dev_addr.addr[3],
		scan_param->dev_addr.addr[2],
		scan_param->dev_addr.addr[1],
		scan_param->dev_addr.addr[0]);
		scan_response_count++;
		return AT_BLE_SUCCESS;
	}
	else
	{
		DBG_LOG("Info:maximum of scan device reached");
		//Todo Stop Scanning
		return AT_BLE_FAILURE;
	}
}

/** @brief function handles scan report */
at_ble_status_t ble_scan_report_handler(at_ble_scan_report_t *scan_report)
{
	if (scan_report->status == AT_BLE_SUCCESS)
	{
		/* All scan data should be handled */
		return (BLE_SCAN_DATA_HANDLER(scan_info, scan_response_count));
	}
	else
	{
		DBG_LOG("Scanning  failed");
	}
	return AT_BLE_FAILURE;
}

/* Parse the received advertising data for service and local name */
uint8_t scan_info_parse(at_ble_scan_info_t *scan_info_data,
				at_ble_uuid_t *ble_service_uuid, uint8_t adv_type)
{
	if (scan_info_data->adv_data_len) {
		uint8_t adv_data_size;
		uint8_t index = 0;
		volatile adv_element_t *adv_element_p;
		volatile adv_element_t adv_element_data;

		adv_data_size = scan_info_data->adv_data_len;
		adv_element_data.len = 0;
		while (adv_data_size) {
			adv_element_data.len = scan_info_data->adv_data[index];
			adv_element_data.type
			= scan_info_data->adv_data[index + 1];
			adv_element_data.data
			= &scan_info_data->adv_data[index + 2];
			adv_element_p = &adv_element_data;

			if (adv_element_p->type == adv_type) {
				/* passing the length of data type */
				uint8_t adv_type_size = adv_element_p->len;
				/* actual size of the data	*/
				adv_type_size -= 1;
				while (adv_type_size) {
					volatile int cmp_status = -1;
					if (ble_service_uuid->type ==
					AT_BLE_UUID_16) {
						cmp_status = memcmp(
						adv_element_p->data, ble_service_uuid->uuid,
						AT_BLE_UUID_16_LEN);
						adv_element_p->data
						+= AT_BLE_UUID_16_LEN;
						adv_type_size
						-= AT_BLE_UUID_16_LEN;
					} else if (ble_service_uuid->type ==
					AT_BLE_UUID_32) {
						cmp_status = memcmp(
						adv_element_p->data, ble_service_uuid->uuid,
						AT_BLE_UUID_32_LEN);
						adv_element_p->data
						+= AT_BLE_UUID_32_LEN;
						adv_type_size
						-= AT_BLE_UUID_32_LEN;
					} else if (ble_service_uuid->type ==
					AT_BLE_UUID_128) {
						cmp_status = memcmp(
						adv_element_p->data, ble_service_uuid->uuid,
						AT_BLE_UUID_128_LEN);
						adv_element_p->data
						+= AT_BLE_UUID_128_LEN;
						adv_type_size
						-= AT_BLE_UUID_32_LEN;
					}

					if (cmp_status == 0) {
						return AT_BLE_SUCCESS;
					}
				}
			}

			index += (adv_element_data.len + 1);
			adv_element_data.len += 1;
			adv_data_size -= adv_element_data.len;
		}
	}

	return AT_BLE_FAILURE;
}

#endif /* ((BLE_DEVICE_ROLE == BLE_CENTRAL) || (BLE_DEVICE_ROLE == BLE_CENTRAL_AND_PERIPHERAL) || (BLE_DEVICE_ROLE == BLE_OBSERVER)) */

/** @brief function to send slave security request */
at_ble_status_t ble_send_slave_sec_request(at_ble_handle_t conn_handle)
{
	#if BLE_PAIR_ENABLE
		if (at_ble_send_slave_sec_request(conn_handle, BLE_MITM_REQ, BLE_BOND_REQ) == AT_BLE_SUCCESS)
		{
			DBG_LOG_DEV("Slave security request successful");
			return AT_BLE_SUCCESS;
		}
		else
		{
			DBG_LOG("Slave security request failed");
		}
	#else
		BLE_ADDITIONAL_PAIR_DONE_HANDLER(NULL);
		if (ble_paired_cb != NULL)
		{
			ble_paired_cb(conn_handle);
		}
	#endif
	return AT_BLE_FAILURE;
}

/** @brief function to handle connected event received from stack */
void ble_connected_state_handler(at_ble_connected_t *conn_params)
{
	
	memcpy(ble_connected_dev_info, (uint8_t *)conn_params, sizeof(at_ble_connected_t));
	if (conn_params->conn_status == AT_BLE_SUCCESS)
	{
		DBG_LOG("Connected to peer device with address 0x%02x%02x%02x%02x%02x%02x",
		conn_params->peer_addr.addr[5],
		conn_params->peer_addr.addr[4],
		conn_params->peer_addr.addr[3],
		conn_params->peer_addr.addr[2],
		conn_params->peer_addr.addr[1],
		conn_params->peer_addr.addr[0]);
		
		DBG_LOG("Connection Handle %d", conn_params->handle);
		
		if (ble_connected_cb != NULL)
		{
			ble_connected_cb(conn_params->handle);
		}
		
#if (BLE_DEVICE_ROLE == BLE_PERIPHERAL)
	ble_send_slave_sec_request(conn_params->handle);
#endif
	} 
	else
	{
		DBG_LOG("Device Connection Failed");
	}	
}

/** @brief function to register callback to be called when device gets connected */
void register_ble_connected_event_cb(ble_gap_event_callback_t connected_cb_fn)
{
	ble_connected_cb = connected_cb_fn;
}

/** @brief function to register callback to be called when device gets disconnected */
void register_ble_disconnected_event_cb(ble_gap_event_callback_t disconnected_cb_fn)
{
	ble_disconnected_cb = disconnected_cb_fn;
}

/** @brief function to register callback to be called when device gets paired */
void register_ble_paired_event_cb(ble_gap_event_callback_t paired_cb_fn)
{
	ble_paired_cb = paired_cb_fn;
}

/** @brief function to register callback to be called when AT_BLE_CHARACTERISTIC_CHANGED event triggered from stack */
void register_ble_characteristic_changed_cb(ble_characteristic_changed_callback_t char_changed_cb_fn)
{
	ble_char_changed_cb = char_changed_cb_fn;
}

/** @brief function to register callback to be called when notification pdu send over the air, this callback called by profile or service */
void register_ble_notification_confirmed_cb(ble_notification_confirmed_callback_t notif_conf_cb_fn)
{
	ble_notif_conf_cb = notif_conf_cb_fn;
}

/** @brief function to register callback to be called when indication pdu send over the air, this callback called by profile or service */
void register_ble_indication_confirmed_cb(ble_indication_confirmed_callback_t indic_conf_cb_fn)
{
	ble_indic_conf_cb = indic_conf_cb_fn;
}

/** @brief function handles disconnection event received from stack */
void ble_disconnected_state_handler(at_ble_disconnected_t *disconnect)
{
	DBG_LOG("Device disconnected Reason:0x%02x Handle=0x%x", disconnect->reason, disconnect->handle);	
	if (ble_disconnected_cb != NULL)
	{
		ble_disconnected_cb(disconnect->handle);
	}
}

/** @brief connection update parameter function */
void ble_conn_param_update(at_ble_conn_param_update_done_t * conn_param_update)
{
	DBG_LOG_DEV("AT_BLE_CONN_PARAM_UPDATE ");
	ALL_UNUSED(conn_param_update);  //To avoid compiler warning
}

void ble_conn_param_update_req(at_ble_conn_param_update_request_t * conn_param_req)
{
	at_ble_conn_update_reply(conn_param_req->handle, true, 1, 120);
}

void ble_slave_security_handler(at_ble_slave_sec_request_t* slave_sec_req)
{
	at_ble_pair_features_t features;
	uint8_t i = 0;
	
	if (app_device_bond)
	{
		app_device_bond = false;
	}
	
	if(!app_device_bond)
	{

		features.desired_auth =  BLE_AUTHENTICATION_LEVEL; 
		features.bond = slave_sec_req->bond;
		features.mitm_protection = slave_sec_req->mitm_protection;
		/* Device capabilities is display only , key will be generated
		and displayed */
		features.io_cababilities = AT_BLE_IO_CAP_KB_DISPLAY;

		features.oob_avaiable = false;
			
		/* Distribution of LTK is required */
		features.initiator_keys =   AT_BLE_KEY_DIST_ENC;
		features.responder_keys =   AT_BLE_KEY_DIST_ENC;
		features.max_key_size = 16;
		features.min_key_size = 16;
		
		/* Generate LTK */
		for(i=0; i<8; i++)
		{
			app_bond_info.key[i] = rand()&0x0f;
			app_bond_info.nb[i] = rand()&0x0f;
		}
		
		for(i=8 ; i<16 ;i++)
		{
			app_bond_info.key[i] = rand()&0x0f;
		}
		
		app_bond_info.ediv = rand()&0xffff;
		app_bond_info.key_size = 16;
		/* Send pairing response */
		DBG_LOG("Sending pairing response");
		if(at_ble_authenticate(slave_sec_req->handle, &features, &app_bond_info, NULL) != AT_BLE_SUCCESS)
		{
			features.bond = false;
			features.mitm_protection = false;
			DBG_LOG(" != AT_BLE_SUCCESS ");
			at_ble_authenticate(slave_sec_req->handle, &features, NULL, NULL);
			
		}
	}
}

/** @brief function handles pair request */
void ble_pair_request_handler(at_ble_pair_request_t *at_ble_pair_req)
{
	at_ble_pair_features_t features;
	uint8_t idx = 0;
	
	DBG_LOG("Peer device request pairing");
	
	/* Check if we are already bonded (Only one bonded connection is supported
	in this example)*/
	if(app_device_bond)
	{
		DBG_LOG("Bonding information exists with peer device...Removing Bonding information");
		app_device_bond = false;
	}
	
	if(!app_device_bond)
	{
		/* Authentication requirement is bond and MITM*/
		features.desired_auth = BLE_AUTHENTICATION_LEVEL;
		features.bond = BLE_BOND_REQ;
		features.mitm_protection = BLE_MITM_REQ;
		features.io_cababilities = BLE_IO_CAPABALITIES;	
		features.oob_avaiable = BLE_OOB_REQ;
			
		/* Distribution of LTK is required */
		features.initiator_keys =   AT_BLE_KEY_DIST_ENC;
		features.responder_keys =   AT_BLE_KEY_DIST_ENC;
		features.max_key_size = 16;
		features.min_key_size = 16;
		
		/* Generate LTK */
		for(idx=0; idx<8; idx++)
		{
			app_bond_info.key[idx] = rand()&0x0f;
			app_bond_info.nb[idx] = rand()&0x0f;
		}
		
		for(idx=8 ; idx<16 ;idx++)
		{
			app_bond_info.key[idx] = rand()&0x0f;
		}
		
		app_bond_info.ediv = rand()&0xffff;
		app_bond_info.key_size = 16;
		/* Send pairing response */
		DBG_LOG("Sending pairing response");
		if(at_ble_authenticate(ble_connected_dev_info->handle, &features, &app_bond_info, NULL) != AT_BLE_SUCCESS)
		{
			features.bond = false;
			features.mitm_protection = false;
			DBG_LOG("BLE Authentication Failed..Retrying without mitm without bond");
			if(!(at_ble_authenticate(ble_connected_dev_info->handle, &features, NULL, NULL) == AT_BLE_SUCCESS))
			{
				DBG_LOG("BLE Authentication Retry Failed");
			}			
		}
	}
	ALL_UNUSED(at_ble_pair_req);  //To avoid compiler warning
}

/** @brief function handles pair key request */
void ble_pair_key_request_handler (at_ble_pair_key_request_t *pair_key)
{
	/* Passkey has fixed value in this example MSB */
	uint8_t passkey[6]={'1','2','3','4','5','6'};
	uint8_t idx = 0;
        uint8_t pin;
        
	at_ble_pair_key_request_t pair_key_request;
        
        memcpy((uint8_t *)&pair_key_request, pair_key, sizeof(at_ble_pair_key_request_t));
        
        if(pair_key_request.passkey_type == AT_BLE_PAIR_PASSKEY_ENTRY)
        {
          DBG_LOG("Enter the Passkey(6-Digit) in Terminal:");
            
          for(idx = 0; idx < 6; )
          {          
            pin = getchar();
            if((pin >= '0') && ( pin <= '9'))
            {
              passkey[idx++] = pin;
              DBG_LOG_CONT("%c", pin);
            }
          }
        }	
	
	/* Display passkey */
	if(((pair_key_request.passkey_type == AT_BLE_PAIR_PASSKEY_DISPLAY) &&
	   (pair_key_request.type == AT_BLE_PAIR_PASSKEY)) || (pair_key_request.passkey_type == AT_BLE_PAIR_PASSKEY_ENTRY))
	{
          if(pair_key_request.passkey_type == AT_BLE_PAIR_PASSKEY_ENTRY)
          {
            DBG_LOG("Entered Pass-code:");
          }
          else
          {
            DBG_LOG("Please Enter the following Pass-code(on other Device):");
          }
          
          /* Convert passkey to ASCII format */
          for(idx=0; idx<AT_BLE_PASSKEY_LEN; idx++)
          {
                  passkey[idx] = (passkey[idx]);
                  DBG_LOG_CONT("%c",passkey[idx]);
          }		
          
          if(!(at_ble_pair_key_reply(pair_key_request.handle, pair_key_request.type, passkey)) == AT_BLE_SUCCESS)
          {
                  DBG_LOG("Pair-key reply failed");
          }
	}
	else 
	{
		if(pair_key_request.type == AT_BLE_PAIR_OOB)
		{
			DBG_LOG("OOB Feature Not supported");
		}
	}	
}

/** @brief function handles pair done event */
at_ble_status_t ble_pair_done_handler(at_ble_pair_done_t *pairing_params)
{
	at_ble_pair_done_t pair_params;
	memcpy((uint8_t *)&pair_params, pairing_params, sizeof(at_ble_pair_done_t));
	
	if(pair_params.status == AT_BLE_SUCCESS)
	{
		DBG_LOG("Pairing procedure completed successfully");
		app_device_bond = true;
		auth_info = pair_params.auth;
		ble_connected_dev_info->handle = pair_params.handle;
		if (ble_paired_cb != NULL)
		{
			ble_paired_cb(pair_params.handle);
		}	
	}
	else
	{
		DBG_LOG("Pairing failed...Disconnecting");
		if(!(at_ble_disconnect(ble_connected_dev_info->handle, AT_BLE_TERMINATED_BY_USER) == AT_BLE_SUCCESS))
		{
			DBG_LOG("Disconnect Request Failed");
		}
	}
	return(AT_BLE_SUCCESS);
}

/** @brief function handles encryption status change */
void ble_encryption_status_change_handler(at_ble_encryption_status_changed_t *encry_status)
{
	at_ble_encryption_status_changed_t enc_status;
	memcpy((uint8_t *)&enc_status, encry_status, sizeof(at_ble_encryption_status_changed_t));
	
	if(enc_status.status == AT_BLE_SUCCESS)
	{
		DBG_LOG("Encryption completed successfully");
			
		ble_connected_dev_info->handle = enc_status.handle;	
		if (ble_paired_cb != NULL)
		{
			ble_paired_cb(enc_status.handle);
		}		
	}
	else
	{
		DBG_LOG("Encryption failed");
	}	
}

/** @brief function handles encryption requests */
void ble_encryption_request_handler (at_ble_encryption_request_t *encry_req)
{
	bool key_found = false;

	at_ble_encryption_request_t enc_req;
	memcpy((uint8_t *)&enc_req, encry_req, sizeof(at_ble_encryption_request_t));

	/* Check if bond information is stored */
	if((enc_req.ediv == app_bond_info.ediv)
	&& !memcmp(&enc_req.nb[0],&app_bond_info.nb[0],8))
	{
		key_found = true;
	}
        else
        {
          DBG_LOG("Pairing information of peer device is not available."); 
          DBG_LOG("Please unpair the device from peer device(mobile) settings menu and start pairing again");
        }

	if(!(at_ble_encryption_request_reply(ble_connected_dev_info->handle,auth_info ,key_found, &app_bond_info) == AT_BLE_SUCCESS))
	{
		DBG_LOG("Encryption Request Reply Failed");
	}
	else
	{
		DBG_LOG_DEV("Encryption Request Reply");
	}
}



void ble_event_manager(at_ble_events_t events, void *event_params)
{
	DBG_LOG_DEV("Event:%d", event);
	switch(events)
	{		
	 /* GAP events */
	/** Undefined event received  */
	case AT_BLE_UNDEFINED_EVENT:
	{
		DBG_LOG_DEV("BLE-Manager:Undefined Event=0x%X", events);
	}
	break;
	
	/** Scan info needs to be delivered either adv data or scan response data. \n
	 * Refer to @ref at_ble_scan_info_t
	 */
	case AT_BLE_SCAN_INFO:
	{
		BLE_SCAN_INFO_HANDLER((at_ble_scan_info_t *)event_params);
	}
	break;
	
	/** Scan report received at the end of scan period if @ref AT_BLE_SCAN_GEN_DISCOVERY or @ref AT_BLE_SCAN_LIM_DISCOVERY are used. \n
	 * Refer to @ref at_ble_scan_report_t
	 */
	case AT_BLE_SCAN_REPORT:
	{
		BLE_SCAN_REPORT_HANDLER((at_ble_scan_report_t *)event_params);
	}
	break;
	
	/** Advertising report received if error has occurred or timeout happened.
	* Refer to @ref at_ble_adv_report_t
	*/
	case AT_BLE_ADV_REPORT:
	{
		
	}
	break;
	
	/** Used random address. \n
	 *	Refer to at_ble_rand_addr_changed_t
	 */
	case AT_BLE_RAND_ADDR_CHANGED:
	{
		
	}
	break;
	
	/** connected to a peer device. \n
	 *	Refer to at_ble_connected_t
	 */
	case AT_BLE_CONNECTED:
	{
		BLE_CONNECTED_STATE_HANDLER((at_ble_connected_t *)event_params);
	} 
	break;
	
	/** peer device connection terminated. \n
	 *	Refer to at_ble_disconnected_t
	 */
	case AT_BLE_DISCONNECTED:
	{
		BLE_DISCONNECTED_STATE_HANDLER((at_ble_disconnected_t *)event_params);
	}
	break;
	
	 /** connection parameters updated. It is requires to call @ref at_ble_conn_update_reply function to send resonse back if needed.\n
	  * Refer to @ref at_ble_conn_param_update_done_t
	  */
	case AT_BLE_CONN_PARAM_UPDATE_DONE:
	{
		BLE_CONN_PARAM_UPDATE_DONE((at_ble_conn_param_update_done_t *)event_params);
	}
	break;
	
	 /** peer device asks for connection parameters update. \n
	 *	Refer to at_ble_conn_param_update_request_t
	 */
	case AT_BLE_CONN_PARAM_UPDATE_REQUEST:
	{
		BLE_CONN_PARAM_UPDATE_REQ_HANDLER((at_ble_conn_param_update_request_t *)event_params);
		
	}
	break;
	
	/** Pairing procedure is completed. \n
	 *	Refer to at_ble_pair_done_t
	 */
	case AT_BLE_PAIR_DONE:
	{
		BLE_PAIR_DONE((at_ble_pair_done_t *)event_params);
	}
	break;
	
	/** A central device asks for Pairing. \n
	 * Refer to at_ble_pair_request_t 
	 */
	case AT_BLE_PAIR_REQUEST:
	{
		BLE_PAIR_REQUEST((at_ble_pair_request_t *)event_params);
	}
	break;
	
	/** Slave security request. \n
	 *	Refer to at_ble_slave_sec_request_t
	 */
	case AT_BLE_SLAVE_SEC_REQUEST:
	{
		BLE_SLAVE_SEC_REQUEST((at_ble_slave_sec_request_t *)event_params);
	}
	break;
	
	/** A passkey or OOB data is requested as part of pairing procedure. \n
	 * Refer to @ref at_ble_pair_key_request_t 
	 */
	case AT_BLE_PAIR_KEY_REQUEST:
	{
		BLE_PAIR_KEY_REQUEST((at_ble_pair_key_request_t *)event_params);
	}
	break;
	
	/** Encryption is requested by a master device. \n
	 *	Refer to at_ble_encryption_request_t
	 */
	case AT_BLE_ENCRYPTION_REQUEST:
	{
		BLE_ENCRYPTION_REQUEST((at_ble_encryption_request_t *)event_params);
	}
	break;
	
	/** Encryption status changed. \n
	 *	Refer to at_ble_encryption_status_changed_t
	 */
	case AT_BLE_ENCRYPTION_STATUS_CHANGED:
	{
		BLE_ENCRYPTION_STATUS_CHANGED((at_ble_encryption_status_changed_t *)event_params);
	}
	break;
	
	/** Resolve random address status. \n
	 *	Refer to at_ble_resolv_rand_addr_status_t
	 */
	case AT_BLE_RESOLV_RAND_ADDR_STATUS:
	{
		
	}
	break;
	
	/* GATT Client events */
	/** A primary service is found. \n
	 * Refer to @ref at_ble_primary_service_found_t
	 */
	case AT_BLE_PRIMARY_SERVICE_FOUND:
	{
		BLE_PRIMARY_SERVICE_FOUND_HANDLER((at_ble_primary_service_found_t *)event_params);
	}
	break;
	
	/** An included service is found . \n
	 * Refer to @ref at_ble_included_service_found_t
	 */
	case AT_BLE_INCLUDED_SERVICE_FOUND:
	{
		
	}
	break;
	 
	/** A Characteristic is found. \n 
	 * Refer to @ref at_ble_characteristic_found_t
	 */
	case AT_BLE_CHARACTERISTIC_FOUND:
	{
		BLE_CHARACTERISTIC_FOUND_HANDLER((at_ble_characteristic_found_t *)event_params);
	}
	break;
	
	 /** A descriptor is found. \n
	  * Refer to @ref at_ble_descriptor_found_t
	  */
	case AT_BLE_DESCRIPTOR_FOUND:
	{
		BLE_DESCRIPTOR_FOUND_HANDLER((at_ble_descriptor_found_t *)event_params);
	}
	break;
	
	/** A discover operation has completed. \n
	 * Refer to @ref at_ble_discovery_complete_t
	 */
	case AT_BLE_DISCOVERY_COMPLETE:
	{
		BLE_DISCOVERY_COMPLETE_HANDLER((at_ble_discovery_complete_t *)event_params);
	}
	break;
	
	 /** Characteristic read procedure is done. \n
	  * Refer to @ref at_ble_characteristic_read_response_t
	  */
	case AT_BLE_CHARACTERISTIC_READ_RESPONSE:
	{
		BLE_CHARACTERISTIC_READ_RESPONSE((at_ble_characteristic_read_response_t *)event_params);
	}
	break;
	
	/** Characteristic multiple read procedure is done. \n
	  * Refer to @ref at_ble_characteristic_read_response_t
	  */
	case AT_BLE_CHARACTERISTIC_READ_MULTIBLE_RESPONSE:
	{
		
	}
	break;
	
	/** Characteristic write procedure is done. \n
	  * Refer to @ref at_ble_characteristic_write_response_t
	  */
	case AT_BLE_CHARACTERISTIC_WRITE_RESPONSE:
	{
		BLE_CHARACTERISTIC_WRITE_RESPONSE((at_ble_characteristic_write_response_t *)event_params);
	}
	break;
	
	/** A Notification is received. \n
	  * Refer to @ref at_ble_notification_recieved_t
	  */
	case AT_BLE_NOTIFICATION_RECIEVED:
	{
		BLE_NOTIFICATION_RECEIVED_HANDLER((at_ble_notification_recieved_t *)event_params);
	}
	break;
		
	 /** An Indication is received. \n
	  * Refer to @ref at_ble_indication_recieved_t
	  */
	case AT_BLE_INDICATION_RECIEVED:
	{
		
	}
	break;
	
	/* GATT Server events */
	/** Confirmation of notification packet send over the air. \n
	  * Refer to @ref at_ble_cmd_complete_event_t
	*/
	case AT_BLE_NOTIFICATION_CONFIRMED:
	{
		BLE_NOTIFICATION_CONFIRMED_HANDLER((at_ble_cmd_complete_event_t *) event_params);
		if(ble_notif_conf_cb)
		{
			ble_notif_conf_cb((at_ble_cmd_complete_event_t *) event_params);
		}
	}
	break;
	 /** The peer confirmed that it has received an Indication. \n
	  * Refer to @ref at_ble_cmd_complete_event_t
	  */
	case AT_BLE_INDICATION_CONFIRMED:
	{
		BLE_INDICATION_CONFIRMED_HANDLER((at_ble_indication_confirmed_t *) event_params);
		if(ble_indic_conf_cb)
		{
			ble_indic_conf_cb((at_ble_indication_confirmed_t *) event_params);
		}
	}
	break;
	
	/** The peer has changed a characteristic value. \n
	  * Refer to @ref at_ble_characteristic_changed_t
	  */
	case AT_BLE_CHARACTERISTIC_CHANGED:
	{
		if(ble_char_changed_cb != NULL)
		{
			ble_char_changed_cb((at_ble_characteristic_changed_t *)event_params);
		}
		BLE_CHARACTERISTIC_CHANGED((at_ble_characteristic_changed_t *)event_params);
	}
	break;
	
	/** The peer has confirmed that it has received the service changed notification. \n
	  * Refer to @ref at_ble_service_changed_notification_confirmed_t
	  */
	case AT_BLE_SERVICE_CHANGED_INDICATION_SENT:
	{
		
	}
	break;
	
	/** The peer asks for a write Authorization. \n
	  * Refer to @ref at_ble_write_authorize_request_t
	  */
	case AT_BLE_WRITE_AUTHORIZE_REQUEST:
	{
		
	}
	break;
	
	 /** The peer asks for a read Authorization. \n
	  * Refer to @ref at_ble_read_authorize_request_t
	  */
	case AT_BLE_READ_AUTHORIZE_REQUEST:
	{
		
	}
	break;
	
	/* HTPT Health Thermometer Profile events */
	/** Inform APP of database creation status. \n
	  * Refer to @ref at_ble_htpt_create_db_cfm_t
	  */
	case AT_BLE_HTPT_CREATE_DB_CFM:
	{
		
	}
	break;
	
	/** Error indication to APP. \n
	  * Refer to @ref at_ble_prf_server_error_ind_t
	  */
	case AT_BLE_HTPT_ERROR_IND:
	{
		
	}
	break;
	
	/** Automatically sent to the APP after a disconnection with the peer device to confirm disabled profile. \n
	  * Refer to @ref at_ble_htpt_disable_ind_t
	  */
	case AT_BLE_HTPT_DISABLE_IND:
	{
		
	}
	break;
	
	/** Temperature value confirm to APP. \n
	  * Refer to @ref at_ble_htpt_temp_send_cfm_t
	  */
	case AT_BLE_HTPT_TEMP_SEND_CFM:
	{
		
	}
	break;
	
	/** Inform APP of new measurement interval value. \n
	  * Refer to @ref at_ble_htpt_meas_intv_chg_ind_t
	  */
	case AT_BLE_HTPT_MEAS_INTV_CHG_IND:
	{
		
	}
	break;
	
	/** Inform APP of new configuration value. \n
	  * Refer to @ref at_ble_htpt_cfg_indntf_ind_t
	  */
	case AT_BLE_HTPT_CFG_INDNTF_IND:
	{
		
	}
	break;
	
	/* Custom user defined events */
	/** A user-defined event is delivered to the system */
	case AT_BLE_CUSTOM_EVENT:
	{
		
	}
	break;
	
	case AT_BLE_MTU_CHANGED_INDICATION:
	{
		AT_BLE_MTU_CHANGED_INDICATION_HANDLER((at_ble_mtu_changed_ind_t *) event_params);
	}	
	
	case AT_BLE_DEVICE_READY:
	{
		
	}
	break;
	
	default:
	{
		DBG_LOG_DEV("BLE-Manager:Unknown Event=0x%X", events);
		DBG_LOG("\r\n");
	}
	break;		
	}
}



