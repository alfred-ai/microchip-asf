/**
 * @file main.c
 *
 * @brief RF4CE Serial Interface Application
 *
 * Copyright (c) 2014-2015 Atmel Corporation. All rights reserved.
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

/**
 * \mainpage
 * \section preface Preface
 * This is the reference manual for RF4CE ZID Serial Interface Application
 * \section main_files Application Files
 * - main.c                      Application main file.
 * \section intro Application Introduction
 * RF4Control ZID Serial Interface Application running on the network
 * co-processor can be driven by the host controller which is running the main
 * application. Both controller use a serial interface to communicate.
 *
 * The host controller can be implemented as a standalone microcontroller, or it
 * can also be a personal computer.
 *
 * The network co-processor receives the commands from the host, such as
 * reset/pairing/data requests. The network co-processor will send the response
 * to the host controller after processing the request and also
 * indicates the data received from the paired RF4Control nodes.
 *
 * Interface between the host controller and the RF4CE client can be any
 * interface. like UART, USB, TWI, Proprietary interface
 *
 * In this application serial interface is used for communication, whereas
 * serial_data_handler api will handle all the incoming bytes from the serial
 * interface.
 * \section api_modules Application Dependent Modules
 * - \ref group_rf4control
 * - \subpage api
 * \section compinfo Compilation Info
 * This software was written for the GNU GCC and IAR .
 * Other compilers may or may not work.
 *
 * \section references References
 * 1)  IEEE Std 802.15.4-2006 Part 15.4: Wireless Medium Access Control (MAC)
 *     and Physical Layer (PHY) Specifications for Low-Rate Wireless Personal
 * Area
 *     Networks (WPANs).\n\n
 * 2)  <a href="http://www.atmel.com/design-support/">Atmel Design
 *Support</a>.\n
 *
 * \section contactinfo Contact Information
 * For further information,visit
 * <A href="http://www.atmel.com/avr">www.atmel.com</A>.\n
 */

/*
 * Copyright (c) 2014-2015 Atmel Corporation. All rights reserved.
 *
 * Licensed under Atmel's Limited License Agreement --> EULA.txt
 */

/* === Includes ============================================================ */

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <asf.h>
#include "conf_board.h"
#include "common_sw_timer.h"
#include "serial_api.h"
#include "app_config.h"
#include "pb_pairing.h"

/* === Macros ============================================================== */

/* === Globals ============================================================= */
extern void zid_indication_callback_init(void);

/* Write application specific values into flash memory */
FLASH_DECLARE(uint16_t VendorIdentifier) = (uint16_t)NWKC_VENDOR_IDENTIFIER;
FLASH_DECLARE(uint8_t vendor_string[7]) = NWKC_VENDOR_STRING;
FLASH_DECLARE(uint8_t app_user_string[15]) = APP_USER_STRING;
#ifdef ZRC_CMD_DISCOVERY
FLASH_DECLARE(uint8_t supported_cec_cmds[32]) = SUPPORTED_CEC_CMDS;
#endif
/* === Prototypes ========================================================== */
static void app_alert(void);

/* === Implementation ====================================================== */

/* === EXTERNALS =========================================================== */

/**
 * Main function, initialization and main message loop
 *
 * @return error code
 */
int main(void)
{
	irq_initialize_vectors();

	/* Initialize the board.
	 * The board-specific conf_board.h file contains the configuration of
	 * the board initialization.
	 */
	board_init();
	sysclk_init();

	sw_timer_init();

	if (nwk_init() != NWK_SUCCESS) {
		app_alert();
	}

	zid_indication_callback_init();

	cpu_irq_enable();

	/*
	 * The global interrupt has to be enabled here as TAL uses the timer
	 * delay which in turn requires interrupt to be enabled
	 */

	serial_interface_init();

	/* Loop forever, the interrupts are doing the rest */
	while (1) {
		nwk_task();
		serial_data_handler();
	}
	/* No return statement here, because this code is unreachable */
}

#ifdef PBP_REC
bool pbp_allow_pairing(nwk_enum_t Status, uint64_t SrcIEEEAddr,
		uint16_t OrgVendorId,
		uint8_t OrgVendorString[7], uint8_t OrgUserString[15],
		uint8_t KeyExTransferCount)
{
	/* Keep compiler happy */
	Status = Status;
	SrcIEEEAddr = SrcIEEEAddr;
	OrgVendorId = OrgVendorId;
	OrgVendorString[0] = OrgVendorString[0];
	OrgUserString[0] = OrgUserString[0];
	KeyExTransferCount = KeyExTransferCount;

	return true;
}

#endif

#ifdef ZID_DEVICE
bool check_zid_adaptor_compatibility(uint8_t PairingRef, uint8_t payload_length,
		uint8_t *payload)
{
	/* Application need to find out the compatibility with the adaptor */
	/* It needs to extract the adaptor attributes from the following payloas
	 **/

	/* Payload format is as per the GET_ATTRIBUTES_RESPONSE packet format
	 * excluding the header */
	/* payload[0] = attr_id........... */
	PairingRef = PairingRef;
	payload_length = payload_length;
	payload = payload;
	return true;
}

#endif

static void app_alert(void)
{
	while (1) {
		#if LED_COUNT > 0
		LED_Toggle(LED0);
		#endif

		#if LED_COUNT > 1
		LED_Toggle(LED1);
		#endif

		#if LED_COUNT > 2
		LED_Toggle(LED2);
		#endif

		#if LED_COUNT > 3
		LED_Toggle(LED3);
		#endif

		#if LED_COUNT > 4
		LED_Toggle(LED4);
		#endif

		#if LED_COUNT > 5
		LED_Toggle(LED5);
		#endif

		#if LED_COUNT > 6
		LED_Toggle(LED6);
		#endif

		#if LED_COUNT > 7
		LED_Toggle(LED7);
		#endif
		delay_us(0xFFFF);
	}
}

/* EOF */
