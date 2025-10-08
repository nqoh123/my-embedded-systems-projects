# External Interrupts on 8051 – Day 12 of Embedded Systems Challenge

## 🔎 Project Overview

This project demonstrates how to use **External Interrupt 0 (INT0)** on the **8051 microcontroller** to respond to an external hardware event such as a push button press.
Instead of continuously checking (polling) an input pin, the 8051 uses an **interrupt mechanism** to execute specific code instantly when an event occurs.

---

## ⚙️ Hardware Configuration

| Component        | Connection  | Description                          |
| ---------------- | ----------- | ------------------------------------ |
| LED1             | P2.0        | Blinks continuously in the main loop |
| LED2             | P2.1        | Controlled by external interrupt ISR |
| LED3             | P2.2        | Controlled by external interrupt ISR |
| Push Button      | P3.2 (INT0) | Triggers External Interrupt 0        |
| Pull-up Resistor | 10kΩ        | Keeps INT0 normally high             |

---

## 🧩 Working Principle

1. The program enables **External Interrupt 0 (INT0)** using the **IE register**.
2. The interrupt is configured as **edge-triggered** using **IT0 = 1** in the **TCON register**.
3. When the push button is pressed, it generates a falling edge on **P3.2**, triggering the interrupt.
4. The **Interrupt Service Routine (ISR)** executes, blinking LED2 and LED3.
5. The main loop continues blinking LED1 independently.

---

## 🧰 Tools Used

* **Keil µVision** – Code development and compilation
* **Proteus** – Circuit simulation
* **8051 microcontroller**, LEDs, push button, resistors

---

## 📘 Key Learning

* How to configure **External Interrupt 0 (INT0)** on 8051
* Difference between **edge-triggered** and **level-triggered** interrupts
* Writing an **Interrupt Service Routine (ISR)**
* Managing multiple tasks using interrupts instead of polling

---

## 🎥 Demo

Simulation video available in the repository.

> Watch the push button trigger the interrupt while the main LED continues blinking!

---

## 🧠 Next Step

Implement **INT1 (External Interrupt 1)** on **P3.3** to control a second event or device.

---

**Author:** Nqobile Predict Maseko
**Challenge:** 30 Days of Embedded Systems Projects
**Day:** 12 – External Interrupts on 8051

#8051 #Microcontroller #EmbeddedSystems #Proteus #Keil #IoT #LearningByBuilding
