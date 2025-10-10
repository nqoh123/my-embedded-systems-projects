#include <reg51.h>

sbit LED1 = P2^0;
sbit LED2 = P2^1;
sbit LED3 = P2^2;
sbit LED4 = P2^3;
sbit BUTTON = P3^3;     // INT1 pin

void delay_ms(unsigned int ms);

bit button_pressed = 0;  // Global flag

void main(void) {
    EA  = 1;     // Enable global interrupts
    EX1 = 1;     // Enable external interrupt 1
    IT1 = 1;     // Edge triggered (falling edge on INT1)

    P2 = 0x00;
    LED1 = 1;    // Default LED ON

    while (1) {
        if (button_pressed) {
            // Blink other LEDs while button is pressed
            LED1 = 0;  // Turn off default LED
            LED2 = 1; delay_ms(150);
            LED3 = 1; delay_ms(150);
            LED4 = 1; delay_ms(150);
            LED2 = LED3 = LED4 = 0;
        } else {
            // Normal state
            LED1 = 1;
            LED2 = LED3 = LED4 = 0;
        }

        // Continuously check button release
        if (BUTTON == 1) {
            button_pressed = 0;
        }
    }
}

// Interrupt Service Routine for External Interrupt 1
void ext_int1(void) interrupt 2 {
    button_pressed = 1;  // Set flag when button pressed
}

// Simple delay function (~1ms per loop at 12MHz)
void delay_ms(unsigned int ms) {
    unsigned int i, j;
    for (i = 0; i < ms; i++)
        for (j = 0; j < 123; j++);
}

