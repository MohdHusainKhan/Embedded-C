#include <avr/io.h>
#include <util/delay.h>
#include "inc/Activity1.h"
#include "inc/Activity2.h"
#include "inc/Activity3.h"
#include "inc/Activity4.h"

int main(void)
{
    /**
     * @brief Calling All activities functions.
     * 
     */
    activity1();
    activity2();
    activity3();
    activity4(0);

    return 0;
}
