/**
 *
 * \file
 *
 * \brief NMC1500 Peripherials Application Interface.
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

#ifdef _M2M_ATE_FW_
/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
INCLUDES
*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*/
#include "driver/include/m2m_ate_mode.h"
#include "driver/source/nmasic.h"
#include "driver/source/nmdrv.h"
#include "m2m_hif.h"
#include "driver/source/nmbus.h"
#include "bsp/include/nm_bsp.h"

/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
MACROS
*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*/
#define rInterrupt_CORTUS_0				(0x10a8)
#define rInterrupt_CORTUS_1				(0x10ac)
#define rInterrupt_CORTUS_2				(0x10b0)

#define rBurstTx_NMI_TX_RATE			(0x161d00)
#define rBurstTx_NMI_NUM_TX_FRAMES		(0x161d04)
#define rBurstTx_NMI_TX_FRAME_LEN		(0x161d08)
#define rBurstTx_NMI_TX_CW_PARAM		(0x161d0c)
#define rBurstTx_NMI_TX_GAIN			(0x161d10)
#define rBurstTx_NMI_TX_DPD_CTRL		(0x161d14)
#define rBurstTx_NMI_USE_PMU			(0x161d18)
#define rBurstTx_NMI_TEST_CH			(0x161d1c)
#define rBurstTx_NMI_TX_PHY_CONT		(0x161d20)
#define rBurstTx_NMI_TX_CW_MODE			(0x161d24)
#define rBurstTx_NMI_TEST_XO_OFF		(0x161d28)
#define rBurstTx_NMI_USE_EFUSE_XO_OFF   (0x161d2c)

#define rBurstRx_NMI_RX_ALL_PKTS_CONT	(0x9898)
#define rBurstRx_NMI_RX_ERR_PKTS_CONT	(0x988c)

#define TX_DGAIN_MAX_NUM_REGS			(4)
#define TX_DGAIN_REG_BASE_ADDRESS		(0x1240)
#define TX_GAIN_CODE_MAX_NUM_REGS		(3)
#define TX_GAIN_CODE_BASE_ADDRESS		(0x1250)
#define TX_PA_MAX_NUM_REGS				(3)
#define TX_PA_BASE_ADDRESS				(0x1e58)
/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
VARIABLES
*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*/
volatile static uint8	gu8AteIsRunning	= 0;	/*!< ATE firmware status, 1 means ATE is running otherwise stopped */
volatile static uint8	gu8RxState		= 0;	/*!< RX status, 1 means Rx is running otherwise stopped */
volatile static uint8	gu8TxState		= 0;	/*!< TX status, 1 means Tx is running otherwise stopped */
volatile static uint32	gaAteFwTxRates[M2M_ATE_MAX_NUM_OF_RATES] =
{
	0x01, 0x02, 0x05, 0x0B,							/*B-Rats*/
	0x06, 0x09, 0x0C, 0x12, 0x18, 0x24, 0x30, 0x36,	/*G-Rats*/
	0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87	/*N-Rats*/
};

/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
STATIC FUNCTIONS
*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*/
static void m2m_ate_set_rx_status(uint8 u8Value)
{
	gu8RxState = u8Value;
}

static void m2m_ate_set_tx_status(uint8 u8Value)
{
	gu8TxState = u8Value;
}

/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
FUNCTION IMPLEMENTATION
*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*/
/*!
@fn	\
	sint8 m2m_ate_init(void);

@brief
	This function used to download ATE firmware from flash and start it

@return
	The function SHALL return 0 for success and a negative value otherwise.
*/
sint8 m2m_ate_init(void)
{
	sint8 s8Ret = M2M_SUCCESS;
	uint8 u8WifiMode = M2M_WIFI_MODE_CONFIG;
	
	s8Ret = nm_drv_init(&u8WifiMode);
	
	return s8Ret;
}

/*!
@fn	\
	sint8 m2m_ate_deinit(void);

@brief
	De-Initialization of ATE firmware mode 

@return
	The function SHALL return 0 for success and a negative value otherwise.
*/
sint8 m2m_ate_deinit(void)
{
	return nm_drv_deinit(NULL);
}

