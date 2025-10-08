#include<reg51.h>
#define XTAL 11059200UL
sbit LED1 = P2^0;
sbit LED2 = P2^1;
sbit LED3 = P2^2;

void delay();
void ISR();

int main()
{
	LED1=LED2=LED3=0;
	IE = 0x81;  //enable interrup
	IT0 = 0;   //level trigged
	while(1)
	{
	  LED1= ~LED1;
		delay();
	}
}

void ISR() interrupt 0
{
	LED2 = 1;
	delay();
	LED2 = 0;
	delay();
	LED3 = 1;
	delay();
	LED3 = 0;
	delay();
}
		
void delay()
{
	int i,j;
	for(i=0;i<100;i++)
	for(j=0;j<500;j++);
}