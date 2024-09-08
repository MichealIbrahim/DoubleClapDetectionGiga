#ifndef __MY_CH32v2x_PINS_LIB_H
#define __MY_CH32v2x_PINS_LIB_H
// USART1
#define USART1_TX_PIN        GPIO_Pin_9
#define USART1_TX_PORT       GPIOA
#define USART1_TX_MODE       GPIO_Mode_AF_PP

#define USART1_RX_PIN        GPIO_Pin_10
#define USART1_RX_PORT       GPIOA
#define USART1_RX_MODE       GPIO_Mode_IN_FLOATING

// USART2
#define USART2_TX_PIN        GPIO_Pin_2
#define USART2_TX_PORT       GPIOA
#define USART2_TX_MODE       GPIO_Mode_AF_PP

#define USART2_RX_PIN        GPIO_Pin_3
#define USART2_RX_PORT       GPIOA
#define USART2_RX_MODE       GPIO_Mode_IN_FLOATING

// I2C1
#define I2C1_SCL_PIN         GPIO_Pin_6
#define I2C1_SCL_PORT        GPIOB
#define I2C1_SCL_MODE        GPIO_Mode_AF_OD

#define I2C1_SDA_PIN         GPIO_Pin_7
#define I2C1_SDA_PORT        GPIOB
#define I2C1_SDA_MODE        GPIO_Mode_AF_OD

// SPI1
#define SPI1_SCK_PIN         GPIO_Pin_5
#define SPI1_SCK_PORT        GPIOA
#define SPI1_SCK_MODE        GPIO_Mode_AF_PP

#define SPI1_MISO_PIN        GPIO_Pin_6
#define SPI1_MISO_PORT       GPIOA
#define SPI1_MISO_MODE       GPIO_Mode_IN_FLOATING

#define SPI1_MOSI_PIN        GPIO_Pin_7
#define SPI1_MOSI_PORT       GPIOA
#define SPI1_MOSI_MODE       GPIO_Mode_AF_PP

#define SPI1_CS_PIN          GPIO_Pin_4
#define SPI1_CS_PORT         GPIOA
#define SPI1_CS_MODE         GPIO_Mode_Out_PP

// SPI2
#define SPI2_SCK_PIN         GPIO_Pin_13
#define SPI2_SCK_PORT        GPIOB
#define SPI2_SCK_MODE        GPIO_Mode_AF_PP

#define SPI2_MISO_PIN        GPIO_Pin_14
#define SPI2_MISO_PORT       GPIOB
#define SPI2_MISO_MODE       GPIO_Mode_IN_FLOATING

#define SPI2_MOSI_PIN        GPIO_Pin_15
#define SPI2_MOSI_PORT       GPIOB
#define SPI2_MOSI_MODE       GPIO_Mode_AF_PP

#define SPI2_CS_PIN          GPIO_Pin_12
#define SPI2_CS_PORT         GPIOB
#define SPI2_CS_MODE         GPIO_Mode_Out_PP

// ADC1
#define ADC1_IN0_PIN         GPIO_Pin_0
#define ADC1_IN0_PORT        GPIOA
#define ADC1_IN0_MODE        GPIO_Mode_AIN

#define ADC1_IN1_PIN         GPIO_Pin_1
#define ADC1_IN1_PORT        GPIOA
#define ADC1_IN1_MODE        GPIO_Mode_AIN

#define ADC1_IN2_PIN         GPIO_Pin_2
#define ADC1_IN2_PORT        GPIOA
#define ADC1_IN2_MODE        GPIO_Mode_AIN

#define ADC1_IN3_PIN         GPIO_Pin_3
#define ADC1_IN3_PORT        GPIOA
#define ADC1_IN3_MODE        GPIO_Mode_AIN

#define ADC1_IN4_PIN         GPIO_Pin_4
#define ADC1_IN4_PORT        GPIOA
#define ADC1_IN4_MODE        GPIO_Mode_AIN

