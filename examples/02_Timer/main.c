// ########################################
//
// author: Leo Hofer
// date: 8.5.2022
// description: PWM library example
//
// ########################################

// AVR base libraries
#include <avr/io.h>
#include <avr/interrupt.h>

// user libraries
#include "timer.h"

// global counter variable for use in InterruptServiceRoutine
volatile uint8_t counter = 0;

// ISR msut be defined, even when not used
ISR(TIMER0_OVF_vect)
{
	
}

int main (void)
{
	// ############### Initialization ################

	// config PD6 as output
	DDRD |= (1<<PORTD6);

	// Timer0 initialization
	Timer0Init_Normal(TMR0_PRESCALER_64);

	// enable global interrupts --> GIE = 1
	sei();

	// ############### endless loop ##################
	while(1)
	{
		
	}
}
