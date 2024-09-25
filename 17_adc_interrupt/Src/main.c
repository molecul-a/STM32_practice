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

uint32_t sensor_value;
int main(void)
{
	// ENABLE CKL ACCESS TO GPIOA
	RCC->AHB1ENR |= GPIOAEN;
	// SET PA5 AS OUTPUT PIN
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &=~(1U<<11);

	uart2_tx_init();
	pa1_adc_interrupt_init();
	start_conversion();
	while(1)
	{

	}
}

static void adc_callback(void)
{
	sensor_value = ADC1->DR;
	GPIOA->ODR ^= LED_PIN;
	printf("Sensor value: %d\n\r",(int)sensor_value);
	systickDelayMs(1000);
}

void ADC_IRQHandler(void){
	//Check if RXNE is set
	if((ADC1->SR & SR_EOC) != 0)
	{
		//Clear EOC flag
		ADC1->SR &= ~(SR_EOC);
		//DO something
		adc_callback();
	}
}