/*!
@fn	\
	sint8 m2m_ate_set_fw_state(uint8);

@brief
	This function used to change ATE firmware status from running to stopped or vice versa.

@param [in]	u8State
		Required state of ATE firmware, one of \ref tenuM2mAteFwState enumeration values.
@return
	The function SHALL return 0 for success and a negative value otherwise.
\sa
	m2m_ate_init
*/
sint8 m2m_ate_set_fw_state(uint8 u8State)
{
	sint8		s8Ret	= M2M_SUCCESS;
	uint32_t	u32Val	= 0;
	
	if((M2M_ATE_FW_STATE_STOP == u8State) && (M2M_ATE_FW_STATE_STOP != gu8AteIsRunning))
	{
		u32Val = nm_read_reg(rNMI_GLB_RESET);
		u32Val &= ~(1 << 10);
		s8Ret = nm_write_reg(rNMI_GLB_RESET, u32Val);
		gu8AteIsRunning = M2M_ATE_FW_STATE_STOP;
	}
	else if((M2M_ATE_FW_STATE_RUN == u8State) && (M2M_ATE_FW_STATE_RUN != gu8AteIsRunning))
	{
		/* 0x1118[0]=0 at power-on-reset: pad-based control. */
		/* Switch cortus reset register to register control. 0x1118[0]=1. */
		u32Val = nm_read_reg(rNMI_BOOT_RESET_MUX);
		u32Val |= (1 << 0);
		s8Ret = nm_write_reg(rNMI_BOOT_RESET_MUX, u32Val);
		if(M2M_SUCCESS != s8Ret) 
		{
			goto __EXIT;
		}
		/**
		Write the firmware download complete magic value 0x10ADD09E at
		location 0xFFFF000C (Cortus map) or C000C (AHB map).
		This will let the boot-rom code execute from RAM.
		**/
		s8Ret = nm_write_reg(0xc0000, 0x71);
		if(M2M_SUCCESS != s8Ret) 
		{
			goto __EXIT;
		}

		u32Val = nm_read_reg(rNMI_GLB_RESET);
		if((u32Val & (1ul << 10)) == (1ul << 10)) 
		{
			u32Val &= ~(1ul << 10);
			s8Ret = nm_write_reg(rNMI_GLB_RESET, u32Val);
			if(M2M_SUCCESS != s8Ret) 
			{
				goto __EXIT;
			}
		}
		
		u32Val |= (1ul << 10);
		s8Ret = nm_write_reg(rNMI_GLB_RESET, u32Val);
		if(M2M_SUCCESS != s8Ret) 
		{
			goto __EXIT;
		}
		gu8AteIsRunning = M2M_ATE_FW_STATE_RUN;
	}
	else
	{
		s8Ret = M2M_ATE_ERR_UNHANDLED_CASE;
	}
	
__EXIT:
	if((M2M_SUCCESS == s8Ret) && (M2M_ATE_FW_STATE_RUN == gu8AteIsRunning))
	{
		nm_bsp_sleep(500);	/*wait for ATE firmware start up*/
	}
	return s8Ret;
}

/*!
@fn	\
	sint8 m2m_ate_get_fw_state(uint8);

@brief
	This function used to return status of ATE firmware.

@return
	The function SHALL return status of ATE firmware, one of \ref tenuM2mAteFwState enumeration values.
\sa
	m2m_ate_init, m2m_ate_set_fw_state
*/
sint8 m2m_ate_get_fw_state(void)
{
	return gu8AteIsRunning;
}

/*!
@fn	\
	uint32 m2m_ate_get_tx_rate(uint8);

@brief
	This function used to return value of TX rate required by application developer.

@param [in]	u8Index
		Index of required rate , one of \ref tenuM2mAteTxIndexOfRates enumeration values.
@return
	The function SHALL return 0 for in case of failure otherwise selected rate value.
\sa
	tenuM2mAteTxIndexOfRates
*/
uint32 m2m_ate_get_tx_rate(uint8 u8Index)
{
	if(M2M_ATE_MAX_NUM_OF_RATES <= u8Index)
	{
		return 0;
	}
	return gaAteFwTxRates[u8Index];
}

