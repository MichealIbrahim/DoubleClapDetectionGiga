/*
 * TIM.LIB.c
 *
 *  Created on: Aug 22, 2024
 *      Author: Rozaya
 */

#include "debug.h"
#include "Ch32v2x_pins.h"
#include "TIM_LIB.h"


void TIMx_setup(TIM_TypeDef* TIMx , u16 arr, u16 psc)
{
    if(TIMx == TIM1)TIM1_EN();
    else if(TIMx == TIM2)TIM2_EN();
    else if(TIMx == TIM3)TIM3_EN();
    else if(TIMx == TIM4)TIM4_EN();

    TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStructure = {0};
    TIM_TimeBaseInitStructure.TIM_Period = arr;
    TIM_TimeBaseInitStructure.TIM_Prescaler = psc;
    TIM_TimeBaseInitStructure.TIM_ClockDivision = TIM_CKD_DIV1;
    TIM_TimeBaseInitStructure.TIM_CounterMode = TIM_CounterMode_Up;
    TIM_TimeBaseInitStructure.TIM_RepetitionCounter = 0;
    TIM_TimeBaseInit(TIMx, &TIM_TimeBaseInitStructure);
    TIM_ARRPreloadConfig(TIMx, ENABLE);
    TIM_Cmd(TIMx, ENABLE);

}

void TIMx_GPIO_setup(TIM_TypeDef* TIMx,TIMChannel_TypeDef channel , u8 n)
{
    GPIO_InitTypeDef        GPIO_InitStructure = {0};

    if(TIMx == TIM1)
    {
        TIM1_EN();
        GPIOA_EN();
        if (n) GPIOB_EN();
        if(channel&channel_1)
        {
            GPIO_InitStructure.GPIO_Pin = TIM1_CH1_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM1_CH1_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM1_CH1_PORT, &GPIO_InitStructure);
            if(n)
            {
                GPIO_InitStructure.GPIO_Pin = TIM1_CH1N_PIN;
                GPIO_InitStructure.GPIO_Mode = TIM1_CH1N_MODE;
                GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
                GPIO_Init(TIM1_CH1N_PORT, &GPIO_InitStructure);
            }
        }

        if(channel&channel_2)
        {
            GPIO_InitStructure.GPIO_Pin = TIM1_CH2_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM1_CH2_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM1_CH2_PORT, &GPIO_InitStructure);
            if(n)
            {
                GPIO_InitStructure.GPIO_Pin = TIM1_CH2N_PIN;
                GPIO_InitStructure.GPIO_Mode = TIM1_CH2N_MODE;
                GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
                GPIO_Init(TIM1_CH2N_PORT, &GPIO_InitStructure);
            }
        }

        if(channel&channel_3)
        {
            GPIO_InitStructure.GPIO_Pin = TIM1_CH3_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM1_CH3_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM1_CH3_PORT, &GPIO_InitStructure);
            if(n)
            {
                GPIO_InitStructure.GPIO_Pin = TIM1_CH3N_PIN;
                GPIO_InitStructure.GPIO_Mode = TIM1_CH3N_MODE;
                GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
                GPIO_Init(TIM1_CH3N_PORT, &GPIO_InitStructure);
            }
        }

        if(channel&channel_4)
        {
            GPIO_InitStructure.GPIO_Pin = TIM1_CH4_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM1_CH4_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM1_CH4_PORT, &GPIO_InitStructure);

        }
    }
    if (TIMx == TIM2) {
        TIM2_EN();
        GPIOA_EN();
        if(channel&channel_1){
            GPIO_InitStructure.GPIO_Pin = TIM2_CH1_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM2_CH1_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM2_CH1_PORT, &GPIO_InitStructure);

        }

        if(channel&channel_2){
            GPIO_InitStructure.GPIO_Pin = TIM2_CH2_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM2_CH2_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM2_CH2_PORT, &GPIO_InitStructure);
            printf("gpio_bad\r\n");
        }

        if(channel&channel_3){
            GPIO_InitStructure.GPIO_Pin = TIM2_CH3_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM2_CH3_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM2_CH3_PORT, &GPIO_InitStructure);
        }

        if(channel&channel_4){
            GPIO_InitStructure.GPIO_Pin = TIM2_CH4_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM2_CH4_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM2_CH4_PORT, &GPIO_InitStructure);
        }

    }

    if (TIMx == TIM3) {
        TIM3_EN();

        if(channel&channel_1){
            GPIOA_EN();
            GPIO_InitStructure.GPIO_Pin = TIM3_CH1_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM3_CH1_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM3_CH1_PORT, &GPIO_InitStructure);
        }

        if(channel&channel_2){
            GPIOA_EN();
            GPIO_InitStructure.GPIO_Pin = TIM3_CH2_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM3_CH2_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM3_CH2_PORT, &GPIO_InitStructure);
        }

        if(channel&channel_3){
            GPIOB_EN();
            GPIO_InitStructure.GPIO_Pin = TIM3_CH3_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM3_CH3_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM3_CH3_PORT, &GPIO_InitStructure);
        }

        if(channel&channel_4){
            GPIOB_EN();
            GPIO_InitStructure.GPIO_Pin = TIM3_CH4_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM3_CH4_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM3_CH4_PORT, &GPIO_InitStructure);
        }

    }

    if (TIMx == TIM4) {
        TIM4_EN();
        GPIOB_EN();
        if(channel&channel_1){
            GPIO_InitStructure.GPIO_Pin = TIM4_CH1_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM4_CH1_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM4_CH1_PORT, &GPIO_InitStructure);
        }

        if(channel&channel_2){
            GPIO_InitStructure.GPIO_Pin = TIM4_CH2_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM4_CH2_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM4_CH2_PORT, &GPIO_InitStructure);
        }

        if(channel&channel_3){
            GPIO_InitStructure.GPIO_Pin = TIM4_CH3_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM4_CH3_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM4_CH3_PORT, &GPIO_InitStructure);
        }

        if(channel&channel_4){
            GPIO_InitStructure.GPIO_Pin = TIM4_CH4_PIN;
            GPIO_InitStructure.GPIO_Mode = TIM4_CH4_MODE;
            GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
            GPIO_Init(TIM4_CH4_PORT, &GPIO_InitStructure);
        }

    }



}


