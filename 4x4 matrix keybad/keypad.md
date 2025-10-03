# 4x4 Keypad Interfacing with 8051 and LCD

## 📌 Project Overview

This project demonstrates how to interface a **4×4 matrix keypad** with an **8051 microcontroller** and display the pressed keys on a **16x2 LCD**.

Whenever a key is pressed, its corresponding character (0–9, +, -, *, /, =) is shown on the LCD in real time. A **Clear (C)** function is also included to reset the display.

This project forms the foundation for building **calculators, password entry systems, and menu navigation interfaces** in embedded applications.

---

## 🔧 Hardware Requirements

* 8051 Microcontroller (AT89C51)
* 16x2 LCD Display
* 4×4 Matrix Keypad
* Keil µVision (for coding)
* Proteus 8 (for simulation)
* Resistors, Capacitors, Wires, Breadboard/PCB

---

## ⚙️ Pin Connections

### LCD

* Data Pins → **P0**
* RS → **P2.0**
* RW → **P2.1**
* EN → **P2.2**

### Keypad

* Rows → **R1 = P1.0, R2 = P1.1, R3 = P1.2, R4 = P1.3**
* Columns → **C1 = P1.4, C2 = P1.5, C3 = P1.6, C4 = P1.7**

---

## 🖥️ Working Principle

1. **LCD Initialization** – Configured in 8-bit mode.
2. **Keypad Scanning** – Each row is pulled LOW one by one, while columns are checked.
3. **Key Detection** – The pressed key’s row-column combination determines which number/symbol is displayed.
4. **LCD Display** – The detected key is immediately shown on the LCD.

### Key Mapping

| Row | Col1 | Col2 | Col3 | Col4 |
| --- | ---- | ---- | ---- | ---- |
| R1  | 7    | 8    | 9    | /    |
| R2  | 4    | 5    | 6    | *    |
| R3  | 1    | 2    | 3    | -    |
| R4  | C    | 0    | =    | +    |

---

## 📂 Applications

* Simple Calculator
* Password-protected systems (PIN entry)
* Menu-driven embedded devices
* Digital locks and authentication systems

---

## 🚀 Future Improvements

* Add **debouncing** to avoid multiple detections per key press
* Implement **calculator logic** (addition, subtraction, multiplication, division)
* Store multiple key entries for **password authentication**

---

## 📸 Demo Output

LCD shows:

```
Enter the number
123+45=
```

(or any key sequence entered from the keypad)

---

## 📎 Project Files

* `keypad_lcd.c` → Source code

---

## 🔗 Author

👨‍💻 Nqobile Predict Maseko
