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


#include <stdio.h>
#include <string.h>

#include "contiki.h"
#include "contiki-net.h"
#include "sys/autostart.h"
#include "flash.h"
#include "leds.h"
#include "serial-line.h"
#include "slip.h"
#include "watchdog.h"
#include "button-sensor.h"
#include "xmem.h"
#include "lib/random.h"
#include "lib/sensors.h"
#include "temp-sensor.h"
//#include "button-sensor.h"
#include "voltage-sensor.h"

#include "netstack-aes.h"
#include "net/netstack.h"
#include "net/ip/uip.h"
#include "net/mac/frame802154.h"
#include "net/linkaddr.h"
#include "net/rime/rime.h"
#if SAMD
#include "node-id-samd21.h"
#else
#include "node-id.h"
#endif
#include "delay.h"
#include <asf.h>
#include "usart.h"
#include "sio2host.h"
#include "conf_sio2host.h"
#include "stdio_serial.h"
#include "rtc_count.h" //rtc
#include "rtc_count_interrupt.h"
#ifdef ENABLE_LEDCTRL
#include "ledctrl.h"
#endif

//SENSORS(&button_sensor);
/*---------------------------------------------------------------------------*/
#define _DEBUG_ 0
#if _DEBUG_
#include <stdio.h>
#define PRINTF(...) printf(__VA_ARGS__)
#define PRINT6ADDR(addr) PRINTF(" %02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x ", ((u8_t *)addr)[0], ((u8_t *)addr)[1], ((u8_t *)addr)[2], ((u8_t *)addr)[3], ((u8_t *)addr)[4], ((u8_t *)addr)[5], ((u8_t *)addr)[6], ((u8_t *)addr)[7], ((u8_t *)addr)[8], ((u8_t *)addr)[9], ((u8_t *)addr)[10], ((u8_t *)addr)[11], ((u8_t *)addr)[12], ((u8_t *)addr)[13], ((u8_t *)addr)[14], ((u8_t *)addr)[15])
#define PRINTLLADDR(lladdr) PRINTF(" %02x:%02x:%02x:%02x:%02x:%02x:%02x:%02x ",lladdr.u8[0], lladdr.u8[1], lladdr.u8[2], lladdr.u8[3],lladdr.u8[4], lladdr.u8[5], lladdr.u8[6], lladdr.u8[7])
#else
#define PRINTF(...)
#define PRINT6ADDR(addr)
#define PRINTLLADDR(addr)
#endif
/*---------------------------------------------------------------------------*/

#define UART_RX_ENABLE 0
#if UIP_CONF_IPV6
PROCINIT(&etimer_process, &tcpip_process);
#else
PROCINIT(&etimer_process);
#warning "No TCP/IP process!"
#endif

#define BUSYWAIT_UNTIL(cond, max_time)                                  \
  do {                                                                  \
    rtimer_clock_t t0;                                                  \
    t0 = RTIMER_NOW();                                                  \
    while(!(cond) && RTIMER_CLOCK_LT(RTIMER_NOW(), t0 + (max_time)));   \
  } while(0)
/*---------------------------------------------------------------------------*/
//static struct usart_module usart_instance;
//static uint8_t data[SERIAL_RX_BUF_SIZE_HOST];
//static uint8_t data_length = 0;
//static uint8_t rx_index = 0;


static void print_reset_causes(void);
static void print_processes(struct process * const processes[]);
static void set_link_addr(void);
//static unsigned char uart_rx_buf[SERIAL_RX_BUF_SIZE_HOST];
//static void init_serial(void);
extern void configure_tc3(void); 
void watchdog_early_warning_callback(void);
void configure_gclock_generator(void);
void configure_wdt_callbacks(void);




uint8_t	sent_packets=0;
bool    ready_to_send_new_packet=true; //rtc
#if UART_RX_ENABLE
static uint8_t data[SERIAL_RX_BUF_SIZE_HOST];
static uint8_t data_length = 0;
static uint8_t rx_index = 0;
void serial_data_handler(void);
#endif
uint8_t *edbg_eui_read_eui64(void);

/*---------------------------------------------------------------------------*/