/*
 * n = 1 enable negative channel
 *
 */
void TIMx_PWMOut_Init(TIM_TypeDef* TIMx , u16 arr, u16 psc, u16 ccp ,TIMChannel_TypeDef channel,u8 n)
{

    TIM_OCInitTypeDef       TIM_OCInitStructure = {0};
    TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStructure = {0};
    TIMx_GPIO_setup(TIMx, channel, n);
    TIM_TimeBaseInitStructure.TIM_Period = arr;
    TIM_TimeBaseInitStructure.TIM_Prescaler = psc;
    TIM_TimeBaseInitStructure.TIM_ClockDivision = TIM_CKD_DIV1;
    TIM_TimeBaseInitStructure.TIM_CounterMode = TIM_CounterMode_Up;
    TIM_TimeBaseInitStructure.TIM_RepetitionCounter = 0;
    TIM_TimeBaseInit(TIMx, &TIM_TimeBaseInitStructure);

    TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM2;
    TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable;
    TIM_OCInitStructure.TIM_Pulse = ccp;
    TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_Low;
    if (n) {
        TIM_OCInitStructure.TIM_OutputNState =TIM_OutputNState_Enable;
        TIM_OCInitStructure.TIM_OCNPolarity = TIM_OCNPolarity_Low;
    }

    if(channel & channel_1)
    {
        TIM_OC1Init(TIMx, &TIM_OCInitStructure);
        TIM_OC1PreloadConfig(TIMx, TIM_OCPreload_Enable);
    }
    if(channel & channel_2)
    {
        TIM_OC2Init(TIMx, &TIM_OCInitStructure);
        TIM_OC2PreloadConfig(TIMx, TIM_OCPreload_Enable);
    }
    if(channel & channel_3)
    {
        TIM_OC3Init(TIMx, &TIM_OCInitStructure);
        TIM_OC3PreloadConfig(TIMx, TIM_OCPreload_Enable);
    }
    if(channel & channel_4)
    {
        TIM_OC4Init(TIMx, &TIM_OCInitStructure);
        TIM_OC4PreloadConfig(TIMx, TIM_OCPreload_Enable);
    }
    TIM_ARRPreloadConfig(TIMx, ENABLE);
    TIM_Cmd(TIMx, ENABLE);
}

ITStatus TIM_GetITStatusO(TIM_TypeDef *TIMx, uint16_t TIM_IT)
{
    return ((TIMx->INTFR & TIM_IT) && (TIMx->DMAINTENR & TIM_IT));
}
