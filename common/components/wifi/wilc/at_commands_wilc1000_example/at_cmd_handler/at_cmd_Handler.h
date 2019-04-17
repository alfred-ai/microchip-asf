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

/*
	Syntax of AT commands
	AT+
		CONN=5[SSID, SSID_LENGTH, SEC_TYPE, SEC_KEY, CHANNEL] //Connect to an AP
			Example:
				AT+CONN=5[IOT_XX,6,2,1234567890,0]
		DISCONN	//Disconnect from an AP
		AP_EN=5[SSID, SSID_VISIBLE_MODE, SEC_TYPE, SEC_KEY, CHANNEL] //Enable AP mode
			Example:
				AT+AP_EN=5[DEMO_Open,0,1,0,255]  
				AT+AP_EN=5[DEMO_WPA,0,2,12345678,255]
				AT+AP_EN=5[DEMO_WEP,0,3,1*1234567890,255]  //'*' is a seperator for WEP_KEY_INDEX and WEP_KEY
		AP_DIS  // Disable AP mode
		RESET   // Reset Board
		CFG=2[COMMAND,VALUE]  //  Enable/Disable Echo and Hint
			 AS:
				[ECHO,0:1]
				[HINT,0:1]
		P2P_EN=1[CHANNEL]  // Start P2P mode
		P2P_DIS  // Stop P2P mode
		SCAN=1[CHANNEL]  // Scan the specified channel to get AP list
		SCAN=2[CHANNEL,HIDDEN_SSID] //Scan the specified channel and include the hidden SSID in the scan result if it is in the range
		RSSI  //get RSSI
		GET_CONN_INFO  // Get Connected AP info
		AT+TX_PWR=1[TX_PWR_LEVEL] //set the TX power (1==TX_PWR_HIGH, 2==TX_PWR_MED, 3==TX_PWR_LOW)
		WPS_START=2[TRIGGER_TYPE,PIN_CODE]  //Start WPS (TRIGGER_TYPE is 0 = WPS_PIN_TRIGGER or 4 = WPS_PBC_TRIGGER)
			Example:
				AT+WPS_START=2[4,0]  //PBC
				AT+WPS_START=2[0,12345670]  //PIN
		WPS_DIS  //Stop WPS
		IPCON=2[PROTOCOL,PORT]  // Start TCP/UDP server (where PROTOCOL is TCP or UDP & PORT is port number to start the server). 
								// Please find the python scripts in \src\scripts folder
			Example:
				AT+IPCON=2[TCP,8000]
		IPCON=2[PROTOCOL,SERVER_IP,SERVER_PORT]  // Start TCP/UDP client (where PROTOCOL is TCP or UDP)
			Example:
				AT+IPCON=3[UDP,10.0.1.3,6666]
		IPERF=1[PROTOCOL]  // Start iperf test (where PROTOCOL is TCP or UDP)
			Example:
				AT+IPERF=1[UDP]
		HTTPCON=2[<HOST>,<PORT>] // Test the http connction to given host and port number
			Example:
				AT+HTTPCON=2[www.atmel.com,80]
		FILE_DOWNLOAD=1[HTTP_FILE_URL]
			Example:
				AT+FILE_DOWNLOAD=1[http://www.atmel.com/images/doc7529.pdf]
		OTA=1[BIN_FILE_URL]  // Update new firmware to flash. SAM4SD32 devices only supported.
			Example:
				AT+FILE_DOWNLOAD=1[http://10.0.1.3:8080/at_commads_example.bin]
		MON_EN=7[CHANNEL,FRAME_TYPE,SUB_FRAME_TYPE,SRC_MAC,DST_MAC,BSSID_MAC,EN_RCV_HDR] // Start monitoring mode
			where	CHANNEL			RF Channel ID values 1 to 14. And CHANNEL_ALL=255 is not supported.
					FRAME_TYPE		Wi-Fi MAC frame type code  (refer tenuWifiFrameType) 
										0x00 -> MANAGEMENT
										0x04 -> CONTROL
										0x08 -> DATA_BASICTYPE
					SUB_FRAME_TYPE	Wi-Fi MAC Frame subtype code (refer tenuSubTypes). 0xFF to capture all subtypes
					SRC_MAC			"any" or Source MAC address. Receive packets only with the specified source mac address.
					DST_MAC			"any" or Destination MAC address. Receive packets only with the specified destination mac address.
					BSSID_MAC		"any" or MAC address of Access point. Receive packets only with the specified BSSID
					EN_RCV_HDR		0 or 1. Enable reception of the full mac header before the payload
			Example:
				AT+MON_EN=7[1,0x00,0x80,any,any,any,0]
				AT+MON_EN=7[5,0x08,0xFF,F8:F0:05:12:34:56,any,any,0]
		MON_DIS		// Stop monitoring mode
	\r\n
*/

