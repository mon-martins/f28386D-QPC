/**
 * main.c
 */


#include "FreeRTOS.h"
#include "application.h"

void main(void)
{
    C2000_Init();

    application_init();

    EINT;
    ERTM;

    QF_run();

    while(1){
        ESTOP0;
    };
}