/*!
@fn	\
	sint8 m2m_ate_get_tx_status(void);

@brief
	This function used to return status of TX test case either running or stopped.

@return
	The function SHALL return status of ATE firmware, 1 if TX is running otherwise 0.
\sa
	m2m_ate_start_tx, m2m_ate_stop_tx
*/
sint8 m2m_ate_get_tx_status(void)
{
	return gu8TxState;
}

/*!
@fn	\
	sint8 m2m_ate_start_tx(tstrM2mAteTx *)

@brief
	This function used to start TX test case.

@param [in]	strM2mAteTx
		Type of \ref tstrM2mAteTx, with the values required to enable TX test case. You must use \ref m2m_ate_init first.
@return
	The function SHALL return 0 for success and a negative value otherwise.
\sa
	m2m_ate_init, m2m_ate_stop_tx, m2m_ate_get_tx_status
*/
sint8 m2m_ate_start_tx(tstrM2mAteTx * strM2mAteTx)
{
	sint8	s8Ret = M2M_SUCCESS;
	uint8	u8LoopCntr = 0;
	
	if(NULL == strM2mAteTx) 
	{
		s8Ret = M2M_ATE_ERR_VALIDATE;
		goto __EXIT;
	}
	
	if(0 != m2m_ate_get_tx_status()) 
	{
		s8Ret = M2M_ATE_ERR_TX_ALREADY_RUNNING;
		goto __EXIT;
	}
	
	if(0 != m2m_ate_get_rx_status())
	{
		s8Ret = M2M_ATE_ERR_RX_ALREADY_RUNNING;
		goto __EXIT;
	}
	
	if(	(strM2mAteTx->channel_num < M2M_ATE_CHANNEL_1) || 
		(strM2mAteTx->channel_num > M2M_ATE_CHANNEL_14) || 
		(strM2mAteTx->tx_gain_sel < M2M_ATE_TX_GAIN_DYNAMIC)	||
		(strM2mAteTx->tx_gain_sel > M2M_ATE_TX_GAIN_TELEC) ||
		(strM2mAteTx->frame_len > M2M_ATE_MAX_FRAME_LENGTH) ||
		(strM2mAteTx->frame_len < M2M_ATE_MIN_FRAME_LENGTH)
	)
	{
		s8Ret = M2M_ATE_ERR_VALIDATE;
		goto __EXIT;
	}
	
	if(	(strM2mAteTx->duty_cycle < M2M_ATE_TX_DUTY_MAX_VALUE /*1*/) ||
		(strM2mAteTx->duty_cycle > M2M_ATE_TX_DUTY_MIN_VALUE /*10*/ ) ||
		(strM2mAteTx->dpd_ctrl < M2M_ATE_TX_DPD_DYNAMIC)	||
		(strM2mAteTx->dpd_ctrl > M2M_ATE_TX_DPD_ENABLED)  ||
		(strM2mAteTx->use_pmu < M2M_ATE_PMU_DISBLE)	||
		(strM2mAteTx->use_pmu > M2M_ATE_PMU_ENABLE)	||
		(strM2mAteTx->phy_burst_tx < M2M_ATE_TX_SRC_MAC) ||
		(strM2mAteTx->phy_burst_tx > M2M_ATE_TX_SRC_PHY) ||
		(strM2mAteTx->cw_tx < M2M_ATE_TX_MODE_NORM) ||
		(strM2mAteTx->cw_tx > M2M_ATE_TX_MODE_CW)
	)
	{
		s8Ret = M2M_ATE_ERR_VALIDATE;
		goto __EXIT;
	}
	
	for(u8LoopCntr=0; u8LoopCntr<M2M_ATE_MAX_NUM_OF_RATES; u8LoopCntr++) 
	{
		if(gaAteFwTxRates[u8LoopCntr] == strM2mAteTx->data_rate)
		{
			break;
		}
	}
	
	if(M2M_ATE_MAX_NUM_OF_RATES == u8LoopCntr) 
	{
		s8Ret = M2M_ATE_ERR_VALIDATE;
		goto __EXIT;
	}
	
	s8Ret += nm_write_reg(rBurstTx_NMI_USE_PMU, strM2mAteTx->use_pmu);
	s8Ret += nm_write_reg(rBurstTx_NMI_TX_PHY_CONT, strM2mAteTx->phy_burst_tx);
	s8Ret += nm_write_reg(rBurstTx_NMI_NUM_TX_FRAMES, strM2mAteTx->num_frames);
	s8Ret += nm_write_reg(rBurstTx_NMI_TX_GAIN, strM2mAteTx->tx_gain_sel);
	s8Ret += nm_write_reg(rBurstTx_NMI_TEST_CH, strM2mAteTx->channel_num);
	s8Ret += nm_write_reg(rBurstTx_NMI_TX_FRAME_LEN, strM2mAteTx->frame_len);
	s8Ret += nm_write_reg(rBurstTx_NMI_TX_CW_PARAM, strM2mAteTx->duty_cycle);
	s8Ret += nm_write_reg(rBurstTx_NMI_TX_DPD_CTRL, strM2mAteTx->dpd_ctrl);
	s8Ret += nm_write_reg(rBurstTx_NMI_TX_RATE, strM2mAteTx->data_rate);
	s8Ret += nm_write_reg(rBurstTx_NMI_TX_CW_MODE, strM2mAteTx->cw_tx);
	s8Ret += nm_write_reg(rBurstTx_NMI_TEST_XO_OFF, strM2mAteTx->xo_offset_x1000);
	s8Ret += nm_write_reg(rBurstTx_NMI_USE_EFUSE_XO_OFF, strM2mAteTx->use_efuse_xo_offset);
	
	if(M2M_SUCCESS == s8Ret) 
	{
		s8Ret += nm_write_reg(rInterrupt_CORTUS_0, 1);	/*Interrupt Cortus*/
		m2m_ate_set_tx_status(1);
		nm_bsp_sleep(200);  /*Recommended*/	
	}
	
__EXIT:
	return s8Ret;
}

