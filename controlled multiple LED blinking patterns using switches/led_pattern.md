# Multi-Pattern LED Blinking with Switch Control (8051)

## 📌 Overview
This project demonstrates controlling multiple LED blinking patterns using **4 switches** with the 8051 microcontroller.

### Switch Functions:
1. **SW1** → Turns all LEDs ON at once  
2. **SW2** → LEDs blink one by one (forward order)  
3. **SW3** → LEDs blink one by one (reverse order)  
4. **SW4** → Two LEDs blink together simultaneously  

## 🛠️ Tools & Components
- AT89C51 Microcontroller  
- Keil uVision IDE (Embedded C code)  
- Proteus (simulation)  
- 8 LEDs + 4 Push Button Switches + Resistors  

## 🔧 How to Run
1. Compile the code in **Keil uVision**.  
2. Load the HEX file into Proteus AT89C51.  
3. Connect LEDs to **Port 1** (P1.0 – P1.7).  
4. Connect switches to **Port 2** (P2.0 – P2.3) with pull-up resistors.  
5. Run the simulation → Press switches to see different LED patterns.  

## 📂 Files
- `led_patterns.c` → Source code  
- `schematic.png` → Circuit diagram  
- `led_patterns.hex` → Compiled hex file  

## 📸 Screenshot
![Multi-Pattern LED Circuit](schematic.png)
