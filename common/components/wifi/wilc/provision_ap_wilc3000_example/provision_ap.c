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

//  Include Header Files here 
#include "asf.h"
#include "FreeRTOS.h"
#include "osprintf.h"
#include "lwip/ip.h"
#include "lwip/api.h"
#include "lwip/tcpip.h"
#include "lwip/tcp.h"
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
#include <provision_ap.h>

#if LWIP_SOCKET /* don't build if not configured for use in lwipopts.h */

/////////////////////////////////
// no need to initialize socket 


//////////////////////////////////

/** Message format definitions. */
typedef struct s_msg_wifi_product {
	uint8_t name[9];
} t_msg_wifi_product;

typedef struct s_msg_wifi_product_main {
	uint8_t name[9];
} t_msg_wifi_product_main;

/** Test buffer */
static uint8_t gau8SocketTestBuffer[MAIN_WIFI_M2M_BUFFER_SIZE];

////////////////////////////////

/** IP address of host. */
uint32_t gu32HostIp = 0;

/** Wi-Fi status variable. */
static volatile bool gbConnectedWifi = false;

/** Get host IP status variable. */
static volatile bool gbHostIpByName = false;

#define BUFSIZE                         10

/** tcp MAX packet count */
#define MAIN_WIFI_M2M_PACKET_COUNT         10

/** Number of STA connected. */
uint32_t sta_connected = 0;

/** tcp packet count */
static uint8_t packetCnt = 0;

/** tcp MAX packet count */
#define MAIN_WIFI_M2M_PACKET_COUNT         10

//////////////////////////////////////////////////
/** Receive buffer definition. */
//static uint8_t gau8SocketTestBuffer[MAIN_WIFI_M2M_BUFFER_SIZE];

/** Socket for TCP communication */
static SOCKET tcp_server_socket = -1;

//////////////////////////////////////////////////

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
					osprintf("wifi_cb: M2M_WIFI_CONNECTED\r\n");
					net_interface_up(NET_IF_STA);
					m2m_wifi_request_dhcp_client_ex();
					// Power save will not be enabled by the FW since AP will be running for this app
					//os_m2m_wifi_set_sleep_mode(M2M_PS_DEEP_AUTOMATIC, true);
				}
				if(ctx->u8CurrState == M2M_WIFI_DISCONNECTED) {
					gbConnectedWifi = false;
					osprintf("wifi_cb: M2M_WIFI_DISCONNECTED\r\n");
					osprintf("wifi_cb: reconnecting...\r\n");
					net_interface_down(NET_IF_STA);
					
					#if 0
					
					if (MAIN_WLAN_AUTH_1 != M2M_WIFI_SEC_WEP) {
						os_m2m_wifi_connect((char *)MAIN_WLAN_SSID_1, sizeof(MAIN_WLAN_SSID_1),
						MAIN_WLAN_AUTH_1, (char *)MAIN_WLAN_PSK_1, M2M_WIFI_CH_ALL);
						} else {
						os_m2m_wifi_connect((char *)MAIN_WLAN_SSID_1, sizeof(MAIN_WLAN_SSID_1),
						MAIN_WLAN_AUTH_1,(void *)MAIN_WLAN_PSK_1, M2M_WIFI_CH_ALL);			// changed by SP
						}
					#endif
					
					}
				}
			
			else if (ctx->u8IfcId == AP_INTERFACE) {
				if (ctx->u8CurrState == M2M_WIFI_CONNECTED) {
					osprintf("wifi_cb: AP M2M_WIFI_CONNECTED %02x-%02x-%02x-%02x-%02x-%02x\r\n",
					ctx->u8MAcAddr[0], ctx->u8MAcAddr[1], ctx->u8MAcAddr[2],
					ctx->u8MAcAddr[3], ctx->u8MAcAddr[4], ctx->u8MAcAddr[5]);
					sta_connected += 1;
				}
				if (ctx->u8CurrState == M2M_WIFI_DISCONNECTED) {
					osprintf("wifi_cb: AP M2M_WIFI_DISCONNECTED %02x-%02x-%02x-%02x-%02x-%02x, reason: %s, %d\r\n",
					ctx->u8MAcAddr[0], ctx->u8MAcAddr[1], ctx->u8MAcAddr[2],
					ctx->u8MAcAddr[3], ctx->u8MAcAddr[4], ctx->u8MAcAddr[5],
					ctx->u8ErrCode == M2M_ERR_STATION_IS_LEAVING ? "M2M_STATION_IS_LEAVING":
					ctx->u8ErrCode == M2M_ERR_LINK_LOSS ? "M2M_LINK_LOSS":
					ctx->u8ErrCode == M2M_ERR_AUTH_FAIL ? "M2M_AUTH_FAIL":"UNKNOWN", ctx->u8ErrCode);
					/* Check the reason for STA disconnection */
					switch (ctx->u8ErrCode) {
						case M2M_ERR_STATION_IS_LEAVING:
						case M2M_ERR_LINK_LOSS:
						lwip_dhcp_unregister_mac(ctx->u8MAcAddr);
						sta_connected -= 1;
						break;
						case M2M_ERR_AUTH_FAIL:
						break;
						default:
						break;
					}
				}
			}
		break;

		case NET_IF_REQ_DHCP_CONF : {
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
}


/**
 * \brief Provision AP task function.
 */
