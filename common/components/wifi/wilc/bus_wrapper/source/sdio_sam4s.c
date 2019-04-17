/**
 *
 * \file
 *
 * \brief SDIO Interface for SAM4S.
 *
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
#include "common/include/nm_common.h"
#ifdef CONF_WILC_USE_SDIO
#include "bus_wrapper/include/sdio_sam4s.h"
#include "../../memory/sd_mmc/sd_mmc.h"
#include "../../memory/sd_mmc/sd_mmc_protocol.h"
#include "hsmci.h"

#include <board.h>
#include <gpio.h>
#include <ioport.h>

#ifdef SDIO_SUPPORT_ENABLE
#include "asf.h" //for delay_ms

static void check_card_exist (void){
	sd_mmc_err_t err;
	uint8_t slot = 0;
		do {
		err = sd_mmc_check(slot);
		if ((SD_MMC_ERR_NO_CARD != err)
		&& (SD_MMC_INIT_ONGOING != err)
		&& (SD_MMC_OK != err)) {
			printf("Card install FAILED\n\r");
			printf("Please unplug and re-plug the card.\n\r");
			delay_ms(1000);
		}
	} while (SD_MMC_OK != err);
}

static int8_t wilc_cmd53(uint8_t rw_flag, uint8_t func_nb, uint32_t reg_addr,
uint8_t inc_addr,uint8_t BlkMode ,uint32_t Blksize, uint32_t count,uint32_t nb_block,bool access_block)
{
	if (Blksize >512)
	{
		return M2M_ERR_BUS_FAIL;
	}
	check_card_exist();
	bool ret = hsmci_adtc_start((rw_flag == SDIO_CMD53_READ_FLAG)?
	SDIO_CMD53_IO_R_BLOCK_EXTENDED :
	SDIO_CMD53_IO_W_BLOCK_EXTENDED,
	(count    << SDIO_CMD53_COUNT)
	| ((uint32_t)reg_addr << SDIO_CMD53_REG_ADDR)
	| ((uint32_t)inc_addr << SDIO_CMD53_OP_CODE)
	| ((uint32_t)BlkMode  << SDIO_CMD53_BLOCK_MODE)
	| ((uint32_t)func_nb  << SDIO_CMD53_FUNCTION_NUM)
	| ((uint32_t)rw_flag  << SDIO_CMD53_RW_FLAG),
	Blksize, nb_block, access_block);
	
	if (ret){
		return M2M_SUCCESS;
	}
	else{
		return M2M_ERR_BUS_FAIL;
	}
}

static int8_t wilc_cmd53_compact(uint8_t rw_flag, uint8_t func_nb, uint32_t reg_addr,
uint8_t inc_addr, uint32_t size, bool access_block)
{
	if (size >512)
	{
		return M2M_ERR_BUS_FAIL;
	}
	check_card_exist();
	bool ret =  hsmci_adtc_start((rw_flag == SDIO_CMD53_READ_FLAG)?
	SDIO_CMD53_IO_R_BYTE_EXTENDED :
	SDIO_CMD53_IO_W_BYTE_EXTENDED,
	((size % 512) << SDIO_CMD53_COUNT)
	| ((uint32_t)reg_addr << SDIO_CMD53_REG_ADDR)
	| ((uint32_t)inc_addr << SDIO_CMD53_OP_CODE)
	| ((uint32_t)0 << SDIO_CMD53_BLOCK_MODE)
	| ((uint32_t)func_nb << SDIO_CMD53_FUNCTION_NUM)
	| ((uint32_t)rw_flag << SDIO_CMD53_RW_FLAG),
	size, 1, access_block);
	
	if (ret){
	return M2M_SUCCESS;
	}
	else{
		return M2M_ERR_BUS_FAIL;
	}
}

static int8_t wilc_cmd52(uint8_t rw_flag, uint8_t func_nb,
uint32_t reg_addr, uint8_t rd_after_wr, uint8_t *io_data)
{
	if (io_data == NULL)
	{
		return M2M_ERR_BUS_FAIL;
	}
	check_card_exist();
	if (!hsmci_send_cmd(SDIO_CMD52_IO_RW_DIRECT,
	((uint32_t)*io_data << SDIO_CMD52_WR_DATA)
	| ((uint32_t)rw_flag << SDIO_CMD52_RW_FLAG)
	| ((uint32_t)func_nb << SDIO_CMD52_FUNCTION_NUM)
	| ((uint32_t)rd_after_wr << SDIO_CMD52_RAW_FLAG)
	| ((uint32_t)reg_addr << SDIO_CMD52_REG_ADRR))) {
		return M2M_ERR_BUS_FAIL;
	}
	*io_data = hsmci_get_response() & 0xFF;
	return M2M_SUCCESS;
}

int8_t nmi_sdio_cmd52(tstrNmSdioCmd52* cmd){
	
	uint8_t DataVal = cmd->data;
	if(!cmd->read_write){
		if(wilc_cmd52(SDIO_CMD52_READ_FLAG, cmd->function, cmd->address, cmd->raw, &DataVal)) return -1;
	}
	else{
		if(wilc_cmd52(SDIO_CMD52_WRITE_FLAG, cmd->function, cmd->address, cmd->raw, &DataVal)) return -2;
	}
	cmd->data = DataVal;
	return M2M_SUCCESS;
}

int8_t nmi_sdio_cmd53(tstrNmSdioCmd53* cmd){
	uint8_t flag;
	if(!cmd->read_write){
		flag = SDIO_CMD53_READ_FLAG;
	}
	else{
		flag = SDIO_CMD53_WRITE_FLAG;
	}
	if(!cmd->block_mode)
	{
		/* begin CMD53 command */

		if (wilc_cmd53_compact(flag, cmd->function,cmd->address ,cmd->increment, cmd->count, false)) return -1;
		
		if (flag == SDIO_CMD53_READ_FLAG)
		{
			/* start using DMA to read the data from the register */
			if (!hsmci_start_read_blocks(cmd->buffer, 1)) return -2;
			/* wait for dma to finish reading */
			if (!hsmci_wait_end_of_read_blocks()) return -3;
		}
		else if (flag == SDIO_CMD53_WRITE_FLAG)
		{
			/* start using DMA to read the data from the register */
			if (!hsmci_start_write_blocks(cmd->buffer, 1)) return -2;
			/* wait for dma to finish writing */
			if (!hsmci_wait_end_of_write_blocks()) return -3;
			
		}
	}
	else{
		/* begin CMD53 command */
		if (wilc_cmd53(flag, cmd->function, cmd->address,cmd->increment,cmd->block_mode,cmd->block_size,cmd->count,cmd->block_size*cmd->count, true)) return -4;
		
		if (flag == SDIO_CMD53_READ_FLAG)
		{
			/* start using DMA to read the data from the register */
			if (!hsmci_start_read_blocks(cmd->buffer, cmd->count)) return -5;
			/* wait for dma to finish reading */
			if (!hsmci_wait_end_of_read_blocks()) return -6;
		}
		else if (flag == SDIO_CMD53_WRITE_FLAG)
		{
			/* start using DMA to read the data from the register */
			if (!hsmci_start_write_blocks(cmd->buffer, cmd->count)) return -5;
			/* wait for dma to finish writing */
			if (!hsmci_wait_end_of_write_blocks()) return -6;
			
		}
	}
	return M2M_SUCCESS;
}

