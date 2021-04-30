#include <avr/io.h>
#include <util/delay.h>
#include "../inc/Activity3.h"
#include "../inc/Activity2.h"
#include "../inc/Activity4.h"

unsigned volatile temperature; // declaring variable temperature

void Timer()
{
    TCCR1A |= (1 << COM1A1) | (1 << WGM11) | (1 << WGM10); // Selecting FAST mode for PWM
    TCCR1B |= (1 << WGM12) | (1 << CS11) | (1 << CS10);    //64 Prescalar
    DDRB |= (1 << PB1);                                    // Setting PB1 as output
}
int activity3()
{
    Timer();             // calling Timer() Function
    OCR1A = ADCregister; // Giving value of ADCregister to OCR1A

    if (ADCregister > 0 && ADCregister <= 200)
    {
        temperature = 20;
        activity4(temperature);
    }
    else if (ADCregister > 200 && ADCregister <= 500)
    {
        temperature = 25;
        activity4(temperature);
    }
    else if (ADCregister > 500 && ADCregister < 710)
    {
        temperature = 29;
        activity4(temperature);
    }
    else if (ADCregister > 710 && ADCregister < 1024)
    {
        temperature = 33;
        activity4(temperature);
    }

    return 0;
}
