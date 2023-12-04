
#include <stdbool.h>
#include <stdint.h>

#include "nrf.h"
#include "nordic_common.h"
#include "boards.h"
#include "nrf_delay.h"
#include "nrf_gpio.h"

#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

#include "ds18b20.h"

static float temp = 0;
char buffer[50];
		
int main(void)
{
	APP_ERROR_CHECK(NRF_LOG_INIT(NULL));
	NRF_LOG_DEFAULT_BACKENDS_INIT();
	
	NRF_LOG_INFO("helooooo anh em...");
	uint32_t count = 0;
	
	ds18b20_setResolution(12);

  //temp = ds18b20_get_temp_method_2();
	//NRF_LOG_INFO("Value data DS18b20: %.3f \r\n", temp);
    while (true)
    {


			
      temp = ds18b20_get_temp();
			nrf_delay_ms(2000);
			sprintf(buffer, "value_ds18b20: %.3f", temp);
			NRF_LOG_INFO("%d: %s \r\n", count, buffer);
			count++;
    }
}

