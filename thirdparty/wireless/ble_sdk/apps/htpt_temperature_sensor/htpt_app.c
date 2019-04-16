/**
 * \file
 *
 * \brief Health Thermometer Profile Application
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
 * This is the reference manual for the Health Thermometer Profile Application
 */
/*- Includes ---------------------------------------------------------------*/

#include <asf.h>
#include "profiles.h"
#include "platform.h"
#include "at_ble_api.h"
#include "htpt_app.h"
#include "console_serial.h"
#include "timer_hw.h"
#include "conf_extint.h"
#include "conf_serialdrv.h"
#include "at_ble_trace.h"

/* BLE Device Name definitions */
#define BLE_DEVICE_NAME				"ATMEL-HTP"

/* Initialize the BLE */
static void ble_init(void);

/* LED Status to user */

/* BLE connected event indication */
static void ble_device_connected_ind(void);

/* BLE disconnected event indication */
static void ble_device_disconnected_ind(void);

/* BLE data send event confirmation */
static void ble_data_sent_confim(void);

/* Update temperature type and location */
static void update_temperature_type_location(void);

void htpt_set_advertisement_data(void);


void ble_device_config(at_ble_addr_t *addr);

static uint8_t scan_rsp_data[SCAN_RESP_LEN] = {0x09, 0xFF, 0x00, 0x06, 0xd6, 0xb2, 0xf0, 0x05, 0xf0, 0xf8};

at_ble_LTK_t app_bond_info;
bool app_device_bond = false;
at_ble_auth_t auth_info;

htp_app_t htp_data;

volatile bool app_timer_done = false;
volatile bool button_pressed = false;

at_ble_handle_t htpt_conn_handle;

/* BLE connected event indication */
static void ble_device_connected_ind(void)
{
	/* Switch on the application LED */
	LED_On(LED0);
}

/* BLE disconnected event indication */
static void ble_device_disconnected_ind(void)
{
	/* Switch off the application LED */
	LED_Off(LED0);
}

/* BLE data send event confirmation */
static void ble_data_sent_confim(void)
{
	/* Toggle the application LED of each data sent */
	LED_Toggle(LED0);
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
	
	/* Initialize the platform */
	DBG_LOG("Initializing BTLC1000");
	
	/*Trace Logs*/
	trace_register_printFn((void *)&printf);
	trace_set_level(TRACE_LVL_ALL);
	
	/* Init BLE device */
	if(at_ble_init(&pf_cfg) != AT_BLE_SUCCESS)
	{
		DBG_LOG("BTLC1000 Initialization failed");
		DBG_LOG("Please check the power and connection / hardware connector");
		while(1);
	}
}

/* Initializing the default values for temperature and htp parameters*/
static void htp_init_defaults(htp_app_t *htp_temp)
{
	/* Initialize to default temperature value  and htp parameters*/
	htp_temp->measurement_interval = 1;
	htp_temp->temperature = 3700;
	htp_temp->temperature_type = HTP_TYPE_ARMPIT;
	htp_temp->max_meaurement_intv = 30;
	htp_temp->min_measurement_intv = 1;
	htp_temp->security_lvl = HTPT_UNAUTH;
	htp_temp->optional = HTPT_ALL_FEAT_SUP;
	htp_temp->flags = (at_ble_htpt_temp_flags)(HTPT_FLAG_CELSIUS | HTPT_FLAG_TYPE);
}

