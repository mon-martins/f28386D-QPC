/*
 * qpc_support.c
 *
 *  Created on: 11 de mar de 2024
 *      Author: ramon.martins
 */

#include "qpc_support.h"
#include "resources_config.h"
#include "c2000_freertos.h"
#include "system_assert.h"

void QF_onStartup(void) {}
void QF_onCleanup(void) {}
void QF_onClockTick(void) {}
void Q_onError(char const * const module, int id) {
    system_assert(module,id);
}
