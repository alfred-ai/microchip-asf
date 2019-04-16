/**
 *
 * \file
 *
 * \brief WINC1500 Weather Client Example.
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
 * board to retrieve weather information from openweathermap.org server.<br>
 * It uses the following hardware:
 * - the SAMD21 Xplained Pro.
 * - the WINC1500 on EXT1.
 *
 * \section files Main Files
 * - main.c : Initialize the WINC1500 and retrieve information.
 *
 * \section usage Usage
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
 *    -- WINC1500 weather client example --
 *    -- SAMD21_XPLAINED_PRO --
 *    -- Compiled: xxx xx xxxx xx:xx:xx --
 *    Provision Mode started.
 *    Connect to [atmelconfig.com] via AP[WINC1500_xx:xx] and fill up the page.
 *    Wi-Fi IP is xxx.xxx.xxx.xxx
 *    wifi_cb: M2M_WIFI_RESP_PROVISION_INFO.
 *    Wi-Fi connected
 *    Wi-Fi IP is xxx.xxx.xxx.xxx
 *    Host IP is 144.76.102.166
 *    Host Name is openweathermap.org
 *    City: Seoul
 *    Temperature: 20.63
 *    Weather Condition: sky is clear
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
#include "socket/include/socket.h"

#define STRING_EOL    "\r\n"
#define STRING_HEADER "-- WINC1500 weather client example --"STRING_EOL	\
	"-- "BOARD_NAME " --"STRING_EOL	\
	"-- Compiled: "__DATE__ " "__TIME__ " --"STRING_EOL

/** IP address of host. */
uint32_t gu32HostIp = 0;

/** UART module for debug. */
static struct usart_module cdc_uart_module;

/** TCP client socket handlers. */
static SOCKET tcp_client_socket = -1;

/** Receive buffer definition. */
static uint8_t gau8ReceivedBuffer[MAIN_WIFI_M2M_BUFFER_SIZE] = {0};

/** Wi-Fi status variable. */
static bool gbConnectedWifi = false;

/** Weather client status variable. */
static bool gbFinishedGetWeather = false;

/** Get host IP status variable. */
static bool gbHostIpByName = false;

/** Continue Receive status variable. */
static bool gbContinueReceive = false;

/** TCP Connection status variable. */
static bool gbTcpConnection = false;

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
 * \brief Callback function of IP address.
 *
 * \param[in] hostName Domain name.
 * \param[in] hostIp Server IP.
 *
 * \return None.
 */
static void resolve_cb(uint8_t *hostName, uint32_t hostIp)
{
	gu32HostIp = hostIp;
	gbHostIpByName = true;
	printf("Host IP is %d.%d.%d.%d\r\n", (int)IPV4_BYTE(hostIp, 0), (int)IPV4_BYTE(hostIp, 1),
			(int)IPV4_BYTE(hostIp, 2), (int)IPV4_BYTE(hostIp, 3));
	printf("Host Name is %s\r\n", hostName);
}

/**
 * \brief Callback function of TCP client socket.
 *
 * \param[in] sock socket handler.
 * \param[in] u8Msg Type of Socket notification
 * \param[in] pvMsg A structure contains notification informations.
 *
 * \return None.
 */
