/**
 *
 * \file
 *
 * \brief This module contains SAMD21 BSP APIs implementation.
 *
 * Copyright (c) 2017 Atmel Corporation. All rights reserved.
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
 
#include "bsp/include/nm_bsp_samd21_app.h"
#include "common/include/nm_common.h"

#define BSP_MIN(x,y) ((x)>(y)?(y):(x))


#define SW1_PIN
#define SW1_MUX
#define SW1_LINE 

#ifdef WING_BOARD_WITH_LEDS_BUTTON
#define SW2_LINE	    3
#define SW2_PIN			PIN_PB03
#define SW2_MUX			MUX_PB03A_EIC_EXTINT3
#endif /* WING_BOARD_WITH_LEDS_BUTTON */

/*
   ---------------------------------
   ------ Module Pin Settings ------
   ---------------------------------
*/

#define LONG_PRESS_TIME			(1500/TICK_RES)	// ~2 sec
#define DEBOUNCE_TIME			(40/TICK_RES)	// ~50ms

/*
* Structure
*
*/
typedef struct
{
	tpfNmBspTimerCb	pfCb;
	uint32 u32Timeout;
	uint32 u32Period;
} tstrTimer;


typedef struct
{
	tstrTimer strTimer;
	uint8 u8Enabled;
} tstrWakeTimer;
/**
*
* Global variables
*/
uint32 gu32Jiffies1ms;
uint32 gu32Jiffies20ms;


static uint16 gu16Btn1Cnt, gu16Btn2Cnt;
static tpfNmBspBtnPress gpfBtns;
static uint8 gu8BtnIfg;
static tstrTimer gstrTimer20ms, gstrTimer1ms, gstrConfigurableTimer;
#if (defined _STATIC_PS_)||(defined _DYNAMIC_PS_)
static tstrWakeTimer gstrWakeTimer;
#endif

struct tcc_module tcc_instance;
struct tcc_module configurable_tcc;
/**
*
* Static functions
*/
static void btn_poll(void)
{
	bool btn_inactive;
	if (gu8BtnIfg & SW1) {
		if (gu16Btn1Cnt <= LONG_PRESS_TIME) {
			gu16Btn1Cnt++;
		}
		if (gu16Btn1Cnt == LONG_PRESS_TIME) {
			gpfBtns(SW1, 1); /* long press callback */
		}
		btn_inactive = (port_pin_get_input_level(BUTTON_0_PIN) == BUTTON_0_INACTIVE);
		if ((gu16Btn1Cnt >= DEBOUNCE_TIME) && (gu16Btn1Cnt < LONG_PRESS_TIME)
				&& btn_inactive) {
			gpfBtns(SW1, 0); /* Short press callback */
		}
		if (btn_inactive)
		{
			gu8BtnIfg &= ~SW1;
			gu16Btn1Cnt = 0;
			extint_chan_enable_callback(BUTTON_0_EIC_LINE, EXTINT_CALLBACK_TYPE_DETECT);
		}
	}

#ifdef WING_BOARD_WITH_LEDS_BUTTON
	if (gu8BtnIfg & SW2) {
		if (gu16Btn2Cnt <= LONG_PRESS_TIME) {
			gu16Btn2Cnt++;
		}
		if (gu16Btn2Cnt == LONG_PRESS_TIME) {
			gpfBtns(SW2, 1); /* long press callback */
		}
		btn_inactive = (port_pin_get_input_level(SW2_PIN) == BUTTON_0_INACTIVE);
		if ((gu16Btn2Cnt >= DEBOUNCE_TIME) && (gu16Btn2Cnt < LONG_PRESS_TIME)
				&& btn_inactive) {
			gpfBtns(SW2, 0); /* Short press callback */
		}
		if (btn_inactive)
		{
			gu8BtnIfg &= ~SW2;
			gu16Btn2Cnt = 0;
			extint_chan_enable_callback(SW2_LINE, EXTINT_CALLBACK_TYPE_DETECT);
		}
	}
#endif /* WING_BOARD_WITH_LEDS_BUTTON */
}

