# LED Chaser on 8051

## 📌 Overview
This project demonstrates how to blink multiple LEDs one after another in **forward and reverse order** using the 8051 microcontroller.  

## 🛠️ Tools & Components
- AT89C51 Microcontroller  
- Keil uVision IDE (for Embedded C code)  
- Proteus (for simulation)  
- 8 LEDs + Resistors  

## 🔧 How to Run
1. Compile `led_chaser.c` in **Keil uVision**.  
2. Load the HEX file into the AT89C51 microcontroller in Proteus.  
3. Connect 8 LEDs to **Port 1 (P1.0 – P1.7)**.  
4. Run the simulation → LEDs chase forward and backward continuously.  

## 📂 Files
- `led_chaser.c` → Source code  
- `schematic.png` → Circuit diagram  
- `LED_Chaser.hex` → Compiled hex file  

## 📸 Screenshot
![LED Chaser Circuit](schematic.png)
