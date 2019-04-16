/**
 * \file
 *
 * \brief Default configuration of C42412A LCD Segment Map.
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

#ifndef C42412A_SEGMAP_H_INCLUDED
#define C42412A_SEGMAP_H_INCLUDED

#include "board.h"

/**
 * \name LCD component C42412A segment map definitions in SAM4L-Xplained-Pro
 * @{
 */
#if BOARD == SAM4L_XPLAINED_PRO
/* Icon with selected segments blinking feature */
#define C42412A_ICON_USB            1, 1
#define C42412A_ICON_COLON          3, 1
#define C42412A_ICON_BAT            0, 0
#define C42412A_ICON_ATMEL          0, 1
/* Icon without selected segments blinking feature */
#define C42412A_ICON_MINUS          0, 17
#define C42412A_ICON_MINUS_SEG1     0, 13
#define C42412A_ICON_MINUS_SEG2     0, 9
#define C42412A_ICON_DOT_1          0, 5
#define C42412A_ICON_DOT_2          3, 6
#define C42412A_ICON_DOT_3          3, 10
#define C42412A_ICON_DOT_4          3, 14
#define C42412A_ICON_DOT_5          3, 18
#define C42412A_ICON_BAT_LEVEL_1    2, 0
#define C42412A_ICON_BAT_LEVEL_2    3, 0
#define C42412A_ICON_BAT_LEVEL_3    1, 0
#define C42412A_ICON_WLESS_LEVEL_0  3, 3
#define C42412A_ICON_WLESS_LEVEL_1  3, 2
#define C42412A_ICON_WLESS_LEVEL_2  2, 3
#define C42412A_ICON_WLESS_LEVEL_3  2, 2
#define C42412A_ICON_AUDIO_PLAY     2, 1
#define C42412A_ICON_AM             0, 2
#define C42412A_ICON_PM             0, 3
#define C42412A_ICON_DEGREE_C       3, 22
#define C42412A_ICON_DEGREE_F       0, 21
#define C42412A_ICON_VOLT           1, 2
#define C42412A_ICON_MILLI_VOLT     1, 3
/* @} */

/**
 * \name LCD component C42364A segment map default definitions
 * @{
 */
#else
/* Icon with selected segments blinking feature */
#define C42412A_ICON_USB            1, 1
#define C42412A_ICON_COLON          3, 1
#define C42412A_ICON_BAT            0, 0
#define C42412A_ICON_ATMEL          0, 1
/* Icon without selected segments blinking feature */
#define C42412A_ICON_MINUS          0, 17
#define C42412A_ICON_MINUS_SEG1     0, 13
#define C42412A_ICON_MINUS_SEG2     0, 9
#define C42412A_ICON_DOT_1          0, 5
#define C42412A_ICON_DOT_2          3, 6
#define C42412A_ICON_DOT_3          3, 10
#define C42412A_ICON_DOT_4          3, 14
#define C42412A_ICON_DOT_5          3, 18
#define C42412A_ICON_BAT_LEVEL_1    2, 0
#define C42412A_ICON_BAT_LEVEL_2    3, 0
#define C42412A_ICON_BAT_LEVEL_3    1, 0
#define C42412A_ICON_WLESS_LEVEL_0  3, 3
#define C42412A_ICON_WLESS_LEVEL_1  3, 2
#define C42412A_ICON_WLESS_LEVEL_2  2, 3
#define C42412A_ICON_WLESS_LEVEL_3  2, 2
#define C42412A_ICON_AUDIO_PLAY     2, 1
#define C42412A_ICON_AM             0, 2
#define C42412A_ICON_PM             0, 3
#define C42412A_ICON_DEGREE_C       3, 22
#define C42412A_ICON_DEGREE_F       0, 21
#define C42412A_ICON_VOLT           1, 2
#define C42412A_ICON_MILLI_VOLT     1, 3
#endif
/* @} */

#endif  /* C42412A_SEGMAP_H_INCLUDED */
