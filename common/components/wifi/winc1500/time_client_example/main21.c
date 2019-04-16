/**
 *
 * \file
 *
 * \brief WINC1500 Time Client Example.
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
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

/** \mainpage
 * \section intro Introduction
 * This example demonstrates the use of the WINC1500 with the SAMD21 Xplained Pro
 * board to retrieve time information from time server.<br>
 * It uses the following hardware:
 * - the SAMD21 Xplained Pro.
 * - the WINC1500 on EXT1.
 *
 * \section files Main Files
 * - main.c : Initialize the WINC1500 and retrieve information.
 *
 * \section usage Usage
 * -# Configure below code in the main.h for AP to connect to.
 * \code
 *    #define MAIN_WLAN_SSID         "DEMO_AP"
 *    #define MAIN_WLAN_AUTH          M2M_WIFI_SEC_WPA_PSK
 *    #define MAIN_WLAN_PSK          "12345678"
 * \endcode
 * -# Build the program and download it into the board.
 * -# On the computer, open and configure a terminal application as the follows.
 * \code
 *    Baud Rate : 115200
 *    Data : 8bit
 *    Parity bit : none
 *    Stop bit : 1bit
 *    Flow control : none
 * \endcode
 * -# Start the application.
 * -# In the terminal window, the following text should appear:
 * \code
 *    -- WINC1500 time client example --
 *    -- SAMD21_XPLAINED_PRO --
 *    -- Compiled: xxx xx xxxx xx:xx:xx --
 *    wifi_cb: M2M_WIFI_RESP_CON_STATE_CHANGED: CONNECTED
 *    wifi_cb: M2M_WIFI_REQ_DHCP_CONF: IP is xxx.xxx.xxx.xxx
 *    m2m_ip_resolve_handler : DomainName pool.ntp.org
 *    socket_cb: The GMT time is xx:xx:xx
 * \endcode
 *
 * \section compinfo Compilation Information
 * This software was written for the GNU GCC compiler using Atmel Studio 6.2
 * Other compilers may or may not work.
 *
 * \section contactinfo Contact Information
 * For further information, visit
 * <A href="http://www.atmel.com">Atmel</A>.\n
 */

#include "asf.h"
#include "main.h"
#include "bsp/include/nm_bsp.h"
#include "driver/include/m2m_wifi.h"
#include "socket/include/socket.h"

#define STRING_EOL    "\r\n"
#define STRING_HEADER "-- WINC1500 time client example --"STRING_EOL \
	"-- "BOARD_NAME " --"STRING_EOL	\
	"-- Compiled: "__DATE__ " "__TIME__ " --"STRING_EOL

/** UART module for debug. */
static struct usart_module cdc_uart_module;

/** UDP socket handlers. */
static SOCKET udp_socket = -1;

/** Receive buffer definition. */
static uint8_t gau8SocketBuffer[MAIN_WIFI_M2M_BUFFER_SIZE];

/** Wi-Fi status variable. */
static bool gbConnectedWifi = false;

/**
 * \brief Configure UART console.
 */
static void configure_console(void)
{
	struct usart_config usart_conf;

	usart_get_config_defaults(&usart_conf);
	usart_conf.mux_setting = EDBG_CDC_SERCOM_MUX_SETTING;
	usart_conf.pinmux_pad0 = EDBG_CDC_SERCOM_PINMUX_PAD0;
	usart_conf.pinmux_pad1 = EDBG_CDC_SERCOM_PINMUX_PAD1;
	usart_conf.pinmux_pad2 = EDBG_CDC_SERCOM_PINMUX_PAD2;
	usart_conf.pinmux_pad3 = EDBG_CDC_SERCOM_PINMUX_PAD3;
	usart_conf.baudrate    = 115200;

	stdio_serial_init(&cdc_uart_module, EDBG_CDC_MODULE, &usart_conf);
	usart_enable(&cdc_uart_module);
}

/**
 * \brief Callback to get the Data from socket.
 *
 * \param[in] sock socket handler.
 * \param[in] u8Msg Type of Socket notification.
 * \param[in] pvMsg A structure contains notification informations.
 */