#define ADC1_IN5_PIN         GPIO_Pin_5
#define ADC1_IN5_PORT        GPIOA
#define ADC1_IN5_MODE        GPIO_Mode_AIN

#define ADC1_IN6_PIN         GPIO_Pin_6
#define ADC1_IN6_PORT        GPIOA
#define ADC1_IN6_MODE        GPIO_Mode_AIN

#define ADC1_IN7_PIN         GPIO_Pin_7
#define ADC1_IN7_PORT        GPIOA
#define ADC1_IN7_MODE        GPIO_Mode_AIN

#define ADC1_IN8_PIN         GPIO_Pin_0
#define ADC1_IN8_PORT        GPIOB
#define ADC1_IN8_MODE        GPIO_Mode_AIN

#define ADC1_IN9_PIN         GPIO_Pin_1
#define ADC1_IN9_PORT        GPIOB
#define ADC1_IN9_MODE        GPIO_Mode_AIN

#define ADC1_IN10_PIN        GPIO_Pin_0
#define ADC1_IN10_PORT       GPIOC
#define ADC1_IN10_MODE       GPIO_Mode_AIN

#define ADC1_IN11_PIN        GPIO_Pin_1
#define ADC1_IN11_PORT       GPIOC
#define ADC1_IN11_MODE       GPIO_Mode_AIN

#define ADC1_IN12_PIN        GPIO_Pin_2
#define ADC1_IN12_PORT       GPIOC
#define ADC1_IN12_MODE       GPIO_Mode_AIN

#define ADC1_IN13_PIN        GPIO_Pin_3
#define ADC1_IN13_PORT       GPIOC
#define ADC1_IN13_MODE       GPIO_Mode_AIN

#define ADC1_IN14_PIN        GPIO_Pin_4
#define ADC1_IN14_PORT       GPIOC
#define ADC1_IN14_MODE       GPIO_Mode_AIN

#define ADC1_IN15_PIN        GPIO_Pin_5
#define ADC1_IN15_PORT       GPIOC
#define ADC1_IN15_MODE       GPIO_Mode_AIN

// ADC2
#define ADC2_IN0_PIN         GPIO_Pin_0
#define ADC2_IN0_PORT        GPIOC
#define ADC2_IN0_MODE        GPIO_Mode_AIN

#define ADC2_IN1_PIN         GPIO_Pin_1
#define ADC2_IN1_PORT        GPIOC
#define ADC2_IN1_MODE        GPIO_Mode_AIN

#define ADC2_IN2_PIN         GPIO_Pin_2
#define ADC2_IN2_PORT        GPIOC
#define ADC2_IN2_MODE        GPIO_Mode_AIN

#define ADC2_IN3_PIN         GPIO_Pin_3
#define ADC2_IN3_PORT        GPIOC
#define ADC2_IN3_MODE        GPIO_Mode_AIN

#define ADC2_IN4_PIN         GPIO_Pin_4
#define ADC2_IN4_PORT        GPIOC
#define ADC2_IN4_MODE        GPIO_Mode_AIN

#define ADC2_IN5_PIN         GPIO_Pin_5
#define ADC2_IN5_PORT        GPIOC
#define ADC2_IN5_MODE        GPIO_Mode_AIN

#define ADC2_IN6_PIN         GPIO_Pin_6
#define ADC2_IN6_PORT        GPIOC
#define ADC2_IN6_MODE        GPIO_Mode_AIN

#define ADC2_IN7_PIN         GPIO_Pin_7
#define ADC2_IN7_PORT        GPIOC
#define ADC2_IN7_MODE        GPIO_Mode_AIN

#define ADC2_IN8_PIN         GPIO_Pin_0
#define ADC2_IN8_PORT        GPIOB
#define ADC2_IN8_MODE        GPIO_Mode_AIN

#define ADC2_IN9_PIN         GPIO_Pin_1
#define ADC2_IN9_PORT        GPIOB
#define ADC2_IN9_MODE        GPIO_Mode_AIN

#define ADC2_IN10_PIN        GPIO_Pin_0
#define ADC2_IN10_PORT       GPIOA
#define ADC2_IN10_MODE       GPIO_Mode_AIN

