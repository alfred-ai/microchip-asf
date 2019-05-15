/**
* \file  ble_app.c
*
* \brief LORAWAN Provisioning Over BLE Application file
*
*
* Copyright (c) 2019 Microchip Technology Inc. and its subsidiaries.
*
* \asf_license_start
*
* \page License
*
* Subject to your compliance with these terms, you may use Microchip
* software and any derivatives exclusively with Microchip products.
* It is your responsibility to comply with third party license terms applicable
* to your use of third party software (including open source software) that
* may accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES,
* WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
* INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
* AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
* LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
* LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
* SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
* POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
* ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
* RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*
* \asf_license_stop
*
*/
/*
* Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
*/

/****************************** Includes **************************************/
#include <asf.h>
#include "platform.h"
#include "timer_hw.h"
#include "sw_timer.h"
#include "at_ble_api.h"
#include "conf_extint.h"
#include "console_serial.h"
#include "ble_utils.h"
#include "system_task_manager.h"
#include "pds_interface.h"
#include "conf_app.h"
#include "ble_manager.h"
#include "lnp_service.h"
#include "lrfp_service.h"
#include "ble_app.h"
#include "lorawan.h"
#if (EDBG_EUI_READ == 1)
#include "edbg_eui.h"
#endif

/*************************** Function prototypes ***************************/
at_ble_status_t ble_char_process(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lnp_char_process_lora_class(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lnp_char_process_join_method(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lnp_char_process_app_eui(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lnp_char_process_dev_eui(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lnp_char_process_app_key(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lnp_char_process_dev_addr(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lnp_char_process_nwkskey(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lnp_char_process_appskey(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lnp_char_process_mcast(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lnp_char_process_mcast_dev_addr(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lnp_char_process_mcast_nwkskey(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lnp_char_process_mcast_appskey(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lnp_char_process_reset_to_default(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lnp_char_process_provision_cmd(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lrfp_char_process_freq_band(at_ble_characteristic_changed_t *char_changed);
at_ble_status_t ble_lrfp_char_process_freq_subband(at_ble_characteristic_changed_t *char_changed);

static at_ble_status_t ble_gap_adv_report_cb(void *params);
static at_ble_status_t ble_gap_connected_cb(void *params);
static at_ble_status_t ble_gap_disconnected_cb(void *params);
static at_ble_status_t ble_gap_pair_done_cb(void *params);

static at_ble_status_t ble_gatt_server_char_changed_cb(void *params);
static at_ble_status_t ble_gatt_server_char_config_changed_cb(void *params);
static at_ble_status_t ble_gatt_server_ind_confirm_cb(void *params);
static at_ble_status_t ble_gatt_server_noti_confirm_cb(void *params);

static at_ble_status_t lnp_ble_custom_event(void *param);

/***************************** Global variables *****************************/
/* BLE states */
ble_state_t ble_state = BLE_DORMANT;
/* BLE advertisement payload */
uint8_t adv_payload[] = {ADV_UUID_128_DATA_LEN, ADV_UUID_128_FLAG, ADV_LNP_UUID_128, ADV_MFG_DATA_LEN, ADV_MFG_FLAG, ADV_MFG_COMPANY_ID, ADV_MFG_PROVISION_STATUS};
/* BLE scan response payload */
uint8_t scan_resp_payload[] = {SCAN_RESP_LOCAL_NAME_DATA_LEN, SCAN_RESP_LOCAL_NAME_FLAG, SCAN_RESP_LOCAL_NAME};
/* Flag to avoid spurious interrupt posting  during/before reset and initialization completed */
volatile bool button_press = false;
/* LoRaWAN network parameter provisioning service and characteristics */
lnp_gatt_service_handler_t lnp_gatt_service_handler;
/* LoRaWAN RF parameter provisioning service and characteristics */
lrfp_gatt_service_handler_t lrfp_gatt_service_handler;
/* LoRaWAN network parameters default value */
lnp_params_t ble_lnp_params = 
{
	.class_type = CLASS_A,
	.join_method = OTAA,
	.app_eui = {0x00},
	.dev_eui = {0x00},
	.app_key = {0x00},
	.dev_addr = {0x00},
	.nwk_s_key = {0x00},
	.app_s_key = {0x00},
	.mcast = false,
	.mcast_dev_addr = {0x00},
	.mcast_nwk_s_key = {0x00},
	.mcast_app_s_key = {0x00},
	.reset_to_default = false,
	.provision_status = 0,
	.app_write_resp = {0x00, 0x00},
	.provision_cmd = false,
};
/* LoRaWAN RF parameters default value */
lrfp_params_t ble_lrfp_params = 
{
/* Configure the band and sub-band, if it is been decided before production. */
#if (NA_BAND == 1)
	.freq_band = ISM_NA915,
	.freq_subband = SUBBAND,
#else
	.freq_band = 0,
	.freq_subband = 0,
#endif
	.app_write_resp = {0x00, 0x00},
};
/* LNP Provisioner details */
at_ble_connected_t lnp_provisioner_details;
/* Indicates notification/indication enabled on LNP Write Response Characteristic or not  */
uint8_t lnp_write_resp_noti_ind = 0;
/* Indicates notification/indication enabled on LRFP Write Response Characteristic or not  */
uint8_t lrfp_write_resp_noti_ind = 0;
/* GAP Event callbacks */
ble_gap_event_cb_t lnp_ble_gap_event_cb = {
	.adv_report = ble_gap_adv_report_cb,
	.connected = ble_gap_connected_cb,
	.disconnected = ble_gap_disconnected_cb,
	.pair_done = ble_gap_pair_done_cb,
};
/* GATT-Server Event callbacks */
ble_gatt_server_event_cb_t lnp_ble_gatt_server_event_cb = {
	.characteristic_changed = ble_gatt_server_char_changed_cb,
	.characteristic_configuration_changed = ble_gatt_server_char_config_changed_cb,
	.indication_confirmed = ble_gatt_server_ind_confirm_cb,
	.notification_confirmed = ble_gatt_server_noti_confirm_cb,
};
/* BLE Manager Custom Event callback */
static const ble_custom_event_cb_t lnp_ble_custom_event_cb = {
	.custom_event = lnp_ble_custom_event
};
/* Application custom events */
user_custom_event_t app_button_event =
{
	.id = APP_BUTTON_EVENT_ID,
	.bptr = NULL
};

/**************************** External variables ****************************/
/* LoRaWAN supported class types of end device */
extern uint8_t edClassSupported;
/* Device join status flag */
extern lora_join_state_t lora_join_state;
/* Application timer ID */
extern uint8_t appTimerId;


/**************************** Function definition ****************************/
at_ble_status_t ble_apps_init(void)
{
	at_ble_status_t status;
	
	/* Initialize the button */
	button_init();
	/* initialize the ble chip  and Set the device mac address */
	ble_device_init(NULL);
	ble_state = BLE_INIT;
	
	/* Initialize LoRaWAN network provisioning service */
	lorawan_nwk_service_init(&lnp_gatt_service_handler, &ble_lnp_params);
	status = ble_lnp_primary_service_define(&lnp_gatt_service_handler, LNP_TOTAL_CHARATERISTIC_NUM);
	if(status != AT_BLE_SUCCESS)
	{
		DBG_LOG("LNP service define status = 0x%02X", status);
	}
	
	/* Initialize LoRaWAN RF parameter provisioning service */
	lorawan_rf_service_init(&lrfp_gatt_service_handler, &ble_lrfp_params);
	status = ble_lrfp_primary_service_define(&lrfp_gatt_service_handler, LRFP_TOTAL_CHARATERISTIC_NUM);
	if(status != AT_BLE_SUCCESS)
	{
		DBG_LOG("LRFP service define status = 0x%02X", status);
	}
	
	/* Register callbacks for gap related events */
	ble_mgr_events_callback_handler(REGISTER_CALL_BACK,
	BLE_GAP_EVENT_TYPE,
	&lnp_ble_gap_event_cb);
	
	/* Register callbacks for gatt-server related events */
	ble_mgr_events_callback_handler(REGISTER_CALL_BACK,
	BLE_GATT_SERVER_EVENT_TYPE,
	&lnp_ble_gatt_server_event_cb);
	
	/* Register callbacks for custom related events */
	ble_mgr_events_callback_handler(REGISTER_CALL_BACK,
	BLE_CUSTOM_EVENT_TYPE,
	&lnp_ble_custom_event_cb);
	
	DBG_LOG("Press SW0 button to start advertisement...");
	
	return status;
}

at_ble_status_t ble_adv_init(uint32_t adv_interval, uint32_t adv_timeout)
{
	at_ble_status_t status;
	
	/* Set advertisement and scan response payload */
	status = at_ble_adv_data_set(adv_payload, sizeof(adv_payload), scan_resp_payload, sizeof(scan_resp_payload));
	if(status != AT_BLE_SUCCESS)
	{
		DBG_LOG("Set adv payload fails = 0x%02X", status);
		return status;
	}
	
	/* Start advertisement */
	status = at_ble_adv_start(AT_BLE_ADV_TYPE_UNDIRECTED, AT_BLE_ADV_GEN_DISCOVERABLE, NULL, AT_BLE_ADV_FP_ANY, adv_interval, adv_timeout, false);
	if(status != AT_BLE_SUCCESS)
	{
		DBG_LOG("Start adv fails = 0x%02X", status);
		return status;
	}
	else
	{
		DBG_LOG("Adv started");
	}
	
	return status;
}

static at_ble_status_t ble_gap_adv_report_cb(void *params)
{
	at_ble_adv_report_t *adv_report = (at_ble_adv_report_t *)params;
	at_ble_status_t status;
	
	DBG_LOG("Adv report status = 0x%02X", adv_report->status);
	if(ble_state == BLE_FAST_ADV)
	{
		status = ble_adv_init(BLE_SLOW_ADV_INTERVAL, BLE_SLOW_ADV_TIMEOUT);
		
		if(status == AT_BLE_SUCCESS)
		{
			ble_state = BLE_SLOW_ADV;
		}
		else
		{
			ble_state = BLE_INIT;
		}
	}
	
	return AT_BLE_SUCCESS;
}

static at_ble_status_t ble_gap_connected_cb(void *params)
{
	at_ble_connected_t *connect = (at_ble_connected_t *)params;
	
	if(connect->conn_status == AT_BLE_SUCCESS)
	{
		memcpy(&lnp_provisioner_details, connect, sizeof(at_ble_connected_t));
		ble_state = BLE_CONNECTED;
	}
	
	
	return AT_BLE_SUCCESS;
}

static at_ble_status_t ble_gap_disconnected_cb(void *params)
{
	at_ble_disconnected_t *disconnected  = (at_ble_disconnected_t *)params;
	
	DBG_LOG("Disconnected reason = 0x%02X", disconnected->reason);
	if(disconnected->status == AT_BLE_SUCCESS)
	{
		ble_state = BLE_INIT;
	}
	return AT_BLE_SUCCESS;
}

static at_ble_status_t ble_gap_pair_done_cb(void *params)
{
	
	return AT_BLE_SUCCESS;
}

static at_ble_status_t ble_gatt_server_char_changed_cb(void *params)
{
	at_ble_characteristic_changed_t *char_change = (at_ble_characteristic_changed_t *)params;
	
	ble_char_process(char_change);
	
	return AT_BLE_SUCCESS;
}

static at_ble_status_t ble_gatt_server_char_config_changed_cb(void *params)
{
	
	return AT_BLE_SUCCESS;
}

static at_ble_status_t ble_gatt_server_ind_confirm_cb(void *params)
{
	
	return AT_BLE_SUCCESS;
}

static at_ble_status_t ble_gatt_server_noti_confirm_cb(void *params)
{
	
	return AT_BLE_SUCCESS;
}

at_ble_status_t ble_lnp_char_process_lora_class(at_ble_characteristic_changed_t *char_changed)
{
	at_ble_status_t status;
	uint8_t write_status = LNP_SUCCESS;
	StackRetStatus_t lora_status;
	
	
	if((char_changed->char_new_value[0] == CLASS_A) || (char_changed->char_new_value[0] == CLASS_B) || (char_changed->char_new_value[0] == CLASS_C))
	{
		/* Check whether LoRaWAN class type is supported by this device */
		if(edClassSupported & char_changed->char_new_value[0])
		{
			/* Set LoRaWAN Class Type */
			ble_lnp_params.class_type = char_changed->char_new_value[0];
			lora_status = LORAWAN_SetAttr(EDCLASS, &ble_lnp_params.class_type);
			
			if(LORAWAN_SUCCESS == lora_status)
			{
				write_status = LNP_SUCCESS;
			}
			else
			{
				write_status = LNP_LORAWAN_BUSY;
			}
		}
		else
		{
			write_status = LNP_LORAWAN_CLASS_TYPE_NOT_SUPPORTED;
		}
	}
	else
	{
		write_status = LNP_INVALID_PARAMETER;
	}
			
	DBG_LOG("Write resp status = 0x%02X", write_status);
	status = ble_lnp_send_write_resp_noti_ind(CN_LORAWAN_CLASS_TYPE, write_status);
	return status;
}

at_ble_status_t ble_lnp_char_process_join_method(at_ble_characteristic_changed_t *char_changed)
{
	uint8_t write_status = LNP_SUCCESS;
	at_ble_status_t status = AT_BLE_SUCCESS;
	
	if(char_changed->char_new_value[0] > ABP)
	{
		write_status = LNP_INVALID_JOIN_METHOD;
	}
	else
	{
		ble_lnp_params.join_method = char_changed->char_new_value[0];
	}
	
	status = ble_lnp_send_write_resp_noti_ind(CN_JOIN_METHOD, write_status);
	
	return status;
}

at_ble_status_t ble_lnp_char_process_app_eui(at_ble_characteristic_changed_t *char_changed)
{
	uint8_t write_status = LNP_SUCCESS;
	at_ble_status_t status;
	StackRetStatus_t lora_status;
		
	if(char_changed->char_len != APP_EUI_LEN)
	{
		write_status = LNP_INVALID_PARAMETER;
	}
	else if(ble_lnp_params.join_method == OTAA)
	{
		memcpy(ble_lnp_params.app_eui, char_changed->char_new_value, APP_EUI_LEN);
		lora_status = LORAWAN_SetAttr(APP_EUI, char_changed->char_new_value);
			
		if(LORAWAN_SUCCESS == lora_status)
		{
			write_status = LNP_SUCCESS;
		}
		else
		{
			write_status = LNP_LORAWAN_BUSY;
		}
	}
	else
	{
		write_status = LNP_NOT_REQUIRED_FOR_ABP_JOIN;
	}
	
	DBG_LOG("Write resp status = 0x%02X", write_status);
	status = ble_lnp_send_write_resp_noti_ind(CN_APP_EUI, write_status);
	return status;
}

at_ble_status_t ble_lnp_char_process_dev_eui(at_ble_characteristic_changed_t *char_changed)
{
	uint8_t dev_eui_ff[8] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
	uint8_t dev_eui_0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
	uint8_t write_status = LNP_SUCCESS;
	at_ble_status_t status;
	StackRetStatus_t lora_status;
	
	if(char_changed->char_len == DEV_EUI_LEN)
	{
		/* If EDBG does not have DEV EUI, the read value will be of all 0xFF, 
			Set devEUI from provisioner in that case */
		if((0 == memcmp(ble_lnp_params.dev_eui, dev_eui_ff, DEV_EUI_LEN)) || (0 == memcmp(ble_lnp_params.dev_eui, dev_eui_0, DEV_EUI_LEN)))
		{
			/* Set device EUI */
			memcpy(ble_lnp_params.dev_eui, char_changed->char_new_value, DEV_EUI_LEN);
			/* If EDBG does not have DEV EUI, the read value will be of all 0xFF or 0x00, 
				then set the devEUI from provisioner */
			lora_status = LORAWAN_SetAttr(DEV_EUI, ble_lnp_params.dev_eui);
			if(lora_status != LORAWAN_SUCCESS)
			{
				write_status = LNP_LORAWAN_BUSY;
			}
		}
		else
		{
			write_status = LNP_END_DEVICE_HAS_VALID_DEV_EUI;
		}
	}
	else
	{
		write_status = LNP_INVALID_PARAMETER;
	}
		
	DBG_LOG("Write resp status = 0x%02X", write_status);
	status = ble_lnp_send_write_resp_noti_ind(CN_DEV_EUI, write_status);
	return status;
}

at_ble_status_t ble_lnp_char_process_app_key(at_ble_characteristic_changed_t *char_changed)
{
	uint8_t write_status = LNP_SUCCESS;
	at_ble_status_t status;
	StackRetStatus_t lora_status;
	
	if(char_changed->char_len != APP_KEY_LEN)
	{
		write_status = LNP_INVALID_PARAMETER;
	}
	else if(ble_lnp_params.join_method == OTAA)
	{
		memcpy(ble_lnp_params.app_key, char_changed->char_new_value, APP_KEY_LEN);
		lora_status = LORAWAN_SetAttr(APP_KEY, char_changed->char_new_value);
		
		if(LORAWAN_SUCCESS == lora_status)
		{
			write_status = LNP_SUCCESS;
		}
		else
		{
			write_status = LNP_LORAWAN_BUSY;
		}
	}
	else
	{
		write_status = LNP_NOT_REQUIRED_FOR_ABP_JOIN;
	}
	
	DBG_LOG("Write resp status = 0x%02X", write_status);
	status = ble_lnp_send_write_resp_noti_ind(CN_APP_KEY, write_status);
	return status;
}

at_ble_status_t ble_lnp_char_process_dev_addr(at_ble_characteristic_changed_t *char_changed)
{
	uint8_t write_status = LNP_SUCCESS;
	at_ble_status_t status;
	StackRetStatus_t lora_status;
	
	if(char_changed->char_len != DEV_ADDR_LEN)
	{
		write_status = LNP_INVALID_PARAMETER;
	}
	else if(ble_lnp_params.join_method == ABP)
	{
		memcpy(ble_lnp_params.dev_addr, char_changed->char_new_value, DEV_ADDR_LEN);
		lora_status = LORAWAN_SetAttr(DEV_ADDR, char_changed->char_new_value);
		
		if(LORAWAN_SUCCESS == lora_status)
		{
			write_status = LNP_SUCCESS;
		}
		else
		{
			write_status = LNP_LORAWAN_BUSY;
		}
	}
	else
	{
		write_status = LNP_NOT_REQUIRED_FOR_OTAA_JOIN;
	}
	
	DBG_LOG("Write resp status = 0x%02X", write_status);
	status = ble_lnp_send_write_resp_noti_ind(CN_DEV_ADDR, write_status);
	return status;
}

at_ble_status_t ble_lnp_char_process_nwkskey(at_ble_characteristic_changed_t *char_changed)
{
	uint8_t write_status = LNP_SUCCESS;
	at_ble_status_t status;
	StackRetStatus_t lora_status;
	
	if(char_changed->char_len != NWK_S_KEY_LEN)
	{
		write_status = LNP_INVALID_PARAMETER;
	}
	else if(ble_lnp_params.join_method == ABP)
	{
		memcpy(ble_lnp_params.nwk_s_key, char_changed->char_new_value, NWK_S_KEY_LEN);
		lora_status = LORAWAN_SetAttr(NWKS_KEY, char_changed->char_new_value);
		
		if(LORAWAN_SUCCESS == lora_status)
		{
			write_status = LNP_SUCCESS;
		}
		else
		{
			write_status = LNP_LORAWAN_BUSY;
		}
	}
	else
	{
		write_status = LNP_NOT_REQUIRED_FOR_OTAA_JOIN;
	}
	
	DBG_LOG("Write resp status = 0x%02X", write_status);
	status = ble_lnp_send_write_resp_noti_ind(CN_NWK_S_KEY, write_status);
	return status;
}

at_ble_status_t ble_lnp_char_process_appskey(at_ble_characteristic_changed_t *char_changed)
{
	uint8_t write_status = LNP_SUCCESS;
	at_ble_status_t status;
	StackRetStatus_t lora_status;
	
	if(char_changed->char_len != APP_S_KEY_LEN)
	{
		write_status = LNP_INVALID_PARAMETER;
	}
	else if(ble_lnp_params.join_method == ABP)
	{
		memcpy(ble_lnp_params.app_s_key, char_changed->char_new_value, APP_S_KEY_LEN);
		lora_status = LORAWAN_SetAttr(APPS_KEY, char_changed->char_new_value);
		
		if(LORAWAN_SUCCESS == lora_status)
		{
			write_status = LNP_SUCCESS;
		}
		else
		{
			write_status = LNP_LORAWAN_BUSY;
		}
	}
	else
	{
		write_status = LNP_NOT_REQUIRED_FOR_OTAA_JOIN;
	}
	
	DBG_LOG("Write resp status = 0x%02X", write_status);
	status = ble_lnp_send_write_resp_noti_ind(CN_APP_S_KEY, write_status);
	return status;
}

at_ble_status_t ble_lnp_char_process_mcast(at_ble_characteristic_changed_t *char_changed)
{
	uint8_t write_status = LNP_SUCCESS;
	at_ble_status_t status;
	StackRetStatus_t lora_status;
	
	/* If the value is other than disable(0)/enable(1) then return an error code as invalid parameter */
	if((char_changed->char_len != MCAST_LEN) || (char_changed->char_new_value[0] > MULTICAST_ENABLE))
	{
		write_status = LNP_INVALID_PARAMETER;
	}
	else
	{
		/* Check whether LoRaWAN class type is supported by this device */
		if((edClassSupported & CLASS_B) || (edClassSupported & CLASS_C))
		{
			uint8_t ed_class = 0;
			
			/* Store the Multicast value */
			ble_lnp_params.mcast = char_changed->char_new_value[0];
			/* Get ED Class type */
			LORAWAN_GetAttr(EDCLASS, NULL, &ed_class);
			if((ed_class & CLASS_B) || (ed_class & CLASS_C))
			{
				lora_status = LORAWAN_SetAttr(MCAST_ENABLE, char_changed->char_new_value);
				
				if(LORAWAN_SUCCESS == lora_status)
				{
					write_status = LNP_SUCCESS;
				}
				else
				{
					write_status = LNP_LORAWAN_BUSY;
				}
			}
		}
		else
		{
			write_status = LNP_NOT_SUPPORTED_BY_LORAWAN_CLASS;
		}
	}
	DBG_LOG("Write resp status = 0x%02X", write_status);
	status = ble_lnp_send_write_resp_noti_ind(CN_MCAST, write_status);
	return status;
}

at_ble_status_t ble_lnp_char_process_mcast_dev_addr(at_ble_characteristic_changed_t *char_changed)
{
	uint8_t write_status = LNP_SUCCESS;
	at_ble_status_t status;
	StackRetStatus_t lora_status;
	
	if(char_changed->char_len != MCAST_DEV_ADDR_LEN)
	{
		write_status = LNP_INVALID_PARAMETER;
	}
	else
	{
		/* Check whether LoRaWAN class type is supported by this device */
		if((edClassSupported & CLASS_B) || (edClassSupported & CLASS_C))
		{
			uint8_t ed_class = 0;
						
			/* Store the Multicast device address */
			memcpy(ble_lnp_params.mcast_dev_addr, char_changed->char_new_value, MCAST_DEV_ADDR_LEN);
			/* Get ED Class type */
			LORAWAN_GetAttr(EDCLASS, NULL, &ed_class);
			if((ed_class & CLASS_B) || (ed_class & CLASS_C))
			{
				LorawanMcastDevAddr_t group_addr;
				
				group_addr.groupId = 0;
				memcpy(&group_addr.mcast_dev_addr, ble_lnp_params.mcast_dev_addr, sizeof(ble_lnp_params.mcast_dev_addr));
				lora_status = LORAWAN_SetAttr(MCAST_GROUP_ADDR, &group_addr);
				
				if(LORAWAN_SUCCESS == lora_status)
				{
					write_status = LNP_SUCCESS;
				}
				else
				{
					write_status = LNP_LORAWAN_BUSY;
				}
			}
		}
		else
		{
			write_status = LNP_NOT_SUPPORTED_BY_LORAWAN_CLASS;
		}
	}
	
	DBG_LOG("Write resp status = 0x%02X", write_status);
	status = ble_lnp_send_write_resp_noti_ind(CN_MCAST_DEV_ADDR, write_status);
	return status;
}

at_ble_status_t ble_lnp_char_process_mcast_nwkskey(at_ble_characteristic_changed_t *char_changed)
{
	uint8_t write_status = LNP_SUCCESS;
	at_ble_status_t status;
	StackRetStatus_t lora_status;
	
	if(char_changed->char_len != MCAST_NWK_S_KEY_LEN)
	{
		write_status = LNP_INVALID_PARAMETER;
	}
	else
	{
		/* Check whether LoRaWAN class type is supported by this device */
		if((edClassSupported & CLASS_B) || (edClassSupported & CLASS_C))
		{
			uint8_t ed_class = 0;
			
			/* Store the Multicast network session key */
			memcpy(ble_lnp_params.mcast_nwk_s_key, char_changed->char_new_value, MCAST_NWK_S_KEY_LEN);
			/* Get ED Class type */
			LORAWAN_GetAttr(EDCLASS, NULL, &ed_class);
			if((ed_class & CLASS_B) || (ed_class & CLASS_C))
			{
				LorawanMcastNwkSkey_t group_nwk_s_key;
				
				group_nwk_s_key.groupId = 0;
				memcpy(group_nwk_s_key.mcastNwkSKey, ble_lnp_params.mcast_nwk_s_key, sizeof(ble_lnp_params.mcast_nwk_s_key));
				lora_status = LORAWAN_SetAttr(MCAST_NWKS_KEY, &group_nwk_s_key);
				
				if(LORAWAN_SUCCESS == lora_status)
				{
					write_status = LNP_SUCCESS;
				}
				else
				{
					write_status = LNP_LORAWAN_BUSY;
				}
			}
		}
		else
		{
			write_status = LNP_NOT_SUPPORTED_BY_LORAWAN_CLASS;
		}
	}
	
	DBG_LOG("Write resp status = 0x%02X", write_status);
	status = ble_lnp_send_write_resp_noti_ind(CN_MCAST_NWK_S_KEY, write_status);
	return status;
}

at_ble_status_t ble_lnp_char_process_mcast_appskey(at_ble_characteristic_changed_t *char_changed)
{
	uint8_t write_status = LNP_SUCCESS;
	at_ble_status_t status;
	StackRetStatus_t lora_status;
	
	if(char_changed->char_len != MCAST_APP_S_KEY_LEN)
	{
		write_status = LNP_INVALID_PARAMETER;
	}
	else
	{
		/* Check whether LoRaWAN class type is supported by this device */
		if((edClassSupported & CLASS_B) || (edClassSupported & CLASS_C))
		{
			uint8_t ed_class = 0;
			
			/* Store the Multicast application session key */
			memcpy(ble_lnp_params.mcast_app_s_key, char_changed->char_new_value, MCAST_APP_S_KEY_LEN);
			/* Get ED Class type */
			LORAWAN_GetAttr(EDCLASS, NULL, &ed_class);
			if((ed_class & CLASS_B) || (ed_class & CLASS_C))
			{
				LorawanMcastAppSkey_t group_app_s_key;
				
				group_app_s_key.groupId = 0;
				memcpy(group_app_s_key.mcastAppSKey, ble_lnp_params.mcast_app_s_key, sizeof(ble_lnp_params.mcast_app_s_key));
				lora_status = LORAWAN_SetAttr(MCAST_APPS_KEY, &group_app_s_key);
				
				if(LORAWAN_SUCCESS == lora_status)
				{
					write_status = LNP_SUCCESS;
				}
				else
				{
					write_status = LNP_LORAWAN_BUSY;
				}
			}
		}
		else
		{
			write_status = LNP_NOT_SUPPORTED_BY_LORAWAN_CLASS;
		}
	}
	
	DBG_LOG("Write resp status = 0x%02X", write_status);
	status = ble_lnp_send_write_resp_noti_ind(CN_MCAST_APP_S_KEY, write_status);
	return status;
}

at_ble_status_t ble_lnp_char_process_reset_to_default(at_ble_characteristic_changed_t *char_changed)
{
	uint8_t temp_data[16];
	LorawanMcastDevAddr_t group_addr;
	LorawanMcastNwkSkey_t group_nwk_s_key;
	LorawanMcastAppSkey_t group_app_s_key;
			
	/*Reset LoRa attributes and set the frequency band */
	LORAWAN_Reset(ble_lrfp_params.freq_band);
	
	LORAWAN_GetAttr(ISMBAND, NULL, &temp_data);
	DBG_LOG("get freq band = 0x%02X", temp_data[0]);
	LORAWAN_GetAttr(ISMBAND, NULL, &temp_data);
	DBG_LOG("get freq band = 0x%02X", temp_data[0]);
	LORAWAN_GetAttr(EDCLASS_SUPPORTED, NULL, &temp_data);
	DBG_LOG("get ed class supported = 0x%02X", temp_data[0]);
	LORAWAN_GetAttr(EDCLASS, NULL, &temp_data);
	DBG_LOG("get ed class = 0x%02X", temp_data[0]);
	LORAWAN_GetAttr(DEV_EUI, NULL, &temp_data);
	DBG_LOG("get dev eui = ");
	for(uint8_t index = 0; index < 8; index++)
	{
		DBG_LOG_CONT("0x%02X ", temp_data[index]);
	}
	
	DBG_LOG("get app eui = ");
	LORAWAN_GetAttr(APP_EUI, NULL, &temp_data);
	for(uint8_t index = 0; index < 8; index++)
	{
		DBG_LOG_CONT("0x%02X ", temp_data[index]);
	}
	
	DBG_LOG("get app key = ");
	LORAWAN_GetAttr(APP_KEY, NULL, &temp_data);
	for(uint8_t index = 0; index < 16; index++)
	{
		DBG_LOG_CONT("0x%02X ", temp_data[index]);
	}
	
	DBG_LOG("get dev addr = ");
	LORAWAN_GetAttr(DEV_ADDR, NULL, &temp_data);
	for(uint8_t index = 0; index < 4; index++)
	{
		DBG_LOG_CONT("0x%02X ", temp_data[index]);
	}
	
	DBG_LOG("get nwk s key = ");
	LORAWAN_GetAttr(NWKS_KEY, NULL, &temp_data);
	for(uint8_t index = 0; index < 16; index++)
	{
		DBG_LOG_CONT("0x%02X ", temp_data[index]);
	}
	
	DBG_LOG("get app s key = ");
	LORAWAN_GetAttr(APPS_KEY, NULL, &temp_data);
	for(uint8_t index = 0; index < 16; index++)
	{
		DBG_LOG_CONT("0x%02X ", temp_data[index]);
	}
	
	DBG_LOG("get mcast enable = ");
	LORAWAN_GetAttr(MCAST_ENABLE, NULL, &temp_data);
	DBG_LOG_CONT("0x%02X", temp_data[0]);
	
	DBG_LOG("get mcast addr = ");
	LORAWAN_GetAttr(MCAST_GROUP_ADDR, NULL, &group_addr);
	for(uint8_t index = 0; index < 4; index++)
	{
		DBG_LOG_CONT("0x%02X ", (uint8_t)(group_addr.mcast_dev_addr >> (index * 8)));
	}
	
	DBG_LOG("get mcast nwk s key = ");
	LORAWAN_GetAttr(MCAST_NWKS_KEY, NULL, &group_nwk_s_key);
	for(uint8_t index = 0; index < 16; index++)
	{
		DBG_LOG_CONT("0x%02X ", group_nwk_s_key.mcastNwkSKey[index]);
	}
	
	DBG_LOG("get mcast app s key = ");
	LORAWAN_GetAttr(MCAST_APPS_KEY, NULL, &group_app_s_key);
	for(uint8_t index = 0; index < 16; index++)
	{
		DBG_LOG_CONT("0x%02X ", group_app_s_key.mcastAppSKey[index]);
	}
	DBG_LOG(" ");
	
	lora_join_state = NOT_JOINED;
	/* Clear NWK parameters */
	memset(&ble_lnp_params, 0, sizeof(lnp_params_t));
	/* Clear RF parameters */
	memset(&ble_lrfp_params, 0, sizeof(lrfp_params_t));
	LORAWAN_GetAttr(EDCLASS, NULL, &ble_lnp_params.class_type);
	dev_eui_read();
	PDS_StoreAll();
	
	return AT_BLE_SUCCESS;
}

at_ble_status_t ble_lnp_char_process_provision_cmd(at_ble_characteristic_changed_t *char_changed)
{
	uint8_t write_status = LNP_SUCCESS;
	at_ble_status_t status = AT_BLE_SUCCESS;
	
	/* The Provisioning command value 1 will start the provisioning. Anything other than 0 or 1 is invalid */
	if(char_changed->char_new_value[0] > 1)
	{
		write_status = LNP_INVALID_PARAMETER;
		DBG_LOG("Write resp status = 0x%02X", write_status);
		status = ble_lnp_send_write_resp_noti_ind(CN_PROVISION_CMD, write_status);
	}
	else if(char_changed->char_new_value[0] == 1)
	{
		/* Store the parameters in NVM */
		PDS_StoreAll();
		ble_lnp_params.provision_cmd = char_changed->char_new_value[0];
		SYSTEM_PostTask(APP_TASK_ID);
	}
	
	return status;
}

at_ble_status_t ble_char_process(at_ble_characteristic_changed_t *char_changed)
{
	at_ble_status_t status = AT_BLE_SUCCESS;
	
	if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_LORAWAN_CLASS_TYPE].char_val_handle)
	{
		DBG_LOG("Char process: CN_LORAWAN_CLASS_TYPE");
		status = ble_lnp_char_process_lora_class(char_changed);
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_JOIN_METHOD].char_val_handle)
	{
		DBG_LOG("Char process: CN_JOIN_METHOD");
		status = ble_lnp_char_process_join_method(char_changed);
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_APP_EUI].char_val_handle)
	{
		DBG_LOG("Char process: CN_APP_EUI");
		status = ble_lnp_char_process_app_eui(char_changed);
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_DEV_EUI].char_val_handle)
	{
		DBG_LOG("Char process: CN_DEV_EUI");
		status = ble_lnp_char_process_dev_eui(char_changed);
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_APP_KEY].char_val_handle)
	{
		DBG_LOG("Char process: CN_APP_KEY");
		status = ble_lnp_char_process_app_key(char_changed);
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_DEV_ADDR].char_val_handle)
	{
		DBG_LOG("Char process: CN_DEV_ADDR");
		status = ble_lnp_char_process_dev_addr(char_changed);
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_NWK_S_KEY].char_val_handle)
	{
		DBG_LOG("Char process: CN_NWK_S_KEY");
		status = ble_lnp_char_process_nwkskey(char_changed);
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_APP_S_KEY].char_val_handle)
	{
		DBG_LOG("Char process: CN_APP_S_KEY");
		status = ble_lnp_char_process_appskey(char_changed);
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_MCAST].char_val_handle)
	{
		DBG_LOG("Char process: CN_MCAST");
		status = ble_lnp_char_process_mcast(char_changed);
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_MCAST_DEV_ADDR].char_val_handle)
	{
		DBG_LOG("Char process: CN_MCAST_DEV_ADDR");
		status = ble_lnp_char_process_mcast_dev_addr(char_changed);
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_MCAST_NWK_S_KEY].char_val_handle)
	{
		DBG_LOG("Char process: CN_MCAST_NWK_S_KEY");
		status = ble_lnp_char_process_mcast_nwkskey(char_changed);
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_MCAST_APP_S_KEY].char_val_handle)
	{
		DBG_LOG("Char process: CN_MCAST_APP_S_KEY");
		status = ble_lnp_char_process_mcast_appskey(char_changed);
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_RESET_TO_DEFAULT].char_val_handle)
	{
		DBG_LOG("Char process: CN_RESET_TO_DEFAULT");
		status = ble_lnp_char_process_reset_to_default(char_changed);
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_PROVISION_STATUS].char_val_handle)
	{
		DBG_LOG("Char process: CN_PROVISION_STATUS");
		
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_LNP_APP_WRITE_RESP].char_val_handle)
	{
		DBG_LOG("Char process: CN_LNP_APP_WRITE_RESP");
		
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_LNP_APP_WRITE_RESP].client_config_handle)
	{
		DBG_LOG("CCCD process: CN_LNP_APP_WRITE_RESP");
		lnp_write_resp_noti_ind = char_changed->char_new_value[0] & 0x03;	/* Check for notification and indication */
		DBG_LOG("lnp_write_resp_noti_ind = %d", lnp_write_resp_noti_ind);
	}
	else if(char_changed->char_handle == lnp_gatt_service_handler.serv_chars[CN_PROVISION_CMD].char_val_handle)
	{
		DBG_LOG("Char process: CN_PROVISION_CMD");
		status = ble_lnp_char_process_provision_cmd(char_changed);
	}
	else if(char_changed->char_handle == lrfp_gatt_service_handler.serv_chars[CN_FREQ_BAND].char_val_handle)
	{
		DBG_LOG("Char process: CN_FREQ_BAND");
		status = ble_lrfp_char_process_freq_band(char_changed);
	}
	else if(char_changed->char_handle == lrfp_gatt_service_handler.serv_chars[CN_FREQ_SUBBAND].char_val_handle)
	{
		DBG_LOG("Char process: CN_FREQ_SUBBAND");
		status = ble_lrfp_char_process_freq_subband(char_changed);
	}
	else if(char_changed->char_handle == lrfp_gatt_service_handler.serv_chars[CN_LRFP_APP_WRITE_RESP].char_val_handle)
	{
		DBG_LOG("Char process: CN_LRFP_APP_WRITE_RESP");
		
	}
	else if(char_changed->char_handle == lrfp_gatt_service_handler.serv_chars[CN_LRFP_APP_WRITE_RESP].client_config_handle)
	{
		DBG_LOG("CCCD process: CN_LRFP_APP_WRITE_RESP");
		lrfp_write_resp_noti_ind = char_changed->char_new_value[0] & 0x03;	/* Check for notification and indication */
		DBG_LOG("lrfp_write_resp_noti_ind = %d", lrfp_write_resp_noti_ind);
	}
	return status;
}