static void _tcc_callback_to_change_duty_cycle(struct tcc_module *const module_inst)
{
	gu32Jiffies1ms++;
	if(gstrTimer1ms.pfCb)
		gstrTimer1ms.pfCb();

	if(gu32Jiffies1ms%20 == 0)
	{
#ifdef _STATIC_PS_
		if((gstrWakeTimer.strTimer.pfCb)&&(gstrWakeTimer.u8Enabled))
		{
			gu32Jiffies20ms+=(TICK_RES_SLEEP/TICK_RES);
		}
else
#endif
		{
			gu32Jiffies20ms++;
		}
#ifdef _STATIC_PS_
		if(gstrWakeTimer.strTimer.pfCb)
		{
			if(NM_BSP_TIME_MSEC >= gstrWakeTimer.strTimer.u32Timeout)
			{
				nm_bsp_wake_ctrl(0);
				gstrWakeTimer.strTimer.pfCb();
				gstrWakeTimer.strTimer.u32Timeout = NM_BSP_TIME_MSEC + gstrWakeTimer.strTimer.u32Period;
			}
		}
#endif
		if(gstrTimer20ms.pfCb)
		{
			if(NM_BSP_TIME_MSEC >= gstrTimer20ms.u32Timeout)
			{
				gstrTimer20ms.pfCb();
				gstrTimer20ms.u32Timeout = NM_BSP_TIME_MSEC + gstrTimer20ms.u32Period;
			}
		}

		btn_poll();		
	}
}

/*
*	@fn			_tcc_configurable_timer_callback
*	@brief		Configurable Timer Callback
*	@date		08 October 2015
*	@version	1.0
*/

static void _tcc_configurable_timer_callback(struct tcc_module *const module_inst)
{
	if(gstrConfigurableTimer.pfCb)
		gstrConfigurableTimer.pfCb();
}


static void timer0_init(void)
{

	struct tcc_config config_tcc;
	tcc_get_config_defaults(&config_tcc, TCC0);

	//! [setup_change_config]
	config_tcc.counter.period = 750;
	config_tcc.counter.reload_action = TCC_RELOAD_ACTION_GCLK;
	config_tcc.counter.clock_prescaler = TCC_CLOCK_PRESCALER_DIV64;
	tcc_init(&tcc_instance, TCC0, &config_tcc);
	tcc_enable(&tcc_instance);

	//! [setup_register_callback]
	tcc_register_callback(
	&tcc_instance,
	_tcc_callback_to_change_duty_cycle,
	TCC_CALLBACK_CHANNEL_0);
	
	tcc_enable_callback(&tcc_instance,
	TCC_CALLBACK_CHANNEL_0);
}

/*
*	@fn			configurable_timer_init
*	@brief		Initialize the Configurable Timer
*	@date		08 October 2015
*	@version	1.0
*/

static void configurable_timer_init(uint32_t u32Period)
{
	struct tcc_config config_tcc;
	tcc_get_config_defaults(&config_tcc, TCC1);
	M2M_DBG("Timer period: %lu\r\n", u32Period);

	//! [setup_change_config]
	config_tcc.counter.period = u32Period;
	tcc_init(&configurable_tcc, TCC1, &config_tcc);
	tcc_enable(&configurable_tcc);

	//! [setup_register_callback]
	tcc_register_callback(
	&configurable_tcc,
	_tcc_configurable_timer_callback,
	TCC_CALLBACK_OVERFLOW);
}


static void btn_isr(void)
{
	gu8BtnIfg |= SW1;
	extint_chan_disable_callback(BUTTON_0_EIC_LINE,
	EXTINT_CALLBACK_TYPE_DETECT);
}
#ifdef WING_BOARD_WITH_LEDS_BUTTON
static void btn2_isr(void)
{

	gu8BtnIfg |= SW2;
	extint_chan_disable_callback(SW2_LINE,
	EXTINT_CALLBACK_TYPE_DETECT);
}
#endif /* WING_BOARD_WITH_LEDS_BUTTON */

