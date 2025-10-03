8051 Microcontroller Calculator with LCD & Keypad
📌 Project Overview

This project demonstrates how to build a basic calculator using the AT89C51 (8051) microcontroller, a 16x2 LCD display, and a 4x4 matrix keypad.

The system takes two numbers from the keypad, along with an operator (+, -, *, /), and displays the result on the LCD when = is pressed.

⚡ Features

Reads numeric input (0–9) from keypad.

Supports four arithmetic operations: +, -, *, /.

Displays the entered values and operator on the LCD.

Shows the result on pressing =.

Clear (C) button resets the LCD.

🛠️ Components Used

AT89C51 Microcontroller

4×4 Matrix Keypad

16x2 LCD Display

Resistors, Capacitors, Crystal Oscillator (11.0592 MHz)

Keil µVision (Embedded C IDE)

Proteus 8 (Simulation)

🔍 How It Works

The keypad is scanned row by row to detect key presses.

Numbers are stored in variables a and b.

Operators (+, -, *, /) are stored in variable op.

When = is pressed, the operation() function is called:

Performs calculation using switch-case.

Stores result in variable c.

Displays result on LCD using sprintf().

LCD shows both entered inputs and the final result.

💻 Code Flow

lcd_init() → Initializes LCD.

keypad() → Continuously scans for key input.

row1()–row4() → Detects which key is pressed.

operation(op) → Executes arithmetic operation.

display_data() → Sends text or numbers to LCD.

✨ Applications

Mini calculator for embedded devices.

Password-protected systems (by modifying input logic).

Educational demo of LCD + Keypad interfacing with microcontrollers.

📂 Project Files

Source Code (mini_calculator.c)

schematic diagram(mini_calculator.png)