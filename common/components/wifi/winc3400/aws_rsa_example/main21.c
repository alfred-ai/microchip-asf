/**
 *
 * \file
 *
 * \brief AWS RSA Example.
 *
 * Copyright (c) 2017-2019 Microchip Technology Inc. and its subsidiaries.
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
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
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

/** \mainpage
 * \section intro Introduction
 * This example demonstrates the use of the Wi-Fi module with the SAMD21 Xplained Pro
 * board to connect to AWS .<br>
 * It uses the following hardware:
 * - the SAMD21 Xplained Pro.
 * - the WINC3400 on EXT1.
 *
 * \section files Main Files
 * - main.c : Initialize the Wi-Fi module and connect to server using SSL.
 *
 * \section usage Usage
 * -# The connection parameters can be configured in main.h.
 * \code
 *    #define MAIN_WLAN_SSID                  "DEMO_AP"
 *    #define MAIN_WLAN_AUTH                  M2M_WIFI_SEC_WPA_PSK
 *    #define MAIN_WLAN_PSK                   "12345678"
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
 * -# The application uses AWS_IOT_ALPN_ENABLED macro to enable ALPN connection on port 443 with an AWS IOT MQTT server
 * -# Disable AWS_IOT_ALPN_ENABLED macro in the properties to disable ALPN(Application Layer Protocol Negotiation)
 * \warning
 * \code
 * -- AWS IoT Demo --
 * -- SAMXXX_XPLAINED_PRO --
 * -- Compiled: Jun xx xxxx xx:xx:xx --
 * (APP)(INFO)Chip ID 3400d2
 * (APP)(INFO)Curr driver ver: x.x.x
 * (APP)(INFO)Curr driver HIF Level: (2) x.x
 * (APP)(INFO)Fw HIF: 8104
 * (APP)(INFO)Firmware HIF (2) : x.x
 * (APP)(INFO)Firmware ver   : x.x.x
 * (APP)(INFO)Firmware Build <Month> DD YYYY Time xx:xx:xx
 * (APP)(INFO)Ota HIF: 0000
 * (APP)(INFO)No valid Ota image
 * wifi_cb: M2M_WIFI_RESP_CON_STATE_CHANGED: CONNECTED
 * wifi_cb: M2M_WIFI_REQ_DHCP_CONF: IP is xxx.xxx.xxx.xxx
 * (APP)(ERR)[hif_isr][674]Socket callback is not registered
 * (APP)(ERR)[hif_isr][705](hif) host app didn't set RX Done <2><4A>
 * Received time
 * Connecting...Host IP is x.xx.xx.xxx
 * Host Name is xxxxxxxxxxxxx-xxx.xxx.xx-xxxx-x.amazonaws.com
 *
 * ALPN mode enabled
 * (APP)(INFO)Socket 0 session ID = 1
 * Successfully connected.
 * Negotiated Amazon MQTT.
 * Subscribing...Subscription success
 * Subscribe callback
 * WINC3400_IOT/sub
 * {
 *   "message": "Hello from AWS IoT console"
 * }
 * For using AWS connection, the AWS RSA certificate must be installed.
 * Download the RSA certificate using the firmware upgrade. (Refer to WINC3400 Software User Guide.)
 * \endcode
 *
 * \section compinfo Compilation Information
 * This software was written for the GNU GCC compiler using Atmel Studio 6.2
 * Other compilers are not guaranteed to work.
 *
 * \section contactinfo Contact Information
 * For further information, visit
 * <A href="http://www.microchip.com">Microchip</A>.\n
 */

#include "asf.h"
#include "main.h"
#include "driver/include/m2m_wifi.h"
#include "socket/include/socket.h"
#include "AWS_SDK/aws_iot_src/utils/aws_iot_log.h"
#include "AWS_SDK/aws_iot_src/utils/aws_iot_version.h"
#include "AWS_SDK/aws_iot_src/protocol/mqtt/aws_iot_mqtt_interface.h"
#include "aws_iot_config.h"

#define STRING_EOL    "\r\n"
#define STRING_HEADER "-- AWS IoT Demo --"STRING_EOL \
	"-- "BOARD_NAME " --"STRING_EOL	\
	"-- Compiled: "__DATE__ " "__TIME__ " --"STRING_EOL

#define PUBLISH_BUTTON	SW0_PIN

