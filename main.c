#include <stdio.h>
#include <stdlib.h>
#include "hardware.h"



enum{
    toggle_e = 't',
    all_low_e = 'c',
    all_high_e = 's',
    quit_e = 'q',
      
};


int main(int argc, char **argv)
{
    char c;
    int exit_loop = 0;
    
    if (initializeGPIO(1,AS_OUTPUT) == GPIO_FAILURE)
        puts("ERROR!!");
    while(!exit_loop)
    {
        while((c = getchar()) == '\n')
        {
            ;
        }
        switch(c)
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            {
                printf("LED %c got lit!\n",c);
                break;
            }

            case toggle_e:
            {
                printf ("LED %c got toggled!\n",c);
                break;
            }

            case all_low_e:
            {
                printf("All LEDs got unlit!\n");
                break;
            }

            case all_high_e:
            {
                printf("All LEDs got lit!\n");
                break;
            }

            case quit_e:
            {
                printf("Exiting!\n");
                break;
            }

            default:
            {
                printf("Unknown command!\n");
                break;
            }
        }
    }
    
    

    return 0;
}