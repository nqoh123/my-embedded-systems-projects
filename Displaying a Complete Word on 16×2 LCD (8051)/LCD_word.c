#include <reg51.h>

#define LCD_DATA P1        // Connect D0-D7 to P1.0-P1.7
sbit RS = P2^0;
sbit RW = P2^1;
sbit EN = P2^2;

void delay(unsigned int time){
    unsigned int i, j;
    for(i=0; i<time; i++)
        for(j=0; j<1275; j++);
}

void lcd_command(unsigned char cmd){
    LCD_DATA = cmd;
    RS = 0;  // Command mode
    RW = 0;  // Write mode
    EN = 1;
    delay(1);
    EN = 0;
    delay(5);
}

void lcd_data(unsigned char dat){
    LCD_DATA = dat;
    RS = 1;  // Data mode
    RW = 0;  // Write mode
    EN = 1;
    delay(1);
    EN = 0;
    delay(5);
}

void lcd_init(){
    lcd_command(0x38); // 8-bit, 2 line, 5x7 dots
    lcd_command(0x0C); // Display ON, Cursor OFF
    lcd_command(0x06); // Auto increment cursor
    lcd_command(0x01); // Clear display
    delay(5);
}

void lcd_string(char *str){
    while(*str){
        lcd_data(*str++);
    }
}

void main(){
    lcd_init();
    lcd_string("HELLO WORLD");  // Word to display
    while(1);
}