/* Sending the temperature value after reading it from IO1 Xplained Pro */
static void htp_temperature_send(htp_app_t *htp_temp)
{
	at_ble_prf_date_time_t timestamp;
	#if SAMD21 || SAML21
	float temperature;
	/* Read Temperature Value from IO1 Xplained Pro */
	temperature = at30tse_read_temperature();
	
	#endif

	#if SAMG55
	double temperature;
	/* Read Temperature Value from IO1 Xplained Pro */
	at30tse_read_temperature(&temperature);
	#endif

	if(button_pressed)
	{
		update_temperature_type_location();
		button_pressed = false;
	}

	if (htp_temp->flags & HTPT_FLAG_FAHRENHEIT)
	{
		temperature = (((temperature * 9.0)/5.0) + 32.0);
	}
	
	timestamp.day = 1;
	timestamp.hour = 9;
	timestamp.min = 2;
	timestamp.month = 8;
	timestamp.sec = 36;
	timestamp.year = 15;
	
	if(at_ble_htpt_temp_send(convert_ieee754_ieee11073_float((float)temperature),
	&timestamp,
	htp_temp->flags,
	htp_temp->temperature_type,
	STABLE_TEMPERATURE_VAL
	) == AT_BLE_SUCCESS)
	{
		if (htp_temp->flags & HTPT_FLAG_FAHRENHEIT)
		{
			DBG_LOG("Temperature: %d Fahrenheit", (uint16_t)temperature);
		}
		else
		{
			DBG_LOG("Temperature: %d Deg Celsius", (uint16_t)temperature);
		}
		
	}
}

/* Creating database and advertisement data set and advertisement start */
static void htp_init(void)
{
	/* Initialize the htp_data to default value */
	htp_init_defaults(&htp_data);
	
	/* Register the Initialized value into htp profile */
	if(at_ble_htpt_create_db(
							htp_data.optional,
							htp_data.temperature_type,
							htp_data.min_measurement_intv,
							htp_data.max_meaurement_intv,
							htp_data.measurement_interval,
							htp_data.security_lvl,
							&htpt_conn_handle) != AT_BLE_SUCCESS)
	{
		/* Failed to create HTP data base */
		DBG_LOG("HTP Data Base creation failed");
		while(1);
	}
	htpt_set_advertisement_data();
}

/* Setting the Device address */
void ble_device_config(at_ble_addr_t *addr)
{
	at_ble_dev_config_t stDevConfig;
	at_ble_addr_t address = {AT_BLE_ADDRESS_PUBLIC, {0xAB, 0xCD, 0xEF, 0xAB, 0xCD, 0xEF}};
	at_ble_addr_t *address_ptr = addr;
	at_ble_status_t enuStatus;
	char *dev_name = NULL;

	dev_name = (char *)BLE_DEVICE_NAME;
	
	
	if (addr == NULL)
	{
		/* get BD address from BLE device */
		if(at_ble_addr_get(&address) != AT_BLE_SUCCESS)
		{
			DBG_LOG("BD address get failed");
		}
		address_ptr = &address;
	}
	
	/* Update the Address in scan response data*/
	memcpy(&scan_rsp_data[4], address_ptr->addr, 6);
	
	/* set the BD address */
	if(at_ble_addr_set(address_ptr) != AT_BLE_SUCCESS)
	{
		DBG_LOG("BD address set failed");
	}
	
	DBG_LOG("BD Address:0x%02X%02X%02X%02X%02X%02X, Address Type:%d",
	address_ptr->addr[5],
	address_ptr->addr[4],
	address_ptr->addr[3],
	address_ptr->addr[2],
	address_ptr->addr[1],
	address_ptr->addr[0], address_ptr->type);
		
	//Set device configuration
	////Device role
	stDevConfig.role = AT_BLE_ROLE_ALL;
	////device renew duration
	stDevConfig.renew_dur = AT_RENEW_DUR_VAL_MIN;
	////device address type
	stDevConfig.address = *address_ptr;
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

    if(enuStatus != AT_BLE_SUCCESS)
    {
      DBG_LOG("BLE Device Config Failed");
    }
    else
    {
      if(at_ble_device_name_set((uint8_t *)dev_name, strlen(dev_name)) != AT_BLE_SUCCESS)
      {
        DBG_LOG("BLE Device name set failed");
      }
    }   
        
	UNUSED(enuStatus);
}

