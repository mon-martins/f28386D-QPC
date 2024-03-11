//
// Included Files
//

#include "CM_Config.h"
#include "freertos_support.h"

/**
 * main.c
 */

void led_blink(void *pvParams);

void main(void)
{

    CortexM_Init();

    xTaskCreate(&led_blink,"LED_BLINK",configMINIMAL_STACK_SIZE,NULL,2,NULL);

    FreeRTOS_init();

}

void led_blink(void *pvParams) {
    while (1) {
        GPIO_writePin(LED3, 1);
        vTaskDelay(250/portTICK_RATE_MS);
        GPIO_writePin(LED3, 0);
        vTaskDelay(250/portTICK_RATE_MS);
    }
}

