/*
 * blinky_app.c
 *
 *  Created on: 12 de mar de 2024
 *      Author: ramon.martins
 */
#include "AOs/ao_blinky/blinky.h"

#include "board.h"
#include "driverlib_cm.h"

void blinky_led_on(blinky * const me){
    GPIO_writePin(LED3, 0);
}
void blinky_led_off(blinky * const me){
    GPIO_writePin(LED3, 1);
}