at_ble_status_t ble_lrfp_char_process_freq_band(at_ble_characteristic_changed_t *char_changed)
{
	at_ble_status_t status;
	uint8_t write_status = LRFP_SUCCESS;
	StackRetStatus_t lora_status = LORAWAN_SUCCESS;
	
	if((char_changed->char_new_value[0] >= ISM_EU868) && (char_changed->char_new_value[0] <= ISM_IND865))
	{
		/* Set LoRaWAN frequency band */
		ble_lrfp_params.freq_band = char_changed->char_new_value[0];
		/* LoRaWAN Stack RESET */
		lora_status = LORAWAN_Reset(ble_lrfp_params.freq_band);
		if(lora_status != LORAWAN_SUCCESS)
		{
			DBG_LOG("LORAWAN_Reset status = 0x%02X", lora_status);
			write_status = lora_status;
		}
		
		/* The LORAWAN_Reset wipes out the existing attributes. So the DevEUI needs to be set again */
		lora_status = LORAWAN_SetAttr(DEV_EUI, ble_lnp_params.dev_eui);
		if (LORAWAN_SUCCESS != lora_status)
		{
			printf("\nSet DEV_EUI failed = %d\n\r", lora_status);
			write_status = lora_status;
		}
	}
	else
	{
		write_status = LRFP_BAND_NOT_SUPPORTED;
	}
	
	DBG_LOG("Write resp status = 0x%02X", write_status);
	status = ble_lrfp_send_write_resp_noti_ind(CN_FREQ_BAND, write_status);
	return status;
}

