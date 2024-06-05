#ifndef HARDWARE_H
#define HARDWARE_H
#include <stdint.h>


#define GPIO_FAILURE -1
#define GPIO_SUCCESS 0

typedef enum{
    AS_OUTPUT = 0,
    AS_INPUT,
}_PIN_DIRECTION_t;



int initializeGPIO(uint32_t _pin, _PIN_DIRECTION_t _direction);

#endif