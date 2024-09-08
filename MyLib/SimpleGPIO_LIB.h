/*
 * SimpleGPIO_LIB.h
 *
 *  Created on: Aug 22, 2024
 *      Author: Rozaya
 */

#ifndef MYLIB_SIMPLEGPIO_LIB_H_
#define MYLIB_SIMPLEGPIO_LIB_H_
typedef enum
{
    OUTPUT = 0,
    INPUT  = 1

} SimpleGPIO_MODE_TypeDef;

typedef enum
{
    LOW  = 0,
    HIGH = 1

} SimpleGPIO_STATES_TypeDef;


void pinMode(GPIO_TypeDef* GPIOx, u16 pins ,SimpleGPIO_MODE_TypeDef mode);

#define output_high(GPIOx,GPIO_Pin) GPIOx->BSHR = GPIO_Pin
#define output_low(GPIOx,GPIO_Pin)  GPIOx->BCR = GPIO_Pin
#define output_toggle(GPIOx,GPIO_Pin)  (GPIOx->OUTDR & GPIO_Pin) ? (output_low(GPIOx,GPIO_Pin)): (output_high(GPIOx,GPIO_Pin))
#define input_read_Pin(GPIOx, GPIO_Pin)  GPIOx->INDR & GPIO_Pin
#define input_read_Port(GPIOx) GPIOx->INDR
#define output_read_Pin(GPIOx, GPIO_Pin)  GPIOx->OUTDR & GPIO_Pin
#define output_read_Port(GPIOx)     GPIOx->OUTDR
#define output_write(GPIOx, GPIO_Pin , i)  (i) ? (output_high(GPIOx,GPIO_Pin)) : (output_low(GPIOx,GPIO_Pin))
#define digitalWrite(GPIOx, GPIO_Pin , i) output_write(GPIOx, GPIO_Pin , i)

void EXTI0_INT_INIT(void);
void EXTI0_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
#endif /* MYLIB_SIMPLEGPIO_LIB_H_ */
