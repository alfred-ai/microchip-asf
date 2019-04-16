/**
 * \file
 *
 * \brief Scan Parameters Service Declarations
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
 *    Atmel micro controller product.
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
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel
 *Support</a>
 */
#ifndef __SCAN_PARAMETER_APP_H__
#define __SCAN_PARAMETER_APP_H__

/****************************************************************************************
*							        Macros	                                     		*
****************************************************************************************/
/** @brief APP_BAS_FAST_ADV between 0x0020 and 0x4000 in 0.625 ms units (20ms to 10.24s). */
#define APP_BAS_FAST_ADV				(100) //100 ms

/** @brief APP_BAS_ADV_TIMEOUT Advertising time-out between 0x0001 and 0x3FFF in seconds, 0x0000 disables time-out.*/
#define APP_BAS_ADV_TIMEOUT				(1000) // 100 Secs

/** @brief scan_resp_len is the length of the scan response data */
#define SCAN_RESP_LEN					(10)

/** @brief ADV_DATA_LEN */
#define ADV_DATA_LEN					(18)

/** @brief ADV_TYPE_LEN */
#define ADV_TYPE_LEN					(0x01)

/** @brief BAS_ADV_DATA_UUID_LEN the size of  BAS service uuid */
#define SPS_ADV_DATA_UUID_LEN			(2)

/** @brief BAS_ADV_DATA_UUID_TYPE the total sizeof BAS service uuid*/
#define SPS_ADV_DATA_UUID_TYPE			(0x03)

/** @brief BAS_ADV_DATA_NAME_LEN the  length of the device name */
#define SPS_ADV_DATA_NAME_LEN			(9)

/** @brief BAS_ADV_DATA_NAME_TYPE the gap ad data type */
#define SPS_ADV_DATA_NAME_TYPE			(0x09)

/* @brief BAS_ADV_DATA_NAME_DATA the actual name of device */
#define SPS_ADV_DATA_NAME_DATA			("ATMEL-SCP")

/**
* \Timer callback handler called on timer expiry
*/
void timer_callback_handler(void);

#endif /* __SCAN_PARAMETER_APP_H__ */

