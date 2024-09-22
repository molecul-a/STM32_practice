#include <stdio.h>
#include <stdint.h>
#include "stm32f4xx.h"
#include "adc.h"
#include "uart.h"
#include "systick.h"
#include "tim.h"



int timestamp = 0;
int main(void)
{
	uart2_tx_init();
	tim2_pa5_output_compare_init();
	tim3_pa6_input_capture();
	while(1)
	{
		//Wait until edge is captured
		while(!(TIM3->SR & SR_CC1IF)){}
		//Read captured value
		timestamp = TIM3->CCR1;
		//print
		printf("timestamp: %d\n\r",timestamp);
	}
}