at_ble_status_t ble_lrfp_char_process_freq_subband(at_ble_characteristic_changed_t *char_changed)
{
	at_ble_status_t status;
	uint8_t write_status = LRFP_SUCCESS;
	
	if((ble_lrfp_params.freq_band == ISM_NA915) || (ble_lrfp_params.freq_band == ISM_AU915))
	{
#if (RANDOM_NW_ACQ == 0)
		if((char_changed->char_new_value[0] >= 1) && (char_changed->char_new_value[0] <= 8))
		{
			#define MAX_NA_CHANNELS 72
			#define MAX_SUBBAND_CHANNELS 8
			
			StackRetStatus_t lora_status;
			ChannelParameters_t ch_params;
			
			/* Set LoRaWAN frequency band */
			ble_lrfp_params.freq_subband = char_changed->char_new_value[0];
			
			uint8_t allowed_min_125khz_ch,allowed_max_125khz_ch,allowed_500khz_channel;

			allowed_min_125khz_ch = (ble_lrfp_params.freq_subband-1)*MAX_SUBBAND_CHANNELS;

			allowed_max_125khz_ch = ((ble_lrfp_params.freq_subband-1)*MAX_SUBBAND_CHANNELS) + 7 ;

			allowed_500khz_channel = ble_lrfp_params.freq_subband+63;

			for (ch_params.channelId = 0; ch_params.channelId < MAX_NA_CHANNELS; ch_params.channelId++)
			{
				if((ch_params.channelId >= allowed_min_125khz_ch) && (ch_params.channelId <= allowed_max_125khz_ch))
				{
					ch_params.channelAttr.status = true;
				}
				else if(ch_params.channelId == allowed_500khz_channel)
				{
					ch_params.channelAttr.status = true;
				}
				else
				{
					ch_params.channelAttr.status = false;
				}

				lora_status = LORAWAN_SetAttr(CH_PARAM_STATUS, &ch_params);
				if(lora_status != LORAWAN_SUCCESS)
				{
					DBG_LOG("LoRa sub-band set status = 0x%02X", lora_status);
					write_status = lora_status;
				}
			}

		}
		else
		{
			write_status = LRFP_INVALID_SUBBAND;
		}
#endif /* #if (RANDOM_NW_ACQ == 0) */
	}
	else
	{
		write_status = LRFP_INVALID_PARAMETER;
	}
	
	DBG_LOG("Write resp status = 0x%02X", write_status);
	status = ble_lrfp_send_write_resp_noti_ind(CN_FREQ_SUBBAND, write_status);
	return status;
}