/* Advertisement data set and advertisement start */
void htpt_set_advertisement_data(void)
{
	uint8_t idx = 0;
	uint8_t adv_data[HT_ADV_DATA_NAME_LEN + HT_ADV_DATA_APPEARANCE_LEN + HT_ADV_DATA_UUID_LEN + 3*2];
	
	/* Prepare ADV Data */
	adv_data[idx++] = HT_ADV_DATA_UUID_LEN + ADV_TYPE_LEN;
	adv_data[idx++] = HT_ADV_DATA_UUID_TYPE;
	memcpy(&adv_data[idx], HT_ADV_DATA_UUID_DATA, HT_ADV_DATA_UUID_LEN);				
	idx += HT_ADV_DATA_UUID_LEN;
	
	adv_data[idx++] = HT_ADV_DATA_APPEARANCE_LEN + ADV_TYPE_LEN;
	adv_data[idx++] = HT_ADV_DATA_APPEARANCE_TYPE;
	memcpy(&adv_data[idx], HT_ADV_DATA_APPEARANCE_DATA, HT_ADV_DATA_APPEARANCE_LEN);
	idx += HT_ADV_DATA_APPEARANCE_LEN;
	
	adv_data[idx++] = HT_ADV_DATA_NAME_LEN + ADV_TYPE_LEN;
	adv_data[idx++] = HT_ADV_DATA_NAME_TYPE;
	memcpy(&adv_data[idx], HT_ADV_DATA_NAME_DATA, HT_ADV_DATA_NAME_LEN);
	idx += HT_ADV_DATA_NAME_LEN;			
	
	
	at_ble_adv_data_set(adv_data, idx, scan_rsp_data, SCAN_RESP_LEN);
	
	if(at_ble_adv_start(AT_BLE_ADV_TYPE_UNDIRECTED, AT_BLE_ADV_GEN_DISCOVERABLE, NULL, AT_BLE_ADV_FP_ANY, 
	                   APP_HT_FAST_ADV, APP_HT_ADV_TIMEOUT, 0) != AT_BLE_SUCCESS)
	{
		DBG_LOG("BLE advertisement start failed");
	}
	else
	{
		DBG_LOG("BLE started LE advertisement");
	}							
}

void button_cb(void)
{
	button_pressed = true;
}

/* Updating the location to read the temperature */
static void update_temperature_type_location(void)
{
	htp_data.temperature_type = (at_ble_htpt_temp_type)((htp_data.temperature_type+1) % 9);
	if ((htp_data.temperature_type == HTP_TYPE_ARMPIT) && (htp_data.flags == (HTPT_FLAG_CELSIUS | HTPT_FLAG_TYPE)))
	{
		htp_data.flags = (at_ble_htpt_temp_flags)(HTPT_FLAG_FAHRENHEIT | HTPT_FLAG_TYPE);
	}
	else if (htp_data.temperature_type == HTP_TYPE_ARMPIT)
	{
		htp_data.flags = (at_ble_htpt_temp_flags)(HTPT_FLAG_CELSIUS | HTPT_FLAG_TYPE);
	}
}
/* Timer callback */
static void timer_callback_handler(void)
{
	hw_timer_stop();
	app_timer_done = true;	
}


