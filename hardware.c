#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "hardware.h"


struct{
    char *trueGpio;
    uint8_t value;
}GPIO[]={
    [0] = {.trueGpio = "17",.value = 0},
    [1] = "4",
    [2] = "18",
    [3] = "23",
    [4] = "24",
    [5] = "25",
    [6] = "22",
    [7] = "27",
};

int initializeGPIO(uint32_t _pin,_PIN_DIRECTION_t _direction)
{

    return GPIO_SUCCESS;
}

int setGPIO(uint32_t _pin)
{

    return GPIO_SUCCESS;
}

int toggle