/*Role of the device*/
//#define SUBSCRIBER
#define PUBLISHER

  #ifdef SUBSCRIBER
  #define CLIENT_ID "WINC3400_Sub"
  #define SUBSCRIBE_CHANNEL "WINC3400_IOT/sub"
  #define PUBLISH_CHANNEL   "WINC3400_IOT/pub"
  #else
  #define CLIENT_ID "WINC3400_Pub"
  #define SUBSCRIBE_CHANNEL "WINC3400_IOT/pub"
  #define PUBLISH_CHANNEL   "WINC3400_IOT/sub"
  #endif


/** UART module for debug. */
static struct usart_module cdc_uart_module;

/** Wi-Fi status variable. */
static bool gbConnectedWifi = false,receivedTime = false;

/** SysTick counter to avoid busy wait delay. */
volatile uint32_t ms_ticks = 0;
static bool toggle = false;

/**
 * @brief Default MQTT HOST URL is pulled from the aws_iot_config.h
 */
char HostAddress[255] = AWS_IOT_MQTT_HOST;

/**
 * @brief Default MQTT port is pulled from the aws_iot_config.h
 */
uint32_t port = AWS_IOT_MQTT_PORT;

/**
 * @brief This parameter will avoid infinite loop of publish and exit the program after certain number of publishes
 */
uint32_t publishCount = 0;

/**
 * \brief SysTick handler used to measure precise delay.
 */
void SysTick_Handler(void)
{
	ms_ticks++;
}

/*returns duration of the button pressed
returns -1 if the button has not been released*/
static int32_t button_press_duration(bool current_button_state)
{
	static bool previous_button_state = false;
	static int32_t button_press_start_ms = 0;
	int32_t button_press_duration_ms = -1;

	/*Button has been pressed*/
	if(current_button_state == true && previous_button_state == false)
	{
		button_press_start_ms = ms_ticks;
	}
	/*Button has been released*/
	if(current_button_state == false && previous_button_state == true)
	{
		button_press_duration_ms = ms_ticks - button_press_start_ms;
	}
	previous_button_state = current_button_state;
	return button_press_duration_ms;
}

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

static int32_t MQTTcallbackHandler(MQTTCallbackParams params) {

	printf("Subscribe callback\r\n");
	printf("%.*s\t%.*s",
	(int)params.TopicNameLen, params.pTopicName,
	(int)params.MessageParams.PayloadLen, (char*)params.MessageParams.pPayload);
	printf("\r\n");
	if(strstr((char*)params.MessageParams.pPayload,"toggle") != NULL)
	{
		port_pin_set_output_level(LED_0_PIN,toggle);
		toggle = !toggle;
	}
	return 0;
}

