/**
* \file  lrfp_service.c
*
* \brief LORAWAN RF Parameter Provisioning Service file
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
#include "lorawan.h"
#include "lrfp_service.h"

/**************************** Function definition ****************************/
/**@brief Initialize the LoRaWAN service related information. */
void lorawan_rf_service_init(lrfp_gatt_service_handler_t *lora_rf_param_service, lrfp_params_t *lrfp_params)
{
	uint8_t lfrp_service_uuid[] = LRFP_SERVICE_UUID;
	uint8_t lrfp_freq_band_uuid[] = LRFP_FREQ_BAND_UUID;
	uint8_t lrfp_freq_subband_uuid[] = LRFP_FREQ_SUBBAND_UUID;
	uint8_t lrfp_app_write_resp_uuid[] = LRFP_APP_WRITE_RESP_UUID;
	
	lora_rf_param_service->serv_handle = 0;
	lora_rf_param_service->serv_uuid.type = AT_BLE_UUID_128;
	memcpy(lora_rf_param_service->serv_uuid.uuid, lfrp_service_uuid, AT_BLE_UUID_128_LEN);
	
	//Characteristic Info for LoRaWAN frequency band
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].char_val_handle = 0;          /* handle stored here */
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_rf_param_service->serv_chars[CN_FREQ_BAND].uuid.uuid, lrfp_freq_band_uuid, AT_BLE_UUID_128_LEN);
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].init_value = &lrfp_params->freq_band;
	
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].value_init_len = sizeof(lrfp_params->freq_band);
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].value_max_len = sizeof(lrfp_params->freq_band);
	#if BLE_PAIR_ENABLE
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].user_desc = NULL;           /* user defined name */
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].user_desc_len = 0;
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].user_desc_max_len = 0;
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].user_desc_handle = 0;             /*user desc handles*/
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].client_config_handle = 0;         /*client config handles*/
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].server_config_handle = 0;         /*server config handles*/
	lora_rf_param_service->serv_chars[CN_FREQ_BAND].presentation_format = NULL;       /* presentation format */
	
	//Characteristic Info for LoRaWAN frequency sub-band
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].char_val_handle = 0;          /* handle stored here */
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].uuid.uuid, lrfp_freq_subband_uuid, AT_BLE_UUID_128_LEN);
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].properties = AT_BLE_CHAR_READ | AT_BLE_CHAR_WRITE; /* Properties */
	
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].init_value = &lrfp_params->freq_subband;
	
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].value_init_len = sizeof(lrfp_params->freq_subband);
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].value_max_len = sizeof(lrfp_params->freq_subband);
	#if BLE_PAIR_ENABLE
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].user_desc = NULL;           /* user defined name */
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].user_desc_len = 0;
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].user_desc_max_len = 0;
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].user_desc_handle = 0;             /*user desc handles*/
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].client_config_handle = 0;         /*client config handles*/
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].server_config_handle = 0;         /*server config handles*/
	lora_rf_param_service->serv_chars[CN_FREQ_SUBBAND].presentation_format = NULL;       /* presentation format */
	
	//Characteristic Info for Application Write Response
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].char_val_handle = 0;          /* handle stored here */
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].uuid.type = AT_BLE_UUID_128;
	memcpy(lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].uuid.uuid, lrfp_app_write_resp_uuid, AT_BLE_UUID_128_LEN);
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].properties = AT_BLE_CHAR_NOTIFY | AT_BLE_CHAR_INDICATE; /* Properties */
	
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].init_value = lrfp_params->app_write_resp;
	
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].value_init_len = sizeof(lrfp_params->app_write_resp);
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].value_max_len = sizeof(lrfp_params->app_write_resp);
	#if BLE_PAIR_ENABLE
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].value_permissions = AT_BLE_ATTR_READABLE_REQ_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_REQ_AUTHN_NO_AUTHR;   /* permissions */
	#else
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].value_permissions = AT_BLE_ATTR_READABLE_NO_AUTHN_NO_AUTHR | AT_BLE_ATTR_WRITABLE_NO_AUTHN_NO_AUTHR;   /* permissions */
	#endif
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].user_desc = NULL;           /* user defined name */
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].user_desc_len = 0;
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].user_desc_max_len = 0;
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].user_desc_permissions = AT_BLE_ATTR_NO_PERMISSIONS;             /*user description permissions*/
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].client_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*client config permissions*/
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].server_config_permissions = AT_BLE_ATTR_NO_PERMISSIONS;         /*server config permissions*/
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].user_desc_handle = 0;             /*user desc handles*/
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].client_config_handle = 0;         /*client config handles*/
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].server_config_handle = 0;         /*server config handles*/
	lora_rf_param_service->serv_chars[CN_LRFP_APP_WRITE_RESP].presentation_format = NULL;       /* presentation format */
}

at_ble_status_t ble_lrfp_primary_service_define(lrfp_gatt_service_handler_t *lora_rf_param_service, uint8_t num_of_char)
{
	at_ble_status_t status;
	status = at_ble_primary_service_define(&lora_rf_param_service->serv_uuid, &lora_rf_param_service->serv_handle,
	NULL, 0, lora_rf_param_service->serv_chars, num_of_char);
	
	return status;
}

