/**
* \file  lnp_service.c
*
* \brief LORAWAN Network Parameter Provisioning Service file
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
#include "at_ble_api.h"
#include "conf_extint.h"
#include "console_serial.h"
#include "ble_utils.h"
#include "ble_manager.h"
#include "lnp_service.h"
#include "lorawan.h"

/**************************** Function definition ****************************/
/**@brief Initialize the LoRaWAN service related information. */
void lorawan_nwk_service_init(lnp_gatt_service_handler_t *lora_nwk_prov_service, lnp_params_t *lnp_params)
{
	uint8_t lnp_service_uuid[] = LNP_SERVICE_UUID;
	uint8_t lnp_class_type_uuid[] = LNP_LORAWAN_CLASS_TYPE_UUID;
	uint8_t lnp_join_method_uuid[] = LNP_JOIN_METHOD_UUID;
	uint8_t lnp_app_eui_uuid[] = LNP_APP_EUI_UUID;
	uint8_t lnp_dev_eui_uuid[] = LNP_DEV_EUI_UUID;
	uint8_t lnp_app_key_uuid[] = LNP_APP_KEY_UUID;
	uint8_t lnp_dev_addr_uuid[] = LNP_DEV_ADDR_UUID;
	uint8_t lnp_nwk_s_key_uuid[] = LNP_NWK_SESSION_KEY_UUID;
	uint8_t lnp_app_s_key_uuid[] = LNP_APP_SESSION_KEY_UUID;
	uint8_t lnp_mcast_uuid[] = LNP_MCAST_UUID;
	uint8_t lnp_mcast_dev_addr_uuid[] = LNP_MCAST_DEV_ADDR_UUID;
	uint8_t lnp_mcast_nwk_s_key_uuid[] = LNP_MCAST_NWK_SESSION_KEY_UUID;
	uint8_t lnp_mcast_app_s_key_uuid[] = LNP_MCAST_APP_SESSION_KEY_UUID;
	uint8_t lnp_reset_to_default_uuid[] = LNP_RESET_TO_DEFAULT_UUID;
	uint8_t lnp_provision_status_uuid[] = LNP_STATUS_UUID;
	uint8_t lnp_app_write_resp_uuid[] = LNP_APP_WRITE_RESPONSE_UUID;
	uint8_t lnp_provision_cmd_uuid[] = LNP_PROVISION_CMD_UUID;
	
	lora_nwk_prov_service->serv_handle = 0;
	lora_nwk_prov_service->serv_uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_uuid.uuid, lnp_service_uuid, AT_BLE_UUID_128_LEN);
	
	//Characteristic Info for LoRaWAN Class Type
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].uuid.uuid, lnp_class_type_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].init_value = &lnp_params->class_type;
	
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].value_init_len = sizeof(lnp_params->class_type);
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].value_max_len = sizeof(lnp_params->class_type);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_LORAWAN_CLASS_TYPE].presentation_format = NULL;       /* presentation format */
	
	//Characterisitc Info for LoRaWAN Join Method
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].uuid.uuid, lnp_join_method_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].init_value = &lnp_params->join_method;
	
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].value_init_len = sizeof(lnp_params->join_method);
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].value_max_len = sizeof(lnp_params->join_method);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_JOIN_METHOD].presentation_format = NULL;       /* presentation format */


	//Characteristic Info for APP EUI
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_APP_EUI].uuid.uuid, lnp_app_eui_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].init_value = lnp_params->app_eui;
	
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].value_init_len = sizeof(lnp_params->app_eui);
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].value_max_len = sizeof(lnp_params->app_eui);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_APP_EUI].presentation_format = NULL;       /* presentation format */

	//Characteristic Info for DEV EUI
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_DEV_EUI].uuid.uuid, lnp_dev_eui_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].init_value = lnp_params->dev_eui;//lnp_params->dev_eui;
	
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].value_init_len = sizeof(lnp_params->dev_eui);
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].value_max_len = sizeof(lnp_params->dev_eui);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_DEV_EUI].presentation_format = NULL;       /* presentation format */

	//Characteristic Info for Application Key
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_APP_KEY].uuid.uuid, lnp_app_key_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].init_value = lnp_params->app_key;
	
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].value_init_len = sizeof(lnp_params->app_key);
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].value_max_len = sizeof(lnp_params->app_key);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_APP_KEY].presentation_format = NULL;       /* presentation format */
	
	//Characteristic Info for Device Address
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].uuid.uuid, lnp_dev_addr_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].init_value = lnp_params->dev_addr;
	
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].value_init_len = sizeof(lnp_params->dev_addr);
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].value_max_len = sizeof(lnp_params->dev_addr);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_DEV_ADDR].presentation_format = NULL;       /* presentation format */
	
	//Characteristic Info for Network Session Key
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].uuid.uuid, lnp_nwk_s_key_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].init_value = lnp_params->nwk_s_key;
	
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].value_init_len = sizeof(lnp_params->nwk_s_key);
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].value_max_len = sizeof(lnp_params->nwk_s_key);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_NWK_S_KEY].presentation_format = NULL;       /* presentation format */
	
	//Characteristic Info for Application Session Key
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].uuid.uuid, lnp_app_s_key_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].init_value = lnp_params->app_s_key;
	
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].value_init_len = sizeof(lnp_params->app_s_key);
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].value_max_len = sizeof(lnp_params->app_s_key);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_APP_S_KEY].presentation_format = NULL;       /* presentation format */
	
	//Characteristic Info for Multicast
	lora_nwk_prov_service->serv_chars[CN_MCAST].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_MCAST].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_MCAST].uuid.uuid, lnp_mcast_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_MCAST].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_MCAST].init_value = (uint8_t *)&lnp_params->mcast;
	
	lora_nwk_prov_service->serv_chars[CN_MCAST].value_init_len = sizeof(lnp_params->mcast);
	lora_nwk_prov_service->serv_chars[CN_MCAST].value_max_len = sizeof(lnp_params->mcast);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_MCAST].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_MCAST].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_MCAST].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_MCAST].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_MCAST].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_MCAST].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_MCAST].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_MCAST].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_MCAST].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_MCAST].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_MCAST].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_MCAST].presentation_format = NULL;       /* presentation format */
	
	//Characteristic Info for Multicast Device Address
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].uuid.uuid, lnp_mcast_dev_addr_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].init_value = lnp_params->mcast_dev_addr;
	
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].value_init_len = sizeof(lnp_params->mcast_dev_addr);
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].value_max_len = sizeof(lnp_params->mcast_dev_addr);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_DEV_ADDR].presentation_format = NULL;       /* presentation format */

	//Characteristic Info for Multicast Network Session Key
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].uuid.uuid, lnp_mcast_nwk_s_key_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].init_value = lnp_params->mcast_nwk_s_key;
	
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].value_init_len = sizeof(lnp_params->mcast_nwk_s_key);
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].value_max_len = sizeof(lnp_params->mcast_nwk_s_key);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_NWK_S_KEY].presentation_format = NULL;       /* presentation format */

	//Characteristic Info for Multicast Application Session Key
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].uuid.uuid, lnp_mcast_app_s_key_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].init_value = lnp_params->mcast_app_s_key;
	
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].value_init_len = sizeof(lnp_params->mcast_app_s_key);
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].value_max_len = sizeof(lnp_params->mcast_app_s_key);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_MCAST_APP_S_KEY].presentation_format = NULL;       /* presentation format */
	
	//Characteristic Info for Reset-to-Default
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].uuid.uuid, lnp_reset_to_default_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].init_value = (uint8_t *)&lnp_params->reset_to_default;
	
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].value_init_len = sizeof(lnp_params->reset_to_default);
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].value_max_len = sizeof(lnp_params->reset_to_default);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_RESET_TO_DEFAULT].presentation_format = NULL;       /* presentation format */
	
	//Characteristic Info for LoRaWAN Provisioning Status
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].uuid.uuid, lnp_provision_status_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_NOTIFY | AT_BLE_CHAR_INDICATE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].init_value = &lnp_params->provision_status;
	
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].value_init_len = sizeof(lnp_params->provision_status);
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].value_max_len = sizeof(lnp_params->provision_status);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_PROVISION_STATUS].presentation_format = NULL;       /* presentation format */
	
	//Characteristic Info for Application Write Response
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].uuid.uuid, lnp_app_write_resp_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].properties = AT_BLE_CHAR_NOTIFY | AT_BLE_CHAR_INDICATE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].init_value = lnp_params->app_write_resp;
	
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].value_init_len = sizeof(lnp_params->app_write_resp);
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].value_max_len = sizeof(lnp_params->app_write_resp);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_LNP_APP_WRITE_RESP].presentation_format = NULL;       /* presentation format */
	
	//Characteristic Info for Provisioning Command
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].char_val_handle = 0;          /* handle stored here */
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].uuid.uuid, lnp_provision_cmd_uuid, AT_BLE_UUID_128_LEN);
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].init_value = (uint8_t *)&lnp_params->provision_cmd;
	
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].value_init_len = sizeof(lnp_params->provision_cmd);
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].value_max_len = sizeof(lnp_params->provision_cmd);
	#if BLE_PAIR_ENABLE
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].user_desc = NULL;           /* user defined name */
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].user_desc_len = 0;
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].user_desc_max_len = 0;
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].user_desc_handle = 0;             /*user desc handles*/
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].client_config_handle = 0;         /*client config handles*/
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].server_config_handle = 0;         /*server config handles*/
	lora_nwk_prov_service->serv_chars[CN_PROVISION_CMD].presentation_format = NULL;       /* presentation format */
}

at_ble_status_t ble_lnp_primary_service_define(lnp_gatt_service_handler_t *lora_nwk_prov_service, uint8_t num_of_char)
{
	at_ble_status_t status;
	status = at_ble_primary_service_define(&lora_nwk_prov_service->serv_uuid, &lora_nwk_prov_service->serv_handle,
		NULL, 0, lora_nwk_prov_service->serv_chars, num_of_char);
	
	return status;
}

