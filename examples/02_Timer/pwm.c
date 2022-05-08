#include <avr/io.h>
#include "pwm.h"

void Timer0Init_Normal(void)
{
    // Timer0 initialization
	TCCR0A = ((0<<COM0A1) | (1<<COM0A0) | (0<<WGM01) | (0<<WGM00));
	TCCR0B = ((1<<FOC0A) | (0<<FOC0B) | (0<<WGM02) | (0<<CS02) | (1<<CS01) | (1<<CS00));
	TIMSK0 = (1<<TOIE0);

    return;
}
