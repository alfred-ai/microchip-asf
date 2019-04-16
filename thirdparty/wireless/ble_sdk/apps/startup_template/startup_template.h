/**
 * \file
 *
 * \brief Startup Template declarations
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

/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel
 * Support</a>
 */

#ifndef __STARTUP_TEMPLATE_H__
#define __STARTUP_TEMPLATE_H__

/* Write application declaration */
/* Advertisement Type Length */
#define ADV_TYPE_LEN						(0x01)

/* Advertisement Type Company Name */
#define ADV_DATA_TYPE_COMP_NAME				(0x09)

/* Advertisement Name Data Length */
#define ADV_DATA_NAME_LEN					(0x09)

/* Advertisement Name Data */
#define ADV_DATA_NAME_DATA					("ATMEL-BLE")

/* Advertisement Data UUID Type-16bit List */
 #define ADV_DATA_TYPE_UUID16_LIST			(0x03)


/* Example UUIDS for BAS and DIS added here */
#if defined BATTERY_SERVICE
#define ADV_DATA_UUID1_LEN					(0x02)
#define SERVICE_UUID1						BAT_SERVICE_UUID
#endif

/* DIS Service */
#if defined DEVICE_INFORMATION_SERVICE
#define ADV_DATA_UUID2_LEN					(0x02)
#define SERVICE_UUID2						DIS_SERVICE_UUID
#endif

/* Custom defined UUID's */
#ifndef SERVICE_UUID1
#define ADV_DATA_UUID1_LEN					(0x02)
#define SERVICE_UUID1						(0x0000)
#endif

#ifndef SERVICE_UUID2
#define ADV_DATA_UUID2_LEN					(0x02)
#define SERVICE_UUID2						(0xFFFF)
#endif

/** @brief APP_FAST_ADV between 0x0020 and 0x4000 in 0.625 ms units (20ms to 10.24s). */
#define APP_FAST_ADV						(100)

/** @brief APP_ADV_TIMEOUT Advertising time-out between 0x0001 and 0x3FFF in seconds, 0x0000 disables time-out.*/
#define APP_ADV_TIMEOUT						(1000)



#endif /* __STARTUP_TEMPLATE_H__ */
