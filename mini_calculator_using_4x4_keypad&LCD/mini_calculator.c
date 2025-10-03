#include<reg51.h>
#include<stdio.h>
#include<string.h>
#define LCD P0
sbit RS = P3^1;
sbit RW = P3^2;
sbit EN = P3^3;

sbit R1 = P1^0;
sbit R2 = P1^1;
sbit R3 = P1^2;
sbit R4 = P1^3;
sbit C1 = P1^4;
sbit C2 = P1^5;
sbit C3 = P1^6;
sbit C4 = P1^7;

void delay(int ms);
void send_cmd(char a);
void send_data(char b);
void display_data(char *s);
void lcd_init();

void keypad();
void row1();
void row2();
void row3();
void row4();

void operation(char op);
double a,b,c;
char d[30],op;

int main()
{
	LCD = 0x00;
	lcd_init();
	send_cmd(0x80);
	display_data("Enter two number");
	send_cmd(0xc0);
	while(1)
	{
		keypad();
	}
}

void lcd_init()
{
	send_cmd(0x38);
	send_cmd(0x0e);
	send_cmd(0x01);
	send_cmd(0x06);
}

void send_cmd(char a)
{
  LCD = a;
  RS = 0;
  RW = 0;
  EN = 1;
  delay(20);
  EN = 0;
}	
void send_data(char b)
{
  LCD = b;
  RS = 1;
  RW = 0;
  EN = 1;
  delay(10);
  EN = 0;
}

void display_data(char *s)
{
	while(*s)
	{
		send_data(*s++);
	}
}

void keypad()
{
	  row1();
	  row2();
	  row3();
	  row4();
}

void row1()
{
	C1=C2=C3=C4 =1;
	R2=R3=R4 = 1;
	R1 = 0 ;
	if(C1 == R1)
	{
		send_data('7');
		a = 7 ;
		while(C1 == R1);
	}
	 else if(C2 == R1)
	 {
		 send_data('8');
		 a = 8;
		 while(C2 == R1);
	 }
	 else if(C3 == R1)
	 {
		 send_data('9');
		 a=9;
		 while(C3 == R1);
	 }
	 else if(C4 == R1)
	 {
		 send_data('/');
		 op = '/';
		 b=a;
		 while(C4==R1);
	 }
 }
	 
void row2()
{
	 R1=R3=R4 =1;
	 R2 =0;
	 if(C1 == R2)
	 {
		 send_data('4');
		 a =4;
		 while(C1==R2);
		 }
	 else if(C2 == R2)
	 {
		 send_data('5');
		 a=5;
		 while(C2 == R2);
	 }
	 else if(C3 == R2)
	 {
		 send_data('6');
		 a=6;
		 while(C3 == R2);
	 }
	 else if(C4 == R2)
	 {
		 send_data('*');
		 op ='*';
		 b=a;
		 while(C4==R2);
	 }
 }
void row3()
{
	 R2=R1=R4 =1;
	 R3 =0;
	 if(C1 == R3)
	 {
		 send_data('1');
		 a = 1;
		 while(C1==R3);
		 }
	 else if(C2 == R3)
	 {
		 send_data('2');
		 a = 2;
		 while(C2 == R3);
	 }
	 else if(C3 == R3)
	 {
		 send_data('3');
		 a = 3;
		 while(C3 == R3);
	 }
	 else if(C4 == R3)
	 {
		 send_data('-');
		 op = '-';
		 b=a;
		 while(C4==R3);
	 }
 }
void row4()
{
	 R2=R3=R1 =1;
	 R4 =0;
	 if(C1 == R4)
	 {
		 send_cmd(0x01);
		 while(C1==R4);
		}
	 else if(C2 == R4)
	 {
		 send_data('0');
		 a =0;
		 while(C2 == R4);
	 }
	 else if(C3 == R4)
	 {
		 send_data('=');
		 operation(op);
		 while(C3 == R4);
	 }
	 else if(C4 == R4)
	 {
		 send_data('+');
		 op = '+';
		 b=a;
		 while(C4==R4);
	 }
 }

 
void delay(int ms)
	{
		int i,j;
		for(i=0;i<ms;i++)
		for(j=0;j<1000;j++);
	}

	void operation(char op)
	{
	{
		switch(op)
		{
			case '+' :
			{
				c = b+a;
			  sprintf(d,"%.2f",c);
			  break;
			}
		 
			case '-' :
			{
				c= b-a;
			  sprintf(d,"%.2f",c);
        break;
			}
			case '*' :
			{
      c = b*a;
      sprintf(d,"%.2f",c);
      break;
			}

      case '/' :
			{
      c =b/a;
      sprintf(d,"%.2f",c);
			break;
			}
		}
	}

	display_data(d);
}