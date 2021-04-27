#include <avr/io.h>
#include <util/delay.h>
#include "pin_config.h"
int main(void)
{

    pin_config();
    while(1)
    {
        if(!(PIND&(1<<PD2)) && !(PIND&(1<<PD3)))
        {
        PORTB|=(1<<PB0);
        _delay_ms(200);
        }
        else
        {
            PORTB&=~(1<<PB0);
            _delay_ms(200);
        }
    }

    return 0;
}