void provision_ap_task(void *v)
{
	int8_t ret, bindchk, recv_chk, listenchk, NewSocket;

	tstrM2MAPConfig strM2MAPConfig;

	struct sockaddr_in addr;
	struct sockaddr_in remote_addr;

	
	/* Initialize the network stack. */
	net_init();
	
	/* Initialize the WILC3000 driver. */
	tstrWifiInitParam param;
	memset(&param, 0, sizeof(param));
	param.pfAppWifiCb = wifi_cb;

	//os_m2m_wifi_init(&param);
	ret = os_m2m_wifi_init(&param);
	if (M2M_SUCCESS != ret) {
		printf("main: m2m_wifi_init call error!(%d)\r\n", ret);
		while (1) {
		}
	}
	
	/* Initialize socket address structure. */
	//addr.sin_len= 128;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(MAIN_WIFI_M2M_SERVER_PORT);
	addr.sin_addr.s_addr = 0; // htonl(MAIN_WIFI_M2M_SERVER_IP);

		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		/* Initialize AP mode parameters structure with SSID, channel and OPEN security type. */
		memset(&strM2MAPConfig, 0x00, sizeof(strM2MAPConfig));
		strcpy((char *)&strM2MAPConfig.au8SSID, MAIN_WLAN_SSID);
		strM2MAPConfig.u8ListenChannel = MAIN_WLAN_CHANNEL;
		strM2MAPConfig.u8SecType = MAIN_WLAN_AUTH;
		
		ret = os_m2m_wifi_enable_ap(&strM2MAPConfig);
		if (M2M_SUCCESS != ret) {
			printf("main: m2m_wifi_enable_ap call error!\r\n");
			while (1) {
			}
		}

		printf("AP Provision mode started.\r\nOn the android device, connect to %s then run setting app.\r\n", MAIN_WLAN_SSID);
		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/* Initialize,  create and connect socket in WILC module */
	tcp_server_socket= socket(AF_INET, SOCK_STREAM /*for tcp*/, 0/*flag*/);  //tcp socket creation

	/* Connect socket. */
	/* Socket bind in WILC */
	// bind(int s, const struct sockaddr *name, socklen_t namelen)
	bindchk = bind(tcp_server_socket, (struct sockaddr*)&addr, sizeof(struct sockaddr_in));

	if(bindchk>=0){
		osprintf("main : TCP Server Socket Bind done !\r\n");
	}
	else
	{
		osprintf("main : TCP Server Socket Bind not done !\r\n");
	}

	//lwip_listen(int s, int backlog)
	listenchk = listen(tcp_server_socket, 0);

	if(listenchk>=0){
		osprintf("main : TCP Server Socket in Listen mode !\r\n");
	}
	else
	{
		osprintf("main : TCP Server Socket not in Listen mode !\r\n");
	}

	//lwip_accept(int s, struct sockaddr *addr, socklen_t *addrlen)
	int len;
	NewSocket = accept(tcp_server_socket, (struct sockaddr*)&remote_addr, &len);

	if(NewSocket>=0){
		osprintf("main : TCP Server Socket ready to accept data!\r\n");
	}
	else
	{
		osprintf("main : TCP Server Socket not ready to accept data !\r\n");
	}


	packetCnt = 0;
	
	while (1) {
		
		recv_chk = recv(NewSocket, gau8SocketTestBuffer, MAIN_WIFI_M2M_BUFFER_SIZE, 0x00);

		if(recv_chk>=0){

			osprintf("main : number of received packets from TCP Client : %d %s!\r\n",recv_chk, (char *) gau8SocketTestBuffer);
			
			char *p;

			p = strtok((char *)gau8SocketTestBuffer, ",");
			if (p != NULL && !strncmp(p, "apply", 5)) {
				char str_ssid[M2M_MAX_SSID_LEN], str_pw[M2M_MAX_PSK_LEN];
				uint8 sec_type = 0;

				p = strtok(NULL, ",");
				if (p) {
					strcpy(str_ssid, p);
					str_ssid[strlen((char *)str_ssid)] = '\0';
				}

				osprintf("main : SSID : %s!\r\n",(char *) str_ssid);

				p = strtok(NULL, ",");
				if (p) {
					sec_type = atoi(p);
				}

				osprintf("main : SSID : %d!\r\n",sec_type);
				
				p = strtok(NULL, ",");
				if (p) {
					strcpy(str_pw, p);
					str_pw[strlen((char *)str_pw)] = '\0';
				}

				osprintf("main : PSW : %s   %d!\r\n",(char *) str_pw,strlen((char *)str_pw));

				osprintf("Disable to AP.\r\n");
				os_m2m_wifi_disable_ap();
				vTaskDelay(500);  //				nm_bsp_sleep(500);
				osprintf("Connecting to %s.\r\n", (char *)str_ssid);
				osprintf("main : ssid Length : %d!\r\n",strlen((char *)str_ssid));
				os_m2m_wifi_connect((char *)str_ssid, strlen((char *)str_ssid)+1, sec_type, (void *)str_pw, M2M_WIFI_CH_ALL);
				
				osprintf("main : number of received packets from TCP Client : %d !\r\n",recv_chk);
			}
		}
		else
		{
			osprintf("main : no packets received from TCP Client  !\r\n");
		}

	  }
	}	
	
#endif /* LWIP_SOCKET  don't build if not configured for use in lwipopts.h */
