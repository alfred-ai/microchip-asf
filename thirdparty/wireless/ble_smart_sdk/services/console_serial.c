#include <asf.h>
#include <conf_uart_serial.h>
#include <string.h>
#include <stdarg.h>

#include "console_serial.h"

struct uart_module uart_instance;
struct uart_config config_uart;

volatile static bool read_complete_flag = false;
unsigned char string_input[1] = {0};
unsigned int tick =0 ;

void _time_start(unsigned int sec);
unsigned int _time_done(void);

static void uart_read_complete_callback(struct uart_module *const module)
{
	read_complete_flag = true;
}

void serial_console_init(void)
{
	system_clock_config(CLOCK_RESOURCE_XO_26_MHZ, CLOCK_FREQ_26_MHZ);

	uart_get_config_defaults(&config_uart);

	config_uart.baud_rate = 115200;
	config_uart.pin_number_pad[0] = EDBG_CDC_SERCOM_PIN_PAD0;
	config_uart.pin_number_pad[1] = EDBG_CDC_SERCOM_PIN_PAD1;
	config_uart.pin_number_pad[2] = EDBG_CDC_SERCOM_PIN_PAD2;
	config_uart.pin_number_pad[3] = EDBG_CDC_SERCOM_PIN_PAD3;
	
	config_uart.pinmux_sel_pad[0] = EDBG_CDC_SERCOM_MUX_PAD0;
	config_uart.pinmux_sel_pad[1] = EDBG_CDC_SERCOM_MUX_PAD1;
	config_uart.pinmux_sel_pad[2] = EDBG_CDC_SERCOM_MUX_PAD2;
	config_uart.pinmux_sel_pad[3] = EDBG_CDC_SERCOM_MUX_PAD3;

	stdio_serial_init(&uart_instance, CONF_STDIO_USART_MODULE, &config_uart);
}

void _time_start(unsigned int sec)
{
	system_clock_get_value();
	unsigned int main_clk = system_clock_get_value();

	tick = (((double)(main_clk)) * ((double)0.0000493)) * (sec * 1000);
}

unsigned int _time_done()
{
	return --tick;
}

int getchar_b11_timeout(unsigned int sec)
{
	
	read_complete_flag = false;
	_time_start(sec);
	
	string_input[0] = 0;
	uart_register_callback(&uart_instance, uart_read_complete_callback, UART_RX_COMPLETE);
	uart_enable_callback(&uart_instance, UART_RX_COMPLETE);
	uart_read_buffer_job(&uart_instance, string_input, sizeof(string_input));
	
	while (!read_complete_flag && _time_done() > 0 );
	
	if( tick == 0 )
	{
		uart_unregister_callback(&uart_instance, UART_RX_COMPLETE);
		uart_disable_callback(&uart_instance, UART_RX_COMPLETE);
	}
	return string_input[0];
}

int getchar_b11(void)
{
	read_complete_flag = false;
	
	string_input[0] = 0;
	uart_register_callback(&uart_instance, uart_read_complete_callback, UART_RX_COMPLETE);
	uart_enable_callback(&uart_instance, UART_RX_COMPLETE);
	uart_read_buffer_job(&uart_instance, string_input, sizeof(string_input));
	
	while (!read_complete_flag);
	
	return string_input[0];
}

void getchar_aysnc(uart_callback_t callback_func, unsigned char * input) {
	uart_register_callback(&uart_instance, callback_func, UART_RX_COMPLETE);
	uart_enable_callback(&uart_instance, UART_RX_COMPLETE);
	uart_read_buffer_job(&uart_instance, input, 1);
}