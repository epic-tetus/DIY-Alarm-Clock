/**
  ******************************************************************************
  * File Name          : main.hpp
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2018 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* Includes ------------------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define SEG_DP_Pin GPIO_PIN_7
#define SEG_DP_GPIO_Port GPIOE
#define SEG_A_Pin GPIO_PIN_8
#define SEG_A_GPIO_Port GPIOE
#define SEG_B_Pin GPIO_PIN_9
#define SEG_B_GPIO_Port GPIOE
#define SEG_C_Pin GPIO_PIN_10
#define SEG_C_GPIO_Port GPIOE
#define SEG_D_Pin GPIO_PIN_11
#define SEG_D_GPIO_Port GPIOE
#define SEG_E_Pin GPIO_PIN_12
#define SEG_E_GPIO_Port GPIOE
#define SEG_F_Pin GPIO_PIN_13
#define SEG_F_GPIO_Port GPIOE
#define SEG_G_Pin GPIO_PIN_14
#define SEG_G_GPIO_Port GPIOE
#define DIGIT_1_Pin GPIO_PIN_10
#define DIGIT_1_GPIO_Port GPIOB
#define DIGIT_2_Pin GPIO_PIN_11
#define DIGIT_2_GPIO_Port GPIOB
#define DIGIT_3_Pin GPIO_PIN_12
#define DIGIT_3_GPIO_Port GPIOB
#define DIGIT_4_Pin GPIO_PIN_13
#define DIGIT_4_GPIO_Port GPIOB
#define DIGIT_DP_Pin GPIO_PIN_14
#define DIGIT_DP_GPIO_Port GPIOB
#define LED1_Pin GPIO_PIN_6
#define LED1_GPIO_Port GPIOC
#define LED2_Pin GPIO_PIN_7
#define LED2_GPIO_Port GPIOC
#define Touch_1_Pin GPIO_PIN_10
#define Touch_1_GPIO_Port GPIOC
#define Touch_2_Pin GPIO_PIN_11
#define Touch_2_GPIO_Port GPIOC
#define R1_Pin GPIO_PIN_0
#define R1_GPIO_Port GPIOD
#define R2_Pin GPIO_PIN_1
#define R2_GPIO_Port GPIOD
#define R3_Pin GPIO_PIN_2
#define R3_GPIO_Port GPIOD
#define R4_Pin GPIO_PIN_3
#define R4_GPIO_Port GPIOD
#define C1_Pin GPIO_PIN_4
#define C1_GPIO_Port GPIOD
#define C2_Pin GPIO_PIN_5
#define C2_GPIO_Port GPIOD
#define C3_Pin GPIO_PIN_6
#define C3_GPIO_Port GPIOD
#define C4_Pin GPIO_PIN_7
#define C4_GPIO_Port GPIOD

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/