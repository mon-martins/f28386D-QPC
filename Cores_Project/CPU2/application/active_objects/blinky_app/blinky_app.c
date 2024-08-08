/*
 * blinky_app.c
 *
 *  Created on: 12 de mar de 2024
 *      Author: ramon.martins
 */
#include "AOs/ao_blinky/blinky.h"
#include "board.h"

void blinky_led_on(blinky * const me){
    GPIO_writePin(LED2, 0);
}
void blinky_led_off(blinky * const me){
    GPIO_writePin(LED2, 1);
}
