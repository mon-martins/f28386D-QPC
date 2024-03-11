/*
 * freertos_support.h
 *
 *  Created on: 5 de mar de 2024
 *      Author: ramon.martins
 */

#ifndef BSP_FREERTOS_INCLUDE_FREERTOS_SUPPORT_H_
#define BSP_FREERTOS_INCLUDE_FREERTOS_SUPPORT_H_

#include "system_assert.h"

void vApplicationStackOverflowHook( void );
void vApplicationMallocFailedHook( void );

#endif /* BSP_FREERTOS_INCLUDE_FREERTOS_SUPPORT_H_ */
