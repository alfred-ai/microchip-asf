/* This source file is part of the ATMEL QTouch Library Release 4.4 */
/******************************************************************************
 *
 * \file
 *
 * \brief  This file contains the BitBangSPI Configuration settings.
 *
 * - Compiler:           IAR EWAVR and GNU GCC for AVR32
 * - Supported devices:  AT32UC3A0/A1 Series, AT32UC3B0/B1 Series 
 *                       AND AT32UC3C0/C1 Series 
 * - Userguide:          QTouch Library User Guide - doc8207.pdf.
 * - Support:            https://www.microchip.com/support/
 *
 * \author               Atmel Corporation: http://www.atmel.com
 *
 * Copyright (c) 2010-2018 Microchip Technology Inc. and its subsidiaries.
 *  
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 ******************************************************************************/


/*============================ INCLUDES ======================================*/
#ifdef _DEBUG_INTERFACE_
#include <compiler.h>
#include "BitBangSPI_Master.h"
#include "QDebugTransport.h"

#if defined(__ICCAVR32__)
 #include "intrinsics.h"
#endif


#define PORTA (((volatile avr32_gpio_port_t *) &AVR32_GPIO) + 0)
#define PORTB (((volatile avr32_gpio_port_t *) &AVR32_GPIO) + 1)
#define PORTC (((volatile avr32_gpio_port_t *) &AVR32_GPIO) + 2)

#if (UC3A0 || UC3A1 || UC3B)
#define PORTX (((volatile avr32_gpio_port_t *) &AVR32_GPIO) + 3)
#elif UC3C
#define PORTD (((volatile avr32_gpio_port_t *) &AVR32_GPIO) + 3)
#else
# error Unsupported chip type
#endif




/*============================ IMPLEMENTATION ================================*/

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
    REG( PORT, SPI_BB_SS )->oders =  ((1<<SS_BB) );
    REG( PORT, SPI_BB_MOSI )->oders =  (( 1 << MOSI_BB ) );
    REG( PORT, SPI_BB_SCK )->oders =  ( ( 1 << SCK_BB ));

    REG( PORT, SPI_BB_MISO )->oderc =  ( 1 << MISO_BB );

    REG( PORT, SPI_BB_SS )->ovrc =  ((1<<SS_BB) );
    REG( PORT, SPI_BB_MOSI )->ovrc =  (( 1 << MOSI_BB ) );
    REG( PORT, SPI_BB_SCK )->ovrc =  ( ( 1 << SCK_BB ));

    REG( PORT, SPI_BB_MISO )->ovrs =  ( 1 << MISO_BB );
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
            REG( PORT, SPI_BB_MOSI )->ovrs =  ( 1 << MOSI_BB );
        else
            REG( PORT, SPI_BB_MOSI )->ovrc =  ( 1 << MOSI_BB );

        c <<= 1;

        /* half a clock cycle before leading/rising edge */
        DELAY_1US();

        REG( PORT, SPI_BB_SCK )->ovrs = ( 1 << SCK_BB );

        /* half a clock cycle before trailing/falling edge */
        DELAY_1US();

        /* read MISO on trailing edge */
        c |= ((REG( PORT, SPI_BB_MISO )->pvr >> MISO_BB) & 0x01);
        REG( PORT, SPI_BB_SCK )->ovrc = ( 1 << SCK_BB );
    }

    REG( PORT, SPI_BB_MOSI )->ovrc =  ( 1 << MOSI_BB );

    DELAY_75US();


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
#endif 
