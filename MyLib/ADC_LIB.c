/*
 * ADC_LIB.c
 *
 *  Created on: Aug 25, 2024
 *      Author: Roazya
 */
#include "debug.h"
/*
 * @inputs :
 * pins : GPIOA pins
 * PGA_x  : amplify input signal -> x = 1,4,16,64
 */
void my_ADC_init(u16 pins ){
    ADC_DeInit(ADC1);
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1 | RCC_APB2Periph_GPIOA, ENABLE); // Enable ADC clock

    GPIO_InitTypeDef        GPIO_InitStructure = {0};

    GPIO_InitStructure.GPIO_Pin = pins;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AIN;
    //GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;  //evil don't do it in adc
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    ADC_InitTypeDef ADC_InitStructure;
    ADC_InitStructure.ADC_Mode = ADC_Mode_Independent;
    ADC_InitStructure.ADC_ScanConvMode = DISABLE;
    ADC_InitStructure.ADC_ContinuousConvMode = DISABLE;
    ADC_InitStructure.ADC_ExternalTrigConv = ADC_ExternalTrigConv_None;
    ADC_InitStructure.ADC_DataAlign = ADC_DataAlign_Right;
    ADC_InitStructure.ADC_NbrOfChannel = 1;
    //ADC_InitStructure.ADC_Pga =ADC_PGA_x;
    ADC_Init(ADC1, &ADC_InitStructure);

    ADC_Cmd(ADC1, ENABLE); // Enable ADC1

    // ADC calibration
    ADC_BufferCmd(ADC1, DISABLE); //disable buffer
    ADC_ResetCalibration(ADC1);
    while(ADC_GetResetCalibrationStatus(ADC1));
    ADC_StartCalibration(ADC1);
    while(ADC_GetCalibrationStatus(ADC1));



    ADC_BufferCmd(ADC1, ENABLE); //enable buffer
}
/*
 * Port A pin
 */
u16 analogRead(u16 pin)
{
     if(pin == 0)return 0xffff;
     u16 channel = 0;
     while(pin != 0)
     {
         if(pin&1) break;
         channel++;
         pin = pin>>1;
     }
     ADC_RegularChannelConfig(ADC1, channel, 1, ADC_SampleTime_55Cycles5);
     ADC_SoftwareStartConvCmd(ADC1, ENABLE); // Start conversion

     while(!ADC_GetFlagStatus(ADC1, ADC_FLAG_EOC)); // Wait for conversion to complete

     return ADC_GetConversionValue(ADC1);
}

u16 analogChannelRead(u8 adc_channel_x)
{
    ADC_RegularChannelConfig(ADC1, adc_channel_x, 1, ADC_SampleTime_55Cycles5);
    ADC_SoftwareStartConvCmd(ADC1, ENABLE); // Start conversion

    while(!ADC_GetFlagStatus(ADC1, ADC_FLAG_EOC)); // Wait for conversion to complete

    return ADC_GetConversionValue(ADC1);
}

/*
 * returns value in mV
 */
u16 ADC_GetVoltage(uint16_t adcValue) {
    u16 voltage = (adcValue * 3300) / 4096; // Assuming 12-bit ADC resolution
    return voltage;
}

/*
 * have to enable ADC first
 */
void ADC_Internal_tempSensor_enable(void){
    ADC_TempSensorVrefintCmd(ENABLE);
}

s32 ADC_get_microControllerTemp()
{
    u16 adcValue = 0 ;
    s32 voltage = 0;
    ADC_RegularChannelConfig(ADC1, ADC_Channel_TempSensor, 1, ADC_SampleTime_55Cycles5);
    ADC_SoftwareStartConvCmd(ADC1, ENABLE); // Start conversion

    while(!ADC_GetFlagStatus(ADC1, ADC_FLAG_EOC)); // Wait for conversion to complete

    adcValue = ADC_GetConversionValue(ADC1);
    voltage = ADC_GetVoltage(adcValue);
    return TempSensor_Volt_To_Temper(voltage) ;
}

