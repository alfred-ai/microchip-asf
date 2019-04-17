/**
 *
 * \file
 *
 * \brief connect to AP using WPS.
 *
 * Copyright (c) 2018 Atmel Corporation. All rights reserved.
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

#include "asf.h"
#include "wps_security.h"
#include "FreeRTOS.h"
#include "osprintf.h"
#include "os/include/net_init.h"
#include "os/include/m2m_wifi_ex.h"
#include "lwip/def.h"
#include "driver/source/nmasic.h"
#include <string.h>
#include <stdio.h>

static bool gbPressButton = false;

/**
 * \brief button pressed callback function.
 */
static void btn_press(uint8_t btn, uint8_t press)
{
	if (MAIN_SW1 == btn) {
		if (press ==  0) {
			os_m2m_wifi_wps(WPS_PBC_TRIGGER, NULL);
			printf("Device is connecting using WPS Push Button\r\n");
		}
	}
}

/**
 * \brief Initialize buttons driver.
 */
static void btn_init(void)
{
	if (ioport_get_pin_level(BUTTON_0_PIN) == BUTTON_0_ACTIVE) {
		btn_press(MAIN_SW1, 0);
		gbPressButton = true;
	}
}


tstrM2MWPSInfo gpstrWPS;

/**
 * \brief Callback to get the Wi-Fi status update.
 *
 * \param[in] u8MsgType type of Wi-Fi notification. Possible types are:
 *  - [M2M_WIFI_RESP_CON_STATE_CHANGED](@ref M2M_WIFI_RESP_CON_STATE_CHANGED)
 *  - [M2M_WIFI_REQ_DHCP_CONF](@ref M2M_WIFI_REQ_DHCP_CONF)
 * \param[in] pvMsg A pointer to a buffer containing the notification parameters
 * (if any). It should be casted to the correct data type corresponding to the
 * notification type.
 */
static void wifi_cb(uint8_t u8MsgType, void *pvMsg)
{
	switch (u8MsgType) {
		case M2M_WIFI_RESP_CON_STATE_CHANGED:
		{
			tstrM2mWifiStateChanged *pstrWifiState = (tstrM2mWifiStateChanged *)pvMsg;
			if (pstrWifiState->u8IfcId == STATION_INTERFACE) {
				if (pstrWifiState->u8CurrState == M2M_WIFI_CONNECTED) {
					osprintf("Wi-Fi connected\r\n");
					net_interface_up(NET_IF_STA);
					m2m_wifi_request_dhcp_client_ex();
				} else if (pstrWifiState->u8CurrState == M2M_WIFI_DISCONNECTED) {
					osprintf("Wi-Fi disconnected\r\n");
					osprintf("wifi_cb: reconnecting...\r\n");
					net_interface_down(NET_IF_STA);
					/* Connect to defined AP. */
					os_m2m_wifi_connect((char *)gpstrWPS.au8SSID, (uint8)m2m_strlen(gpstrWPS.au8SSID),
					gpstrWPS.u8AuthType, (void *)gpstrWPS.au8PSK, gpstrWPS.u8Ch);
				}
			}
			break;
		}

		case NET_IF_REQ_DHCP_CONF :
		{
			tstrM2MIPConfig2 *strIpConfig = pvMsg;
			uint16_t *a = (void *)strIpConfig->u8StaticIPv6;
			osprintf("wifi_cb: STA IPv4 addr: %d.%d.%d.%d\r\n", strIpConfig->u8StaticIP[0], strIpConfig->u8StaticIP[1],
			strIpConfig->u8StaticIP[2], strIpConfig->u8StaticIP[3]);
			osprintf("wifi_cb: STA IPv6 addr: %04x:%04x:%04x:%04x:%04x:%04x:%04x:%04x\r\n",
			htons(a[0]), htons(a[1]), htons(a[2]), htons(a[3]),
			htons(a[4]), htons(a[5]), htons(a[6]), htons(a[7]));
		}
		break;

		case M2M_WIFI_RES_WPS:
		{
			tstrM2MWPSInfo *pstrWPS = (tstrM2MWPSInfo *)pvMsg;
			memcpy(&gpstrWPS, pstrWPS,sizeof(tstrM2MWPSInfo));
			//printf("WPS Response -> SSID : %s, authtyp : %d pw : %s\r\n", pstrWPS->au8SSID, pstrWPS->u8AuthType, pstrWPS->au8PSK);
			if (pstrWPS->u8AuthType == 0) {
				printf("WPS is not enabled OR Timedout\r\n");
			} else {
				vTaskDelay(1000);
				printf("Connecting to %s\r\n", pstrWPS->au8SSID);
				os_m2m_wifi_connect((char *)pstrWPS->au8SSID, (uint8)m2m_strlen(pstrWPS->au8SSID),
						pstrWPS->u8AuthType, (void *)pstrWPS->au8PSK, pstrWPS->u8Ch);
			}

			break;
		}
		default:
		{
			break;
		}
	}
}

/**
 * \brief Connect AP using WPS.
 */
void wps_security(void *argument)
{
	int8_t ret;
	char devName[] = "WILC1000_WPS";
	
	/* Initialize the network stack. */
	net_init();
	
	/* Initialize the WILC driver. */
	tstrWifiInitParam param;
	memset(&param, 0, sizeof(param));
	param.pfAppWifiCb = wifi_cb;
	ret = os_m2m_wifi_init(&param);
	if (M2M_SUCCESS != ret) {
		osprintf("m2m_wifi_init call error!(%d)\r\n", ret);
		while (1) {
		}
	}
	
	/* Device name must be set before enabling WPS mode. */
	os_m2m_wifi_set_device_name((uint8 *)devName, strlen(devName));

	if (!MAIN_WPS_PUSH_BUTTON_FEATURE) {
		/* case 2 WPS PIN method */
		os_m2m_wifi_wps(WPS_PIN_TRIGGER, (const char *)MAIN_WPS_PIN_NUMBER);
	}

	/* Infinite loop to handle a event from the WINC1500. */
	while (1) {
		if (MAIN_WPS_PUSH_BUTTON_FEATURE) {
			/* case 1 WPS Push Button method. */
			if (!gbPressButton) {
				btn_init();
			}
		}
	}
}
