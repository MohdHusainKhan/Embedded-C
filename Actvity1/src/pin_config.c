#include <avr/io.h>
#include "pin_config.h"


void pin_config()
{
   // Direction of ports
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD2);
    DDRD&=~(1<<PD3);

    // PULL-UP +5V for push-buttons
    PORTD|=(1<<PD2);
    PORTD |=(1<<PD3);
}
