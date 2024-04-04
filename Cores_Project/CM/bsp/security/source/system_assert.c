/*
 * system_assert.c
 *
 *  Created on: 5 de mar de 2024
 *      Author: ramon.martins
 */

#include "system_assert.h"
#include "resources_config.h"
#include "freertos_support.h"

void system_assert(const char *filename, int assert_number){
#if USER_ASSERT
    user_assert(filename, assert_number);
#endif
    taskDISABLE_INTERRUPTS();
    ESTOP0;
    while(1);
}

