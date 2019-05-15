/**
* \file  lorawan_app.c
*
* \brief LORAWAN Provisioning Over BLE Application main file
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
 
/****************************** Includes **************************************/
#include "asf.h"
#include "lorawan.h"
#include "system_task_manager.h"
#include "conf_app.h"
#include "sio2host.h"
#include "resources.h"
#include "delay.h"
#include "sleep_timer.h"
#include "sw_timer.h"
#include "aes_engine.h"
#include "LED.h"
#include "pmm.h"
#include "radio_driver_hal.h"
#include "conf_pmm.h"
#include "conf_sio2host.h"
#include "conf_stack.h"
#include "pds_interface.h"
#include "ble_manager.h"
#include "pds_interface.h"
#include "lnp_service.h"
#include "lrfp_service.h"
#include "ble_app.h"

#include "atomic.h"
#include <stdint.h>

#include "lorawan_multiband.h"
#include "lorawan_reg_params.h"

/************************** External variables ***********************************/
extern lnp_params_t ble_lnp_params;
extern lrfp_params_t ble_lrfp_params;

/************************** Global variables ***********************************/
/* Device join status flag */
lora_join_state_t lora_join_state = NOT_JOINED;
/* Application payload request */
LorawanSendReq_t lorawanSendReq;
/* Application buffer */
uint8_t app_buf[4] = {0x00, 0x01, 0x02, 0x03};
/* Application timer ID */
uint8_t appTimerId = 0xFF;
/* App Task Handler Prototype */
SYSTEM_TaskStatus_t APP_TaskHandler(void);
/* LoRaWAN supported class types of end device */
uint8_t edClassSupported = LORAWAN_SUPPORTED_ED_CLASSES;

#if (ENABLE_PDS == 1)
#define PDS_LNP_PARAM_ADDR		(uint8_t *)&ble_lnp_params
#define PDS_LRFP_PARAM_ADDR		(uint8_t *)&ble_lrfp_params

PdsOperations_t lnp_pds_ops[PDS_LNP_MAX_VALUE];

const ItemMap_t pds_lnp_item_list[] = {
	DECLARE_ITEM(PDS_LNP_PARAM_ADDR,
	PDS_FILE_APP_DATA1_13_IDX,
	(uint8_t)PDS_LNP_PARAM_ITEM_ID,
	PDS_LNP_PARAM_SIZE,
	PDS_LNP_PARAM_OFFSET),
	DECLARE_ITEM(PDS_LRFP_PARAM_ADDR,
	PDS_FILE_APP_DATA1_13_IDX,
	(uint8_t)PDS_LRFP_PARAM_ITEM_ID,
	PDS_LRFP_PARAM_SIZE,
	PDS_LRFP_PARAM_OFFSET)
};
#endif


/************************** Function prototypes ********************************/
/* Callback Functions */
static void joindata_callback(StackRetStatus_t status);
static void appdata_callback(void *appHandle, appCbParams_t *appdata);
static void appTimerCb(void *data);

#if (_DEBUG_ == 1)
static void assertHandler(SystemAssertLevel_t level, uint16_t code);
#endif /* #if (_DEBUG_ == 1) */

#if (ENABLE_PDS == 1)
	void lnp_pds_reg_cb(void);
	StackRetStatus_t lnp_pds_reg(void);
#endif


