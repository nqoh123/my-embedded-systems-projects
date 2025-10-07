#include<reg51.h>
#define LED P2

void delay();

int main()
{
	int a[] = {0xc0, 0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80};
	LED = 0x00;
	while(1)
	{
		int i;
		for(i =0;i<9;i++)
		{
			LED = a[i];
			delay();
		}
	}
}

void delay()
{
	TMOD = 0x05;
	
	TH0 =0xff;
	TL0 =0xff;
	
	TR0 = 1;
	while(TF0 == 0);
	TF0 = 0;
	TR0 = 0;
}