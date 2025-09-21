#include <reg51.h>

#define LEDs P1
sbit SW1 = P2^0;
sbit SW2 = P2^1;
sbit SW3 = P2^2;
sbit SW4 = P2^3;

void delay(unsigned int time) {
    unsigned int i, j;
    for(i=0; i<time; i++)
        for(j=0; j<1275; j++);
}

void all_on() {
    LEDs = 0xFF;   // Turn on all LEDs
}

void forward_chase() {
    unsigned char i;
    for(i=0; i<8; i++) {
        LEDs = 1 << i;
        delay(300);
    }
}

void reverse_chase() {
    signed char i;
    for(i=7; i>=0; i--) {
        LEDs = 1 << i;
        delay(300);
    }
}

void two_at_a_time() {
    unsigned char i;
    for(i=0; i<8; i+=2) {
        LEDs = (1 << i) | (1 << (i+1));  // Two LEDs ON together
        delay(300);
    }
}

void main() {
    LEDs = 0x00;  // Clear LEDs
    while(1) {
        if(SW1 == 0) {   // Switch pressed (active low)
            all_on();
        }
        else if(SW2 == 0) {
            forward_chase();
        }
        else if(SW3 == 0) {
            reverse_chase();
        }
        else if(SW4 == 0) {
            two_at_a_time();
        }
        else {
            LEDs = 0x00;  // All OFF if no switch pressed
        }
    }
}
