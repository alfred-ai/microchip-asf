/**
* Copyright (c) 2015 Atmel Corporation and 2012 – 2013, Thingsquare, http://www.thingsquare.com/. All rights reserved. 
*  
* Redistribution and use in source and binary forms, with or without 
* modification, are permitted provided that the following conditions are met:
* 
* 1. Redistributions of source code must retain the above copyright notice, this
* list of conditions and the following disclaimer.
* 
* 2. Redistributions in binary form must reproduce the above copyright notice, 
* this list of conditions and the following disclaimer in the documentation 
* and/or other materials provided with the distribution.
* 
* 3. Neither the name of Atmel nor the name of Thingsquare nor the names of its contributors may be used to endorse or promote products derived 
* from this software without specific prior written permission.  
* 
* 4. This software may only be redistributed and used in connection with an 
* Atmel microcontroller or Atmel wireless product.
* 
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE 
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE 
* GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, 
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY 
* OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
* 
* 
* 
*/


#ifndef __CONTIKI_CONF_H__
#define __CONTIKI_CONF_H__

#include "thsq-conf-const.h"

#ifndef THSQ_CONF_NETSTACK
#if ((ENABLE_DROWSIE) && !(ENABLE_AES))
#define THSQ_CONF_NETSTACK      THSQ_CONF_DROWSIE
#elif ((ENABLE_DROWSIE) && (ENABLE_AES))
#define THSQ_CONF_NETSTACK      (THSQ_CONF_AES | THSQ_CONF_DROWSIE)
#elif ((ENABLE_CONTIKIMAC) && !(ENABLE_AES))
#define THSQ_CONF_NETSTACK      THSQ_CONF_CONTIKIMAC
#elif ((ENABLE_CONTIKIMAC) && (ENABLE_AES))
#define THSQ_CONF_NETSTACK      (THSQ_CONF_AES | THSQ_CONF_CONTIKIMAC)
#else
#define THSQ_CONF_NETSTACK      THSQ_CONF_NULLRDC
#endif /* ENABLE_DROWSIE == TRUE*/
#endif /* THSQ_CONF_NETSTACK */

#include "thsq-default-conf.h"

#include "rf233.h"
#include "samd21_xplained_pro.h"

#ifndef NETSTACK_CONF_RDC_CHANNEL_CHECK_RATE
#define NETSTACK_CONF_RDC_CHANNEL_CHECK_RATE 8
#endif /* NETSTACK_CONF_RDC_CHANNEL_CHECK_RATE */
#define  CONTIKI_TARGET_TRXEB1120 0
#define CONTIKI_TARGET_ETH1120 0
#define CONTIKI_TARGET_TRXEB2520 0
#define CONTIKI_TARGET_TRXEB1101 0
#define CONTIKI_TARGET_ETH1101 0
#define  CONTIKI_TARGET_ETH2520 0
#define CONTIKI_TARGET_COOJA 0
#define CONTIKI_TARGET_NETSIM 0
/* radio driver blocks until ACK is received */
#define NULLRDC_CONF_ACK_WAIT_TIME          (50 * RTIMER_SECOND/1000)

#define NULLRDC_CONF_802154_AUTOACK         1
#define NULLRDC_CONF_SEND_802154_ACK        1
#define NULLRDC_CONF_802154_AUTOACK_HW      0

#define NETSTACK_CONF_MAC   csma_driver

#define NETSTACK_CONF_FRAMER                framer_802154

/* Network setup for IPv6 */
#define NETSTACK_CONF_NETWORK               sicslowpan_driver

/* Specify a minimum packet size for 6lowpan compression to be
   enabled. This is needed for ContikiMAC, which needs packets to be
   larger than a specified size, if no ContikiMAC header should be
   used. */
#define SICSLOWPAN_CONF_COMPRESSION_THRESHOLD 0
//#define SICSLOWPAN_CONF_MAC_MAX_PAYLOAD        40
#define CONTIKIMAC_CONF_WITH_CONTIKIMAC_HEADER 0

#define NBR_TABLE_CONF_MAX_NEIGHBORS          20
#define CONTIKIMAC_CONF_COMPOWER              1
/* A trick to resolve a compilation error with IAR. */
#ifdef __ICCARM__
#define UIP_CONF_DS6_AADDR_NBU                1
#endif
#define  PACKETBUF_CONF_ATTRS_INLINE          1

#define RIMESTATS_CONF_ENABLED 1
#define RF_CHANNEL                            18

#define IEEE802154_CONF_PANID                 0xABCD

#define ENERGEST_CONF_ON                      1

#define LINKADDR_CONF_SIZE                    8

#define UIP_CONF_LL_802154                    1
#define UIP_CONF_LLH_LEN                      0

#define UIP_CONF_IPV6                         1
#define ARCH_DOESNT_NEED_ALIGNED_STRUCTS 1
#define UIP_ARCH_ADD32  0
#define UIP_ARCH_CHKSUM 0
#define UIP_ARCH_IPCHKSUM 0
#if UIP_CONF_IPV6
#define LINKADDR_CONF_SIZE        8
#define UIP_CONF_ICMP6            1
#define UIP_CONF_UDP              1
#define UIP_CONF_TCP              1
#define UIP_CONF_IPV6_RPL 1
#define UIP_CONF_UDP_CHECKSUMS 1
//#define  UIP_CONF_TCP 1
//#define  UIP_UDP 1
//#define UIP_UDP_CHECKSUMS 1
#endif
#define PROCESS_CONF_NO_PROCESS_NAMES         0
#define SICSLOWPAN_CONF_COMPRESSION           SICSLOWPAN_COMPRESSION_HC06
#define SICSLOWPAN_CONF_ACK_ALL   0

#define SICSLOWPAN_CONF_FRAG                  1
#if SICSLOWPAN_CONF_FRAG
#define REASSEMBLY_TIMEOUT                    10 * CLOCK_SECOND
#define MUL_REASSEMBLY                        1

#if MUL_REASSEMBLY
  #define NUM_REASM_BUFS                      4
#else
  #define NUM_REASM_BUFS                      1
#endif
#endif // SICSLOWPAN_CONF_FRAG

#define LED_UDP_PORT 8840

#define SICSLOWPAN_CONF_MAX_MAC_TRANSMISSIONS 5


#define UART1_CONF_TX_WITH_INTERRUPT        0

#ifndef NETSTACK_CONF_RADIO
#define NETSTACK_CONF_RADIO rf233_radio_driver
#endif

#define UIP_CONF_BUFFER_SIZE            400
#define PROCESS_CONF_STATS 1
#define UIP_CONF_MAX_ROUTES             8
#define QUEUEBUF_CONF_NUM               12

#define NETSTACK_RADIO_MAX_PAYLOAD_LEN  125		/* XXX: change me later */

#ifdef INCLUDE_SUBPLATFORM_CONF
#include "subplatform-conf.h"
#else /* INCLUDE_SUBPLATFORM_CONF */
#include "platform-conf.h"
#endif /* INCLUDE_SUBPLATFORM_CONF */


/* include the project config */
/* PROJECT_CONF_H might be defined in the project Makefile */
#ifdef PROJECT_CONF_H
#include PROJECT_CONF_H
#endif /* PROJECT_CONF_H */

#ifndef NETSTACK_AES_KEY
#define NETSTACK_AES_CONF_MASTER_KEY 0
#define NETSTACK_AES_KEY                    "thingsquare mist" /* 16 bytes */
#define NETSTACK_AES_KEY_DEFAULT            1
#endif /* NETSTACK_AES_KEY */

#endif /* CONTIKI_CONF_H */
