#ifndef CODAL_STM32_H
#define CODAL_STM32_H

#define USE_HAL_DRIVER 1
#if defined(STM32F4)
#include "stm32f4xx.h"
#elif defined(STM32F1)
#include "stm32f1xx.h"
#else
#error "TODO: add the rest"
#endif

#define PA_0 0x00
#define PA_1 0x01
#define PA_2 0x02
#define PA_3 0x03
#define PA_4 0x04
#define PA_5 0x05
#define PA_6 0x06
#define PA_7 0x07
#define PA_8 0x08
#define PA_9 0x09
#define PA_10 0x0A
#define PA_11 0x0B
#define PA_12 0x0C
#define PA_13 0x0D
#define PA_14 0x0E
#define PA_15 0x0F
#define PB_0 0x10
#define PB_1 0x11
#define PB_2 0x12
#define PB_3 0x13
#define PB_4 0x14
#define PB_5 0x15
#define PB_6 0x16
#define PB_7 0x17
#define PB_8 0x18
#define PB_9 0x19
#define PB_10 0x1A
#define PB_11 0x1B
#define PB_12 0x1C
#define PB_13 0x1D
#define PB_14 0x1E
#define PB_15 0x1F
#define PC_0 0x20
#define PC_1 0x21
#define PC_2 0x22
#define PC_3 0x23
#define PC_4 0x24
#define PC_5 0x25
#define PC_6 0x26
#define PC_7 0x27
#define PC_8 0x28
#define PC_9 0x29
#define PC_10 0x2A
#define PC_11 0x2B
#define PC_12 0x2C
#define PC_13 0x2D
#define PC_14 0x2E
#define PC_15 0x2F
#define PD_2 0x32
#define PH_0 0x70
#define PH_1 0x71

#define ADC_TEMP 0xF0
#define ADC_VREF 0xF1
#define ADC_VBAT 0xF2


#endif