static void disconnectCallbackHandler(void) {
	printf("MQTT Disconnect");
	IoT_Error_t rc = NONE_ERROR;
	if(aws_iot_is_autoreconnect_enabled()){
		printf("Auto Reconnect is enabled, Reconnecting attempt will start now");
		}else{
		printf("Auto Reconnect not enabled. Starting manual reconnect...");
		rc = aws_iot_mqtt_attempt_reconnect();
		if(RECONNECT_SUCCESSFUL == rc){
			printf("Manual Reconnect Successful");
			}else{
			printf("Manual Reconnect Failed - %d", rc);
		}
	}
}

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
		if (pstrWifiState->u8CurrState == M2M_WIFI_CONNECTED) {
			printf("wifi_cb: M2M_WIFI_RESP_CON_STATE_CHANGED: CONNECTED\r\n");
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
		gethostbyname((uint8_t *)HostAddress);
		break;
	}

	case M2M_WIFI_RESP_GET_SYS_TIME:
	{
		printf("Received time\r\n");
		receivedTime = true;
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
 * Application entry point.
 *
 * \return program return value.
 */
int main(void)
{
	tstrWifiInitParam param;
	int8_t ret;
	IoT_Error_t rc = NONE_ERROR;
	int32_t i = 0;
	bool infinitePublishFlag = true;
	MQTTConnectParams connectParams = MQTTConnectParamsDefault;
	MQTTSubscribeParams subParams = MQTTSubscribeParamsDefault;
	MQTTMessageParams Msg = MQTTMessageParamsDefault;
	char cPayload[100];
	MQTTPublishParams Params = MQTTPublishParamsDefault;

	connectParams.KeepAliveInterval_sec = 10;
	connectParams.isCleansession = true;
	connectParams.MQTTVersion = MQTT_3_1_1;
	connectParams.pClientID = (char*)CLIENT_ID;
	connectParams.pHostURL = HostAddress;
	connectParams.port = port;
	connectParams.isWillMsgPresent = false;
	connectParams.pRootCALocation = NULL;
	connectParams.pDeviceCertLocation = NULL;
	connectParams.pDevicePrivateKeyLocation = NULL;
	connectParams.mqttCommandTimeout_ms = 5000;
	connectParams.tlsHandshakeTimeout_ms = 5000;
	connectParams.isSSLHostnameVerify = true; // ensure this is set to true for production
	connectParams.disconnectHandler = disconnectCallbackHandler;

	/* Initialize the board. */
	system_init();

	/* Initialize the UART console. */
	configure_console();
	printf(STRING_HEADER);

	delay_init();

	/* Enable SysTick interrupt for non busy wait delay. */
	if (SysTick_Config(system_cpu_clock_get_hz() / 1000)) {
		puts("main: SysTick configuration error!");
		return 0;
	}

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

	/* Connect to AP. */
	m2m_wifi_connect((char *)MAIN_WLAN_SSID, sizeof(MAIN_WLAN_SSID),
			MAIN_WLAN_AUTH, (char *)MAIN_WLAN_PSK, M2M_WIFI_CH_ALL);
	while(1)
	{
		m2m_wifi_handle_events(NULL);
		if(gbConnectedWifi && receivedTime)
		{
			printf("Connecting...");
			rc = aws_iot_mqtt_connect(&connectParams);
			if (NONE_ERROR != rc) {
				printf("Error(%d) connecting to %s:%d", rc, connectParams.pHostURL, connectParams.port);
				break;
			}
			/*
			* Enable Auto Reconnect functionality. Minimum and Maximum time of Exponential backoff are set in aws_iot_config.h
			*  #AWS_IOT_MQTT_MIN_RECONNECT_WAIT_INTERVAL
			*  #AWS_IOT_MQTT_MAX_RECONNECT_WAIT_INTERVAL
			*/
			rc = aws_iot_mqtt_autoreconnect_set_status(true);
			if (NONE_ERROR != rc) {
				printf("Unable to set Auto Reconnect to true - %d", rc);
				return rc;
			}
			subParams.mHandler = MQTTcallbackHandler;
			subParams.pTopic = (char*)SUBSCRIBE_CHANNEL;
			subParams.qos = QOS_0;

			if (NONE_ERROR == rc) {
				printf("Subscribing...");
				rc = aws_iot_mqtt_subscribe(&subParams);
				if (NONE_ERROR != rc) {
					printf("Error subscribing\r\n");
				}
			}

			printf("Subscription success\r\n");

			Msg.qos = QOS_0;
			sprintf(cPayload, "%s : %ld ", "hello from SDK", i);
			Msg.pPayload = (void *) cPayload;
			Params.pTopic = (char*)PUBLISH_CHANNEL;

			if (publishCount != 0) {
				infinitePublishFlag = false;
			}
			break;
		}
	}

	while ((NETWORK_ATTEMPTING_RECONNECT == rc || RECONNECT_SUCCESSFUL == rc || NONE_ERROR == rc)
			&& (publishCount > 0 || infinitePublishFlag)) {
		//Max time the yield function will wait for read messages
		rc = aws_iot_mqtt_yield(100);
		if(NETWORK_ATTEMPTING_RECONNECT == rc){
			printf("-->sleep reconnect\r\n");
			delay_ms(1);
			// If the client is attempting to reconnect we will skip the rest of the loop.
			continue;
		}
		/*Calculate duration of time the button was pressed
		If button was pressed and held for more than 10s we would enter provisioning mode
		short press would allow us to enter credentials from serial console*/
		int32_t button_pressed_duration_ms = button_press_duration(!port_pin_get_input_level(PUBLISH_BUTTON));
		if((button_pressed_duration_ms != -1 && button_pressed_duration_ms < 2000))
		{
			printf("publishing message\r\n");
			sprintf(cPayload, "%s : %ld ", "toggle LED", i++);
			Msg.PayloadLen = strlen(cPayload) + 1;
			Params.MessageParams = Msg;
			rc = aws_iot_mqtt_publish(&Params);
			if (publishCount > 0) {
				publishCount--;
			}
		}
	}

	if (NONE_ERROR != rc) {
		printf("An error occurred in the loop.\n");
	} else {
		printf("Publish done\n");
	}


	return 0;
}
