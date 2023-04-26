/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PinA2_Pin GPIO_PIN_2
#define PinA2_GPIO_Port GPIOE
#define PinA16_Pin GPIO_PIN_3
#define PinA16_GPIO_Port GPIOE
#define PinA17_Pin GPIO_PIN_4
#define PinA17_GPIO_Port GPIOE
#define PinA14_Pin GPIO_PIN_5
#define PinA14_GPIO_Port GPIOE
#define AdbA11_Pin GPIO_PIN_6
#define AdbA11_GPIO_Port GPIOE
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define DbgA8_Pin GPIO_PIN_0
#define DbgA8_GPIO_Port GPIOF
#define DbgA7_Pin GPIO_PIN_1
#define DbgA7_GPIO_Port GPIOF
#define DbgA0_Pin GPIO_PIN_2
#define DbgA0_GPIO_Port GPIOF
#define ZFlag_Pin GPIO_PIN_3
#define ZFlag_GPIO_Port GPIOF
#define ZFlag_EXTI_IRQn EXTI3_IRQn
#define XFlag_Pin GPIO_PIN_4
#define XFlag_GPIO_Port GPIOF
#define XFlag_EXTI_IRQn EXTI4_IRQn
#define Dir3_Pin GPIO_PIN_5
#define Dir3_GPIO_Port GPIOF
#define DbgA1_Pin GPIO_PIN_8
#define DbgA1_GPIO_Port GPIOF
#define DbgA2_Pin GPIO_PIN_9
#define DbgA2_GPIO_Port GPIOF
#define Pin15_Pin GPIO_PIN_10
#define Pin15_GPIO_Port GPIOF
#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOH
#define PinA15_Pin GPIO_PIN_0
#define PinA15_GPIO_Port GPIOC
#define RMII_MDC_Pin GPIO_PIN_1
#define RMII_MDC_GPIO_Port GPIOC
#define PinA10_Pin GPIO_PIN_2
#define PinA10_GPIO_Port GPIOC
#define PinA9_Pin GPIO_PIN_3
#define PinA9_GPIO_Port GPIOC
#define PinA12_Pin GPIO_PIN_0
#define PinA12_GPIO_Port GPIOA
#define RMII_REF_CLK_Pin GPIO_PIN_1
#define RMII_REF_CLK_GPIO_Port GPIOA
#define RMII_MDIO_Pin GPIO_PIN_2
#define RMII_MDIO_GPIO_Port GPIOA
#define Step2a_Pin GPIO_PIN_3
#define Step2a_GPIO_Port GPIOA
#define PinA11_Pin GPIO_PIN_4
#define PinA11_GPIO_Port GPIOA
#define Pin17_Pin GPIO_PIN_5
#define Pin17_GPIO_Port GPIOA
#define Pin1_Pin GPIO_PIN_6
#define Pin1_GPIO_Port GPIOA
#define RMII_CRS_DV_Pin GPIO_PIN_7
#define RMII_CRS_DV_GPIO_Port GPIOA
#define RMII_RXD0_Pin GPIO_PIN_4
#define RMII_RXD0_GPIO_Port GPIOC
#define RMII_RXD1_Pin GPIO_PIN_5
#define RMII_RXD1_GPIO_Port GPIOC
#define LED_GREEN_Pin GPIO_PIN_0
#define LED_GREEN_GPIO_Port GPIOB
#define ExtInt_Pin GPIO_PIN_1
#define ExtInt_GPIO_Port GPIOB
#define ExtInt_EXTI_IRQn EXTI1_IRQn
#define Exti2_Pin GPIO_PIN_2
#define Exti2_GPIO_Port GPIOB
#define Dbg2_Pin GPIO_PIN_11
#define Dbg2_GPIO_Port GPIOF
#define ZA_Pin GPIO_PIN_12
#define ZA_GPIO_Port GPIOF
#define ZA_EXTI_IRQn EXTI15_10_IRQn
#define ZB_Pin GPIO_PIN_13
#define ZB_GPIO_Port GPIOF
#define ZB_EXTI_IRQn EXTI15_10_IRQn
#define XA_Pin GPIO_PIN_14
#define XA_GPIO_Port GPIOF
#define XA_EXTI_IRQn EXTI15_10_IRQn
#define XB_Pin GPIO_PIN_15
#define XB_GPIO_Port GPIOF
#define XB_EXTI_IRQn EXTI15_10_IRQn
#define DbgA4_Pin GPIO_PIN_0
#define DbgA4_GPIO_Port GPIOG
#define DbgA3_Pin GPIO_PIN_1
#define DbgA3_GPIO_Port GPIOG
#define Dir4_Pin GPIO_PIN_9
#define Dir4_GPIO_Port GPIOE
#define Pin12_Pin GPIO_PIN_10
#define Pin12_GPIO_Port GPIOE
#define SPI_SEL_Pin GPIO_PIN_11
#define SPI_SEL_GPIO_Port GPIOE
#define SPI_SCLK_Pin GPIO_PIN_12
#define SPI_SCLK_GPIO_Port GPIOE
#define SPI_MISO_Pin GPIO_PIN_13
#define SPI_MISO_GPIO_Port GPIOE
#define SPI_MOSI_Pin GPIO_PIN_14
#define SPI_MOSI_GPIO_Port GPIOE
#define Dbg3_Pin GPIO_PIN_15
#define Dbg3_GPIO_Port GPIOE
#define Step1_Pin GPIO_PIN_10
#define Step1_GPIO_Port GPIOB
#define Dir1_Pin GPIO_PIN_12
#define Dir1_GPIO_Port GPIOB
#define RMII_TXD1_Pin GPIO_PIN_13
#define RMII_TXD1_GPIO_Port GPIOB
#define LED_RED_Pin GPIO_PIN_14
#define LED_RED_GPIO_Port GPIOB
#define Pin16_Pin GPIO_PIN_15
#define Pin16_GPIO_Port GPIOB
#define STLK_VCP_RX_Pin GPIO_PIN_8
#define STLK_VCP_RX_GPIO_Port GPIOD
#define STLK_VCP_TX_Pin GPIO_PIN_9
#define STLK_VCP_TX_GPIO_Port GPIOD
#define Dbg1_Pin GPIO_PIN_10
#define Dbg1_GPIO_Port GPIOD
#define Pin10_Pin GPIO_PIN_11
#define Pin10_GPIO_Port GPIOD
#define I2C_SCL_Pin GPIO_PIN_12
#define I2C_SCL_GPIO_Port GPIOD
#define I2C_SDA_Pin GPIO_PIN_13
#define I2C_SDA_GPIO_Port GPIOD
#define Pin11_Pin GPIO_PIN_14
#define Pin11_GPIO_Port GPIOD
#define Pin13_Pin GPIO_PIN_15
#define Pin13_GPIO_Port GPIOD
#define PinA6_Pin GPIO_PIN_2
#define PinA6_GPIO_Port GPIOG
#define PinA4_Pin GPIO_PIN_3
#define PinA4_GPIO_Port GPIOG
#define Dbg0_Pin GPIO_PIN_4
#define Dbg0_GPIO_Port GPIOG
#define JogA1_Pin GPIO_PIN_5
#define JogA1_GPIO_Port GPIOG
#define JogA1_EXTI_IRQn EXTI9_5_IRQn
#define JogB1_Pin GPIO_PIN_6
#define JogB1_GPIO_Port GPIOG
#define JogB1_EXTI_IRQn EXTI9_5_IRQn
#define JogA2_Pin GPIO_PIN_7
#define JogA2_GPIO_Port GPIOG
#define JogA2_EXTI_IRQn EXTI9_5_IRQn
#define JogB2_Pin GPIO_PIN_8
#define JogB2_GPIO_Port GPIOG
#define JogB2_EXTI_IRQn EXTI9_5_IRQn
#define Di5_Pin GPIO_PIN_8
#define Di5_GPIO_Port GPIOC
#define Pin14_Pin GPIO_PIN_9
#define Pin14_GPIO_Port GPIOC
#define Step2b_Pin GPIO_PIN_8
#define Step2b_GPIO_Port GPIOA
#define Dbg4_Pin GPIO_PIN_9
#define Dbg4_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define Uart5Rx_Pin GPIO_PIN_12
#define Uart5Rx_GPIO_Port GPIOC
#define DbgA10_Pin GPIO_PIN_0
#define DbgA10_GPIO_Port GPIOD
#define DbgA9_Pin GPIO_PIN_1
#define DbgA9_GPIO_Port GPIOD
#define Uart5RxD2_Pin GPIO_PIN_2
#define Uart5RxD2_GPIO_Port GPIOD
#define PinA8_Pin GPIO_PIN_3
#define PinA8_GPIO_Port GPIOD
#define PinA7_Pin GPIO_PIN_4
#define PinA7_GPIO_Port GPIOD
#define PinA5_Pin GPIO_PIN_5
#define PinA5_GPIO_Port GPIOD
#define PinA3_Pin GPIO_PIN_6
#define PinA3_GPIO_Port GPIOD
#define PinA1_Pin GPIO_PIN_7
#define PinA1_GPIO_Port GPIOD
#define DbgA12_Pin GPIO_PIN_9
#define DbgA12_GPIO_Port GPIOG
#define DbgA6_Pin GPIO_PIN_10
#define DbgA6_GPIO_Port GPIOG
#define RMII_TX_EN_Pin GPIO_PIN_11
#define RMII_TX_EN_GPIO_Port GPIOG
#define DbgA13_Pin GPIO_PIN_12
#define DbgA13_GPIO_Port GPIOG
#define RMII_TXD0_Pin GPIO_PIN_13
#define RMII_TXD0_GPIO_Port GPIOG
#define DbgA5_Pin GPIO_PIN_15
#define DbgA5_GPIO_Port GPIOG
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define Dir2_Pin GPIO_PIN_5
#define Dir2_GPIO_Port GPIOB
#define Dbg5_Pin GPIO_PIN_6
#define Dbg5_GPIO_Port GPIOB
#define Step4_Pin GPIO_PIN_8
#define Step4_GPIO_Port GPIOB
#define Encoder_Pin GPIO_PIN_9
#define Encoder_GPIO_Port GPIOB
#define Index_Pin GPIO_PIN_0
#define Index_GPIO_Port GPIOE
#define Index_EXTI_IRQn EXTI0_IRQn
#define LED_YELLOW_Pin GPIO_PIN_1
#define LED_YELLOW_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
