/*
 * blinky_app.c
 *
 *  Created on: 12 de mar de 2024
 *      Author: ramon.martins
 */
#include "./blinky_app.h"

void blinky_led_on(void){
    GPIO_writePin(LED1, 0);
}
void blinky_led_off(void){
    GPIO_writePin(LED1, 1);
}
