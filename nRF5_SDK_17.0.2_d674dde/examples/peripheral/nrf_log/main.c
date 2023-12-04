
#include <stdbool.h>
#include <stdint.h>

#include "nrf.h"
#include "nordic_common.h"
#include "boards.h"
#include "nrf_delay.h"

#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

/**
 * @brief Function for application main entry.
 */
int main(void)
{
	APP_ERROR_CHECK(NRF_LOG_INIT(NULL));
	NRF_LOG_DEFAULT_BACKENDS_INIT();
	
	NRF_LOG_INFO("helooooo anh em...");

	  uint32_t count = 0;
    while (true)
    {
      NRF_LOG_INFO("Value data:%d", count);
			nrf_delay_ms(1000);
			count++;
			
    }
}
/** @} */
