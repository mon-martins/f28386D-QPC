/*
 * freertos_support.c
 *
 *  Created on: 5 de mar de 2024
 *      Author: ramon.martins
 */

#include "freertos_support.h"

void vApplicationStackOverflowHook(){
    // This is a critical erro in your FreeRTOS, this erros musca cause a stop
    // or a reset on your code

    // source: 2 - freertos
    // number: 1 - stack overflow

    system_assert(__FILE__,1);
}

void vApplicationMallocFailedHook(){
    // This is a critical erro in your FreeRTOS, this erros musca cause a stop
    // or a reset on your code

    // source: 2 - freertos
    // number: 1 - stack overflow

    system_assert(__FILE__,2);
}
