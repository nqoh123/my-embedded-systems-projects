#include <reg51.h>

#define SEGMENT P1  // Connect segments a-g to P1.0-P1.6

void delay(unsigned int time) {
    unsigned int i, j;
    for(i=0; i<time; i++)
        for(j=0; j<1275; j++);
}

// Common Cathode 7-segment codes for 0-9
unsigned char segment_code[] = {
    0x3F, // 0
    0x06, // 1
    0x5B, // 2
    0x4F, // 3
    0x66, // 4
    0x6D, // 5
    0x7D, // 6
    0x07, // 7
    0x7F, // 8
    0x6F  // 9
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