/*!
@fn	\
	sint8 m2m_ate_stop_tx(void)

@brief
	This function used to stop TX test case.

@return
	The function SHALL return 0 for success and a negative value otherwise.
\sa
	m2m_ate_init, m2m_ate_start_tx, m2m_ate_get_tx_status
*/
sint8 m2m_ate_stop_tx(void)
{
	sint8	s8Ret = M2M_SUCCESS;
	
	s8Ret = nm_write_reg(rInterrupt_CORTUS_1, 1);
	if(M2M_SUCCESS == s8Ret)
	{
		m2m_ate_set_tx_status(0);
	}
	
	return s8Ret;
}

/*!
@fn	\
	sint8 m2m_ate_get_rx_status(uint8);

@brief
	This function used to return status of RX test case either running or stopped.

@return
	The function SHALL return status of ATE firmware, 1 if RX is running otherwise 0.
\sa
	m2m_ate_start_rx, m2m_ate_stop_rx
*/
sint8 m2m_ate_get_rx_status(void)
{
	return gu8RxState;
}

/*!
@fn	\
	sint8 m2m_ate_start_rx(tstrM2mAteRx *)

@brief
	This function used to start RX test case.

@param [in]	strM2mAteRx
		Type of \ref tstrM2mAteRx, with the values required to enable RX test case. You must use \ref m2m_ate_init first.
@return
	The function SHALL return 0 for success and a negative value otherwise.
\sa
	m2m_ate_init, m2m_ate_stop_rx, m2m_ate_get_rx_status
*/
sint8 m2m_ate_start_rx(tstrM2mAteRx * strM2mAteRxStr)
{
	sint8	s8Ret = M2M_SUCCESS;
	
	if(NULL == strM2mAteRxStr) 
	{
		s8Ret = M2M_ATE_ERR_VALIDATE;
		goto __EXIT;
	}
	
	if(0 != m2m_ate_get_tx_status()) 
	{
		s8Ret = M2M_ATE_ERR_TX_ALREADY_RUNNING;
		goto __EXIT;
	}
	
	if(0 != m2m_ate_get_rx_status())
	{
		s8Ret = M2M_ATE_ERR_RX_ALREADY_RUNNING;
		goto __EXIT;
	}
	
	if(	(strM2mAteRxStr->channel_num < M2M_ATE_CHANNEL_1) ||
		(strM2mAteRxStr->channel_num > M2M_ATE_CHANNEL_14)||
		(strM2mAteRxStr->use_pmu < M2M_ATE_PMU_DISBLE)	 ||
		(strM2mAteRxStr->use_pmu > M2M_ATE_PMU_ENABLE)
	)
	{
		s8Ret = M2M_ATE_ERR_VALIDATE;
		goto __EXIT;
	}
	
	s8Ret += nm_write_reg(rBurstTx_NMI_TEST_CH, strM2mAteRxStr->channel_num);
	s8Ret += nm_write_reg(rBurstTx_NMI_USE_PMU, strM2mAteRxStr->use_pmu);
	s8Ret += nm_write_reg(rBurstTx_NMI_TEST_XO_OFF, strM2mAteRxStr->xo_offset_x1000);
	s8Ret += nm_write_reg(rBurstTx_NMI_USE_EFUSE_XO_OFF, strM2mAteRxStr->use_efuse_xo_offset);
	
	if(M2M_SUCCESS == s8Ret) 
	{
		s8Ret += nm_write_reg(rInterrupt_CORTUS_2, 1);	/*Interrupt Cortus*/
		m2m_ate_set_rx_status(1);
		nm_bsp_sleep(10);  /*Recommended*/	
	}
	
__EXIT:
	return s8Ret;
}