/************************** Function definitions ********************************/
void lorawan_main (void)
{
	StackRetStatus_t status;
	bool pds_status = false;
	
	resource_init();
	
	/* Delay Init */
	delay_init();
	
	/* HAL Init */
	HAL_RadioInit();
	
	/*SW Timer Init */
	SystemTimerInit();
	
	/* AES Init */
	AESInit();
	
	/* PDS Init */
	PDS_Init();
	
#ifdef CONF_PMM_ENABLE
	/* Sleep Init */
	SleepTimerInit();
#endif
	
	/* Interrupt Enable */
	INTERRUPT_GlobalInterruptEnable();
	
	/* Initialize LoRaWAN Stack */
	LORAWAN_Init(appdata_callback,joindata_callback);
	
#if (ENABLE_PDS == 1)
	lnp_pds_reg();
#endif
	
	/* LoRaWAN Stack RESET */
	LORAWAN_Reset(ISM_NA915);
	/* Read DEV EUI from EDBG */
	dev_eui_read();
#if (NA_BAND == 1 || AU_BAND == 1)
#if (RANDOM_NW_ACQ == 0)
    #define MAX_NA_CHANNELS 72
    #define MAX_SUBBAND_CHANNELS 8

    ChannelParameters_t ch_params;

    uint8_t allowed_min_125khz_ch,allowed_max_125khz_ch,allowed_500khz_channel;

    allowed_min_125khz_ch = (SUBBAND-1)*MAX_SUBBAND_CHANNELS;

    allowed_max_125khz_ch = ((SUBBAND-1)*MAX_SUBBAND_CHANNELS) + 7 ;

    allowed_500khz_channel = SUBBAND+63;

    for (ch_params.channelId = 0; ch_params.channelId < MAX_NA_CHANNELS; ch_params.channelId++)
    {
        if((ch_params.channelId >= allowed_min_125khz_ch) && (ch_params.channelId <= allowed_max_125khz_ch))
        {
            ch_params.channelAttr.status = true;
        }
        else if(ch_params.channelId == allowed_500khz_channel)
        {
            ch_params.channelAttr.status = true;
        }
        else
        {
            ch_params.channelAttr.status = false;
        }
		
        LORAWAN_SetAttr(CH_PARAM_STATUS, &ch_params);
    }
#endif /* #if (RANDOM_NW_ACQ == 0) */
#endif /* #if (NA_BAND == 1 || AU_BAND == 1) */

	pds_status = PDS_IsRestorable();
	if(false == pds_status)
	{
		/* Set the supported class type */
		status = LORAWAN_GetAttr(EDCLASS_SUPPORTED, NULL, &edClassSupported);
		
		if (LORAWAN_SUCCESS != status)
		{
			printf("Get EDCLASS_SUPPORTED failed = %d\n\r", status);
			return;
		}
	}
	else
	{
		uint8_t ed_class = 0;
		
		/* Restore the stored parameters from PDS */
		PDS_RestoreAll();
		
		/* Get ED Class type */
		LORAWAN_GetAttr(EDCLASS, NULL, &ed_class);
		if((ed_class & CLASS_B) || (ed_class & CLASS_C))
		{
			LorawanMcastDevAddr_t group_addr;
			LorawanMcastNwkSkey_t group_nwk_s_key;
			LorawanMcastAppSkey_t group_app_s_key;
			
			group_addr.groupId = 0;
			memcpy((uint8_t *)&group_addr.mcast_dev_addr, ble_lnp_params.mcast_dev_addr, sizeof(ble_lnp_params.mcast_dev_addr));
			group_nwk_s_key.groupId = 0;
			memcpy(group_nwk_s_key.mcastNwkSKey, ble_lnp_params.mcast_nwk_s_key, sizeof(ble_lnp_params.mcast_nwk_s_key));
			group_app_s_key.groupId = 0;
			memcpy(group_app_s_key.mcastAppSKey, ble_lnp_params.mcast_app_s_key, sizeof(ble_lnp_params.mcast_app_s_key));
			
			LORAWAN_SetAttr(MCAST_ENABLE, &ble_lnp_params.mcast);
			LORAWAN_SetAttr(MCAST_GROUP_ADDR, &group_addr);
			LORAWAN_SetAttr(MCAST_NWKS_KEY, &group_nwk_s_key);
			LORAWAN_SetAttr(MCAST_APPS_KEY, &group_app_s_key);
		}
		SYSTEM_PostTask(APP_TASK_ID);
	}	
	SwTimerCreate(&appTimerId);
}

static void joindata_callback(StackRetStatus_t status)
{
	if(LORAWAN_SUCCESS == status)
	{
		printf("LoRaWAN join Successful.\r\n");
		/* Update Join status flag */
		lora_join_state = JOINED;
	}
	else
	{
		printf("LoRaWAN join denied, will retry in a seconds.\r\n");
		lora_join_state = NOT_JOINED;
		SwTimerStart(appTimerId,MS_TO_US(1000),SW_TIMEOUT_RELATIVE,(void *)appTimerCb,NULL); // Rejoin again after a Seconds
	}
}

static void appdata_callback(void *appHandle, appCbParams_t *appdata)
{
	if (LORAWAN_EVT_RX_DATA_AVAILABLE == appdata->evt)
	{
		//printf("Rx data Received - Status: %d\r\n",appdata->param.rxData.status);
	}
	else if(LORAWAN_EVT_TRANSACTION_COMPLETE == appdata->evt)
	{
		//printf("Transaction Complete - Status: %d\r\n",appdata->param.transCmpl.status);
	}

}