#ifndef _AT_CMDS_H_
#define _AT_CMDS_H_

#include "common/include/nm_common.h"
#include "asf.h"

#define ENABLE_PRINT 1

#if (ENABLE_PRINT == 1)
#	define PRINT printf
#else
#	define PRINT M2M_DBG
#endif

#define AT_SEND_ERROR(val,cmdTxt)	printf("\r\n+ERROR: %d\r\n,%s\r\n", val, (char *)cmdTxt)
#define AT_SEND_OK(cmdTxt)			printf("\r\n+OK\r\n,%s\r\n", (char *)cmdTxt)

#define AT_HEADER					"AT+"


#define AT_MAX_PARAMETERS_COUNT		(8)
#define AT_MIN_CMD_LENGTH			(3)
#define AT_MAX_CMD_LENGTH			(15)
#define AT_MAX_PARAM_LENGTH			(250)
#define AT_MAX_HOST_NAME			(100)

#define AT_MAX_RX_BUFF_SIZE ((AT_MAX_PARAM_LENGTH * AT_MAX_PARAMETERS_COUNT) + AT_MAX_CMD_LENGTH)
#define BASE_16						(16)

#define AT_CMD_SEM
/** P2P mode Settings */
#define MAIN_WLAN_DEVICE_NAME        "WILC1000_P2P" /* < P2P Device Name */

enum at_cmd_status
{
	AT_CMD_STATUS_IDLE	= 0,
	AT_CMD_STATUS_CHECK,
	AT_CMD_STATUS_RUN
};

enum at_cmd_error
{
	AT_ERR_CMD_IS_INQUIRY		= 111,
	AT_ERR_NO_ERROR				= M2M_SUCCESS,
	AT_ERR_INVALID_OPERATION	= -13,
	AT_ERR_INVALID_CMD,
	AT_ERR_NOT_REGISTERED_CMD,
	AT_ERR_CHR_NUM_OF_CMD,
	AT_ERR_NUM_OF_PARAMS,
	AT_ERR_INVALID_ARGUMENTS,
	AT_ERR_OPERATION_NOT_COMPELETED,
	AT_ERR_NOT_REGISTERED_CFG,
};

enum at_cmd_index {
	AT_INDEX_CONFIG		= 0,
	AT_INDEX_LIST,
	AT_INDEX_HELP,
	AT_INDEX_CONN,
	//AT_INDEX_DEF_CONN,
	AT_INDEX_DISCONN,
	/*AT_INDEX_GROWL_INIT,
	AT_INDEX_GROWL_SEND,
	AT_INDEX_NMA,
	AT_INDEX_PROWL,
	AT_INDEX_GROWL_DEINIT,*/
	AT_INDEX_SCAN,
	/*AT_INDEX_SCAN_SSID_LIST,*/
	AT_INDEX_RSSI,
	AT_INDEX_AP_ENABLE,
	AT_INDEX_AP_DISABLE,
	AT_INDEX_P2P_ENABLE,
	AT_INDEX_P2P_DISABLE,
	/*AT_INDEX_PROV_ENABLE,
	AT_INDEX_PROV_DISABLE,
	AT_INDEX_WDTEST_INIT,
	AT_INDEX_WDTEST_DEINIT,*/
	AT_INDEX_WPS_START,
	AT_INDEX_WPS_DISABLE,
	AT_INDEX_IPCON,
	/*AT_INDEX_SDS,
	AT_INDEX_DELCID,*/
#if SAM4SD32
	AT_INDEX_OTA,
#endif
	/*AT_INDEX_GETVER,*/
	AT_INDEX_RESET,
	AT_INDEX_MON_EN,
	AT_INDEX_MON_DIS,
	/*AT_INDEX_PS_MODE,
	AT_INDEX_STATIC_IP,*/
	AT_INDEX_GET_CONN_INFO,
	/*AT_INDEX_SET_PWR_PRO,*/
	AT_INDEX_IPERF,
	AT_INDEX_HTTPCON,	
	AT_FILEDOWNLOAD,
	/*AT_SCAN_PASSIVE,
	AT_INDEX_ENABLE_EXP_CHECK,
	AT_TLS_CRL_RESET,
	AT_TLS_CRL_ADD,
	AT_TLS_CRL_SEND,
	AT_INDEX_TLS_SET_CS,
	AT_INDEX_TLS_WCERT,
	AT_SSL_OPT,
	AT_PING,
	AT_INDEX_GETIME,*/
    AT_TX_PWR,
	AT_MAX_COMMANDS_COUNT /* Always keep this at the last entry */
};
enum
{
	AT_CFG_INDEX_ECHO,
	AT_CFG_INDEX_HINT,
	//AT_CFG_INDEX_RST,
	AT_MAX_CFG_CMD_COUNT /* Always keep this at the last entry */
};

