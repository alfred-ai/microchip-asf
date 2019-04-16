/**
* \file
*
* \brief Phone Alert Status Application
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
/*
* Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
*/

/****************************************************************************************
*							        Includes	                                     	*
****************************************************************************************/
#include <asf.h>
#include "console_serial.h"
#include "at_ble_api.h"
#include "at_ble_trace.h"
#include "at_ble_errno.h"
#include "platform.h"
#include "console_serial.h"
#include "timer_hw.h"
#include "conf_extint.h"
#include "ble_manager.h"
#include "ble_utils.h"
#include "pas_client.h"
#include "pas_app.h"

volatile uint8_t press_count = DEVICE_SILENT;		/*!< button press count*/

volatile bool flag;					/*!< To send values once per button press*/

volatile bool app_state;			/*!< state of the app,true for connected false for disconnected*/

/***********************************************************************************
 *									Implementations                               *
 **********************************************************************************/

/**
 * @brief display alert status info notifies the application about state
 * @param[in] data
 */
static void display_alert_status_info(uint8_t *data)
{
	if (data[0] & BIT0_MASK)
	{
		DBG_LOG("Ringer State Active");
		} else {
		DBG_LOG("Ringer State Inactive");
	}
	
	if (data[0] & BIT1_MASK)
	{
		DBG_LOG("Vibration State Active");
		} else {
		DBG_LOG("Vibration State Inactive");
	}
	
	if (data[0] & BIT2_MASK)
	{
		DBG_LOG("Display State Active");
		} else {
		DBG_LOG("Display State Inactive");
	}
}

/**
 * @brief display alert status info notifies the application about state
 * @param[in] data
 */
static void display_ringer_setting_info(uint8_t *data)
{
	if (data[0] == RINGER_SILENT)
	{
		DBG_LOG_CONT("Ringer Silent");
	} else if (data[0] == RINGER_NORMAL)
	{
		DBG_LOG_CONT("Ringer Normal");
	}	
}

/**
 * @brief app_connected_state profile notifies the application about state
 * @param[in] connected
 */
static void app_connected_state(bool connected)
{
	app_state = connected;
	if (app_state == false)
	{
		press_count = DEVICE_SILENT;
	}
}

/**
 * @brief displays alerts status value came in read response
 * @param[in] data
 * @param[in] len  
 */
static void app_alert_status_read(uint8_t *data, uint8_t len)
{
	DBG_LOG("\r\nAlert Status read:");
	DBG_LOG_DEV("Length of the data is %d",len);
	display_alert_status_info(data);
}

/**
 * @brief displays ringer setting value came in read response
 * @param[in] data
 * @param[in] len  
 */
static void app_ringer_setting_read(uint8_t *data, uint8_t len)
{
	DBG_LOG("\r\nRinger setting read :");
	DBG_LOG_DEV("Length of the data is %d",len);
	display_ringer_setting_info(data);
}

/**
 * @brief displays alert status value came in notification
 * @param[in] data
 * @param[in] len  
 */
static void app_alert_status_notify(uint8_t *data, uint8_t len)
{
	DBG_LOG("\r\nNotified Alert Status :");
	DBG_LOG_DEV("length of the data is %d",len);
	display_alert_status_info(data);
}

/**
 * @brief displays ringer setting value came in notification
 * @param[in] data
 * @param[in] len  
 */
static void app_ringer_setting_notify(uint8_t *data, uint8_t len)
{
	DBG_LOG("\r\nNotified Ringer setting :");
	DBG_LOG_DEV("length of the data is %d",len);
	display_ringer_setting_info(data);
}

/**
 * @brief Button Press Callback 
 */
void button_cb(void)
{
	if (app_state)
	{
		flag = true;
	}
}

/**
 * @brief Timer Callback
 */
static void timer_callback_handler(void)
{
	/* Free to use for User Application */
}

/* To keep the app executing */
bool appp_exec = true;

int main(void)
{	
	at_ble_status_t status;
	#if SAMG55
	/* Initialize the SAM system. */
	sysclk_init();
	board_init();
	#elif SAM0
	system_init();
	#endif
	
	/* Initialize serial console */
	serial_console_init();
	
	/* Initializing the button */
	button_init();
	
	/* Initializing the hardware timer */
	hw_timer_init();
	
	/*Registration of timer callback*/
	hw_timer_register_callback(timer_callback_handler);
	
	DBG_LOG("Initializing Phone Alert Status Profile Application");
	
	register_alert_status_read_callback(app_alert_status_read);
	
	register_ringer_setting_read_callback(app_ringer_setting_read);
	
	register_alert_status_notification_callback(app_alert_status_notify);
	
	register_ringer_setting_notification_callback(app_ringer_setting_notify);
	
	register_connected_callback(app_connected_state);
	
	/* initialize the ble chip  and Set the device mac address */
	ble_device_init(NULL);
	
	/* Capturing the events  */
	while(appp_exec)
	{
		/* BLE Event Task */
		ble_event_task();
		if (flag)
		{
			/* Button debounce delay */
			delay_ms(350);
			flag = false;
			
			if (press_count == DEVICE_SILENT)
			{
				DBG_LOG("\r\nDevice to silent");
			} 
			else if (press_count == DEVICE_MUTE) 
			{
				DBG_LOG("\r\nDevice to Mute Once");
			} 
			else if (press_count == DEVICE_NORMAL) 
			{
				DBG_LOG("\r\nDevice to cancel mute");
			} 
			else if (press_count == READ_REQUEST)
			{
				DBG_LOG("\r\nreading the alert status and ringer setting");
				if ((status = pas_client_read_ringer_setting_char()) != AT_BLE_SUCCESS)
				{
					DBG_LOG("reading ringer control point invocation failed");
				}
				
				if ((status = pas_client_read_alert_status_char()) != AT_BLE_SUCCESS)
				{
					DBG_LOG("reading alert status invocation failed");
				}

				press_count = DEVICE_SILENT;
				continue;
			}

			pas_client_write_ringer_control_point(press_count);
			press_count++;
		}
	}

    ALL_UNUSED(status);
	
	return 0;
}
