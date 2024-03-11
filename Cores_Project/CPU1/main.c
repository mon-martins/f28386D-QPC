/**
 * main.c
 */

#include "C2000_Config.h"
#include "FreeRTOS.h"

void led_blink(void *pvParams);

void main(void)
{
    C2000_Init();

    EINT;
    ERTM;

//    CLA_forceTasks(myCLA0_BASE, CLA_TASKFLAG_1);

    xTaskCreate(&led_blink,"LED_BLINK",configMINIMAL_STACK_SIZE,NULL,2,NULL);

    FreeRTOS_init();

    while(1);
}

#define portTICK_RATE_MS portTICK_PERIOD_MS

void led_blink(void *pvParams) {
    while (1) {
        GPIO_writePin(LED1, 1);
        vTaskDelay(500/portTICK_RATE_MS);
        GPIO_writePin(LED1, 0);
        vTaskDelay(500/portTICK_RATE_MS);
    }
}
