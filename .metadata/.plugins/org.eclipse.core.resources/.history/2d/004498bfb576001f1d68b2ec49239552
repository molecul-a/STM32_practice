/*
 * tim.c
 *
 *  Created on: Sep 19, 2024
 *      Author: artyom
 */
#include "stm32f4xx.h"

#define TIM2EN			(1U<<0);
#define TIM2_CR1_CEN	(1U<<0);

void tim2_1hz_init(void)
{
	// Enable clock access to tim2
	RCC->APB1ENR |= TIM2EN;
	//Set prescaler value
	TIM2->PSC = 1600 - 1; //  16 000 000/16 000 = 10 000
	//Set auto-reload value
	TIM2->ARR = 10000 - 1;
	//clear counter
	TIM2->CNT = 0;
	//Enable timer
	TIM2->CR1 |= TIM2_CR1_CEN;
}


