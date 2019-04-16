#include <asf.h>
#include "button.h"

void button_init(button_callback_t callback)
{
	struct gpio_config config_gpio_pin;

	gpio_get_config_defaults(&config_gpio_pin);

	config_gpio_pin.direction  = GPIO_PIN_DIR_INPUT;
	config_gpio_pin.input_pull = GPIO_PIN_PULL_NONE;

	gpio_pin_set_config(BUTTON_0_PIN, &config_gpio_pin);
	gpio_init();
	gpio_register_callback(BUTTON_0_PIN, callback, GPIO_CALLBACK_RISING);
	gpio_enable_callback(BUTTON_0_PIN);
}