static void socket_cb(SOCKET sock, uint8_t u8Msg, void *pvMsg)
{
	/* Check for socket event on socket. */
	int16_t ret;

	switch (u8Msg) {
	case SOCKET_MSG_BIND:
	{
		/* printf("socket_cb: socket_msg_bind!\r\n"); */
		tstrSocketBindMsg *pstrBind = (tstrSocketBindMsg *)pvMsg;
		if (pstrBind && pstrBind->status == 0) {
			ret = recvfrom(sock, gau8SocketBuffer, MAIN_WIFI_M2M_BUFFER_SIZE, 0);
			if (ret != SOCK_ERR_NO_ERROR) {
				printf("socket_cb: recv error!\r\n");
			}
		} else {
			printf("socket_cb: bind error!\r\n");
		}

		break;
	}

	case SOCKET_MSG_RECVFROM:
	{
		/* printf("socket_cb: socket_msg_recvfrom!\r\n"); */
		tstrSocketRecvMsg *pstrRx = (tstrSocketRecvMsg *)pvMsg;
		if (pstrRx->pu8Buffer && pstrRx->s16BufferSize) {
			uint8_t packetBuffer[48];
			memcpy(&packetBuffer, pstrRx->pu8Buffer, sizeof(packetBuffer));

			if ((packetBuffer[0] & 0x7) != 4) {                   /* expect only server response */
				printf("socket_cb: Expecting response from Server Only!\r\n");
				return;                    /* MODE is not server, abort */
			} else {
				uint32_t secsSince1900 = packetBuffer[40] << 24 |
						packetBuffer[41] << 16 |
						packetBuffer[42] << 8 |
						packetBuffer[43];

				/* Now convert NTP time into everyday time.
				 * Unix time starts on Jan 1 1970. In seconds, that's 2208988800.
				 * Subtract seventy years.
				 */
				const uint32_t seventyYears = 2208988800UL;
				uint32_t epoch = secsSince1900 - seventyYears;

				/* Print the hour, minute and second.
				 * GMT is the time at Greenwich Meridian.
				 */
				printf("socket_cb: The GMT time is %lu:%02lu:%02lu\r\n",
						(epoch  % 86400L) / 3600,           /* hour (86400 equals secs per day) */
						(epoch  % 3600) / 60,               /* minute (3600 equals secs per minute) */
						epoch % 60);                        /* second */
				port_pin_set_output_level(LED_0_PIN, false);

				ret = close(sock);
				if (ret == SOCK_ERR_NO_ERROR) {
					udp_socket = -1;
				}
			}
		}
	}
	break;

	default:
		break;
	}
}

/**
 * \brief Callback to get the ServerIP from DNS lookup.
 *
 * \param[in] pu8DomainName Domain name.
 * \param[in] u32ServerIP Server IP.
 */
static void resolve_cb(uint8_t *pu8DomainName, uint32_t u32ServerIP)
{
	struct sockaddr_in addr;
	int8_t cDataBuf[48];
	int16_t ret;

	memset(cDataBuf, 0, sizeof(cDataBuf));
	cDataBuf[0] = '\x1b'; /* time query */

	printf("resolve_cb: DomainName %s\r\n", pu8DomainName);

	if (udp_socket >= 0) {
		/* Set NTP server socket address structure. */
		addr.sin_family = AF_INET;
		addr.sin_port = _htons(MAIN_SERVER_PORT_FOR_UDP);
		addr.sin_addr.s_addr = u32ServerIP;

		/*Send an NTP time query to the NTP server*/
		ret = sendto(udp_socket, (int8_t *)&cDataBuf, sizeof(cDataBuf), 0, (struct sockaddr *)&addr, sizeof(addr));
		if (ret != M2M_SUCCESS) {
			printf("resolve_cb: failed to send  error!\r\n");
			return;
		}
	}
}

/**
 * \brief Callback to get the Wi-Fi status update.
 *
 * \param[in] u8MsgType Type of Wi-Fi notification.
 * \param[in] pvMsg A pointer to a buffer containing the notification parameters.
 */
