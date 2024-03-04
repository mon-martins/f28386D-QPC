//
// Included Files
//

#include "CM_Config.h"

/**
 * main.c
 */

void main(void)
{

    CortexM_Init();

    for(;;)
    {
        //
        // Turn on LED
        //
        GPIO_writePin(LED3, 0);

        //
        // Delay for a bit.
        //
        DEVICE_DELAY_US(500000);

        //
        // Turn off LED
        //
        GPIO_writePin(LED3, 1);

        //
        // Delay for a bit.
        //
        DEVICE_DELAY_US(500000);
    }

    while(1);

}