int
main(int argc, char *argv[])
{
  /* init system: clocks, board etc */

  system_init();
  
  node_id_restore();
  //init_serial();
  sio2host_init();
   
  
  leds_init();
  leds_on(LEDS_ALL);

  system_interrupt_enable_global();
  //system_set_sleepmode(SYSTEM_SLEEPMODE_IDLE_0); //sleepmode 2 for rtc
  flash_init();

  delay_init();

  /* Initialize Contiki and our processes. */
  
  #ifdef LOW_POWER_MODE
  configure_tc3();
  #else
  clock_init();
  #endif

  ctimer_init();
 
 
  rtimer_init();
 //printf("\r\n B4 Watchdog init");
  
 //printf("\r\n Aft Watchdog init");
  process_init();
  process_start(&etimer_process, NULL);

  /* Set MAC address and node ID */
#ifdef NODEID
  node_id = NODEID;
#ifdef BURN_NODEID
  node_id_burn(node_id);
#endif /* BURN_NODEID */
#else/* NODE_ID */
#endif /* NODE_ID */

  
  printf("\r\n\n\n\n Starting the SmartConnect-6LoWPAN \r\n Platform : Atmel IoT device \r\n");
  print_reset_causes();
#if SAMR21 
  eui64 = edbg_eui_read_eui64();
#endif

  set_link_addr();

  random_init(node_id);

  netstack_init();
  rf_set_channel(RF_CHANNEL);
  printf("\r\n Configured RF channel: %d\r\n", rf_get_channel());
  leds_off(LEDS_ALL);
  /*  temp_sensor_init();
      voltage_sensor_init();*/
 // button_sensor_init();
 process_start(&sensors_process, NULL);
  energest_init();

  ENERGEST_ON(ENERGEST_TYPE_CPU);
  if(node_id > 0) {
    printf(" Node id %u.\r\n", node_id);
  } else {
    printf(" Node id not set.\r\n");
  }

  /* Setup nullmac-like MAC for 802.15.4 */
#if SAMD
  memcpy(&uip_lladdr.addr, node_mac, sizeof(uip_lladdr.addr));
#else 
  memcpy(&uip_lladdr.addr, eui64, sizeof(uip_lladdr.addr));
#endif
   
  queuebuf_init();
  printf(" %s %lu %d\r\n",
         NETSTACK_RDC.name,
         (uint32_t) (CLOCK_SECOND / (NETSTACK_RDC.channel_check_interval() == 0 ? 1:
                         NETSTACK_RDC.channel_check_interval())),
         RF_CHANNEL);

  process_start(&tcpip_process, NULL);
  printf(" IPv6 Address: ");
  {
    uip_ds6_addr_t *lladdr;
    int i;
    lladdr = uip_ds6_get_link_local(-1);
    for(i = 0; i < 7; ++i) {
      printf("%02x%02x:", lladdr->ipaddr.u8[i * 2],
             lladdr->ipaddr.u8[i * 2 + 1]);
    }
    printf("%02x%02x\r\n", lladdr->ipaddr.u8[14], lladdr->ipaddr.u8[15]);
  }

  {
    uip_ipaddr_t ipaddr;
    int i;
    uip_ip6addr(&ipaddr, 0xfc00, 0, 0, 0, 0, 0, 0, 0);
    uip_ds6_set_addr_iid(&ipaddr, &uip_lladdr);
    uip_ds6_addr_add(&ipaddr, 0, ADDR_TENTATIVE);
    printf("Tentative global IPv6 address ");
    for(i = 0; i < 7; ++i) {
      printf("%02x%02x:",
             ipaddr.u8[i * 2], ipaddr.u8[i * 2 + 1]);
    }
    printf("%02x%02x\r\n",
           ipaddr.u8[7 * 2], ipaddr.u8[7 * 2 + 1]);
  }
 // printf("\r\n Before print process");
  print_processes(autostart_processes);
  //delay_ms(100);
  /* set up AES key */
#if ((THSQ_CONF_NETSTACK) & THSQ_CONF_AES)
#ifndef NETSTACK_AES_KEY
#error Please define NETSTACK_AES_KEY!
#endif /* NETSTACK_AES_KEY */
  {
    const uint8_t key[] = NETSTACK_AES_KEY;
    netstack_aes_set_key(key);
  }
  printf("AES encryption is enabled\n");
#else /* ((THSQ_CONF_NETSTACK) & THSQ_CONF_AES) */
  printf("\r\n Warning: AES encryption is disabled\n");
#endif /* ((THSQ_CONF_NETSTACK) & THSQ_CONF_AES) */
   
#ifdef ENABLE_LEDCTRL
  ledctrl_init();
#endif
  autostart_start(autostart_processes);
  //watchdog_start();
  //watchdog_init();

  while(1){
    int r = 0;
#if UART_RX_ENABLE
	serial_data_handler();
#endif
  do {
      //printf(".");
     
     r = process_run();
	//wdt_reset_count();
	 // if(r <= 0) printf("\n PRVN No process to run\n");
    } while(r > 0);
    /* sleep*/
   // watchdog_stop();
    ENERGEST_OFF(ENERGEST_TYPE_CPU);
    ENERGEST_ON(ENERGEST_TYPE_LPM);
	//#ifdef LOW_POWER_MODE
	//printf("\n PRVN Before sleep\n");
	//sleep_system();
	//#else
	//printf("\n PRVN After sleep\n");
    //system_sleep();
	//#endif
    //watchdog_start();


    /* woke up */
    ENERGEST_OFF(ENERGEST_TYPE_LPM);
    ENERGEST_ON(ENERGEST_TYPE_CPU);
  }
}


