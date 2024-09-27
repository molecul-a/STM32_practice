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

	uart2_tx_init();
	tim2_1hz_interrupt_init();
	while(1)
	{

	}
}


static void tim2_callback(void)
{

	GPIOA->ODR ^= LED_PIN;
	printf("A second passed\n\r");

}

void TIM2_IRQHandler(void)
{
	//Clear interrupt flag
	TIM2->SR &=~(SR_UIF);
	//Do something
	tim2_callback();
}


