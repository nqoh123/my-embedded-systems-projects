#include <REGX51.H>   // Header file for 8051

// Simple delay function
void delay(unsigned int time) {
    unsigned int i, j;
    for(i = 0; i < time; i++) {
        for(j = 0; j < 1275; j++);   // 1 ms approx @ 12MHz
    }
}

void main() {
    unsigned char i;

    while(1) {
        // Forward direction (P1.0 to P1.7)
        for(i = 0; i < 8; i++) {
            P1 = 0x00;              // Turn OFF all LEDs
            P1 = (1 << i);          // Turn ON one LED
            delay(300);
        }

        // Reverse direction (P1.7 to P1.0)
        for(i = 7; i > 0; i--) {
            P1 = 0x00;              // Turn OFF all LEDs
            P1 = (1 << i);          // Turn ON one LED
            delay(300);
        }
    }
}
