#ifndef HARDWARE_H
#define HARDWARE_H
#include <stdint.h>

typedef enum{
    AS_OUTPUT = 0,
    AS_INPUT
}_PIN_DIRECTION_t;

void initializeGPIO(uint32_t _pin, _PIN_DIRECTION_t _direction);

#endif