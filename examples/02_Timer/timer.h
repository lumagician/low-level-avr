// include guard
#ifndef PWM_LIB
#define PWM_LIB

// defines
#define TMR0_PRESCALER_0        1
#define TMR0_PRESCALER_8        2
#define TMR0_PRESCALER_64       3
#define TMR0_PRESCALER_256      4
#define TMR0_PRESCALER_1024     5

// prototypes
void Timer0Init_Normal(uint8_t prescaler);

// end of include guard
#endif