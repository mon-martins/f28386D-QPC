/*
 * resources_config.h
 *
 *  Created on: 5 de mar de 2024
 *      Author: ramon.martins
 */

#ifndef APPLICATION_INCLUDE_RESOURCES_CONFIG_H_
#define APPLICATION_INCLUDE_RESOURCES_CONFIG_H_


// User Assert use this to custom your assert before system stop
// if defined, it's required define the "user_assert()" function

//#define USER_ASSERT


#ifdef USER_ASSERT
    void user_assert(unsigned int assert_source, unsigned int assert_number);
#endif

#endif /* APPLICATION_INCLUDE_RESOURCES_CONFIG_H_ */
