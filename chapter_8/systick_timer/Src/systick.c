
#include "systick.h"

#define CTRL_ENABLE (1U<<0)

#define CTRL_CLKSRC (1U<<2)

#define CTRL_COUNTFLAG (1U<<16)

#define ONE_MS_LOAD (16000U - 1U)

void systick_ms_delay(uint32_t ms)
{
    /*load number of clock cycles per millisecond*/
    SysTick->LOAD = ONE_MS_LOAD;
    
    /*clear systick current value register*/
    SysTick->VAL = 0U;

    
}