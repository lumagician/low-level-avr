#include <avr/io.h>
#include <avr/interrupt.h>

void DelayOneSecond(void);

int main (void) {
	DDRB |= (1<<PORTB5);

	// globale Interrupts aktivieren --> GIE = 1
	sei();

	// endless loop blinks with a frequency of 0.5 Hz
	while(1)
	{
		PORTB = 0xff;
		DelayOneSecond();
		PORTB = 0x00;
		DelayOneSecond();
		DelayOneSecond();
	}
}

void DelayOneSecond(void)
{
	// these nested loops take exactly 1 second to execute
	for(uint16_t i = 0; i < 5000; i++)
	{
		for(uint8_t j = 0; j < 158; j++)
		{

		}
	}
}
