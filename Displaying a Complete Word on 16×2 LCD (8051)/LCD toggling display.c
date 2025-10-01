#include <reg51.h>
#define LED P0    // LCD Data bus at Port 0

// LCD control pins
sbit RS = P2^0;
sbit RW = P2^1;
sbit EN = P2^2;

// Switch at P2.5
sbit SW = P2^5;

// Function prototypes
void delay(int ms);
void lcd_init();
void send_cmd(char a);
void send_data(char b);
void display_data(char *s);

void main() {
    lcd_init();
    send_cmd(0x80);
    display_data("Nqobile");   // default message

    while(1) {
        if(SW == 0) {  // Switch pressed
            send_cmd(0x01);       // Clear LCD
            send_cmd(0x80);       // Line 1
            display_data("Aditya University, Surampalem");
            send_cmd(0xC0);       // Line 2
            display_data("East Godavari,AP");
            delay(500);
        } else {       // Switch released
            send_cmd(0x01);       // Clear LCD
            send_cmd(0x80);       // Line 1
            display_data("Nqobile");
            delay(500);
        }
    }
}

// ---------- LCD Functions ----------
void lcd_init() {
    send_cmd(0x38); // 8-bit, 2 line, 5x7
    send_cmd(0x0C); // Display ON, cursor OFF
    send_cmd(0x06); // Auto increment
    send_cmd(0x01); // Clear display
    delay(2);
}

void send_cmd(char a) {
    LED = a;
    RS = 0;
    RW = 0;
    EN = 1;
    delay(2);
    EN = 0;
    delay(2);
}

void send_data(char b) {
    LED = b;
    RS = 1;
    RW = 0;
    EN = 1;
    delay(2);
    EN = 0;
    delay(2);
}

void display_data(char *s) {
    while(*s) {
        send_data(*s++);
    }
}

// ---------- Delay Function ----------
void delay(int ms) {
    int i, j;
    for(i=0; i<ms; i++)
        for(j=0; j<1275; j++);  // ~1 ms
}