typedef struct at_cmd_parse_chrs
{
	uint8 u8Header_sep[2];
	uint8 u8Num_ofParams_sep[2];
	uint8 u8Params_enc_Start_sep[2];
	uint8 u8Params_enc_End_sep[2];
	uint8 u8Params_sep[2];
	uint8 u8Help_param_sep[3];
	//uint8 in_param_sep[2];
}tstrAt_cmd_parse_chrs;

typedef struct cmd
{
	uint8 au8Cmd[AT_MAX_CMD_LENGTH];
	uint8 u8NumOfParameters;
	uint8 au8ParamsList[AT_MAX_PARAMETERS_COUNT][AT_MAX_PARAM_LENGTH];
}tstrAt_cmd_content;

typedef sint8 (*tpf_at_cmd_handler)(tstrAt_cmd_content*, void *, uint8);

typedef struct str_At_Cmd
{
	uint8 au8AtCMD[AT_MAX_CMD_LENGTH];
	tpf_at_cmd_handler at_cmd_handler;
	uint8 u8NoOfParameters;
}strAtCMD_Handler;

enum{
	SERVICE_IS_STOPPED = 0,
	SERVICE_IS_RUNNING,
	SERVICE_DEV_IS_CONNECTED,
	SERVICE_IS_UNDEFINED = 0xFF,
};

typedef struct connect_status{
	uint8 u8Sta_status;
	uint8 u8Ap_status;
	uint8 u8P2p_status;
	uint8 u8Growl_status;
	uint8 u8GrowlNumOfCBs;
	uint8 u8Prov_status;
	uint8 u8Wps_status;
}tstr_test_conn_status;

typedef struct {
	uint8 u8Echo_status;
	/*!< Must be disabled if automated transfer is used
	*/
	uint8 u8Restart_app;
	/*!< Has the value of the application to restart or not
	* when this variable will auto reset after execution
	*/
	uint8 u8Disaply_hint;
	/*!< If this variable has been set, this means if something wrong happened
	* This will display a hint about the command
	*/
}tstr_app_config;

#if 0
typedef struct SockConn
{
	uint8				u8CID;
	SOCKET				sock;
	uint32				addr;
	uint16				u16port;
	struct SockConn	*next_SockConn;
}SockConnInfo;
#endif

enum { AT_SUBTYPE_DATA,
	AT_DATAACK_SUBTYPE,
	AT_DATAPOLL_SUBTYPE,
	AT_DATAPOLLACK_SUBTYPE,
	AT_NULLFRAME_SUBTYPE,
	AT_CFACK_SUBTYPE,
	AT_CFPOLL_SUBTYPE,
	AT_CPPOLLACK_SUBTYPE,
	AT_QOSDATA_SUBTYPE,
	AT_QOSDATAACK_SUBTYPE,
	AT_QOSDATAPOLL_SUBTYPE,
	AT_QOSDATAPOLLACK_SUBTYPE,
	AT_QOSNULLFRAME_SUBTYPE,
	AT_QOSCFPOLL_SUBTYPE,
	AT_QOSCFPOLLACK_SUBTYPE,
	AT_MAX_DATA_SUBTYPE /*15*/} AT_DATA_SUBTYPE;
enum {AT_CONTROL_PS_POLL_SUBTYPE,
	AT_CONTROL_RTS_SUBTYPE,
	AT_CONTROL_CTS_SUBTYPE,
	AT_CONTROL_ACK_SUBTYPE,
	AT_CONTROL_CFEND_SUBTYPE,
	AT_CONTROL_CFEND_ACK_SUBTYPE,
	AT_CONTROL_BLOCKACK_REQ_SUBTYPE,
	AT_CONTROL_BLOCKACK_SUBTYPE,
	AT_MAX_CONTROL_SUBTYPE /*8*/} AT_CONTROL_SUBTYPE;
enum {AT_ASSOC_REQ_SUBTYPE,
	AT_ASSOC_RSP_SUBTYPE,
	AT_REASSOC_REQ_SUBTYPE,
	AT_REASSOC_RSP_SUBTYPE,
	AT_PROBE_REQ_SUBTYPE,
	AT_PROBE_RSP_SUBTYPE,
	AT_BEACON_SUBTYPE,
	AT_ATIM_SUBTYPE,
	AT_DISASOC_SUBTYPE,
	AT_AUTH_SUBTYPE,
	AT_DEAUTH_SUBTYPE,
	AT_ACTION_SUBTYPE,
	AT_MAX_MANGEMENT_SUBTYPE /*12*/};

typedef struct {sint8 s8Enabled; sint32 s32NumPkt;} tstrFilterStat;
typedef struct {tstrFilterStat strFilterSubtype[AT_MAX_DATA_SUBTYPE];
sint32 s32AnyDataFrame;
sint32 s32Enabled;} tstrMonstats;

