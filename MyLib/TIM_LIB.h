/*
 * TIM_LIB.h
 *
 *  Created on: Aug 22, 2024
 *      Author: Rozaya
 */

#ifndef MYLIB_TIM_LIB_H_
#define MYLIB_TIM_LIB_H_
/*  @interrupt helper
 *
 *  interrupt handlers
 *  TIM1_BRK_IRQHandler        // TIM1 Break
 *  TIM1_UP_IRQHandler         // TIM1 Update
 *  TIM1_TRG_COM_IRQHandler    // TIM1 Trigger and Commutation
 *  TIM1_CC_IRQHandler         // TIM1 Capture Compare
 *  TIM2_IRQHandler            // TIM2
 *  TIM3_IRQHandler            // TIM3
 *  TIM4_IRQHandler            // TIM4
 *  example:
 *  void TIM2_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
 *  void TIM2_IRQHandler(void){//function//}
 *
 *
 *  @TIM_interrupt_sources
 *  TIM_IT_Update
 *  TIM_IT_CC1
 *  TIM_IT_CC2
 *  TIM_IT_CC3
 *  TIM_IT_CC4
 *  TIM_IT_COM
 *  TIM_IT_Trigger
 *  TIM_IT_Break
 *  example: have to call this to enable the interrupt in the timer side
 *  TIM_ITConfig( TIMx, TIM_IT_Update , ENABLE );
 *
 *
 *  TIM1_BRK_IRQn              // TIM1 Break Interrupt
 *  TIM1_UP_IRQn               // TIM1 Update Interrupt
 *  TIM1_TRG_COM_IRQn          // TIM1 Trigger and Commutation Interrupt
 *  TIM1_CC_IRQn               // TIM1 Capture Compare Interrupt
 *  TIM2_IRQn                  // TIM2 global Interrupt
 *  TIM3_IRQn                  // TIM3 global Interrupt
 *  TIM4_IRQn                  // TIM4 global Interrupt
 *  example: have to call this function to enable the interrupt NVIC side
 *  NVIC_InitTypeDef NVIC_InitStructure ={0};
 *  NVIC_InitStructure.NVIC_IRQChannel = TIM2_IRQn;
 *  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;
 *  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
 *  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
 *  NVIC_Init(&NVIC_InitStructure);
 */



typedef enum
{
    channel_1 = 0b0001,
    channel_2 = 0b0010,
    channel_3 = 0b0100,
    channel_4 = 0b1000
} TIMChannel_TypeDef;

void TIMx_setup(TIM_TypeDef* TIMx , u16 arr, u16 psc);
ITStatus TIM_GetITStatusO(TIM_TypeDef *TIMx, uint16_t TIM_IT);
void TIMx_PWMOut_Init(TIM_TypeDef* TIMx , u16 arr, u16 psc, u16 ccp ,TIMChannel_TypeDef channel,u8 n);
void TIMx_GPIO_setup(TIM_TypeDef* TIMx,TIMChannel_TypeDef channel , u8 n);
#endif /* MYLIB_TIM_LIB_H_ */
