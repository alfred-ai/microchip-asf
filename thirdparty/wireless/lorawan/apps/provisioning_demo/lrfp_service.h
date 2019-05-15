/**
* \file  lrfp_service.h
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

#ifndef __LRFP_SERVICE_H__
#define __LRFP_SERVICE_H__

/* Total number of characteristics in LoRaWAN RF parameter service */
#define LRFP_TOTAL_CHARATERISTIC_NUM		3
#define LRFP_APP_WRITE_RESP_LEN				2

/* LoRaWAN RF parameter service uuid */
#define LRFP_SERVICE_UUID 				{0x6C, 0x74, 0x6C, 0x80, 0xCA, 0xBE, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
/* LoRaWAN RF parameter characteristic uuids */
#define LRFP_FREQ_BAND_UUID				{0x6C, 0x74, 0x70, 0x22, 0xCA, 0xBE, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LRFP_FREQ_SUBBAND_UUID			{0x6C, 0x74, 0x71, 0x80, 0xCA, 0xBE, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}
#define LRFP_APP_WRITE_RESP_UUID		{0x6C, 0x74, 0x73, 0xA6, 0xCA, 0xBE, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1}

typedef enum
{
	CN_FREQ_BAND,
	CN_FREQ_SUBBAND,
	CN_LRFP_APP_WRITE_RESP,
}lrfp_char_num_t;

typedef enum
{
	LRFP_SUCCESS,
	LRFP_INVALID_PARAMETER = 0xA0,
	LRFP_BAND_NOT_SUPPORTED,
	LRFP_INVALID_SUBBAND,
}lrfp_error_codes_t;

typedef struct lrfp_gatt_service_handler
{
	at_ble_uuid_t	serv_uuid;
	at_ble_handle_t	serv_handle;
	at_ble_characteristic_t	serv_chars[LRFP_TOTAL_CHARATERISTIC_NUM];
}lrfp_gatt_service_handler_t;

typedef struct lrfp_params
{
	/* LoRaWAN frequency band and gets value over BLE */
	uint8_t freq_band;
	/* LoRaWAN frequency sub-band and get value over BLE */
	uint8_t freq_subband;
	/* LoRaWAN RF Application Write Response and get value over BLE */
	uint8_t app_write_resp[LRFP_APP_WRITE_RESP_LEN];
}lrfp_params_t;

void lorawan_rf_service_init(lrfp_gatt_service_handler_t *lora_rf_param_service, lrfp_params_t *lrfp_params);
at_ble_status_t ble_lrfp_primary_service_define(lrfp_gatt_service_handler_t *lora_rf_param_service, uint8_t num_of_char);

#endif /* __LRFP_SERVICE_H__ */