/*!
@fn	\
	sint8 m2m_ate_stop_rx(void)

@brief
	This function used to stop RX test case.

@return
	The function SHALL return 0 for success and a negative value otherwise.
\sa
	m2m_ate_init, m2m_ate_start_rx, m2m_ate_get_rx_status
*/
sint8 m2m_ate_stop_rx(void)
{
	m2m_ate_set_rx_status(0);
	nm_bsp_sleep(200);  /*Recommended*/	
	return M2M_SUCCESS;
}

/*!
@fn	\
	sint8 m2m_ate_read_rx_status(tstrM2mAteRxStatus *)

@brief
	This function used to read RX statistics from ATE firmware.

@param [out]	strM2mAteRxStatus
		Type of \ref tstrM2mAteRxStatus used to save statistics of RX test case. You must use \ref m2m_ate_start_rx first.
@return
	The function SHALL return 0 for success and a negative value otherwise.
\sa
	m2m_ate_init, m2m_ate_start_rx
*/
sint8 m2m_ate_read_rx_status(tstrM2mAteRxStatus *strM2mAteRxStatus)
{
	sint8	s8Ret = M2M_SUCCESS;
	
	if(NULL == strM2mAteRxStatus) 
	{
		s8Ret = M2M_ATE_ERR_VALIDATE;
		goto __EXIT;
	}
	
	if(0 != m2m_ate_get_tx_status()) 
	{
		s8Ret = M2M_ATE_ERR_TX_ALREADY_RUNNING;
		goto __EXIT;
	}
	
	strM2mAteRxStatus->num_rx_pkts  = nm_read_reg(rBurstRx_NMI_RX_ALL_PKTS_CONT);
	strM2mAteRxStatus->num_err_pkts = nm_read_reg(rBurstRx_NMI_RX_ERR_PKTS_CONT);
	
__EXIT:
	return s8Ret;
}
#endif //_M2M_ATE_FW_