#include "C2000_Config.h"

/**
 * main.c
 */
void main(void)
{
    C2000_Init();

    EINT;
    ERTM;

    for(;;)
    {
        //
        // Turn on LED
        //
        GPIO_writePin(LED1, 0);

        //
        // Delay for a bit.
        //
        DEVICE_DELAY_US(500000);

        //
        // Turn off LED
        //
        GPIO_writePin(LED1, 1);

        //
        // Delay for a bit.
        //
        DEVICE_DELAY_US(500000);
    }

    while(1);
}
