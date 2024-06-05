#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "hardware.h"


static struct{
    char *trueGpio,*path;
    uint8_t value;
}GPIO[]={
    [0] = {.trueGpio = "17", .value = 0, .path = "/sys/class/gpio/gpio17"},
    [1] = {.trueGpio = "4",  .value = 0},
    [2] = {.trueGpio = "18", .value = 0},
    [3] = {.trueGpio = "23", .value = 0},
    [4] = {.trueGpio = "24", .value = 0},
    [5] = {.trueGpio = "25", .value = 0},
    [6] = {.trueGpio = "22", .value = 0},
    [7] = {.trueGpio = "27", .value = 0},
};

static updateAllGPIO(void)
{
 
}
int initializeGPIO(uint32_t _pin,_PIN_DIRECTION_t _direction)
{
    FILE *file;
    if (_pin >= (sizeof(GPIO)/sizeof(*GPIO)) || (file = fopen("/sys/class/gpio/export","w")) == NULL)
    {
        printf("why");
        return GPIO_FAILURE;
    }
    
    if (fputs(GPIO[_pin].trueGpio,file) == -1)
    {
        return GPIO_FAILURE;
    }
    char path[64];
    sprintf(path,"/sys/class/gpio/gpio%s/directions",GPIO[_pin].trueGpio);
    puts(path);
    return GPIO_SUCCESS;
}

int setGPIO(uint32_t _pin)
{

    return GPIO_SUCCESS;
}





