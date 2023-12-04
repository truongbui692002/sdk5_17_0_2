
#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "boards.h"
#include <stdio.h>

#include "nrf52_gpio.h"
#include "ds18b20.h"

/**
 * @brief Function for application main entry.
 */
int main(void)
{
		//static float temp = 0;
	
		nrf52_output_creat(15);
		nrf52_output_set_level(15, 0);
	
	  //ds18b20_setResolution(12);

    //temp = ds18b20_get_temp_method_2();
    //printf("Temperature: %.3f \r\n", temp);
	
    while (true)
    {
			nrf52_toggle(15);
			nrf_delay_ms(50);
			//nrf_delay_ms(2000);
      //temp = ds18b20_get_temp_method_2();
    }
}

/**
 *@
 **/
