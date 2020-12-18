#include "stm32f10x.h"   // 相当于51单片机中的  #include <reg51.h>
#include "bsp_led.h"


void Delay(uint32_t count)
{
	for(; count !=0; count--);
	
}
// \ 是续行符，不能有任何东西，就是格式好看。
int main(void)
{
	// 来到这里的时候，系统的时钟已经被配置成72M。
	LED_GPIO_Config();
	while(1)
	{
	GPIO_SetBits(LED_G_GPIO_PORT, LED_G_GPIO_PIN);
	Delay(0xFFFFF);
	GPIO_ResetBits(LED_G_GPIO_PORT, LED_G_GPIO_PIN);
    Delay(0xFFFFF);
	}
}


