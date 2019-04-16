/* This source file is part of the ATMEL QTouch Library Release 5.1 */

/**
 * \file
 *
 * \brief  This file contains the BitBangSPI public API that can be used to
 * transfer data from a Touch Device to QTouch Studio using the QT600
 * USB Bridge.
 * - Userguide:          QTouch Library User Guide - doc8207.pdf.
 * - Support: http://www.atmel.com/design-support/
 *
 * Copyright (c) 2012-2015 Atmel Corporation. All rights reserved.
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
/*============================ INCLUDES ======================================*/
#include "asf.h"


#include "BitBangSPI_Master.h"
#include "QDebugSettings.h"
#include "QDebugTransport.h"

//! compile file only when QDebug is enabled.
#if DEF_TOUCH_QDEBUG_ENABLE == 1

#define PORTA (&(*((volatile Gpio*)GPIO)).GPIO_PORT[0])
#define PORTB (&(*((volatile Gpio*)GPIO)).GPIO_PORT[1])
#define PORTC (&(*((volatile Gpio*)GPIO)).GPIO_PORT[2])

/*============================ IMPLEMENTATION ================================*/
static uint8_t BitBangSPI_Send_Byte(uint8_t c);

/*============================================================================
Name    :   BitBangSPI_Master_Init
------------------------------------------------------------------------------
Purpose :   Initialize BitBangSPI Interface
Input   :   n/a
Output  :   n/a
Notes   :	Called from QDebug_Init in QDebug.c
============================================================================*/
void BitBangSPI_Master_Init (void)
{   
    REG( PORT, SPI_BB_SS )->ODERS =  ((1<<SS_BB) );
    REG( PORT, SPI_BB_MOSI )->ODERS =  (( 1 << MOSI_BB ) );
    REG( PORT, SPI_BB_SCK )->ODERS =  ( ( 1 << SCK_BB ));

    REG( PORT, SPI_BB_MISO )->ODERC =  ( 1 << MISO_BB );
#if defined(REV_GPIO) || (REV_GPIO == 0x215)
    // Always enable the Schmitt trigger for input pins.
    REG( PORT, SPI_BB_MISO )->STERS =  ( 1 << MISO_BB );
#endif
    
    REG( PORT, SPI_BB_SS )->OVRC =  ((1<<SS_BB) );
    REG( PORT, SPI_BB_MOSI )->OVRC =  (( 1 << MOSI_BB ) );
    REG( PORT, SPI_BB_SCK )->OVRC =  ( ( 1 << SCK_BB ));

    REG( PORT, SPI_BB_MISO )->OVRS =  ( 1 << MISO_BB );
    

}

/*============================================================================
Name    :   BitBangSPI_Send_Byte
------------------------------------------------------------------------------
Purpose :   Send and Read one byte using BitBangSPI Interface
Input   :   Data to send to slave
Output  :   Data read from slave
Notes   :	Called from BitBangSPI_Send_Message in this file
============================================================================*/
uint8_t BitBangSPI_Send_Byte(uint8_t c)
{
    unsigned bit;
    
    for (bit = 0; bit < 8; bit++) {
        /* write MOSI on trailing edge of previous clock */
        if (c & 0x80)
            REG( PORT, SPI_BB_MOSI )->OVRS =  ( 1 << MOSI_BB );
        else
            REG( PORT, SPI_BB_MOSI )->OVRC =  ( 1 << MOSI_BB );

        c <<= 1;

        /* half a clock cycle before leading/rising edge */
        cpu_delay_us(3u, F_CPU); /* SHOULD BE ~3uS. */

        REG( PORT, SPI_BB_SCK )->OVRS = ( 1 << SCK_BB );

        /* half a clock cycle before trailing/falling edge */
         cpu_delay_us(3u, F_CPU); /* SHOULD BE ~3uS. */

        /* read MISO on trailing edge */
        c |= ((REG( PORT, SPI_BB_MISO )->PVR >> MISO_BB) & 0x01);
        REG( PORT, SPI_BB_SCK )->OVRC = ( 1 << SCK_BB );
    }

    REG( PORT, SPI_BB_MOSI )->OVRC =  ( 1 << MOSI_BB );

    cpu_delay_us(18u, F_CPU);/* SHOULD BE ~18uS. */


    return c;
}


/*============================================================================
Name    :   BitBangSPI_Send_Message
------------------------------------------------------------------------------
Purpose :   Send and Read one frame using BitBangSPI Interface
Input   :   n/a
Output  :   n/a
Notes   :	Called from Send_Message in QDebugTransport.c
============================================================================*/
void BitBangSPI_Send_Message(void)
{
    unsigned int i;
    uint8_t FrameInProgress;

    // Send our message upstream
    for (i=0; i <= TX_index; i++)
    {
        FrameInProgress = RxHandler(BitBangSPI_Send_Byte(TX_Buffer[i]));
    }

    // Do we need to receive even more bytes?
    while (FrameInProgress)
        FrameInProgress = RxHandler(BitBangSPI_Send_Byte(0));

}

#endif  //DEF_TOUCH_QDEBUG_ENABLE == 1
