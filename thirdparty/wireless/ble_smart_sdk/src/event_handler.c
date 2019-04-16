
//#include "platform.h"
//#include "at_ble_api.h"

//#include "gapm_task.h"
//#include "at_ble_api.h"
//#include "gapc_task.h"
//#include "gattc_task.h"
//#include "gattm_task.h"
//#include "htpt_task.h"
//#include "device.h"

//#include "interface.h"
#include <string.h>
#include "platform.h"
#include "event_handler.h"

#define PLATFORM_EVENT_POOL_DEPTH 10

struct platform_event {
	struct platform_event* next;
	uint16_t event_type;
	uint16_t data_len;
	void* data;
};

static struct platform_event platform_event_pool[PLATFORM_EVENT_POOL_DEPTH];

static struct platform_event *platform_event_free_list = NULL;
static struct platform_event* platform_event_pending_list = NULL;
void platform_event_free(struct platform_event *event);
//struct str_watched_event watched_event;

void platform_event_free(struct platform_event* event)
{
	event->next = platform_event_free_list;
	platform_event_free_list = event;
}

void platform_event_post(uint16_t event_type, void * data, uint16_t data_len)
{
	// get a free event object
	struct platform_event* evt = platform_event_free_list;
	if(evt != NULL)
	{
		platform_event_free_list = evt->next;
		
		evt->next = NULL;
		evt->data = data;
		evt->data_len = data_len;
		evt->event_type = event_type;

		if(platform_event_pending_list == NULL)
		{
			platform_event_pending_list = evt;
		}
		else
		{
			struct platform_event* cur = platform_event_pending_list;
			while(cur->next != NULL)
			{
				cur = cur->next;
			}
			cur->next = evt;
		}
		
		//platform_event_signal();
	}
	
}

plf_drv_status platform_event_get(uint16_t* event_type, uint8_t* data, uint16_t *data_len)
{
	struct platform_event* event = NULL;
	plf_drv_status status= STATUS_SUCCESS;

	// block till an event is posted
	while(platform_event_pending_list == NULL )
	{	
		status = platform_event_wait(0);
	}
	
	event = platform_event_pending_list;
	platform_event_pending_list = platform_event_pending_list->next;
	*event_type = event->event_type;
	*data_len = ((event->data_len<=*data_len)?event->data_len:*data_len);
	//*data = event->data;
	memcpy(data,event->data,*data_len);

	platform_event_free(event);

	return status;
	
}

void platform_event_init()
{
	uint32_t i;
	platform_event_free_list = NULL;
	platform_event_pending_list = NULL;
	//memset(&watched_event,0,sizeof(struct str_watched_event));
	for(i = 0; i < PLATFORM_EVENT_POOL_DEPTH; i++)
	{
		platform_event_free(&platform_event_pool[i]);
	}
}