/*
*	@fn		nm_bsp_init
*	@brief	Initialize BSP
*	@return	0 in case of success and -1 in case of failure
*	@author	M.S.M
*	@date	11 July 2012
*	@version	1.0
*/
sint8 nm_bsp_app_init(void)
{
	gstrTimer20ms.pfCb = NULL;
	gstrTimer20ms.u32Timeout = 0;
	gstrTimer20ms.u32Period = 0;

#ifdef _STATIC_PS_
	gstrWakeTimer.strTimer.pfCb = NULL;
	gstrWakeTimer.strTimer.u32Timeout = 0;
	gstrWakeTimer.strTimer.u32Period = ((uint32)-1);
	gstrWakeTimer.u8Enabled = 0;
#endif

	gstrTimer1ms.pfCb = NULL;
	gstrTimer1ms.u32Timeout = 0;
	gstrTimer1ms.u32Period = 0;
	
	gstrConfigurableTimer.pfCb = NULL;
	gstrConfigurableTimer.u32Timeout = 0;
	gstrConfigurableTimer.u32Period = 0;
		
	timer0_init();
	
	return M2M_SUCCESS;
}

/*
*	@fn			nm_bsp_app_configurable_timer_init
*	@brief		Initialize the Configurable Timer
*	@date		08 October 2015
*	@version	1.0
*/
void nm_bsp_app_configurable_timer_init(uint32_t u32Period)
{
	configurable_timer_init(u32Period);	
}

/**
*	@fn		nm_bsp_deinit
*	@brief	De-iInitialize BSP
*	@return	0 in case of success and -1 in case of failure
*	@author	M. Abdelmawla
*	@date	11 July 2012
*	@version	1.0
*/
sint8 nm_bsp_app_deinit(void)
{
	return M2M_SUCCESS;
}

/*
*	@fn		nm_bsp_btn_init
*	@brief	Initialize buttons driver
*	@author	M.S.M
*	@date	28 OCT 2013
*	@version	1.0
*/

void nm_bsp_btn_init(tpfNmBspBtnPress pfBtnCb)
{
	//struct port_config pin_conf;
	struct extint_chan_conf config_extint_chan;
		
	gpfBtns = pfBtnCb;
	gu8BtnIfg = 0;
	gu16Btn1Cnt = 0;
	gu16Btn2Cnt = 0;

#ifdef WING_BOARD_WITH_LEDS_BUTTON	
	port_get_config_defaults(&pin_conf);

	/* Set buttons as inputs */
	pin_conf.direction  = PORT_PIN_DIR_INPUT;
	pin_conf.input_pull = PORT_PIN_PULL_UP;
	port_pin_set_config(SW2_PIN, &pin_conf);

	
	/*Configure SW1*/
	extint_chan_get_config_defaults(&config_extint_chan);

	config_extint_chan.gpio_pin           = SW2_PIN;
	config_extint_chan.gpio_pin_mux       = SW2_MUX;
	config_extint_chan.gpio_pin_pull      = EXTINT_PULL_UP;
	config_extint_chan.detection_criteria = EXTINT_DETECT_FALLING;

	extint_chan_set_config(SW2_LINE, &config_extint_chan);

	extint_register_callback(btn2_isr,
	SW2_LINE,
	EXTINT_CALLBACK_TYPE_DETECT);
	extint_chan_enable_callback(SW2_LINE,
	EXTINT_CALLBACK_TYPE_DETECT);
#endif /* WING_BOARD_WITH_LEDS_BUTTON */

	/*Configure SW2*/
	extint_chan_get_config_defaults(&config_extint_chan);

	config_extint_chan.gpio_pin           = BUTTON_0_EIC_PIN;
	config_extint_chan.gpio_pin_mux       = BUTTON_0_EIC_MUX;
	config_extint_chan.gpio_pin_pull      = EXTINT_PULL_UP;
	config_extint_chan.detection_criteria = EXTINT_DETECT_FALLING;

	extint_chan_set_config(BUTTON_0_EIC_LINE, &config_extint_chan);

	extint_register_callback(btn_isr,
	BUTTON_0_EIC_LINE,
	EXTINT_CALLBACK_TYPE_DETECT);

	extint_chan_enable_callback(BUTTON_0_EIC_LINE,
	EXTINT_CALLBACK_TYPE_DETECT);

}

