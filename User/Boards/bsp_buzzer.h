#pragma once


/* Includes ------------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported functions prototypes ---------------------------------------------*/
int BSP_Buzzer_Start(void);
int BSP_Buzzer_Set(float freq, float duty_cycle);
int BSP_Buzzer_Stop(void);