tstr_test_conn_status gstrAllStatus;
volatile tstrAt_cmd_content temp_cmd_content;

#if 0

typedef struct HTTP_RX
{
    uint32          rx_count;
	uint16			content_len;
    uint8           first_chunk;
    tstrHashContext sha1_ctxt;
    uint8           digest[160/8];
}HTTP_RXInfo;


uint8 AddSockConn(SockConnInfo **conn, SOCKET csock, uint16 port, uint32 saddr);
void DeleteSockConn(SockConnInfo **conn, SOCKET csock);
SockConnInfo* RetrieveConnectionFromCID(SockConnInfo **conn, uint8 cid);
SockConnInfo* RetrieveConnectionFromSocket(SockConnInfo **conn, uint8 sock);
uint8 GetCID(void);
void FreeCID(uint8 cid);
void PrintSockConnections(SockConnInfo *conn);
uint8 UpdateSockConn(SockConnInfo *conn, SOCKET csock, uint16 port, uint32 saddr);

#endif

sint8 atCmd_AppConfig_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_Connect_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_DefaultConnect_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_DisConnect_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_SendGrowl_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_NMA_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_Prowl_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_InitGrowl_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_DeinitGrowl_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_DhcpReq_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_Scan_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_ScanSsidList_Handler(tstrAt_cmd_content *data,void* moreData,uint8 useStoredValue);
sint8 atCmd_CurRSSI_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_ApEnable_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_ApDisable_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_P2pEnable_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_P2pDisable_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_ProvisionEnable_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_ProvisionDisable_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_WifiDirectInit_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_WifiDirectDeinit_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_WpsConnect_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_WpsDisable_Handler(tstrAt_cmd_content *data, void *, uint8);
sint8 atCmd_List_Handler(tstrAt_cmd_content *data, void*, uint8);
sint8 atCmd_Help_Handler(tstrAt_cmd_content *data, void*, uint8);
sint8 atCmd_IPCon_Handler(tstrAt_cmd_content *data, void*, uint8);
sint8 atCmd_SocketDataStream_Handler(tstrAt_cmd_content *data, void*, uint8); 
sint8 atCmd_DeleteCID_Handler(tstrAt_cmd_content *data, void*, uint8);
#if SAM4SD32
sint8 atCmd_OTA_Handler(tstrAt_cmd_content *data, void*, uint8);
#endif
sint8 atCmd_GetVer_Handler(tstrAt_cmd_content *data, void*, uint8);
sint8 atCmd_Reset_Handler(tstrAt_cmd_content *data, void*, uint8);
sint8 atCmd_SetStaticIP_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
sint8 atCmd_Iperf_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
sint8 atCmd_HTTPCon_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
sint8 atCmd_TLS_SetCipherSuite_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
sint8 atCmd_TLS_CertTransfer_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
sint8 atCmd_GetSysTime_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
sint8 atCmd_TxPwr_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);


sint8 atCmd_Inquiries_Handler(tstrAt_cmd_content *, strAtCMD_Handler *);
sint8 atCmd_IsParameterNumericOnly(uint8* pData);

void init_at_cmd_handler(strAtCMD_Handler *);
void print_cmd_handler_arr(strAtCMD_Handler *);

sint8 parse_cmd(uint8 *, tstrAt_cmd_content *, tstrAt_cmd_parse_chrs);
sint8 get_index_cmdHandler(tstrAt_cmd_content *, strAtCMD_Handler *);
void print_Handle_status(sint8, uint8 *);
void get_cmd_txt(uint8, uint8 *);
sint8 atCmd_MonEn_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
sint8 atCmd_MonDis_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
sint8 atCmd_PsMode_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
sint8 atCmd_GetConnInfo_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
sint8 atCmd_SetPowerProfile_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
sint8 atCmd_FileDownload_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
sint8 atCmd_ScanPassive_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
sint8 atCmd_TlsCrlReset_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
sint8 atCmd_TlsCrlAdd_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
sint8 atCmd_TlsCrlSend_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
uint8 GetFiledownloadStarted(void);
uint32 GetScanTimeStart(void);

sint8 atCmd_SslEnableCertExpirationCheck(tstrAt_cmd_content *data, void* moreData, uint8 useStoreValue);
sint8 atCmd_Ping(tstrAt_cmd_content *data, void* moreData, uint8 useStoreValue);
uint32 GetDownloadStartTime(void);
sint8 atCmd_SslGlobalOption_Handler(tstrAt_cmd_content *data, void* moreData, uint8 useStoredValue);
void handle_data(void);
void print_monitoring_result(void);
/* Tasks */
void cmd_handler(void *argument);

#endif /* _AT_CMDS_H_ */