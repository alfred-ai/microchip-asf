/**
 * \file
 *
 * \brief FreeRTOS Web/DSP Demo.
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
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */

#ifndef DEMO_TASKS_H
#define DEMO_TASKS_H

#include <FreeRTOS.h>
#include <StackMacros.h>
#include <croutine.h>
#include <list.h>
#include <mpu_wrappers.h>
#include <portable.h>
#include <projdefs.h>
#include <queue.h>
#include <semphr.h>
#include <task.h>
#include <timers.h>

#include <pmc.h>
#include <sysclk.h>

#define SLIDER_SELECTOR_NB     (9UL)
#define SLIDER_SELECTOR_RANGE  (255UL / SLIDER_SELECTOR_NB)

/** Small delay to hold tasks, during instruction screen. */
extern const portTickType instructions_delay;

/** Used to block the application on instruction screen. */
extern uint32_t app_hold;

/** Wait for user to touch screen. */
#define WAIT_FOR_TOUCH_EVENT {while (app_hold) vTaskDelay(instructions_delay);}

void create_dsp_task(uint16_t stack_depth_words,
		unsigned portBASE_TYPE task_priority);

void create_gfx_task(uint16_t stack_depth_words,
		unsigned portBASE_TYPE task_priority);

void create_qtouch_task(uint16_t stack_depth_words,
		unsigned portBASE_TYPE task_priority);

void create_webserver_task(uint16_t stack_depth_words,
		unsigned portBASE_TYPE task_priority);

#endif /* DEMO_TASKS_H */