// Application Periodic timer callback handler
static void appTimerCb(void *data)
{
	SYSTEM_PostTask(APP_TASK_ID);
}

#if (_DEBUG_ == 1)
static void assertHandler(SystemAssertLevel_t level, uint16_t code)
{
	printf("\r\n%04x\r\n", code);
	(void)level;
}
#endif /* #if (_DEBUG_ == 1) */


SYSTEM_TaskStatus_t APP_TaskHandler(void)
{
	StackRetStatus_t status;
	
	if((lora_join_state == NOT_JOINED) && ble_lnp_params.provision_cmd)
	{
		/* Send Join request */
		status = LORAWAN_Join((ActivationType_t)ble_lnp_params.join_method);
		if (status == LORAWAN_SUCCESS)
		{
			lora_join_state = JOINING;
		}
		else
		{
			printf("\r\nLORAWAN Join Request failed = 0x%02X\n\r", status);
		}
	}
	else if(lora_join_state == JOINED)
	{
		/* Send application data */
		lorawanSendReq.buffer = &app_buf;
		lorawanSendReq.bufferLength = sizeof(app_buf);
		lorawanSendReq.confirmed = LORAWAN_UNCNF;
		lorawanSendReq.port = 1;
		status = LORAWAN_Send(&lorawanSendReq);
		if (LORAWAN_SUCCESS == status)
		{
			//printf("Data Sent\r\n");
		}
	}	
	
	return SYSTEM_TASK_SUCCESS;
}


#if (ENABLE_PDS == 1)
StackRetStatus_t lnp_pds_reg(void)
{
	PdsStatus_t pds_result = PDS_OK;
	PdsFileMarks_t filemarks;
	
	/* File ID LNP - Register */
	filemarks.fileMarkListAddr = lnp_pds_ops;
	filemarks.numItems =  (uint8_t)(PDS_LNP_PARAM_ITEM_ID_MAX_VALUE & 0x00FF);
	filemarks.itemListAddr = (ItemMap_t *)&pds_lnp_item_list;
	filemarks.fIDcb = lnp_pds_reg_cb;
	
	pds_result = PDS_RegFile(PDS_FILE_APP_DATA1_13_IDX,filemarks);
	if(PDS_OK != pds_result)
	{
		printf("PDS register file failed = 0x%02X", pds_result);
	}
	return pds_result;
}

void lnp_pds_reg_cb(void)
{
	
}

#endif /* #if (ENABLE_PDS == 1) */

static void print_reset_causes(void)
{
	enum system_reset_cause rcause = system_get_reset_cause();
	printf("Last reset cause: ");
	if(rcause & (1 << 6)) {
		printf("System Reset Request\r\n");
	}
	if(rcause & (1 << 5)) {
		printf("Watchdog Reset\r\n");
	}
	if(rcause & (1 << 4)) {
		printf("External Reset\r\n");
	}
	if(rcause & (1 << 2)) {
		printf("Brown Out 33 Detector Reset\r\n");
	}
	if(rcause & (1 << 1)) {
		printf("Brown Out 12 Detector Reset\r\n");
	}
	if(rcause & (1 << 0)) {
		printf("Power-On Reset\r\n");
	}
}

/**
 * \mainpage
 * \section preface Preface
 * This is the reference manual for the LoRaWAN Provisioning Over BLE Application
 */
int main(void)
{
    /* System Initialization */
    system_init();
    /* Initialize the delay driver */
    delay_init();
    /* Initialize the board target resources */
    board_init();

    INTERRUPT_GlobalInterruptEnable();
    /* Initialize the Serial Interface */
    sio2host_init();

    print_reset_causes();
#if (_DEBUG_ == 1)
    SYSTEM_AssertSubscribe(assertHandler);
#endif
    /* Initialize LoRaWAN and BLE stack */
	lorawan_main();
	ble_apps_init();
	
    while (1)
    {
		/* BLE event task will not be checked when LoRaWAN end device is trying to join the netwrok */
		if(lora_join_state != JOINING)
		{
			ble_event_task();
		}
		SYSTEM_RunTasks();
    }
}

