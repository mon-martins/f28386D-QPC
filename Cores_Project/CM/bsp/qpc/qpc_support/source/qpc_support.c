/*
 * qpc_support.c
 *
 *  Created on: 11 de mar de 2024
 *      Author: ramon.martins
 */

#include "qpc_support.h"
#include "resources_config.h"
#include "freertos_support.h"

void QF_onStartup(void) {}
void QF_onCleanup(void) {}
void QF_onClockTick(void) {}
void Q_onError(char const * const module, int id) {
#if USER_ASSERT
    user_assert( 2 , id);
#endif
    taskDISABLE_INTERRUPTS();
    ESTOP0;
    while(1);
}