int main (void)
{
	at_ble_events_t event;
	uint8_t params[512];
	at_ble_handle_t handle = 0;
	bool temp_send_notification = false;

#if SAMG55
	/* Initialize the SAM system. */
	sysclk_init();
	board_init();
#elif SAM0
	system_init();
#endif
	
	/* Initialize the button */
	button_init();
	
	/* Initialize serial console */
	serial_console_init();
	
	DBG_LOG("Initializing HTP Application");
	
	/* Initialize the temperature sensor */
	at30tse_init();
	
	/* configure the temperature sensor ADC */
	at30tse_write_config_register(
			AT30TSE_CONFIG_RES(AT30TSE_CONFIG_RES_12_bit));	
	
	/* Initialize the hardware timer */
	hw_timer_init();
	
	/* Register the callback */
	hw_timer_register_callback(timer_callback_handler);	
	
	/* initialize the ble chip */
	ble_init();	
	
	ble_device_config(NULL);
	
	/* Initialize the htp profile */
	htp_init();	
	
	DBG_LOG("HTP Initialization completed. Waiting for Event");
	
	
	while(at_ble_event_get(&event, params, 0xFFFFFFFF) == AT_BLE_SUCCESS)
	{
		switch(event)
		{
			/* The BLE device - Peripheral connected to master */
			case AT_BLE_CONNECTED:
			{				
				at_ble_connected_t conn_params;
				memcpy((uint8_t *)&conn_params, params, sizeof(at_ble_connected_t));
				
				DBG_LOG("Device connected to 0x%02x%02x%02x%02x%02x%02x handle=0x%x",
					conn_params.peer_addr.addr[5],
					conn_params.peer_addr.addr[4],
					conn_params.peer_addr.addr[3],
					conn_params.peer_addr.addr[2],
					conn_params.peer_addr.addr[1],
					conn_params.peer_addr.addr[0],
					conn_params.handle);
				handle = conn_params.handle;
				
				/* BLE device connected, indicate to user */
				ble_device_connected_ind();
				
				/* Enable the HTP Profile */
				if(at_ble_htpt_enable(handle, HTPT_CFG_STABLE_MEAS_IND) != AT_BLE_SUCCESS)
				{
					DBG_LOG("Failure in HTP Profile Enable");
				}	
				
				/* keep compiler happy */
				handle = handle;					
			}
			break;

			case AT_BLE_DISCONNECTED:
			{
				at_ble_disconnected_t disconnect;
				memcpy((uint8_t *)&disconnect, params, sizeof(at_ble_disconnected_t));
				
				/* Stop the hardware timer */
				hw_timer_stop();
				
				/* BLE device disconnected, indicate to user */
				ble_device_disconnected_ind();
				
				DBG_LOG("Device disconnected Reason:0x%02x Handle=0x%x", disconnect.reason, disconnect.handle);
				
				if(at_ble_adv_start(AT_BLE_ADV_TYPE_UNDIRECTED, AT_BLE_ADV_GEN_DISCOVERABLE, NULL, AT_BLE_ADV_FP_ANY, 
				                   APP_HT_FAST_ADV, APP_HT_ADV_TIMEOUT, 0) != AT_BLE_SUCCESS)
				{
					DBG_LOG("BLE advertisement start failed");
				}
				else
				{
					DBG_LOG("BLE started LE advertisement");
				}						
			}
			break;
			
			case AT_BLE_CHARACTERISTIC_CHANGED:
			{
				at_ble_characteristic_changed_t change_params;				 	
				uint32_t i = 0;
				
				memcpy((uint8_t *)&change_params, params, sizeof(at_ble_characteristic_changed_t));

				DBG_LOG("Characteristic 0x%x changed, new_value = ", 
					change_params.char_handle);
				for(i=0; i<change_params.char_len; i++)
					DBG_LOG_CONT("0x%02x ", change_params.char_new_value[i]);
			}
			break;	
			
			/* HTP Health Thermometer Profile events */
			
			/** Inform APP of database creation status */
			case AT_BLE_HTPT_CREATE_DB_CFM:	
			{
					at_ble_htpt_create_db_cfm_t create_db_params;
					
					memcpy((uint8_t *)&create_db_params, params, sizeof(at_ble_htpt_create_db_cfm_t));
					
					// start advertising
					DBG_LOG("Creating HTP DB: SUCCESS: Status=0x%x", create_db_params.status);			
			}
			break;
			
			case AT_BLE_MTU_CHANGED_INDICATION:
			{
				at_ble_mtu_changed_ind_t at_ble_mtu_changed_ind;
				memcpy((uint8_t *)&at_ble_mtu_changed_ind, params, sizeof(at_ble_mtu_changed_ind_t));
				DBG_LOG("MTU Value Changed:%d", at_ble_mtu_changed_ind.mtu_value);
			}
			break;
			
			case AT_BLE_HTPT_ENABLE_RSP:
			{				
				at_ble_htpt_enable_rsp_t at_ble_htpt_enable_rsp;
					
				memcpy((uint8_t *)&at_ble_htpt_enable_rsp, params, sizeof(at_ble_htpt_enable_rsp_t));
				
				if (!(at_ble_htpt_enable_rsp.status == AT_BLE_SUCCESS))
				{
					DBG_LOG("HTPT Enable Failed");
				}					
			}
			break;
			
			/** Error indication to APP*/
			case AT_BLE_HTPT_ERROR_IND:
			{
				prf_server_error_ind_t prf_htpt_error_ind;
				memcpy((uint8_t *)&prf_htpt_error_ind, params, sizeof(prf_server_error_ind_t));
				
				DBG_LOG("HTP Error Indication received, msg_id=0x%x, handle=0x%x, status=0x%x",
				prf_htpt_error_ind.msg_id, prf_htpt_error_ind.conhdl, prf_htpt_error_ind.status);
			}					
			break;
			
			/** Automatically sent to the APP after a disconnection with the peer device to confirm disabled profile*/
			case AT_BLE_HTPT_DISABLE_IND:
			{
				at_ble_htpt_disable_ind_t htpt_disable_ind_params;
				memcpy((uint8_t *)&htpt_disable_ind_params, params, sizeof(at_ble_htpt_disable_ind_t));
				DBG_LOG("HTP Disable Indication: conhdl=0x%x, interm_temp_ntf_en=0x%x, meas_intv=0x%x, meas_intv_ind_en=0x%x, handle=0x%x",
				htpt_disable_ind_params.conhdl,
				htpt_disable_ind_params.interm_temp_ntf_en,
				htpt_disable_ind_params.meas_intv,
				htpt_disable_ind_params.meas_intv_ind_en,
				htpt_disable_ind_params.temp_meas_ind_en);
			}
			break;
			
			/** Temperature value sent confirm to APP*/
			case AT_BLE_HTPT_TEMP_SEND_CFM:
			{
				at_ble_htpt_temp_send_cfm_t htpt_send_temp_cfm_params;
				memcpy((uint8_t *)&htpt_send_temp_cfm_params, params, sizeof(at_ble_htpt_temp_send_cfm_t));
				
				/* Temperature sent confirmation */
				ble_data_sent_confim();
				
				/* start the timer for next interval of  temperature send */
				hw_timer_start(htp_data.measurement_interval);	
				while(app_timer_done == false);	
				if (temp_send_notification)
				{
					htp_temperature_send(&htp_data);
				}				
				app_timer_done = false;		
			}
			break;
			
			/** Information to APP for the new measurement interval value */
			case AT_BLE_HTPT_MEAS_INTV_CHG_IND:
			{
				at_ble_htpt_meas_intv_chg_ind_t htpt_meas_intv_chg_params;
				memcpy((uint8_t *)&htpt_meas_intv_chg_params, params, sizeof(at_ble_htpt_meas_intv_chg_ind_t));
				DBG_LOG("HTP measure Interval change Indication: Interval=%d", htpt_meas_intv_chg_params.intv);
				htp_data.measurement_interval = htpt_meas_intv_chg_params.intv;							
			}
			break;
			
			/** Information to APP for the new configuration value */
			case AT_BLE_HTPT_CFG_INDNTF_IND:
			{
				at_ble_htpt_cfg_indntf_ind_t htpt_cfg_indntf_ind_params;
				memcpy((uint8_t *)&htpt_cfg_indntf_ind_params, params, sizeof(at_ble_htpt_cfg_indntf_ind_t));				
				if (htpt_cfg_indntf_ind_params.ntf_ind_cfg == 1)
				{
					DBG_LOG("Started HTP Temperature Notification");
					temp_send_notification = true;
					htp_temperature_send(&htp_data);
				}
				else
				{
					temp_send_notification = false;
					DBG_LOG("HTP Temperature Notification Stopped");
				}				
			}			
			break;
			
			case AT_BLE_PAIR_REQUEST:
			{
				at_ble_pair_features_t features;
				uint8_t i = 0;
	
				DBG_LOG("Remote device request pairing");
			
				/* Check if we are already bonded (Only one bonded connection is supported
				in this example) */
				if(app_device_bond)
				{
					DBG_LOG("Bonding information exists with peer device...Hence Removing Bonding information");
					app_device_bond = false;
				}
			
				if(!app_device_bond)
				{
					/* Authentication requirement is bond and MITM*/
					features.desired_auth =  AT_BLE_MODE1_L1_NOAUTH_PAIR_ENC;
					features.bond = false;
					features.mitm_protection = false;
					features.oob_avaiable = false;
					/* Device capabilities is display only , key will be generated 
					and displayed */
					features.io_cababilities = AT_BLE_IO_CAP_NO_INPUT_NO_OUTPUT;
					/* Distribution of LTK is required */
					features.initiator_keys =   AT_BLE_KEY_DIST_ENC;
					features.responder_keys =   AT_BLE_KEY_DIST_ENC;
					features.max_key_size = 16;
					features.min_key_size = 16;
				
					/* Generate LTK */
					for(i=0 ; i<8 ;i++)
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
					DBG_LOG("Sending pairing response handle=0x%x",
							handle);
					if(at_ble_authenticate(handle, &features, &app_bond_info, NULL) != AT_BLE_SUCCESS)
					{
						features.bond = false;
						features.mitm_protection = false;
						at_ble_authenticate(handle, &features, NULL, NULL);
					}					
				}
			}	
			break;
		
			case AT_BLE_PAIR_KEY_REQUEST:
			{
				/* Passkey has fixed value in this example MSB */
				uint8_t passkey_ascii[6]={'1','2','3','4','5','6'};
				uint8_t i = 0;
	
				at_ble_pair_key_request_t pair_key_request;
				memcpy((uint8_t *)&pair_key_request, params, sizeof(at_ble_pair_key_request_t));
				/* Display passkey */
				if(pair_key_request.passkey_type == AT_BLE_PAIR_PASSKEY_DISPLAY)
				{
					DBG_LOG("please enter the following code on the other device : ");
					for(i=0; i<AT_BLE_PASSKEY_LEN ; i++)
					{
						DBG_LOG_CONT("%c",passkey_ascii[i]);
					}
					
					if(at_ble_pair_key_reply(pair_key_request.handle,
					  pair_key_request.type,passkey_ascii) != AT_BLE_SUCCESS)
					  {
						DBG_LOG("Pair key reply failed");
					  }
				}
			
			}
			break;

			case AT_BLE_PAIR_DONE:
			{
				at_ble_pair_done_t pair_params;
				memcpy((uint8_t *)&pair_params, params, sizeof(at_ble_pair_done_t));				
				if(pair_params.status == AT_BLE_SUCCESS)
				{
					DBG_LOG("Pairing procedure completed successfully");
					app_device_bond = true;
					auth_info = pair_params.auth;
					
					handle = pair_params.handle;
					
					/* Enable the HTP Profile */
					if(at_ble_htpt_enable(handle, HTPT_CFG_STABLE_MEAS_IND) == AT_BLE_FAILURE)
					{
						DBG_LOG("Failure in HTP Profile Enable");
					}
				}
				else
				{
					DBG_LOG("Pairing failed");
					/* Stop the hardware timer */
					hw_timer_stop();
					
					/* BLE device disconnected, indicate to user */
					ble_device_disconnected_ind();					
					
					at_ble_disconnect(handle, AT_BLE_TERMINATED_BY_USER);
				}
			}
			break;

			case AT_BLE_ENCRYPTION_REQUEST:
			{
				bool key_found = false;
	
				at_ble_encryption_request_t enc_req;
				memcpy((uint8_t *)&enc_req, params, sizeof(at_ble_encryption_request_t));
			
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
			
				if(at_ble_encryption_request_reply(handle,
                                                                  auth_info,
                                                                  key_found,
                                                                  &app_bond_info) != AT_BLE_SUCCESS)
				{
					DBG_LOG("Encryption request reply failed");
				}
			}
			break;
		
			case AT_BLE_ENCRYPTION_STATUS_CHANGED:
			{
				at_ble_encryption_status_changed_t enc_status;
				memcpy((uint8_t *)&enc_status, params, sizeof(at_ble_encryption_status_changed_t));
				if(enc_status.status == AT_BLE_SUCCESS)
				{
					DBG_LOG("Encryption completed successfully");
					
					handle = enc_status.handle;
					
					/* Enable the HTP Profile */
					if(at_ble_htpt_enable(handle, HTPT_CFG_STABLE_MEAS_IND) == AT_BLE_FAILURE)
					{
						DBG_LOG("Failure in HTP Profile Enable");
					}
				}
				else
				{
					DBG_LOG("Encryption failed");
				}
			}
			break;
			
			default:
			break;
		}
	}
	
	return true;
}
