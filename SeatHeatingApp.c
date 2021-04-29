#include <avr/io.h>
#include <util/delay.h>
#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"

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
