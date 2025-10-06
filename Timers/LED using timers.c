#include <reg51.h>
#define LED P2

void delay();

int main()
{
    LED = 0x00;    // All LEDs OFF initially
    while(1)
    {
        LED = 0xFF;   // Turn all LEDs ON
        delay();

        LED = 0x00;   // Turn all LEDs OFF
        delay();
    }
}

void delay()
{
    unsigned int i, j;
    for(i = 0; i < 200; i++)        // reduced from 1000
        for(j = 0; j < 1275; j++);  // same inner loop
}
