#include <avr/io.h>
#include <util/delay.h>
#include "Activity1.h"


#define switch_1 !(PIND&(1<<PD2))
#define switch_2 !(PIND&(1<<PD3))

void pin_config()
{
   // Direction of ports
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD2);
    DDRD&=~(1<<PD3);

    // PULL-UP +5V for switches
    PORTD|=(1<<PD2);
    PORTD |=(1<<PD3);
}

int system_init(void)
{
    // calling pin_config() function.
    pin_config();
    while(1)
    {
        //Checking both the switches are closed or not.
        if((switch_1 )&& (switch_2 ))
        {
        //Output logic 1 at PB0.
        PORTB|=(1<<PB0);
        //delay of 200 milliseconds
        _delay_ms(200);
        }
        else
        {
            //Output logic 0 at PB0.
            PORTB&=~(1<<PB0);
            //delay of 200 milliseconds.
            _delay_ms(200);
        }
    }

    return 0;
}

