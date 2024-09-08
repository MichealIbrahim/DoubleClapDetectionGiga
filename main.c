/********************************** (C) COPYRIGHT *******************************
 * File Name          : main.c
 * Author             : WCH
 * Version            : V1.0.0
 * Date               : 2021/06/06
 * Description        : Main program body.
 *********************************************************************************
 * Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
 * Attention: This software (modified or not) and binary are used for 
 * microcontroller manufactured by Nanjing Qinheng Microelectronics.
 *******************************************************************************/

/*
 *@Note
 *USART Print debugging routine:
 *USART1_Tx(PA9).
 *This example demonstrates using USART1(PA9) as a print debug port output.
 *
 */

#include "debug.h"
#include "LIB_CH32.h"

/* Global typedef */

/* Global define */

/* Global Variable */

/*********************************************************************
 * @fn      main
 *
 * @brief   Main program.
 *
 * @return  none
 */
#define LED_PIN GPIO_Pin_5
#define channel ADC_Channel_5
#define ticks SystemCoreClock<<1
void TIM2_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));


u8 flag = 0 ;
u16 counter = 0;
int main(void)
{

    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);
    SystemCoreClockUpdate();
    Delay_Init();

    USART_Printf_Init(115200);
    printf("SystemClk:%d\r\n", SystemCoreClock);
    printf( "ChipID:%08x\r\n", DBGMCU_GetCHIPID() );
    printf("This is printf example\r\n");
    Delay_Ms(100);
    //TIMx_PWMOut_Init(TIM3, 100,144, 1, channel_1|channel_2, 0);
    /*
    my_ADC_init(analog_pin);
    ADC_Internal_tempSensor_enable();
    Delay_Ms(100);
    u16 adcValue=0;
    if(ADC_get_microControllerTemp() < -400){
        printf("\r\n system fault detected. reseting!\r\n");
        delay_ms(1);
        NVIC_SystemReset(); //fault ?
    }
    */

    pinMode(GPIOA, LED_PIN, OUTPUT);
    EXTI0_INT_INIT();
    TIMx_setup(TIM2, 1000, 144);
    TIM_Cmd(TIM2, DISABLE);
    TIM_ITConfig( TIM2, TIM_IT_Update , ENABLE );
    NVIC_InitTypeDef NVIC_InitStructure ={0};
    NVIC_InitStructure.NVIC_IRQChannel = TIM2_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 2;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    while(1)
    {


    }
}

//operation goes as follow (1)(2)(3)(4)(5)
void EXTI0_IRQHandler()
{

    if(flag){
        if(counter > 100){  //(3) only care about second clap after 100 mS and above
            output_toggle(GPIOA,LED_PIN);
            counter = 0 ;
            TIM_Cmd(TIM2, DISABLE); //(4) toggle pin, reset counter and disable timer
            flag = 0;
            printf("toggled\r\n");
            Delay_Ms(100); // give it 100mS to be re-triggered(not optimal solution)
        }



    }
    else {
        flag = 1;
        counter = 0 ;
        TIM_Cmd(TIM2, ENABLE); // (1) first clap detected
        printf("start\r\n");


    }
    EXTI_ClearITPendingBit(EXTI_Line0);

}
void TIM2_IRQHandler(void){
    counter++;  //(2) counter goes up to count the time from first clap
    if(counter == 2000)
    {
        counter = 0; // (5)after 2 seconds if no clap detected disable timer and reset counter
        flag = 0 ;
        TIM_Cmd(TIM2, DISABLE);
        printf("reset\r\n");
    }
    TIM_ClearITPendingBit( TIM2, TIM_IT_Update );
}

