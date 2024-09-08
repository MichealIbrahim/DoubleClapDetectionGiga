/*
 * ADC_LIB.h
 *
 *  Created on: Aug 25, 2024
 *      Author: Roazya
 */

#ifndef MYLIB_ADC_LIB_H_
#define MYLIB_ADC_LIB_H_


void my_ADC_init(u16 pins);
u16 analogRead(u16 pin);
u16 analogChannelRead(u8 channel);

u16 ADC_GetVoltage(uint16_t adcValue);

void ADC_Internal_tempSensor_enable(void);
s32  ADC_get_microControllerTemp();

#endif /* MYLIB_ADC_LIB_H_ */
