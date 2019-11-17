#include "main.h"

int main(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	
	delay_Init();
	LED_Init();
	USART1_Init(115200);
	TIM3_Init(1000,72);
	
	while(1)
	{

	}
}