at_ble_status_t ble_lnp_send_write_resp_noti_ind(uint8_t char_id, uint8_t write_status)
{
	at_ble_status_t status;
	
	uint8_t char_data[2] = {char_id, write_status};
	
	status = at_ble_characteristic_value_set(lnp_gatt_service_handler.serv_chars[CN_LNP_APP_WRITE_RESP].char_val_handle, char_data, sizeof(char_data));
	
	if(AT_BLE_SUCCESS == status)
	{
		if(lnp_write_resp_noti_ind & 0x02)	/* Check whether indication is enabled */
		{
			status = at_ble_indication_send(lnp_provisioner_details.handle, lnp_gatt_service_handler.serv_chars[CN_LNP_APP_WRITE_RESP].char_val_handle);
		}
		else if(lnp_write_resp_noti_ind & 0x01)	/* Check whether notification is enabled */
		{
			status = at_ble_notification_send(lnp_provisioner_details.handle, lnp_gatt_service_handler.serv_chars[CN_LNP_APP_WRITE_RESP].char_val_handle);
		}
		
		if(status != AT_BLE_SUCCESS)
		{
			DBG_LOG("Notification/Indication status = 0x%02X", status);
		}
	}
	else
	{
		DBG_LOG("Write resp char value set status = 0x%02X", status);
	}
	
	return status;
}

