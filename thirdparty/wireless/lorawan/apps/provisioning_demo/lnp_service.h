/**
* \file  lnp_service.h
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

#ifndef __LNP_SERVICE_H__
#define __LNP_SERVICE_H__

#define LNP_TOTAL_CHARATERISTIC_NUM		16
/* LoRaWAN network provisioning service uuid */
#define LNP_SERVICE_UUID 				{0xEC, 0xDA, 0x69, 0xF2, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
/* LoRaWAN network provisioning characteristic uuids */
#define LNP_LORAWAN_CLASS_TYPE_UUID		{0xEC, 0xDA, 0x6C, 0xAE, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LNP_JOIN_METHOD_UUID			{0xEC, 0xDA, 0x6E, 0x16, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LNP_APP_EUI_UUID				{0xEC, 0xDA, 0x6F, 0x60, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LNP_DEV_EUI_UUID				{0xEC, 0xDA, 0x70, 0xA0, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LNP_APP_KEY_UUID				{0xEC, 0xDA, 0x74, 0x1A, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LNP_DEV_ADDR_UUID				{0xEC, 0xDA, 0x75, 0x78, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LNP_NWK_SESSION_KEY_UUID		{0xEC, 0xDA, 0x76, 0xA4, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LNP_APP_SESSION_KEY_UUID		{0xEC, 0xDA, 0x78, 0x20, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LNP_MCAST_UUID					{0xEC, 0xDA, 0x79, 0x74, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LNP_MCAST_DEV_ADDR_UUID			{0xEC, 0xDA, 0x7C, 0xF8, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LNP_MCAST_NWK_SESSION_KEY_UUID	{0xEC, 0xDA, 0x7E, 0x60, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LNP_MCAST_APP_SESSION_KEY_UUID	{0xEC, 0xDA, 0x81, 0xE4, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LNP_RESET_TO_DEFAULT_UUID		{0xEC, 0xDA, 0x83, 0x2E, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LNP_STATUS_UUID					{0xEC, 0xDA, 0x84, 0x64, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LNP_APP_WRITE_RESPONSE_UUID		{0xEC, 0xDA, 0x85, 0x90, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LNP_PROVISION_CMD_UUID			{0xEC, 0xDA, 0x86, 0xB2, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}

#define APP_EUI_LEN						8
#define DEV_EUI_LEN						8
#define APP_KEY_LEN						16
#define DEV_ADDR_LEN					4
#define NWK_S_KEY_LEN					16
#define APP_S_KEY_LEN					16
#define MCAST_LEN						1
#define MCAST_DEV_ADDR_LEN				4
#define MCAST_NWK_S_KEY_LEN				16
#define MCAST_APP_S_KEY_LEN				16
#define LNP_APP_WRITE_RESP_LEN			2

typedef enum
{
	CN_LORAWAN_CLASS_TYPE,
	CN_JOIN_METHOD,
	CN_APP_EUI,
	CN_DEV_EUI,
	CN_APP_KEY,
	CN_DEV_ADDR,
	CN_NWK_S_KEY,
	CN_APP_S_KEY,
	CN_MCAST,
	CN_MCAST_DEV_ADDR,
	CN_MCAST_NWK_S_KEY,
	CN_MCAST_APP_S_KEY,
	CN_RESET_TO_DEFAULT,
	CN_PROVISION_STATUS,
	CN_LNP_APP_WRITE_RESP,
	CN_PROVISION_CMD,
}lnp_char_num_t;

typedef enum
{
	class_a,
	class_b,
	class_c,
}lorawan_class_type_t;

typedef enum
{
	LNP_SUCCESS,
	LNP_LORAWAN_CLASS_TYPE_NOT_SUPPORTED = 0x80,
	LNP_INVALID_JOIN_METHOD,
	LNP_NOT_REQUIRED_FOR_ABP_JOIN,
	LNP_NOT_REQUIRED_FOR_OTAA_JOIN,
	LNP_INVALID_PARAMETER,
	LNP_NOT_SUPPORTED_BY_LORAWAN_CLASS,
	LNP_UNKNOWN_ERROR,
	LNP_LORAWAN_BUSY,
	LNP_END_DEVICE_HAS_VALID_DEV_EUI,
}lnp_error_codes_t;

typedef enum
{
	OTAA,	//Over The Air Activation
	ABP,	//Activation By Personalization
}lorawan_join_method_t;

typedef struct lnp_gatt_service_handler
{
	at_ble_uuid_t	serv_uuid;
	at_ble_handle_t	serv_handle;
	at_ble_characteristic_t	serv_chars[LNP_TOTAL_CHARATERISTIC_NUM];
}lnp_gatt_service_handler_t;

typedef struct lnp_params
{
	/* LoRaWAN class type and gets value over BLE */
	uint8_t class_type;
	/* LoRaWAN join method and get value over BLE */
	uint8_t join_method;
	/* LoRaWAN APP EUI and get value over BLE*/
	uint8_t app_eui[APP_EUI_LEN];
	/* LoRaWAN DEV EUI and get value over BLE*/
	uint8_t dev_eui[DEV_EUI_LEN];
	/* LoRaWAN Application Key and get value over BLE */
	uint8_t app_key[APP_KEY_LEN];
	/* LoRaWAN Device Address and get value over BLE*/
	uint8_t dev_addr[DEV_ADDR_LEN];
	/* LoRaWAN Network Session Key and get value over BLE */
	uint8_t nwk_s_key[NWK_S_KEY_LEN];
	/* LoRaWAN Application Session Key and get value over BLE */
	uint8_t app_s_key[APP_S_KEY_LEN];
	/* LoRaWAN Multicast and get value over BLE */
	bool mcast;
	/* LoRaWAN Multicast Device Address and get value over BLE */
	uint8_t mcast_dev_addr[MCAST_DEV_ADDR_LEN];
	/* LoRaWAN Multicast Network Session Key and get value over BLE */
	uint8_t mcast_nwk_s_key[MCAST_NWK_S_KEY_LEN];
	/* LoRaWAN Multicast Application Session Key and get value over BLE */
	uint8_t mcast_app_s_key[MCAST_APP_S_KEY_LEN];
	/* LoRaWAN Factory to Default and get value over BLE */
	bool reset_to_default;
	/* LoRaWAN Provisioning Status and get value over BLE */
	uint8_t provision_status;
	/* LoRaWAN Application Write Response and get value over BLE */
	uint8_t app_write_resp[LNP_APP_WRITE_RESP_LEN];
	/* LoRaWAN Provisioning Command and get value over BLE */
	bool provision_cmd;
}lnp_params_t;

void lorawan_nwk_service_init(lnp_gatt_service_handler_t *lora_nwk_prov_service, lnp_params_t *lnp_params);
at_ble_status_t ble_lnp_primary_service_define(lnp_gatt_service_handler_t *lora_nwk_prov_service, uint8_t num_of_char);

#endif /*__LNP_SERVICE_H__*/