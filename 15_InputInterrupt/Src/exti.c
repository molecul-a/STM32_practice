/*
 * exti.c
 *
 *  Created on: Sep 22, 2024
 *      Author: artyom
 */
#include "exti.h"
#define	GPIOCEN		(1U<<2)
#define	SYSCFGEN	(1U<<14)



void pc13_exti_init(void)
{
	//Disable global clock interrupts
	__disable_irq();
	//Enable clock access to GPIOC
	RCC->AHB1ENR |= GPIOCEN;
	//Set PC13 as input
	GPIOC->MODER &=~(1U<<26);
	GPIOC->MODER &=~(1U<<27);
	//Enable clock access to SYSCFG
	RCC->APB2ENR |= SYSCFGEN;
	//Select PORT C for EXTI13
	SYSCFG->EXTICR[3] |= (1U<<5);
	//Unmask EXTI13 (IMR)
	EXTI->IMR |= (1U<<13);
	//Select falling edge trigger
	EXTI->FTSR |= (1U<<13);
	//Enable EXTI13 line in NVIC
	NVIC_EnableIRQ(EXTI15_10_IRQn);
	//Enable global interrupts
	__enable_irq();
}
