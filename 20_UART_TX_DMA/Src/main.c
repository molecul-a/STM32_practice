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
	char massage[31] = "Hello from STM32 DMA TRANSFER\n\r";

	// ENABLE CKL ACCESS TO GPIOA
	RCC->AHB1ENR |= GPIOAEN;
	// SET PA5 AS OUTPUT PIN
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &=~(1U<<11);


	uart2_tx_init();
	dma1_stream6_init((uint32_t)massage, (uint32_t)&USART2->DR, 31);

	while(1)
	{

	}


}
static void uart_callback(void)
{
	systickDelayMs(1000);
	GPIOA->ODR ^= LED_PIN;
	printf("WOW!\n\r");
}

void DMA1_Stream6_IRQHandler(void){
	//Check for transfer complete interrupt
	if ((DMA1->HISR & DMA_HISR_TCIF6))
	{
		//Clear flag
		DMA1->HIFCR &=~(DMA_HIFCR_CTCIF6);
		//Do something
		uart_callback();
	}
}

