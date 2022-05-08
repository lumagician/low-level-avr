#include <avr/io.h>
#include "timer.h"

void Timer0Init_Normal(uint8_t prescaler)
{
    // prescaler config
	TCCR0B = (((prescaler&CS02)<<CS02) | ((prescaler&CS01)<<CS01) | ((prescaler&CS00)<<CS00));

	TCCR0A = ((0<<COM0A1) | (1<<COM0A0) | (0<<WGM01) | (0<<WGM00));
	TCCR0B = ((1<<FOC0A) | (0<<FOC0B) | (0<<WGM02));

	// Enable 
	TIMSK0 = (1<<TOIE0);

    return;
}