void watchdog_early_warning_callback(void)
{
	port_pin_toggle_output_level(LED_0_PIN);
	//watchdog_periodic();
	printf("warning_callback\n\r");
		
}

#if UART_RX_ENABLE
void serial_data_handler(void)
{
	if (data_length == 0) {
		/* No data to process, read the stream IO */
		//rx_index = 0;
		data_length = sio2host_rx(data, 156); /* @ToDo 20 ?,
		                                                   * different
		                                                 * values for
		                                                   * USB and
		                                                   * UART ? */
		
		
	} else { /* Data has been received, process the data */
		printf("Receiving file..\n");
		data_length--;
		rx_index++;
		if(rx_index ==99)
		{
			printf("Received File!!!!!!!!!!\n");
		}
	}
#endif
void configure_gclock_generator(void)
{
	//! [setup_1]
	struct system_gclk_gen_config gclock_gen_conf;
	//! [setup_1]
	//! [setup_2]
	system_gclk_gen_get_config_defaults(&gclock_gen_conf);
	//! [setup_2]

	//! [setup_3]
	gclock_gen_conf.source_clock    = SYSTEM_CLOCK_SOURCE_ULP32K;
	gclock_gen_conf.division_factor = 128;
	//! [setup_3]
	//! [setup_4]
	system_gclk_gen_set_config(GCLK_GENERATOR_4, &gclock_gen_conf);
	//! [setup_4]

	//! [setup_5]
	system_gclk_gen_enable(GCLK_GENERATOR_4);
	//! [setup_5]
}

/*
void rtc_overflow_callback(void)
{
	//! [overflow_act]
	/ * Do something on RTC overflow here * /
	port_pin_toggle_output_level(LED_0_PIN);
	PRINTF("rtc_overflow_callback\n\r");
	ready_to_sleep=1;
	rtc_count_enable(&rtc_instance);
	
	//! [overflow_act]
}*/

//! [initialize_rtc]

//! [setup_callback]


/*---------------------------------------------------------------------------*/
static void
set_link_addr(void)
{
  linkaddr_t addr;
  unsigned int i;

  memset(&addr, 0, sizeof(linkaddr_t));
#if UIP_CONF_IPV6
#if SAMR21
  memcpy(addr.u8, eui64, sizeof(addr.u8));
#else 
  memcpy(addr.u8, node_mac, sizeof(addr.u8));
#endif
#else   /* UIP_CONF_IPV6 */
  if(node_id == 0) {
    for(i = 0; i < sizeof(linkaddr_t); ++i) {
#if SAMR21
      addr.u8[i] = eui64 [7 - i];
#else
	    addr.u8[i] = node_mac [7 - i];
#endif
    }
  } else {
    addr.u8[0] = node_id & 0xff;
    addr.u8[1] = node_id >> 8;
  }
#endif  /* UIP_CONF_IPV6 */
  linkaddr_set_node_addr(&addr);
  printf("Link layer addr ");
  for(i = 0; i < sizeof(addr.u8) - 1; i++) {
    printf("%u:", addr.u8[i]);
  }
  printf("%u, ", addr.u8[i]);
  for(i = 0; i < sizeof(addr.u8) - 1; i++) {
    printf("%02x:", addr.u8[i]);
  }
  printf("%02x\n", addr.u8[i]);
}
/*---------------------------------------------------------------------------*/
static void
print_processes(struct process * const processes[])
{
  printf("Starting");
  while(*processes != NULL) {
    printf(" %s", (*processes)->name);
    processes++;
  }
  putchar('\n');
}
/*---------------------------------------------------------------------------*/
/* Debug measure - output serial data over ethernet instead of UART */
#define PUTS_ON_ENC 0
#if PUTS_ON_ENC
int
puts(const char* str)
{
  enc28j60_send(str, strlen(str));
  return 0;
}
#endif /* PUTS_ON_ENC */
/*---------------------------------------------------------------------------*/
/* Init UART and stdio for printf's over the EDBG virtual COM port. */
/*
static void
init_serial(void)
{
  //  return;
  / * by default, SERCOM3 is used - defined in samr21_xplained_pro.h * /
  struct usart_config cdc_uart_config;
  usart_get_config_defaults(&cdc_uart_config);

  / * Configure the USART settings and initialize the standard I/O library * /
  cdc_uart_config.baudrate    = 115200;
  cdc_uart_config.mux_setting = EDBG_CDC_SERCOM_MUX_SETTING;
  cdc_uart_config.pinmux_pad0 = EDBG_CDC_SERCOM_PINMUX_PAD0;
  cdc_uart_config.pinmux_pad1 = EDBG_CDC_SERCOM_PINMUX_PAD1;
  cdc_uart_config.pinmux_pad2 = EDBG_CDC_SERCOM_PINMUX_PAD2;
  cdc_uart_config.pinmux_pad3 = EDBG_CDC_SERCOM_PINMUX_PAD3;

  stdio_serial_init(&usart_instance, EDBG_CDC_MODULE, &cdc_uart_config);
  usart_enable(&usart_instance);
  usart_enable_transceiver(&usart_instance, USART_TRANSCEIVER_TX);
}*/
/*---------------------------------------------------------------------------*/
/* 
 * This seems needed for libc init array. We get compilation errors if removed.
 */
/*
void
_init(void)
{
}*/
/*---------------------------------------------------------------------------*/
#define REG_RCAUSE     (0x40000438U)
/**
 * \brief      Print out all known reset causes
 * \return     Returns nothing
 */
static void
print_reset_causes(void)
{
  uint8_t rcause = *((uint8_t *)REG_RCAUSE);
  printf("Last reset cause: ");
  if(rcause & (1 << 6)) {
    printf("System Reset Request\n");
  }
  if(rcause & (1 << 5)) {
    printf("Watchdog Reset\n");
  }
  if(rcause & (1 << 4)) {
    printf("External Reset\n");
  }
  if(rcause & (1 << 2)) {
    printf("Brown Out 33 Detector Reset\n");
  }
  if(rcause & (1 << 1)) {
    printf("Brown Out 12 Detector Reset\n");
  }
  if(rcause & (1 << 0)) {
    printf("Power-On Reset\n");
  }
}


#if UART_RX_ENABLE
void serial_data_handler(void)
{
      uint8_t i, j;     // for test only
      
     
      //if (data_length == 0) {
            /// * No data to process, read the stream IO * /
            ////rx_index = 0;
            //data_length = sio2host_rx(data, 156); / * @ToDo 20 ?,
                                                               // * different
                                                             // * values for
                                                               // * USB and
                                                              // * UART ? * /
            //
            //
      //} else { / * Data has been received, process the data * /
            //printf("Receiving file..\n");
            //data_length--;
            //rx_index++;
            //if(rx_index ==99)
            //{
                  //printf("Received File!!!!!!!!!!\n");
            //}
      //}
 
      data_length = sio2host_rx(data, SERIAL_RX_BUF_SIZE_HOST);     // Get input from UART
     
      if (data_length != 0)   // UART data has been received
      {
            for (i = 0; i < data_length; i++)
            {
                  uart_rx_buf[rx_index++] = data[i];  // Put the received data in the buffer
                 
                  if (uart_rx_buf[rx_index - 1] == '>')     // The char '>' is defined as the end of the char sequence
                  {
                        for (j = 0; j < rx_index; j++)
                        {
                              printf("%c", uart_rx_buf[j]); // Print out the buffer content
                              uart_rx_buf[j] = 0x00;
							  //data[j] = 0x00;
							 /* if (j + 1 == rx_index){
						      printf("%c", uart_rx_buf[j+1]);
							  uart_rx_buf[j+1] = 0x00;
							  //data[j+1] = 0x00;
							  }  // Clear the buffer*/
                        }
                       
					   
                        printf("\n");
                        rx_index = 0;     // Reset the buffer pointer
                  }
            }
      }
}
#endif
/*---------------------------------------------------------------------------*/
#if 0
void
Default_Handler()
{
  errcode = 8;

  /* flip around a pin that can be seen on a logic analyzer for example */
  while (1)
  {
    LED_ON();
    LED_OFF();
    FLIP_ON();
    FLIP_OFF();
  }
}
#endif
/*---------------------------------------------------------------------------*/
