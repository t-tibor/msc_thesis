#ifndef __MY_EVENT_MUX_H
#define __MY_EVENT_MUX_H

#include <linux/kernel.h>

// DMTimer / ECAP incout capture event sources
#define DMTIMER_ECAP_EVENT_IOPIN 			0
#define DMTIMER_ECAP_EVENT_UART0INT 		1
#define DMTIMER_ECAP_EVENT_UART1INT 		2
#define DMTIMER_ECAP_EVENT_UART2INT 		3
#define DMTIMER_ECAP_EVENT_UART3INT 		4
#define DMTIMER_ECAP_EVENT_UART4INT 		5
#define DMTIMER_ECAP_EVENT_UART5INT 		6
#define DMTIMER_ECAP_EVENT_3PGSWRXTHR0 		7
#define DMTIMER_ECAP_EVENT_3PGSWRXINT0 		8
#define DMTIMER_ECAP_EVENT_3PGSWTXINT0 		9
#define DMTIMER_ECAP_EVENT_3PGSWMISC0 		10
#define DMTIMER_ECAP_EVENT_MCATXINT0 		11
#define DMTIMER_ECAP_EVENT_MCARXINT0 		12
#define DMTIMER_ECAP_EVENT_MCATXINT1 		13
#define DMTIMER_ECAP_EVENT_MCARXINT1 		14
#define DMTIMER_ECAP_EVENT_GPIOINT0A 		17
#define DMTIMER_ECAP_EVENT_GPIOINT0B 		18
#define DMTIMER_ECAP_EVENT_GPIOINT1A 		19
#define DMTIMER_ECAP_EVENT_GPIOINT1B 		20
#define DMTIMER_ECAP_EVENT_GPIOINT2A 		21
#define DMTIMER_ECAP_EVENT_GPIOINT2B 		22
#define DMTIMER_ECAP_EVENT_GPIOINT3A 		23
#define DMTIMER_ECAP_EVENT_GPIOINT3B 		24
#define DMTIMER_ECAP_EVENT_DCAN0_INT0 		25
#define DMTIMER_ECAP_EVENT_DCAN0_INT1 		26
#define DMTIMER_ECAP_EVENT_DCAN0_PARITY 	27
#define DMTIMER_ECAP_EVENT_DCAN1_INT0 		28
#define DMTIMER_ECAP_EVENT_DCAN1_INT1 		29
#define DMTIMER_ECAP_EVENT_DCAN1_PARITY 	30

// ADC trigger event source
#define ADC_EVENT_PRU_HOST_EVENT0	(0x00)
#define ADC_EVENT_TIMER4_EVENT		(0x01)
#define ADC_EVENT_TIMER5_EVENT		(0x02)
#define ADC_EVENT_TIMER6_EVENT		(0x03)
#define ADC_EVENT_TIMER7_EVENT		(0x04)

int event_mux_set_dmtimer_event(u32 timer_idx, u32 event_id);
int event_mux_set_ecap_event(u32 ecap_idx, u32 event_id);
int event_mux_set_adc_event(u32 event_id); 

int event_mux_get_dmtimer_event(u32 timer_idx);
int event_mux_get_ecap_event(u32 ecap_idx);
int event_mux_get_adc_event(void);

#endif