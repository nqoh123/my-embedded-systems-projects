# Dual LCD Display with 8051 Microcontroller

## 📌 Project Overview

This project demonstrates how to interface **two 16x2 LCD modules** with the **8051 microcontroller**.
Each LCD is connected to separate ports, allowing the display of **different messages simultaneously**.

In this version, the displays show:

* **LCD1** → `"Nqobile Predict"` and `"embedded system"`
* **LCD2** → `"Electronics"` and `"Semiconductor Industry"`

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

1. **Initialization** – Both LCDs are set to 8-bit mode, cursor ON.
2. **Command Functions** – `send_cmd1()` and `send_cmd2()` send commands to LCD1 and LCD2.
3. **Data Functions** – `send_data1()` and `send_data2()` send characters to LCD1 and LCD2.
4. **Main Loop** –

   * LCD1 prints:

     ```
     Nqobile Predict
     embedded system
     ```
   * LCD2 prints:

     ```
     Electronics
     Semiconductor Industry
     ```
   * After a short delay, both screens are cleared and the cycle repeats.

---

## 📂 Applications

* Dual-screen embedded devices
* Simultaneous display of **different system parameters** (e.g., LCD1 for user info, LCD2 for logs)
* Educational projects to demonstrate multiple display control
* Industrial monitoring systems

---

## 🚀 Future Improvements

* Add **scrolling text support** for longer messages (e.g., `"Semiconductor Industry"`)
* Replace software delays with **Timer-based delays** for more stable performance
* Interface with sensors or serial communication to show **real-time data**

---

## 📸 Demo Output

**LCD1** →

```
Nqobile Predict
embedded system
```

**LCD2** →

```
Electronics
Semiconductor Industry
```

---

## 📎 Project Files

* `dual_lcd.c` → Source code

---

## 🔗 Author

👨‍💻 Nqobile Predict Maseko
