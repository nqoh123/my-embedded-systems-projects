# Common Anode 7-Segment Display using 8051

## 📌 Overview
This project demonstrates how to display numbers **0 to 9** sequentially on a **common anode 7-segment display** using the 8051 microcontroller.

## 🛠️ Tools & Components
- AT89C51 Microcontroller  
- Keil uVision IDE  
- Proteus (simulation)  
- 7-Segment Display (Common Anode)  
- Resistors  

## 🔧 How to Run
1. Open `common_anode.c` in **Keil uVision** and compile.  
2. Load the HEX file into the AT89C51 microcontroller in Proteus.  
3. Connect the 7-segment display segments to **Port 1**.  
4. Run the simulation → Display will show numbers 0–9 sequentially.

## 📂 Files
- `common_anode.c` → Source code  
- `schematic.png` → Circuit diagram  
- `common_anode.hex` → Compiled hex file  

## 📸 Screenshot
![Common Anode 7-Segment Circuit](schematic.png)
