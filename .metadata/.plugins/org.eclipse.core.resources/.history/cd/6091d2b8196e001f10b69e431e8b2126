#include <stdio.h>
#include <stdint.h>
#include "stm32f4xx.h"
#include "adc.h"
#include "uart.h"

#define GPIOAEN			(1U<<0)
#define GPIOA_5			(1U<<5)
#define LED_PIN			GPIOA_5

char key;
uint32_t sensor_value;
int main(void)
{
	// ENABLE CKL ACCESS TO GPIOA
	RCC->AHB1ENR |= GPIOAEN;
	// SET PA5 AS OUTPUT PIN
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &=~(1U<<11);
	uart2_rxtx_init();

	pa1_adc_init();

	while(1)
	{
		key = uart2_read();
		if(key == '1')
		{
			GPIOA->ODR |=  LED_PIN;
			start_conversion();
			sensor_value = adc_read();
			printf("Sensor value: %d\n\r",(int)sensor_value);
		}
		else{
			GPIOA->ODR &= ~LED_PIN;
		}

	}
}



