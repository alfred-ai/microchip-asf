/**
 *
 * \file
 *
 * \brief This module contains NMC1000 bus wrapper APIs declarations.
 *
 * Copyright (c) 2016-2018 Atmel Corporation. All rights reserved.
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

#ifndef _NM_BUS_WRAPPER_H_
#define _NM_BUS_WRAPPER_H_

#include "common/include/nm_common.h"

/**
	BUS Type
**/
#define  NM_BUS_TYPE_I2C	((uint8)0)
#define  NM_BUS_TYPE_SPI	((uint8)1)
#define  NM_BUS_TYPE_SDIO	((uint8)3)
/**
	IOCTL commands
**/
#define NM_BUS_IOCTL_R			((uint8)0)	/*!< Read only ==> I2C. Parameter:tstrNmI2cDefault */
#define NM_BUS_IOCTL_W			((uint8)1)	/*!< Write only ==> I2C. Parameter type tstrNmI2cDefault*/
#define NM_BUS_IOCTL_W_SPECIAL	((uint8)2)	/*!< Write two buffers within the same transaction
												(same start/stop conditions) ==> I2C only. Parameter:tstrNmI2cSpecial */
#define NM_BUS_IOCTL_RW			((uint8)3)	/*!< Read/Write at the same time ==> SPI only. Parameter:tstrNmSpiRw */

#define NM_BUS_IOCTL_WR_RESTART	((uint8)4) 	/*!< Write buffer then made restart condition then read ==> I2C only. parameter:tstrNmI2cSpecial */ 
#define NM_BUS_IOCTL_CMD_52		((uint8)5)	/*!< Issue SDIO Command 52. parameter:tstrNmSdioCmd52 */ 
#define NM_BUS_IOCTL_CMD_53		((uint8)6)	/*!< Issue SDIO Command 53. parameter:tstrNmSdioCmd53 */ 

/**
*	@struct	tstrNmBusCapabilities
*	@brief	Structure holding bus capabilities information
*	@sa	NM_BUS_TYPE_I2C, NM_BUS_TYPE_SPI
*/ 
typedef struct
{
	uint16	u16MaxTrxSz;	/*!< Maximum transfer size. Must be >= 16 bytes*/
} tstrNmBusCapabilities;

/**
*	@struct	tstrNmI2cDefault
*	@brief	Structure holding I2C default operation parameters
*	@sa		NM_BUS_IOCTL_R, NM_BUS_IOCTL_W
*/ 
typedef struct
{
	uint8 u8SlaveAdr;
	uint8	*pu8Buf;	/*!< Operation buffer */
	uint16	u16Sz;		/*!< Operation size */
} tstrNmI2cDefault;

/**
*	@struct	tstrNmI2cSpecial
*	@brief	Structure holding I2C special operation parameters
*	@sa		NM_BUS_IOCTL_W_SPECIAL
*/ 
typedef struct
{
	uint8 u8SlaveAdr;
	uint8	*pu8Buf1;	/*!< pointer to the 1st buffer */
	uint8	*pu8Buf2;	/*!< pointer to the 2nd buffer */	
	uint16	u16Sz1;		/*!< 1st buffer size */
	uint16	u16Sz2;		/*!< 2nd buffer size */
} tstrNmI2cSpecial;

/**
*	@struct	tstrNmSpiRw
*	@brief	Structure holding SPI R/W parameters
*	@sa		NM_BUS_IOCTL_RW
*/ 
typedef struct
{
	uint8	*pu8InBuf;		/*!< pointer to input buffer. 
							Can be set to null and in this case zeros should be sent at MOSI */
	uint8	*pu8OutBuf;		/*!< pointer to output buffer. 
							Can be set to null and in this case data from MISO can be ignored  */
	uint16	u16Sz;			/*!< Transfere size */	
} tstrNmSpiRw;
 
#ifdef CONF_WILC_USE_SDIO
/**
*	@struct	tstrNmSpiRw
*	@brief	Structure holding Cmd 52 parameters
*	@sa		NM_BUS_IOCTL_CMD_52
*/ 
typedef struct {
	uint32_t read_write:1;	/*!< 0 to read, 1 to write. */
	uint32_t function:3;	/*!< SDIO function */
	uint32_t raw:1;
	uint32_t address:17;
	uint32_t data:8;
} tstrNmSdioCmd52;

/**
*	@struct	tstrNmSpiRw
*	@brief	Structure holding Cmd 53 parameters
*	@sa		NM_BUS_IOCTL_CMD_53
*/ 
typedef struct {
	uint32_t read_write:1;	/*!< 0 to read, 1 to write. */
	uint32_t function:3;	/*!< SDIO function */
	uint32_t block_mode:1;	/*!< 1 for block mode, 0 for byte mode*/
	uint32_t increment:1;
	uint32_t address:17;
	uint32_t count:9;		/*!< number of bytes or blocks according to block_mode*/
	uint8_t *buffer;
	uint32_t block_size;
} tstrNmSdioCmd53;

#endif /* CONF_WILC_USE_SDIO */

/*!< Bus capabilities. This structure must be declared at platform specific bus wrapper */
extern tstrNmBusCapabilities egstrNmBusCapabilities;

#ifdef __cplusplus
     extern "C" {
 #endif
/**
*	@fn		nm_bus_init
*	@brief	Initialize the bus wrapper
*	@return	ZERO in case of success and M2M_ERR_BUS_FAIL in case of failure
*/ 
sint8 nm_bus_init(void *);

/**
*	@fn		nm_bus_ioctl
*	@brief	send/receive from the bus
*	@param [in]	u8Cmd
*					IOCTL command for the operation
*	@param [in]	pvParameter
*					Arbitrary parameter depenging on IOCTL
*	@return	ZERO in case of success and M2M_ERR_BUS_FAIL in case of failure
*	@note	For SPI only, it's important to be able to send/receive at the same time
*/ 
sint8 nm_bus_ioctl(uint8 u8Cmd, void* pvParameter);

/**
*	@fn		nm_bus_deinit
*	@brief	De-initialize the bus wrapper
*	@return	ZERO in case of success and M2M_ERR_BUS_FAIL in case of failure
*/ 
sint8 nm_bus_deinit(void);

/*
*	@fn			nm_bus_reinit
*	@brief		re-initialize the bus wrapper
*	@param [in]	void *config
*					re-init configuration data
*	@return		ZERO in case of success and M2M_ERR_BUS_FAIL in case of failure
*/
sint8 nm_bus_reinit(void *config);
/*
*	@fn			nm_bus_get_chip_type
*	@brief		get chip type
*	@return		ZERO in case of success and M2M_ERR_BUS_FAIL in case of failure
*/ 
#ifdef __cplusplus
	 }
 #endif

#endif	/*_NM_BUS_WRAPPER_H_*/
