#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "hardware.h"


struct{
    char *trueGpio;
    uint8_t value;
}GPIO[]={
    [0] = {.trueGpio = "17", .value = 0},
    [1] = {.trueGpio = "4",  .value = 0},
    [2] = {.trueGpio = "18", .value = 0},
    [3] = {.trueGpio = "23", .value = 0},
    [4] = {.trueGpio = "24", .value = 0},
    [5] = {.trueGpio = "25", .value = 0},
    [6] = {.trueGpio = "22", .value = 0},
    [7] = {.trueGpio = "27", .value = 0},
};

int initializeGPIO(uint32_t _pin,_PIN_DIRECTION_t _direction)
{

    return GPIO_SUCCESS;
}

int setGPIO(uint32_t _pin)
{

    return GPIO_SUCCESS;
}





