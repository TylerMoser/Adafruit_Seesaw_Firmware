#ifndef SEESAW_DEVICE_CONFIG_H
#define SEESAW_DEVICE_CONFIG_H

#define PRODUCT_CODE 9999

#define CONFIG_USB 0ul

//override default activity led pin
#define PIN_ACTIVITY_LED (32 + 22) //PB22

//don't use address pins
#define CONFIG_NO_ADDR

//* ============== POOL SIZES =================== *//
#define EVT_SIZE_SMALL 16
#define EVT_SIZE_MEDIUM 32
#define EVT_SIZE_LARGE 64
#define EVT_COUNT_SMALL 16
#define EVT_COUNT_MEDIUM 8
#define EVT_COUNT_LARGE 1

//* ============== ADC =================== *//
#define CONFIG_ADC 1

//we will override some of the default ADC pins for this board
#define CONFIG_ADC_INPUT_0 1

#define CONFIG_ADC_INPUT_1 1

#define CONFIG_ADC_INPUT_2 1
#define CONFIG_ADC_INPUT_2_PIN (32 + 8) //PB08

#define CONFIG_ADC_INPUT_3 1
#define CONFIG_ADC_INPUT_3_PIN (32 + 9) //PB09

#define CONFIG_ADC_INPUT_4 1

#define CONFIG_ADC_INPUT_5 1

#define CONFIG_ADC_INPUT_6 1

#define CONFIG_ADC_INPUT_7 1

//* ============== DAC =================== *//
#define CONFIG_DAC 0

//* ============== TIMER =================== *//
#define CONFIG_TIMER 1

#define CONFIG_TIMER_PWM_OUT0 1
#define CONFIG_TIMER_PWM_OUT0_IS_TCC
#define CONFIG_TIMER_PWM_OUT0_TC NOT_ON_TC
#define CONFIG_TIMER_PWM_OUT0_TCC TCC0
#define CONFIG_TIMER_PWM_OUT0_WO 0
#define CONFIG_TIMER_PWM_OUT0_PIN 14

#define CONFIG_TIMER_PWM_OUT1 1
#define CONFIG_TIMER_PWM_OUT1_IS_TCC
#define CONFIG_TIMER_PWM_OUT1_TC NOT_ON_TC
#define CONFIG_TIMER_PWM_OUT1_TCC TCC0
#define CONFIG_TIMER_PWM_OUT1_WO 1
#define CONFIG_TIMER_PWM_OUT1_PIN 15

#define CONFIG_TIMER_PWM_OUT2 1
#define CONFIG_TIMER_PWM_OUT2_IS_TCC
#define CONFIG_TIMER_PWM_OUT2_TC NOT_ON_TC
#define CONFIG_TIMER_PWM_OUT2_TCC TCC0
#define CONFIG_TIMER_PWM_OUT2_WO 2
#define CONFIG_TIMER_PWM_OUT2_PIN 16

#define CONFIG_TIMER_PWM_OUT3 1
#define CONFIG_TIMER_PWM_OUT3_IS_TCC
#define CONFIG_TIMER_PWM_OUT3_TC NOT_ON_TC
#define CONFIG_TIMER_PWM_OUT3_TCC TCC0
#define CONFIG_TIMER_PWM_OUT3_WO 3
#define CONFIG_TIMER_PWM_OUT3_PIN 17

#define CONFIG_TIMER_PWM_OUT4 1
#define CONFIG_TIMER_PWM_OUT4_TC TC3
#define CONFIG_TIMER_PWM_OUT4_TCC NOT_ON_TCC
#define CONFIG_TIMER_PWM_OUT4_WO 0
#define CONFIG_TIMER_PWM_OUT4_PIN 18

#define CONFIG_TIMER_PWM_OUT5 1
#define CONFIG_TIMER_PWM_OUT5_TC TC3
#define CONFIG_TIMER_PWM_OUT5_TCC NOT_ON_TCC
#define CONFIG_TIMER_PWM_OUT5_WO 1
#define CONFIG_TIMER_PWM_OUT5_PIN 19

#define CONFIG_TIMER_PWM_OUT6 1
#define CONFIG_TIMER_PWM_OUT6_TC TC4
#define CONFIG_TIMER_PWM_OUT6_TCC NOT_ON_TCC
#define CONFIG_TIMER_PWM_OUT6_WO 0
#define CONFIG_TIMER_PWM_OUT6_PIN 22

#define CONFIG_TIMER_PWM_OUT7 1
#define CONFIG_TIMER_PWM_OUT7_TC TC4
#define CONFIG_TIMER_PWM_OUT7_TCC NOT_ON_TCC
#define CONFIG_TIMER_PWM_OUT7_WO 1
#define CONFIG_TIMER_PWM_OUT7_PIN 23

#define CONFIG_TIMER_PWM_OUT8 1
#define CONFIG_TIMER_PWM_OUT8_TC TC5
#define CONFIG_TIMER_PWM_OUT8_TCC NOT_ON_TCC
#define CONFIG_TIMER_PWM_OUT8_WO 0
#define CONFIG_TIMER_PWM_OUT8_PIN (32 + 10) //PB10

#define CONFIG_TIMER_PWM_OUT9 1
#define CONFIG_TIMER_PWM_OUT9_TC TC5
#define CONFIG_TIMER_PWM_OUT9_TCC NOT_ON_TCC
#define CONFIG_TIMER_PWM_OUT9_WO 1
#define CONFIG_TIMER_PWM_OUT9_PIN (32 + 11) //PB11

#define CONFIG_TIMER_PWM_OUT10 1
#define CONFIG_TIMER_PWM_OUT10_IS_TCC
#define CONFIG_TIMER_PWM_OUT10_TC NOT_ON_TC
#define CONFIG_TIMER_PWM_OUT10_TCC TCC2
#define CONFIG_TIMER_PWM_OUT10_WO 0
#define CONFIG_TIMER_PWM_OUT10_PIN 12

#define CONFIG_TIMER_PWM_OUT11 1
#define CONFIG_TIMER_PWM_OUT11_IS_TCC
#define CONFIG_TIMER_PWM_OUT11_TC NOT_ON_TC
#define CONFIG_TIMER_PWM_OUT11_TCC TCC2
#define CONFIG_TIMER_PWM_OUT11_WO 1
#define CONFIG_TIMER_PWM_OUT11_PIN 13

//* ============== INTERRUPT =================== *//
#define CONFIG_INTERRUPT 0
#define CONFIG_INTERRUPT_PIN 8

//* ============== I2C SLAVE =================== *//
#define CONFIG_I2C_SLAVE 1
//override the default pins
#define CONFIG_I2C_SLAVE_PIN_SDA 0
#define CONFIG_I2C_SLAVE_PIN_SCL 1

//override default mux
#define CONFIG_I2C_SLAVE_MUX 3

//* ============== SERCOM =================== *//
#define CONFIG_SERCOM0 0
#define CONFIG_SERCOM1 0
#define CONFIG_SERCOM2 0

//These are only available on samd21
#define CONFIG_SERCOM3 0
#define CONFIG_SERCOM4 0
#define CONFIG_SERCOM5 0

//* ============== DAP =================== *//
#define CONFIG_DAP 0

//* =========== NEOPIXEL ================ *//
#define CONFIG_NEOPIXEL 1

#define CONFIG_NEOPIXEL_BUF_MAX 512

#endif