static void socket_cb(SOCKET sock, uint8_t u8Msg, void *pvMsg)
{
	/* Check for socket event on TCP socket. */
	if (sock == tcp_client_socket) {
		switch (u8Msg) {
		case SOCKET_MSG_CONNECT:
		{
			if (gbTcpConnection) {
				memset(gau8ReceivedBuffer, 0, sizeof(gau8ReceivedBuffer));
				sprintf((char *)gau8ReceivedBuffer, "%s%s%s", MAIN_PREFIX_BUFFER, (char *)MAIN_CITY_NAME, MAIN_POST_BUFFER);

				tstrSocketConnectMsg *pstrConnect = (tstrSocketConnectMsg *)pvMsg;
				if (pstrConnect && pstrConnect->s8Error >= SOCK_ERR_NO_ERROR) {
					send(tcp_client_socket, gau8ReceivedBuffer, strlen((char *)gau8ReceivedBuffer), 0);

					memset(gau8ReceivedBuffer, 0, MAIN_WIFI_M2M_BUFFER_SIZE);
					recv(tcp_client_socket, &gau8ReceivedBuffer[0], MAIN_WIFI_M2M_BUFFER_SIZE, 0);
				} else {
					printf("socket_cb: connect error!\r\n");
					gbTcpConnection = false;
					close(tcp_client_socket);
					tcp_client_socket = -1;
				}
			}
		}
		break;

		case SOCKET_MSG_RECV:
		{
			char *pcIndxPtr;
			char *pcEndPtr;

			tstrSocketRecvMsg *pstrRecv = (tstrSocketRecvMsg *)pvMsg;
			if (pstrRecv && pstrRecv->s16BufferSize > 0) {
				if (!gbContinueReceive) {
					/* Get city name */
					pcIndxPtr = strstr((char *)pstrRecv->pu8Buffer, "name=");
					printf("City: ");
					if (NULL != pcIndxPtr) {
						pcIndxPtr = pcIndxPtr + strlen("name=") + 1;
						pcEndPtr = strstr(pcIndxPtr, "\">");
						if (NULL != pcEndPtr) {
							*pcEndPtr = 0;
						}

						printf("%s\r\n", pcIndxPtr);
					} else {
						printf("N/A\r\n");
						break;
					}

					/* Get temperature */
					pcIndxPtr = strstr(pcEndPtr + 1, "temperature value");
					printf("Temperature: ");
					if (NULL != pcIndxPtr) {
						pcIndxPtr = pcIndxPtr + strlen("temperature value") + 2;
						pcEndPtr = strstr(pcIndxPtr, "\" ");
						if (NULL != pcEndPtr) {
							*pcEndPtr = 0;
						}

						printf("%s\r\n", pcIndxPtr);
					} else {
						printf("N/A\r\n");
						break;
					}

					/* Get weather condition */
					pcIndxPtr = strstr(pcEndPtr + 1, "weather number");
					if (NULL != pcIndxPtr) {
						printf("Weather Condition: ");
						pcIndxPtr = pcIndxPtr + strlen("weather number") + 14;
						pcEndPtr = strstr(pcIndxPtr, "\" ");
						if (NULL != pcEndPtr) {
							*pcEndPtr = 0;
						}

						printf("%s\r\n", pcIndxPtr);
						port_pin_set_output_level(LED_0_PIN, false);
						gbContinueReceive = false;
						break;
					} else {
						gbContinueReceive = true;
					}
				} else {
					/* Get weather condition */
					pcIndxPtr = strstr((char *)pstrRecv->pu8Buffer, "weather number");
					printf("Weather Condition: ");
					if (NULL != pcIndxPtr) {
						pcIndxPtr = pcIndxPtr + strlen("weather number") + 14;
						pcEndPtr = strstr(pcIndxPtr, "\" ");
						if (NULL != pcEndPtr) {
							*pcEndPtr = 0;
						}

						printf("%s\r\n", pcIndxPtr);
						gbContinueReceive = false;
						gbTcpConnection = false;
						gbFinishedGetWeather = true;
						port_pin_set_output_level(LED_0_PIN, false);
						break;
					} else {
						gbContinueReceive = true;
						printf("N/A\r\n");
					}
				}

				memset(gau8ReceivedBuffer, 0, sizeof(gau8ReceivedBuffer));
				recv(tcp_client_socket, &gau8ReceivedBuffer[0], MAIN_WIFI_M2M_BUFFER_SIZE, 0);
			} else {
				printf("socket_cb: recv error!\r\n");
				close(tcp_client_socket);
				tcp_client_socket = -1;
			}
		}
		break;

		default:
			break;
		}
	}
}

static void set_dev_name_to_mac(uint8_t *name, uint8_t *mac_addr)
{
	/* Name must be in the format WINC1500_00:00 */
	uint16 len;

	len = m2m_strlen(name);
	if (len >= 5) {
		name[len - 1] = MAIN_HEX2ASCII((mac_addr[5] >> 0) & 0x0f);
		name[len - 2] = MAIN_HEX2ASCII((mac_addr[5] >> 4) & 0x0f);
		name[len - 4] = MAIN_HEX2ASCII((mac_addr[4] >> 0) & 0x0f);
		name[len - 5] = MAIN_HEX2ASCII((mac_addr[4] >> 4) & 0x0f);
	}
}

/**
 * \brief Callback to get the Wi-Fi status update.
 *
 * \param[in] u8MsgType Type of Wi-Fi notification.
 * \param[in] pvMsg A pointer to a buffer containing the notification parameters.
 *
 * \return None.
 */
