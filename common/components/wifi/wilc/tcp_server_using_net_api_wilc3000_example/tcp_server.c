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
#include <tcp_server.h>

////////////////////////////////

/** Security parameters for 64 bit WEP Encryption @ref m2m_wifi_connect */
tstrM2mWifiWepParams wep64_parameters = { MAIN_WLAN_WEP_KEY_INDEX, sizeof(MAIN_WLAN_WEP_KEY_40), MAIN_WLAN_WEP_KEY_40};

/** Security parameters for 128 bit WEP Encryption @ref m2m_wifi_connect */
tstrM2mWifiWepParams wep128_parameters = { MAIN_WLAN_WEP_KEY_INDEX, sizeof(MAIN_WLAN_WEP_KEY_104), MAIN_WLAN_WEP_KEY_104};

////////////////////////////////

/** IP address of host. */
uint32_t gu32HostIp = 0;

/** Wi-Fi status variable. */
static volatile bool gbConnectedWifi = false;

/** Get host IP status variable. */
static volatile bool gbHostIpByName = false;

/** server response. */
static char server_response[2048];

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
			if (ctx->u8IfcId == STATION_INTERFACE) {
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

		case NET_IF_REQ_DHCP_CONF : {
			tstrM2MIPConfig2 *strIpConfig = msg;
			uint16_t *a = (void *)strIpConfig->u8StaticIPv6;
			osprintf("wifi_cb: STA NET_IF_REQ_DHCP_CONF\n\r");
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
 * \brief TCP server task function.
 */
void tcp_server_task(void *v)
{
	
	struct netconn *conn = NULL;
	ip_addr_t local_ip;
	ip_addr_t remote_ip;
	
	u16_t port;
	
	struct netbuf *rx_buf;
	char *str;
	char *tmp;
	uint16_t tot_len, len;

	/* Initialize the network stack. */
	net_init();
	
	/* Initialize the WILC driver. */
	tstrWifiInitParam param;
	memset(&param, 0, sizeof(param));
	param.pfAppWifiCb = wifi_cb;
	os_m2m_wifi_init(&param);

			/* Connect to defined AP. */
			/* Case 1. Connect to AP with security type WPA. */
			os_m2m_wifi_connect((char *)MAIN_WLAN_SSID, sizeof(MAIN_WLAN_SSID), MAIN_WLAN_AUTH, (void *)MAIN_WLAN_PSK, M2M_WIFI_CH_ALL);

			/* Case 2. Connect to AP with security type WEP. */
			//os_m2m_wifi_connect((char *)MAIN_WLAN_SSID, sizeof(MAIN_WLAN_SSID), MAIN_WLAN_AUTH, &wep64_parameters, M2M_WIFI_CH_ALL); // use &wep64_parameters or &wep128_parameters


	
	while(!gbConnectedWifi){
	vTaskDelay(200);	
	}
	
	/* Create TCP socket. */
			if ((conn = netconn_new(NETCONN_TCP)) == NULL){
				osprint("main_task: failed to create socket!\n\r");
				while(1);
			}
			
			osprint("main_task: created socket!\n\r");
			
			/* Bind socket. */
			local_ip.addr = 0;
				if (netconn_bind(conn, NULL, MAIN_WIFI_M2M_SERVER_PORT) != ERR_OK) {
				osprint("main_task: failed to bind socket!\n\r");
				netconn_delete(conn);
				while(1);
			}
						
			osprint("main_task: bind socket!\n\r");
			
			remote_ip.addr= PP_HTONL(MAIN_WIFI_M2M_SERVER_IP);
			
			/* Listen socket */
			if (netconn_listen(conn) != ERR_OK) {
				osprintf("check_task: could not enter listen state for TCP socket!\n\r");
				while (1);
			}
			
			osprint("main_task: listen socket!\n\r");	
				
			osprintf("------------------------------------------------------------\n\r");
			osprintf("Server listening on TCP port 6666\n\r");
			osprintf("TCP window size: %d Bytes\n\r", TCP_WND);
			osprintf("------------------------------------------------------------\n\r");
			
			while (1) {

				/* Connect accept */

				while (netconn_accept(conn, &conn) != ERR_OK) {
					vTaskDelay(10);
					osprint("main_task: chk while 2!\n\r");
				}

				if (conn) {
					/* Client & Server connected print output. */
					netconn_getaddr(conn, &local_ip, &port, 1);
					osprintf("[  0] local %s port %d ", ipaddr_ntoa(&local_ip), port);
					netconn_getaddr(conn, &remote_ip, &port, 0);
					osprintf("connected with %s port %d\n\r", ipaddr_ntoa(&remote_ip), port);
				}

			/* Receive data from Client */			
			tmp = server_response;
			tot_len = 0;
			while (netconn_recv(conn, &rx_buf) != ERR_OK) {
				vTaskDelay(100);
			}
			do {
				netbuf_data(rx_buf, (void *)&str, &len);
				memcpy(tmp, str, len);
				tmp += len;
				tot_len += len;
			
			}while(netbuf_next(rx_buf) >= 0 && tot_len < 2048);
			
			if(tot_len >0)
			osprintf("TCP SERVER TEST SUCCESSFUL");
			else
			osprintf("TCP SERVER TEST FAIL");
			
			netbuf_delete(rx_buf);
			netconn_close(conn);
			netconn_delete(conn);
					
			}
	}