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

char key;
int main(void)
{
	// ENABLE CKL ACCESS TO GPIOA
	RCC->AHB1ENR |= GPIOAEN;
	// SET PA5 AS OUTPUT PIN
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &=~(1U<<11);

	uart2_rxtx_interrupt_init();

	while(1)
	{

	}


}
static void uart_callback(void)
{
	key = USART2->DR;
	if(key == '1')
	{
		GPIOA->ODR |=  LED_PIN;
	}
	else{
		GPIOA->ODR &= ~LED_PIN;
	}
}

void USART2_IRQHandler(void){
	//Check if RXNE is set
	if((USART2->SR & SR_RXNE) != 0)
	{
		//DO something
		uart_callback();
	}
}


