/**
* \file  ble_app.h
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

#ifndef __BLE_LNP_APP_H__
#define __BLE_LNP_APP_H__
#include "at_ble_api.h"

#define BLE_FAST_ADV_INTERVAL		(48)	// 48 * 0.625 = 30ms
#define BLE_FAST_ADV_TIMEOUT		(60)	// 60 seconds
#define BLE_SLOW_ADV_INTERVAL		(1600)	// 1600 * 0.625 = 1 second
#define BLE_SLOW_ADV_TIMEOUT		(0)		// No timeout

#define ADV_UUID_128_DATA_LEN			(0x11)
#define ADV_UUID_128_FLAG				(0x07)
#define ADV_LNP_UUID_128				0xEC, 0xDA, 0x69, 0xF2, 0xC8, 0xB0, 0x11, 0xE8, 0xA8, 0xD5, 0xF2, 0x80, 0x1F, 0x1B, 0x9F, 0xD1
#define ADV_MFG_DATA_LEN				(0x04)
#define ADV_MFG_FLAG					(0xFF)
#define ADV_MFG_COMPANY_ID				0x00, 0xCD
#define ADV_MFG_PROVISION_STATUS		(0x00)
#define SCAN_RESP_LOCAL_NAME_DATA_LEN	(0x0C)
#define SCAN_RESP_LOCAL_NAME_FLAG		(0x09)
#define SCAN_RESP_LOCAL_NAME			0x6C, 0x6E, 0x70, 0x5F, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65 /* "lnp_service" */

#define ADV_FAST_INTERVAL				(48)
#define ADV_FAST_TIMEOUT				(60)
#define ADV_SLOW_INTERVAL				(1600)
#define ADV_SLOW_TIMEOUT				(120)

/** @brief Button event ID */
#define APP_BUTTON_EVENT_ID				(1)

typedef enum
{
	BLE_DORMANT,
	BLE_INIT,
	BLE_FAST_ADV,
	BLE_SLOW_ADV,
	BLE_CONNECTED,
}ble_state_t;

typedef enum
{
	MULTICAST_DISABLE,
	MULTICAST_ENABLE,
}mcast_value_t;

#if (ENABLE_PDS == 1)
#define PDS_LNP_PARAM_START_INDEX	PDS_FILE_APP_DATA1_13_IDX << 8
#define PDS_LNP_MAX_VALUE			2

#define PDS_LNP_PARAM_SIZE			sizeof(lnp_params_t)
#define PDS_LRFP_PARAM_SIZE			sizeof(lrfp_params_t)

#define PDS_LNP_PARAM_OFFSET		PDS_FILE_START_OFFSET
#define PDS_LRFP_PARAM_OFFSET		(PDS_LNP_PARAM_OFFSET + PDS_SIZE_OF_ITEM_HDR + PDS_LNP_PARAM_SIZE)

typedef enum
{
	PDS_LNP_PARAM_ITEM_ID = PDS_LNP_PARAM_START_INDEX,
	PDS_LRFP_PARAM_ITEM_ID,
	PDS_LNP_PARAM_ITEM_ID_MAX_VALUE  /* Always add new items above this value */
}pds_lnp_items_t;

typedef enum
{
	NOT_JOINED,
	JOINING,
	JOINED,	
}lora_join_state_t;

#endif

at_ble_status_t ble_apps_init(void);
at_ble_status_t ble_adv_init(uint32_t adv_interval, uint32_t adv_timeout);
at_ble_status_t ble_lnp_send_write_resp_noti_ind(uint8_t char_id, uint8_t write_status);
at_ble_status_t ble_lrfp_send_write_resp_noti_ind(uint8_t char_id, uint8_t write_status);
void lorawan_main (void);
void dev_eui_read(void);

#endif /*__BLE_LNP_APP_H__*/