at_ble_status_t ble_lrfp_send_write_resp_noti_ind(uint8_t char_id, uint8_t write_status)
{
	at_ble_status_t status;
	
	uint8_t char_data[2] = {char_id, write_status};
	
	status = at_ble_characteristic_value_set(lrfp_gatt_service_handler.serv_chars[CN_LRFP_APP_WRITE_RESP].char_val_handle, char_data, sizeof(char_data));
	
	if(AT_BLE_SUCCESS == status)
	{
		if(lrfp_write_resp_noti_ind & 0x02)	/* Check whether indication is enabled */
		{
			status = at_ble_indication_send(lnp_provisioner_details.handle, lrfp_gatt_service_handler.serv_chars[CN_LRFP_APP_WRITE_RESP].char_val_handle);
		}
		else if(lrfp_write_resp_noti_ind & 0x01)	/* Check whether notification is enabled */
		{
			status = at_ble_notification_send(lnp_provisioner_details.handle, lrfp_gatt_service_handler.serv_chars[CN_LRFP_APP_WRITE_RESP].char_val_handle);
		}
		
		if(status != AT_BLE_SUCCESS)
		{
			DBG_LOG("Notification/Indication status = 0x%02X", status);
		}
	}
	else
	{
		DBG_LOG("Write resp char value set status = 0x%02X", status);
	}
	
	return status;
}