static void wifi_cb(uint8_t u8MsgType, void *pvMsg)
{
	switch (u8MsgType) {
	case M2M_WIFI_RESP_CON_STATE_CHANGED:
	{
		tstrM2mWifiStateChanged *pstrWifiState = (tstrM2mWifiStateChanged *)pvMsg;
		if (pstrWifiState->u8CurrState == M2M_WIFI_CONNECTED) {
			printf("Wi-Fi connected\r\n");
			m2m_wifi_request_dhcp_client();
		} else if (pstrWifiState->u8CurrState == M2M_WIFI_DISCONNECTED) {
			printf("Wi-Fi disconnected\r\n");
			gbConnectedWifi = false;
		}

		break;
	}

	case M2M_WIFI_REQ_DHCP_CONF:
	{
		uint8_t *pu8IPAddress = (uint8_t *)pvMsg;
		/* Turn LED0 on to declare that IP address received. */
		printf("Wi-Fi IP is %u.%u.%u.%u\r\n",
				pu8IPAddress[0], pu8IPAddress[1], pu8IPAddress[2], pu8IPAddress[3]);
		gbConnectedWifi = true;
		/* Obtain the IP Address by network name */
		gethostbyname((uint8_t *)MAIN_WEATHER_SERVER_NAME);
		break;
	}

	case M2M_WIFI_RESP_PROVISION_INFO:
	{
		tstrM2MProvisionInfo *pstrProvInfo = (tstrM2MProvisionInfo *)pvMsg;
		printf("wifi_cb: M2M_WIFI_RESP_PROVISION_INFO.\r\n");

		if (pstrProvInfo->u8Status == M2M_SUCCESS) {
			m2m_wifi_connect((char *)pstrProvInfo->au8SSID, strlen((char *)pstrProvInfo->au8SSID), pstrProvInfo->u8SecType,
					pstrProvInfo->au8Password, M2M_WIFI_CH_ALL);
		} else {
			printf("wifi_cb: Provision failed.\r\n");
		}
	}
	break;

	default:
	{
		break;
	}
	}
}

/**
 * \brief Main application function.
 *
 * Initialize system, UART console, network then start weather client.
 *
 * \return Program return value.
 */
int main(void)
{
	tstrWifiInitParam param;
	int8_t ret;
	uint8_t mac_addr[6];
	uint8_t u8IsMacAddrValid;
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

	/* Initialize socket API. */
	socketInit();
	registerSocketCallback(socket_cb, resolve_cb);

	m2m_wifi_get_otp_mac_address(mac_addr, &u8IsMacAddrValid);
	if (!u8IsMacAddrValid) {
		m2m_wifi_set_mac_address(gau8MacAddr);
	}

	m2m_wifi_get_mac_address(gau8MacAddr);

	set_dev_name_to_mac((uint8_t *)gacDeviceName, gau8MacAddr);
	set_dev_name_to_mac((uint8_t *)gstrM2MAPConfig.au8SSID, gau8MacAddr);
	m2m_wifi_set_device_name((uint8_t *)gacDeviceName, (uint8_t)m2m_strlen((uint8_t *)gacDeviceName));
	gstrM2MAPConfig.au8DHCPServerIP[0] = 0xC0; /* 192 */
	gstrM2MAPConfig.au8DHCPServerIP[1] = 0xA8; /* 168 */
	gstrM2MAPConfig.au8DHCPServerIP[2] = 0x01; /* 1 */
	gstrM2MAPConfig.au8DHCPServerIP[3] = 0x01; /* 1 */

	m2m_wifi_start_provision_mode((tstrM2MAPConfig *)&gstrM2MAPConfig, (char *)gacHttpProvDomainName, 1);
	printf("Provision Mode started.\r\nConnect to [%s] via AP[%s] and fill up the page.\r\n", MAIN_HTTP_PROV_SERVER_DOMAIN_NAME, gstrM2MAPConfig.au8SSID);

	while (1) {
		m2m_wifi_handle_events(NULL);

		if (gbConnectedWifi && !gbTcpConnection) {
			if (gbHostIpByName) {
				/* Open TCP client socket. */
				if (tcp_client_socket < 0) {
					if ((tcp_client_socket = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
						printf("main: failed to create TCP client socket error!\r\n");
						continue;
					}
				}

				/* Connect TCP client socket. */
				addr_in.sin_family = AF_INET;
				addr_in.sin_port = _htons(MAIN_SERVER_PORT);
				addr_in.sin_addr.s_addr = gu32HostIp;
				if (connect(tcp_client_socket, (struct sockaddr *)&addr_in, sizeof(struct sockaddr_in)) != SOCK_ERR_NO_ERROR) {
					printf("main: failed to connect socket error!\r\n");
					continue;
				}

				gbTcpConnection = true;
			}
		}

		if (gbFinishedGetWeather) {
			gbFinishedGetWeather = false;
			gbHostIpByName = false;
			break;
		}
	}

	close(tcp_client_socket);
	tcp_client_socket = -1;

	return 0;
}
