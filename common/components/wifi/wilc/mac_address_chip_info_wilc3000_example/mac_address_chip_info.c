/**
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


// Include Header Files here
#include "asf.h"
#include "FreeRTOS.h"
#include "osprintf.h"
#include "lwip/ip.h"
#include "lwip/api.h"
#include "lwip/tcpip.h"
#include "lwip/dns.h"
#include "os/include/net_init.h"
#include "os/include/m2m_wifi_ex.h"
#include "tinyservices.h"
#include "conf_wilc.h"
#include "driver/include/m2m_wifi.h"
#include "common/include/nm_common.h"
#include "lwip/sockets.h"
#include <string.h>
#include <stdio.h>
#include "driver/include/m2m_wifi.h"
#include "driver/source/nmasic.h"
#include <mac_address_chip_info.h>

/////////////////////////////////
// no need to initialise scoket 

////////////////////////////////

/** IP address of host. */
uint32_t gu32HostIp = 0;

/** Wi-Fi status variable. */
static volatile bool gbConnectedWifi = false;

/** Get host IP status variable. */
static volatile bool gbHostIpByName = false;

/** Mac address information. */
static uint8_t mac_addr[M2M_MAC_ADDRES_LEN];
static uint8_t read_mac_addr[M2M_MAC_ADDRES_LEN];


/** User define MAC Address. */
const char main_user_define_mac_address[] = {0xf8, 0xf0, 0x05, 0x20, 0x0b, 0x09};
const char main_user_define_mac_address1[] = {0xf8, 0xf0, 0x05, 0x20, 0x0b, 0x0A};


/**
 * \brief Callback to get the Wi-Fi status update.
 *
 * \param[in] u8MsgType Type of Wi-Fi notification.
 * \param[in] pvMsg A pointer to a buffer containing the notification parameters.
 *
 * \return None.
 */
static void wifi_cb(uint8 msg_type, void *msg)
{
	switch (msg_type) {
		case M2M_WIFI_RESP_CON_STATE_CHANGED : {
			tstrM2mWifiStateChanged *ctx = (tstrM2mWifiStateChanged*)msg;
			if (ctx->u8IfcId == STATION_INTERFACE) {								// f/w v4.1 introduces STATION_INTERFACE instead of INTERFACE_1 
				if (ctx->u8CurrState == M2M_WIFI_CONNECTED) {
					osprintf("wifi_cb: M2M_WIFI_CONNECTED\n\r");
					net_interface_up(NET_IF_STA);				// need to check
					m2m_wifi_request_dhcp_client_ex();
				}
				if(ctx->u8CurrState == M2M_WIFI_DISCONNECTED) {
					osprintf("wifi_cb: M2M_WIFI_DISCONNECTED\n\r");
					osprintf("wifi_cb: reconnecting...\n\r");
					net_interface_down(NET_IF_STA);				// need to check
					m2m_wifi_connect((char *)MAIN_WLAN_SSID, sizeof(MAIN_WLAN_SSID),
							MAIN_WLAN_AUTH, (void *)MAIN_WLAN_PSK, M2M_WIFI_CH_ALL);
				}
			}
		}
		break;

		case NET_IF_REQ_DHCP_CONF : {											// f/w v4.1 introduces NET_IF_REQ_DHCP_CONF instead of M2M_WIFI_REQ_DHCP_CONF  
			tstrM2MIPConfig2 *strIpConfig = msg;
			uint16_t *a = (void *)strIpConfig->u8StaticIPv6;
			osprintf("wifi_cb: STA M2M_WIFI_REQ_DHCP_CONF\n\r");
			osprintf("wifi_cb: STA IPv4 addr: %d.%d.%d.%d\n\r", strIpConfig->u8StaticIP[0], strIpConfig->u8StaticIP[1],
			strIpConfig->u8StaticIP[2], strIpConfig->u8StaticIP[3]);
			osprintf("wifi_cb: STA IPv6 addr: %04x:%04x:%04x:%04x:%04x:%04x:%04x:%04x\n\r",
			htons(a[0]), htons(a[1]), htons(a[2]), htons(a[3]),
			htons(a[4]), htons(a[5]), htons(a[6]), htons(a[7]));
			gbConnectedWifi = true;
		}
		break;

		default:
		break;
	}
}


/**
 * \brief MAC Address task function.
 */
void mac_address_chip_info_task(void *v)
{
	
	tstrWifiInitParam param;
	int8_t ret;
	uint8_t u8IsMacAddrValid;
		
	/* Initialize the network stack. */
	net_init();
	
	/* Initialize the WILC1000 driver. */ /* Initialize Wi-Fi parameters structure. */
	//tstrWifiInitParam param;
	//memset(&param, 0, sizeof(param));
	memset(&param, 0, sizeof(tstrWifiInitParam));
	param.pfAppWifiCb = wifi_cb;
	
	/* Initialize Wi-Fi driver with data and status callbacks. */
	ret = os_m2m_wifi_init(&param);

	osprintf("MAC Address task: (%d)\r\n", ret);

	/* Get MAC Address from OTP. */
	os_m2m_wifi_get_otp_mac_address( (uint8_t *)mac_addr, &u8IsMacAddrValid);
	if (!u8IsMacAddrValid) {
		osprintf("USER MAC Address : \r\n");

		/* Cannot find MAC Address from OTP. Set user define MAC address. */
		
		/* Also set the other MAC address to be locally modified, if required*/
		//main_user_define_mac_address1[0] = main_user_define_mac_address[0]^0x02;

		os_m2m_wifi_set_mac_address((uint8_t *)main_user_define_mac_address, (uint8_t *) main_user_define_mac_address1);
		} else {
		printf("OTP MAC Address : \r\n");
	}

	/* Get MAC Address. */
	os_m2m_wifi_get_mac_address((uint8_t *)mac_addr, (uint8_t *)read_mac_addr );

	/* Note - Address should be read from LSB to MSB */
	osprintf("%02X:%02X:%02X:%02X:%02X:%02X\r\n",
	mac_addr[0], mac_addr[1], mac_addr[2],
	mac_addr[3], mac_addr[4], mac_addr[5]);

	osprintf("%02X:%02X:%02X:%02X:%02X:%02X\r\n",
	read_mac_addr[0], read_mac_addr[1], read_mac_addr[2],
	read_mac_addr[3], read_mac_addr[4], read_mac_addr[5]);
	
	/* Display WILC1000 chip information. */
	osprintf("Chip ID : \r\t\t\t%x\r\n", (unsigned int)nmi_get_chipid());
	osprintf("RF Revision ID : \r\t\t\t%x\r\n", (unsigned int)nmi_get_rfrevid());
	osprintf("Done.\r\n\r\n");

	while (1) {
	}
	}

	
