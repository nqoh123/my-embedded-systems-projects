# Dual LCD Display with 8051 Microcontroller

## 📌 Project Overview

This project demonstrates how to interface **two 16x2 LCD modules** with the **8051 microcontroller**.
Each LCD is connected to separate ports, allowing the display of **different messages simultaneously**.

It’s an extension of the single LCD project — useful in embedded systems where **parallel visual feedback** is required (e.g., monitoring multiple parameters, displaying logs and alerts separately).

---

## 🔧 Hardware Requirements

* 8051 Microcontroller (AT89C51)
* 2 × 16x2 LCD Displays
* Crystal Oscillator (11.0592 MHz)
* Capacitors, Resistors
* Breadboard / PCB
* Connecting Wires

---

## ⚙️ Pin Connections

### LCD1

* Data Pins → **P0**
* RS → **P2.0**
* RW → **P2.1**
* EN → **P2.2**

### LCD2

* Data Pins → **P1**
* RS → **P3.0**
* RW → **P3.1**
* EN → **P3.2**

---

## 🖥️ Working Principle

1. **LCD Initialization** – Both LCDs are configured in 8-bit mode, cursor ON.
2. **Command Functions** – Separate functions `send_cmd1()` and `send_cmd2()` send instructions to each LCD.
3. **Data Functions** – `send_data1()` and `send_data2()` display characters on each LCD.
4. **Display Cycle** –

   * LCD1 shows:

     ```
     kalai selvi
     embedded system
     ```
   * LCD2 shows:

     ```
     kavitha
     java IT
     ```
   * Each display is visible for a short time before the screen clears and repeats.

---

## 📂 Applications

* Dual-screen embedded devices
* Simultaneous display of sensor values (e.g., temperature on LCD1, humidity on LCD2)
* User interface + debug log separation
* Industrial monitoring systems

---

## 🚀 Future Improvements

* Add **Timer-based delays** instead of software delay loops
* Allow **dynamic inputs** (e.g., from UART/serial communication) to update LCDs in real-time
* Use **custom characters** to enhance display

---

## 📸 Demo Output

LCD1 → `kalai selvi / embedded system`
LCD2 → `kavitha / java IT`

---

## 📎 Project Files

* `dual_lcd.c` → Source code

---

## 🔗 Author

👨‍💻 Nqobile Predict Maseko