/**
* \brief Display basic information of the card.
* \note This function should be called only after the card has been
*       initialized successfully.
*
* \param slot   SD/MMC slot to test
*/
static void main_display_info_card(uint8_t slot)
{
	printf("\nCard information:\n\r");

	printf("    ");
	switch (sd_mmc_get_type(slot)) {
		case CARD_TYPE_SD | CARD_TYPE_HC:
		printf("SDHC");
		break;
		case CARD_TYPE_SD:
		printf("SD");
		break;
		case CARD_TYPE_MMC | CARD_TYPE_HC:
		printf("MMC High Density");
		break;
		case CARD_TYPE_MMC:
		printf("MMC");
		break;
		case CARD_TYPE_SDIO:
		printf("SDIO\n\r");
		return;
		case CARD_TYPE_SD_COMBO:
		printf("SD COMBO");
		break;
		case CARD_TYPE_UNKNOWN:
		default:
		printf("Unknow\n\r");
		return;
	}
	printf("\n\r    %d MB\n\r", (uint16_t)(sd_mmc_get_capacity(slot)/1024));
}


int8_t sam4s_sdio_init(void)
{
	#if defined (CONF_BOARD_SD_MMC_HSMCI)
	/* Configure HSMCI pins */
	gpio_configure_pin(PIN_HSMCI_MCCDA_GPIO, PIN_HSMCI_MCCDA_FLAGS);
	gpio_configure_pin(PIN_HSMCI_MCCK_GPIO, PIN_HSMCI_MCCK_FLAGS);
	gpio_configure_pin(PIN_HSMCI_MCDA0_GPIO, PIN_HSMCI_MCDA0_FLAGS);
	gpio_configure_pin(PIN_HSMCI_MCDA1_GPIO, PIN_HSMCI_MCDA1_FLAGS);
	gpio_configure_pin(PIN_HSMCI_MCDA2_GPIO, PIN_HSMCI_MCDA2_FLAGS);
	gpio_configure_pin(PIN_HSMCI_MCDA3_GPIO, PIN_HSMCI_MCDA3_FLAGS);

	/* Configure SD/MMC card detect pin */
#ifdef SD_MMC_0_CD_GPIO
	gpio_configure_pin(SD_MMC_0_CD_GPIO, SD_MMC_0_CD_FLAGS);
#endif
	#endif
	
	// Initialize SDIO on SAM4s
	sd_mmc_init();

	//Wait for a card and ready
	check_card_exist();
	// Display basic card information
	main_display_info_card(0);
	
	return M2M_SUCCESS;
}

#endif

#endif /* CONF_WILC_USE_SDIO*/