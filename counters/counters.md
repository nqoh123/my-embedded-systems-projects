# 7-Segment Display Counter using 8051 Microcontroller

## 🔍 Overview

This project demonstrates how to interface a **7-segment display** with an **8051 microcontroller** to display digits **0 to 8** sequentially.
The display is connected to **Port 2 (P2)**, and the delay between each number is generated using **Timer 0**.

---

## ⚙️ How It Works

1. **Segment Encoding**
   The program uses an array of hexadecimal values representing each digit on a **common anode 7-segment display**:

   ```c
   int a[] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80};
   ```

   Each value corresponds to a number (0–8).

2. **Display Loop**
   Inside the infinite loop, each encoded value is sent to Port 2 to light up the appropriate segments:

   ```c
   LED = a[i];
   delay();
   ```

   The `delay()` function provides enough time to view each digit clearly.

3. **Delay Generation**
   The delay is created using **Timer 0** in **Mode 1** (16-bit timer mode):

   ```c
   TMOD = 0x05;
   TH0 = 0xFF;
   TL0 = 0xFF;
   TR0 = 1;
   while(TF0 == 0);
   TF0 = 0;
   TR0 = 0;
   ```

   When the timer overflows, the flag `TF0` becomes 1, indicating the end of the delay period.

---

## 💡 Applications

* Digital counter displays
* Electronic meters or clocks
* Timer demonstrations
* Learning 8051 timers and display interfacing

---

## 🧠 Concepts Demonstrated

* 7-segment display encoding
* Timer 0 configuration and delay generation
* 8051 I/O port operations

---

## 🧰 Tools Used

* **Keil µVision** (for coding and simulation)
* **Proteus Design Suite** (for hardware simulation)

---

## 📁 Files Included

* `counter.c` – Source code file
* `Proteus_Simulation.pdsprj` – Optional simulation file
* `README.md` – Project explanation

---

## 🚀 Author

**Nqobile Predict Maseko**
B.Tech in Electrical and Electronics Engineering
Embedded Systems | IoT | Microcontrollers

---

## 🔗 GitHub Link

[View Project on GitHub](https://github.com/nqoh123/my-embedded-systems)