/*
*	@fn		nm_bsp_uart_sendnm_bsp_uart_send
*	@author	M.S.M
*	@date	28 OCT 2013
*	@version	1.0
*/
void nm_bsp_uart_send(const uint8 *pu8Buf, uint16 u16Sz)
{

}
/**
*	@fn		nm_bsp_start_timer
*	@brief	Start 20ms timer
*	@author	M.S.M
*	@date	28 OCT 2013
*	@version	1.0
*/
void nm_bsp_start_timer(tpfNmBspTimerCb pfCb, uint32 u32Period)
{
	gstrTimer20ms.pfCb = pfCb;
	gstrTimer20ms.u32Timeout = u32Period+ NM_BSP_TIME_MSEC;
	gstrTimer20ms.u32Period = u32Period;
}

/*
*	@fn			nm_bsp_start_1ms_timer
*	@brief		Start 1ms timer
*	@date		08 October 2015
*	@version	1.0
*/
void nm_bsp_start_1ms_timer(tpfNmBspTimerCb pfCb)
{
	gstrTimer1ms.pfCb = pfCb;
}

/*
*	@fn			nm_bsp_start_configurable_timer
*	@brief		Start configurable timer
*	@date		08 October 2015
*	@version	1.0
*/
void nm_bsp_start_configurable_timer(tpfNmBspTimerCb pfCb)
{
	tcc_enable_callback(&configurable_tcc, TCC_CALLBACK_OVERFLOW);
	gstrConfigurableTimer.pfCb = pfCb;
}

/**
*	@fn		nm_bsp_stop_timer
*	@brief	Start 20ms timer
*	@author	M.S.M
*	@date	28 OCT 2013
*	@version	1.0
*/
void nm_bsp_stop_timer(void)
{
	gstrTimer20ms.pfCb = NULL;
}

/*
*	@fn			nm_bsp_stop_1ms_timer
*	@brief		Stop 1ms timer
*	@date		08 October 2015
*	@version	1.0
*/
void nm_bsp_stop_1ms_timer(void)
{
	gstrTimer1ms.pfCb = NULL;
}

/*
*	@fn			nm_bsp_stop_configurable_timer
*	@brief		Stop configurable timer
*	@date		08 October 2015
*	@version	1.0
*/
void nm_bsp_stop_configurable_timer(void)
{
	gstrConfigurableTimer.pfCb = NULL;
	tcc_disable_callback(&configurable_tcc, TCC_CALLBACK_OVERFLOW);
	tcc_disable(&configurable_tcc);
}

#ifdef _STATIC_PS_
/**
*	@fn		nm_bsp_register_wake_isr
*	@brief	REGISTER wake up timer 
*	@author	M.S.M
*	@date	28 OCT 2013
*	@version	1.0
*/
void nm_bsp_register_wake_isr(tpfNmBspIsr pfIsr,uint32 u32MsPeriod)
{

	gstrWakeTimer.strTimer.pfCb = pfIsr;
	gstrWakeTimer.strTimer.u32Timeout = u32MsPeriod + NM_BSP_TIME_MSEC;
	gstrWakeTimer.strTimer.u32Period = u32MsPeriod;
	gstrWakeTimer.u8Enabled = 0;
}
/**
*	@fn		nm_bsp_wake_ctrl
*	@brief	control wake up timer
*	@author	M.S.M
*	@date	28 OCT 2013
*	@version	1.0
*/
void nm_bsp_wake_ctrl(uint8 en)
{
	gstrWakeTimer.u8Enabled = en;
	if(en)
	{
		gstrWakeTimer.strTimer.u32Timeout = gstrWakeTimer.strTimer.u32Period + NM_BSP_TIME_MSEC;
	}
}
#endif
#if (defined _STATIC_PS_)||(defined _DYNAMIC_PS_)
/**
*	@fn		nm_bsp_enable_mcu_ps
*	@brief	Start POWER SAVE FOR MCU 
*	@author	M.S.M
*	@date	28 OCT 2013
*	@version	1.0
*/
void nm_bsp_enable_mcu_ps(void)
{
	if(!gu8BtnIfg)
	{
		if(gstrWakeTimer.u8Enabled)
		{

		}
	}
}
#endif


