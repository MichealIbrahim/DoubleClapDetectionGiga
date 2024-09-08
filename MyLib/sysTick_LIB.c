/*
 * sysTick_LIB.c
 *
 *  Created on: Aug 26, 2024
 *      Author: Rozaya
 */

#include "debug.h"


void SYSTICK_Init_Config(u64 ticks)
{
    SysTick->SR = 0;
    SysTick->CNT = 0;
    SysTick->CMP = ticks;
    SysTick->CTLR =0xF;

    NVIC_SetPriority(SysTicK_IRQn, 2);

}