static at_ble_status_t lnp_ble_custom_event(void *param)
{
	at_ble_status_t status = AT_BLE_SUCCESS;
	uint8_t adv_status = AT_BLE_FAILURE;
	user_custom_event_t **app_custom_event = (user_custom_event_t **)param;
	
	if ((((*app_custom_event)->id) == APP_BUTTON_EVENT_ID))
	{
		if(ble_state == BLE_INIT)
		{
			/* LoRa provisioning parameters may get updated. So, stop the LoRa rejoin timer */
			SwTimerStop(appTimerId);
			
			/* Start advertisement */
			adv_status = ble_adv_init(BLE_FAST_ADV_INTERVAL, BLE_FAST_ADV_TIMEOUT);

			/* Check for scan status */
			if (adv_status == AT_BLE_SUCCESS)
			{
				DBG_LOG("Press SW0 button to stop advertisement...");
				ble_state = BLE_FAST_ADV;
			}
			else if (adv_status == AT_BLE_INVALID_PARAM)
			{
				DBG_LOG("Adv parameters are invalid");
			}
			else if (adv_status == AT_BLE_FAILURE)
			{
				DBG_LOG("Adv Failed Generic error");
			}
		}
		else if(ble_state == BLE_CONNECTED)
		{
			at_ble_disconnect(lnp_provisioner_details.handle, AT_BLE_TERMINATED_BY_USER);
			/* This will enable BLE advertisement */
			at_ble_event_user_defined_post(&app_button_event);
		}
		else
		{
			if(at_ble_adv_stop() != AT_BLE_SUCCESS)
			{
				/* If advertisement not started stop advertisement failed message will be displayed on terminal */
				/* If the advertisement already started then stop advertisement will return AT_BLE_SUCCESS */
				DBG_LOG_DEV("Stop adv failed");
			}
			else
			{
				DBG_LOG("Advertisement stopped");
				DBG_LOG("Press SW0 button to start advertisement..");
				ble_state = BLE_INIT;
			}
		}
		delay_ms(300); //Button de-bounce delay
	}
	else
	{
		status = AT_BLE_FAILURE;
	}
	button_press = false;
	return status;
}