#define ADC2_IN11_PIN        GPIO_Pin_1
#define ADC2_IN11_PORT       GPIOA
#define ADC2_IN11_MODE       GPIO_Mode_AIN

#define ADC2_IN12_PIN        GPIO_Pin_2
#define ADC2_IN12_PORT       GPIOA
#define ADC2_IN12_MODE       GPIO_Mode_AIN

#define ADC2_IN13_PIN        GPIO_Pin_3
#define ADC2_IN13_PORT       GPIOA
#define ADC2_IN13_MODE       GPIO_Mode_AIN

#define ADC2_IN14_PIN        GPIO_Pin_4
#define ADC2_IN14_PORT       GPIOA
#define ADC2_IN14_MODE       GPIO_Mode_AIN

#define ADC2_IN15_PIN        GPIO_Pin_5
#define ADC2_IN15_PORT       GPIOA
#define ADC2_IN15_MODE       GPIO_Mode_AIN

// Timers
// Timer 1
#define TIM1_CH1_PIN         GPIO_Pin_8
#define TIM1_CH1_PORT        GPIOA
#define TIM1_CH1_MODE        GPIO_Mode_AF_PP

#define TIM1_CH2_PIN         GPIO_Pin_9
#define TIM1_CH2_PORT        GPIOA
#define TIM1_CH2_MODE        GPIO_Mode_AF_PP

#define TIM1_CH3_PIN         GPIO_Pin_10
#define TIM1_CH3_PORT        GPIOA
#define TIM1_CH3_MODE        GPIO_Mode_AF_PP

#define TIM1_CH4_PIN         GPIO_Pin_11
#define TIM1_CH4_PORT        GPIOA
#define TIM1_CH4_MODE        GPIO_Mode_AF_PP

// Timer 1 Complementary Outputs
#define TIM1_CH1N_PIN        GPIO_Pin_7
#define TIM1_CH1N_PORT       GPIOB
#define TIM1_CH1N_MODE       GPIO_Mode_AF_PP

#define TIM1_CH2N_PIN        GPIO_Pin_14
#define TIM1_CH2N_PORT       GPIOB
#define TIM1_CH2N_MODE       GPIO_Mode_AF_PP

#define TIM1_CH3N_PIN        GPIO_Pin_15
#define TIM1_CH3N_PORT       GPIOB
#define TIM1_CH3N_MODE       GPIO_Mode_AF_PP

// Timer 2
#define TIM2_CH1_PIN         GPIO_Pin_0
#define TIM2_CH1_PORT        GPIOA
#define TIM2_CH1_MODE        GPIO_Mode_AF_PP

#define TIM2_CH2_PIN         GPIO_Pin_1
#define TIM2_CH2_PORT        GPIOA
#define TIM2_CH2_MODE        GPIO_Mode_AF_PP

#define TIM2_CH3_PIN         GPIO_Pin_2
#define TIM2_CH3_PORT        GPIOA
#define TIM2_CH3_MODE        GPIO_Mode_AF_PP

#define TIM2_CH4_PIN         GPIO_Pin_3
#define TIM2_CH4_PORT        GPIOA
#define TIM2_CH4_MODE        GPIO_Mode_AF_PP

// Timer 3
#define TIM3_CH1_PIN         GPIO_Pin_6
#define TIM3_CH1_PORT        GPIOA
#define TIM3_CH1_MODE        GPIO_Mode_AF_PP

#define TIM3_CH2_PIN         GPIO_Pin_7
#define TIM3_CH2_PORT        GPIOA
#define TIM3_CH2_MODE        GPIO_Mode_AF_PP

#define TIM3_CH3_PIN         GPIO_Pin_0
#define TIM3_CH3_PORT        GPIOB
#define TIM3_CH3_MODE        GPIO_Mode_AF_PP

#define TIM3_CH4_PIN         GPIO_Pin_1
#define TIM3_CH4_PORT        GPIOB
#define TIM3_CH4_MODE        GPIO_Mode_AF_PP