static void wifi_cb(uint8_t u8MsgType, void *pvMsg)
{
	switch (u8MsgType) {
	case M2M_WIFI_RESP_CON_STATE_CHANGED:
	{
		tstrM2mWifiStateChanged *pstrWifiState = (tstrM2mWifiStateChanged *)pvMsg;
		if (pstrWifiState->u8CurrState == M2M_WIFI_CONNECTED) {
			printf("wifi_cb: M2M_WIFI_RESP_CON_STATE_CHANGED: CONNECTED\r\n");
			m2m_wifi_request_dhcp_client();
		} else if (pstrWifiState->u8CurrState == M2M_WIFI_DISCONNECTED) {
			printf("wifi_cb: M2M_WIFI_RESP_CON_STATE_CHANGED: DISCONNECTED\r\n");
			gbConnectedWifi = false;
			m2m_wifi_connect((char *)MAIN_WLAN_SSID, sizeof(MAIN_WLAN_SSID),
					MAIN_WLAN_AUTH, (char *)MAIN_WLAN_PSK, M2M_WIFI_CH_ALL);
		}

		break;
	}

	case M2M_WIFI_REQ_DHCP_CONF:
	{
		uint8_t *pu8IPAddress = (uint8_t *)pvMsg;
		/* Turn LED0 on to declare that IP address received. */
		printf("wifi_cb: M2M_WIFI_REQ_DHCP_CONF: IP is %u.%u.%u.%u\r\n",
				pu8IPAddress[0], pu8IPAddress[1], pu8IPAddress[2], pu8IPAddress[3]);
		gbConnectedWifi = true;

		/* Obtain the IP Address by network name */
		gethostbyname((uint8_t *)MAIN_WORLDWIDE_NTP_POOL_HOSTNAME);
		break;
	}

	default:
	{
		break;
	}
	}
}

/**
 * \brief Main application function.
 *
 * Initialize system, UART console, network then start time client.
 *
 * \return Program return value.
 */
int main(void)
{
	tstrWifiInitParam param;
	int8_t ret;
	struct sockaddr_in addr_in;

	/* Initialize the board. */
	system_init();

	/* Initialize the UART console. */
	configure_console();
	printf(STRING_HEADER);

	/* Initialize the BSP. */
	nm_bsp_init();

	/* Initialize Wi-Fi parameters structure. */
	memset((uint8_t *)&param, 0, sizeof(tstrWifiInitParam));

	/* Initialize Wi-Fi driver with data and status callbacks. */
	param.pfAppWifiCb = wifi_cb;
	ret = m2m_wifi_init(&param);
	if (M2M_SUCCESS != ret) {
		printf("main: m2m_wifi_init call error!(%d)\r\n", ret);
		while (1) {
		}
	}

	/* Turn LED0 off initially. */
	port_pin_set_output_level(LED_0_PIN, true);

	/* Initialize Socket module */
	socketInit();

	/* Register socket handler, resolve handler */
	registerSocketCallback(socket_cb, resolve_cb);

	/* Connect to router. */
	m2m_wifi_connect((char *)MAIN_WLAN_SSID, sizeof(MAIN_WLAN_SSID),
			MAIN_WLAN_AUTH, (char *)MAIN_WLAN_PSK, M2M_WIFI_CH_ALL);

	while (1) {
		/* Handle pending events from network controller. */
		m2m_wifi_handle_events(NULL);

		if (gbConnectedWifi) {
			/*
			 * Create the socket for the first time.
			 */
			if (udp_socket < 0) {
				udp_socket = socket(AF_INET, SOCK_DGRAM, 0);
				if (udp_socket < 0) {
					printf("main: UDP Client Socket Creation Failed.\r\n");
					continue;
				}

				/* Initialize default socket address structure. */
				addr_in.sin_family = AF_INET;
				addr_in.sin_addr.s_addr = _htonl(MAIN_DEFAULT_ADDRESS);
				addr_in.sin_port = _htons(MAIN_DEFAULT_PORT);

				bind(udp_socket, (struct sockaddr *)&addr_in, sizeof(struct sockaddr_in));
			}
		}
	}

	return 0;
}
