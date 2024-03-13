/*
 * qpc_freertos_support.c
 *
 *  Created on: 11 de mar de 2024
 *      Author: ramon.martins
 */

#include "qpc_freertos_support.h"

void vApplicationTickHook(void) {
    BaseType_t xHigherPriorityTaskWoken = pdFALSE;

    /* process time events for rate 0 */
    QTIMEEVT_TICK_FROM_ISR(0U, &xHigherPriorityTaskWoken, (void *)0);

    /* notify FreeRTOS to perform context switch from ISR, if needed */
    portYIELD_FROM_ISR(xHigherPriorityTaskWoken);
}