// Timer 4
#define TIM4_CH1_PIN         GPIO_Pin_6
#define TIM4_CH1_PORT        GPIOB
#define TIM4_CH1_MODE        GPIO_Mode_AF_PP

#define TIM4_CH2_PIN         GPIO_Pin_7
#define TIM4_CH2_PORT        GPIOB
#define TIM4_CH2_MODE        GPIO_Mode_AF_PP

#define TIM4_CH3_PIN         GPIO_Pin_8
#define TIM4_CH3_PORT        GPIOB
#define TIM4_CH3_MODE        GPIO_Mode_AF_PP

#define TIM4_CH4_PIN         GPIO_Pin_9
#define TIM4_CH4_PORT        GPIOB
#define TIM4_CH4_MODE        GPIO_Mode_AF_PP

//------RCC clock BS
#define GPIOA_EN()                  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE)
#define GPIOB_EN()                  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE)
#define GPIOC_EN()                  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE)
#define GPIOD_EN()                  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE)
#define GPIOE_EN()                  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE)

#define AFIO_EN()                   RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE)
#define ADC1_EN()                   RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1, ENABLE)
#define TIM1_EN()                   RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE)
#define SPI1_EN()                   RCC_APB2PeriphClockCmd(RCC_APB2Periph_SPI1, ENABLE)
#define TIM8_EN()                   RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM8, ENABLE)
#define USART1_EN()                 RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE)
#define TIM9_EN()                   RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM9, ENABLE)
#define TIM10_EN()                  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM10, ENABLE)

#define TIM2_EN()                   RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2    , ENABLE)
#define TIM3_EN()                   RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3    , ENABLE)
#define TIM4_EN()                   RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4    , ENABLE)
#define TIM5_EN()                   RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM5    , ENABLE)
#define TIM6_EN()                   RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM6    , ENABLE)
#define TIM7_EN()                   RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM7    , ENABLE)
#define UART6_EN()                  RCC_APB1PeriphClockCmd(RCC_APB1Periph_UART6   , ENABLE)
#define UART7_EN()                  RCC_APB1PeriphClockCmd(RCC_APB1Periph_UART7   , ENABLE)
#define UART8_EN()                  RCC_APB1PeriphClockCmd(RCC_APB1Periph_UART8   , ENABLE)
#define WWDG_EN()                   RCC_APB1PeriphClockCmd(RCC_APB1Periph_WWDG    , ENABLE)
#define SPI2_EN()                   RCC_APB1PeriphClockCmd(RCC_APB1Periph_SPI2    , ENABLE)
#define SPI3_EN()                   RCC_APB1PeriphClockCmd(RCC_APB1Periph_SPI3    , ENABLE)
#define USART2_EN()                 RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2  , ENABLE)
#define USART3_EN()                 RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3  , ENABLE)
#define UART4_EN()                  RCC_APB1PeriphClockCmd(RCC_APB1Periph_UART4   , ENABLE)
#define UART5_EN()                  RCC_APB1PeriphClockCmd(RCC_APB1Periph_UART5   , ENABLE)
#define I2C1_EN()                   RCC_APB1PeriphClockCmd(RCC_APB1Periph_I2C1    , ENABLE)
#define I2C2_EN()                   RCC_APB1PeriphClockCmd(RCC_APB1Periph_I2C2    , ENABLE)
#define USB_EN()                    RCC_APB1PeriphClockCmd(RCC_APB1Periph_USB     , ENABLE)
#define CAN1_EN()                   RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN1    , ENABLE)
#define CAN2_EN()                   RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN2    , ENABLE)
#define BKP_EN()                    RCC_APB1PeriphClockCmd(RCC_APB1Periph_BKP     , ENABLE)
#define PWR_EN()                    RCC_APB1PeriphClockCmd(RCC_APB1Periph_PWR     , ENABLE)
#define DAC_EN()                    RCC_APB1PeriphClockCmd(RCC_APB1Periph_DAC     , ENABLE)



#endif
