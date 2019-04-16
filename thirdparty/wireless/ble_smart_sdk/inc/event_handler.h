#ifndef __EVENT_H__
#define __EVENT_H__
#include <stdint.h>

void platform_event_init(void);

void platform_event_post(uint16_t event_type, void * data, uint16_t data_len);

//uint32_t special_events_handler(uint16_t msg_id, uint16_t src_id, uint8_t* data);


#endif
