# Display Word on 16x2 LCD using 8051

## 📌 Overview
This project demonstrates how to display a **complete word or string** on a 16×2 LCD using the 8051 microcontroller.

## 🛠️ Tools & Components
- AT89C51 Microcontroller  
- Keil uVision IDE  
- Proteus (simulation)  
- 16x2 LCD (HD44780)  
- Resistors + Potentiometer  

## 🔧 How to Run
1. Open `lcd_word.c` in Keil uVision and compile.  
2. Load the HEX file into the AT89C51 in Proteus.  
3. Connect LCD pins to Port 1 (data) and Port 2 (control).  
4. Run the simulation → LCD displays **HELLO WORLD**.

## 📂 Files
- `lcd_word.c` → Source code  
- `schematic.png` → Circuit diagram  
- `lcd_word.hex` → Compiled hex file  

## 📸 Screenshot
![LCD Display Word](schematic.png)