void button_cb(void)
{
	if((ble_state != BLE_DORMANT) && !button_press)
	{
		button_press = true;
		at_ble_event_user_defined_post(&app_button_event);
	}
}

/*********************************************************************//*
 \brief      Reads the DEV EUI if it is flashed in EDBG MCU
 ************************************************************************/
void dev_eui_read(void)
{
#if (EDBG_EUI_READ == 1)
	uint8_t index;
	StackRetStatus_t status;
	uint8_t dev_eui_ff[8] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
	uint8_t dev_eui_0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
	
	edbg_eui_read_eui64(ble_lnp_params.dev_eui);
	printf("\nDevEUI : ");
	for(index = 0; index < 8; index++)
	{
		printf("%02X ", ble_lnp_params.dev_eui[index]);
	}
	
	/* If EDBG does not have DEV EUI, the read value will be of all 0xFF or 0x00, 
		then set the devEUI from provisioner */
	if((0 != memcmp(ble_lnp_params.dev_eui, dev_eui_ff, DEV_EUI_LEN)) && (0 != memcmp(ble_lnp_params.dev_eui, dev_eui_0, DEV_EUI_LEN)))
	{
		status = LORAWAN_SetAttr(DEV_EUI, ble_lnp_params.dev_eui);
		if (LORAWAN_SUCCESS != status)
		{
			printf("\nSet DEV_EUI failed = %d\n\r", status);
			return;
		}
	}
#endif
}

