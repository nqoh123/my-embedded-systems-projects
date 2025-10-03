#include <reg51.h>
#define LED1 P0   // Data pins for LCD1
#define LED2 P1   // Data pins for LCD2

// LCD1 control pins
sbit RS = P2^0;
sbit RW1 = P2^1;
sbit EN1 = P2^2;

// LCD2 control pins
sbit RS3 = P3^0;
sbit RW2 = P3^1;
sbit EN2 = P3^2;

void delay(int ms);
void send_cmd1(char a);
void send_cmd2(char b);
void send_data1(char a);
void send_data2(char b);
void display_data1(char *s);
void display_data2(char *p);
void lcd_init();

int main() {
    LED1 = 0x00;
    LED2 = 0x00;
    lcd_init();
    
    while(1) {
        send_cmd1(0x80);
        display_data1("Nqobile Predict");
        delay(50);
        
        send_cmd1(0xc0);
        display_data1("embedded system");
			  send_cmd1(0x01);
        delay(200);
			
        send_cmd2(0x80);
        display_data2("ELectronics ");
        delay(50);
        
        send_cmd2(0xc0);
        display_data2("Semiconductor Industry");
			  send_cmd2(0x01);
        delay(200);
    }
}

void lcd_init() {
    send_cmd1(0x38);
    send_cmd1(0x0e);
    send_cmd1(0x01);
    send_cmd1(0x06);

    send_cmd2(0x38);
    send_cmd2(0x0e);
    send_cmd2(0x01);
    send_cmd2(0x06);
}

void send_cmd1(char a) {
    LED1 = a;
    RS = 0;
    RW1 = 0;
    EN1 = 1;
    delay(2);
    EN1 = 0;
}

void send_cmd2(char b) {
    LED2 = b;
    RS3 = 0;
    RW2 = 0;
    EN2 = 1;
    delay(2);
    EN2 = 0;
}

void send_data1(char a) {
    LED1 = a;
    RS = 1;
    RW1 = 0;
    EN1 = 1;
    delay(50);
    EN1 = 0;
}

void send_data2(char b) {
    LED2 = b;
    RS3 = 1;
    RW2 = 0;
    EN2 = 1;
    delay(50);
    EN2 = 0;
}

void display_data1(char *s) {
    while(*s) {
        send_data1(*s++);
    }
}

void display_data2(char *p) {
    while(*p) {
        send_data2(*p++);
    }
}

void delay(int ms) {
    int i, j;
    for(i = 0; i < ms; i++)
        for(j = 0; j < 1000; j++);
}
