/**
 ****************************************************************************************
 *
 * @file at_ble_trace.h
 *
 * @brief Atmel BLE API for Applications
 *
 * This module contains the public API and the necessary enumerations and structures that are required for
 * BLE Application Developers using Atmel BLE SDK
 *
 *
 *  Copyright (c) 2014-2015 Atmel Corporation. All rights reserved.
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *
 *  1. Redistributions of source code must retain the above copyright notice, this
 *  list of conditions and the following disclaimer.
 *
 *  2. Redistributions in binary form must reproduce the above copyright notice,
 *  this list of conditions and the following disclaimer in the documentation
 *  and/or other materials provided with the distribution.
 *
 *  3. The name of Atmel may not be used to endorse or promote products derived from this software
 *  without specific prior written permission.
 *
 *  4. This software may only be redistributed and used in connection with an Atmel microcontroller product.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
  * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 *  MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
 *  THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 *  OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 *  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
 *  TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 *  EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 ****************************************************************************************
 */
#ifndef __AT_BLE_TRACE_H__
#define __AT_BLE_TRACE_H__

#include "at_ble_api.h"

/**
 *@defgroup dbg_logs_group_macros MACROs
 *@ingroup  dbg_logs_group
 *@brief    This group includes Macros defined to be used of at_ble_trace.h.
 * @{
 */
/** @}*/

/**
 *@defgroup dbg_logs_group_functions Functions
 *@ingroup  dbg_logs_group
 *@brief    This group includes all function prototypes required to be used.
 * @{
 */
/** @}*/

#ifdef __cplusplus
extern "C" {
#endif  //__cplusplus

/**
 * @def TRACE_LVL_DISABLE
 * @ingroup dbg_logs_group_macros
 * @brief MACRO used to Disable all logs
 */
#define TRACE_LVL_DISABLE    (0)
/**
 * @def TRACE_LVL_INFO
 * @ingroup dbg_logs_group_macros
 * @brief MACRO used to Enable Info logs
 */
#define TRACE_LVL_INFO       (1<<0)
/**
 * @def TRACE_LVL_ERR
 * @ingroup dbg_logs_group_macros
 * @brief MACRO used to Enable error logs
 */
#define TRACE_LVL_ERR        (1<<1)
/**
 * @def TRACE_LVL_DBG
 * @ingroup dbg_logs_group_macros
 * @brief MACRO used to Enable debug logs
 */
#define TRACE_LVL_DBG        (1<<2)
/**
 * @def TRACE_LVL_BUS
 * @ingroup dbg_logs_group_macros
 * @brief MACRO used to Enable bytes transferred via bus as logs
 */
#define TRACE_LVL_BUS        (1<<3)
/**
 * @def TRACE_LVL_FUN
 * @ingroup dbg_logs_group_macros
 * @brief MACRO used to Enable function entry and exit logs
 */
#define TRACE_LVL_FUN        (1<<4)
/**
 * @def TRACE_LVL_ALL
 * @ingroup dbg_logs_group_macros
 * @brief MACRO used to Enable all trace logs
 */
#define TRACE_LVL_ALL        (TRACE_LVL_INFO | TRACE_LVL_ERR | \
                              TRACE_LVL_DBG  | TRACE_LVL_BUS | \
                              TRACE_LVL_FUN)

/** @ingroup dbg_logs_group_functions
 * @brief This function used to set pointer to printing function for logs
 *
 * @param[in] pf pointer to printing function
 */
///@cond IGNORE_DOXYGEN
AT_BLE_API
///@endcond
void trace_register_printFn(int (*pf)(const char *_Format, ...));

/** @ingroup dbg_logs_group_functions
 * @brief Used to set level of tracing logs
 *
 * @param[in] lvl Level of trace logs messages to print; using defined trace_levels
 *
 */
///@cond IGNORE_DOXYGEN
AT_BLE_API
///@endcond
void trace_set_level(uint8_t lvl);

/************************************************************************/
/* Examples Section                                                     */
/************************************************************************/
/**
 * @defgroup dbg_logs_group_examples Examples
 * @ingroup  dbg_logs_group
 *
 * @section example1 Example 1
 *          This example illustrates how to enable and disable trace logs.
 * @code{.c}
            #include "platform.h"
            #include "at_ble_api.h"
            #include "at_ble_trace.h"

            int main(void)
            {
                at_ble_status_t enuStatus;

                ...
                ...

                trace_register_printFn(&printf);
                trace_set_level(TRACE_LVL_ERR|TRACE_LVL_FUN);

                enuStatus = at_ble_init(&pf_cfg);
                ...
                ...

                return 0;
            }
 * @endcode
 *
 *
 * @section example2 Example 2
 *          This example illustrates how to use different levels of trace logs.
 * @code{.c}
             #include "platform.h"
             #include "at_ble_api.h"
             #include "at_ble_trace.h"

             int main(void)
             {
                 at_ble_status_t enuStatus;

                 trace_register_printFn(&printf);
                 trace_set_level(TRACE_LVL_ERR|TRACE_LVL_FUN);  //ONLY, Errors and Functions entrys will be displayed

                 enuStatus = at_ble_init(&pf_cfg);
                 trace_set_level(TRACE_LVL_INFO);               //ONLY, info logs will be displayed


                 enuStatus = at_ble_addr_set(&addr);
                 trace_set_level(TRACE_LVL_ALL);                //All logs will be displayed

                 enuStatus = at_ble_addr_set(&addr);
                 trace_set_level(TRACE_LVL_DISABLE);            //None will be displayed

                 ...
                 ...

                 return 0;
             }
 * @endcode
 * @{
 */
/** @}*/


#ifdef __cplusplus
}
#endif  //__cplusplus

#endif //__AT_BLE_API_H__
