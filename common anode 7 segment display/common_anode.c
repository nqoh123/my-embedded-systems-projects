#include <reg51.h>

#define SEGMENT P1  // Connect segments a-g to P1.0-P1.6

void delay(unsigned int time) {
    unsigned int i, j;
    for(i=0; i<time; i++)
        for(j=0; j<1275; j++);
}

// Common Anode 7-segment codes for 0-9
unsigned char segment_code[] = {
    0xC0, // 0
    0xF9, // 1
    0xA4, // 2
    0xB0, // 3
    0x99, // 4
    0x92, // 5
    0x82, // 6
    0xF8, // 7
    0x80, // 8
    0x90  // 9
};

void main() {
    unsigned char i;
    while(1) {
        for(i=0; i<10; i++) {
            SEGMENT = segment_code[i];  // Display 0-9
            delay(500);                 // Wait
        }
    }
}
