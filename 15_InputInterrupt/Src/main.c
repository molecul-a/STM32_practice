#include <stdio.h>
#include <stdint.h>
#include "stm32f4xx.h"
#include "adc.h"
#include "uart.h"
#include "systick.h"
#include "tim.h"
#include "exti.h"

#define GPIOAEN			(1U<<0)
#define GPIOA_5			(1U<<5)
#define LED_PIN			GPIOA_5

int main(void)
{
	// ENABLE CKL ACCESS TO GPIOA
	RCC->AHB1ENR |= GPIOAEN;
	// SET PA5 AS OUTPUT PIN
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &=~(1U<<11);

	pc13_exti_init();
	uart2_tx_init();
	while(1)
	{

	}

}
static void exti_callback(void)
{
	printf("BTN pressed\n\r");
}

void EXTI15_10_IRQHandler(void){
	if((EXTI->PR & LINE13) != 0)
	{
		//Clear PR flag
		EXTI->PR |= LINE13;
		//DO something
		exti_callback();
	}
}


