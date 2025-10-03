# LCD Display Controlled by Switch – Embedded Systems Project

📅 **Day 7 of My 30-Day Embedded Systems Challenge**

This project demonstrates how a **16x2 LCD** can display different messages based on a **push-button switch input** using an **8051 microcontroller (AT89C51)**. When the switch is pressed, the LCD updates to show a new message; when released, it returns to the default message.

---

## **Project Overview**

- **Microcontroller:** AT89C51 (8051 family)
- **Language:** Embedded C
- **IDE:** Keil µVision
- **Simulation:** Proteus 8 Professional
- **Hardware Components:**  
  - 16x2 LCD  
  - Push Button Switch  
  - Resistors & Capacitors  
  - Crystal Oscillator  

---

## **How It Works**

1. The LCD is connected in **8-bit mode** with the microcontroller.
2. A **push-button switch** is connected to pin **P2.5** (or any configurable digital input pin).
3. The program continuously checks the state of the switch:
   - **Default:** Switch not pressed → LCD displays `Nqobile`.
   - **Pressed:** LCD updates to show two lines of text:
     ```
     Aditya University, Surampalem
     East Godavari, AP
     ```
   - **Released:** LCD returns to the default message.
4. The logic is implemented in **Embedded C** and simulated in **Proteus**.

---

## **Key Concepts Learned**

- LCD interfacing with microcontrollers
- Reading digital inputs (switch press/release)
- Dynamic updating of LCD content
- Understanding command vs data mode in LCD operation
- Basics of **8051 microcontroller programming**

---

## **Applications**

- User interfaces for embedded devices (microwaves, washing machines)
- Menu navigation systems
- Real-time data display for IoT and sensor-based projects
- Educational tools for learning microcontroller I/O
- Prototyping small control panels

---

## **Project Files**

- `lcd toggle display.c` – Embedded C source code
- `ProteusSimulation.pdsprj` – Proteus simulation project
  


---

## **Future Improvements**

- Support for multiple switches to control different messages
- Implement scrollable messages or menus
- Interface with sensors for automated message updates

---

## **Author**

**Nqobile Predict Maseko**  
B.Tech Electrical & Electronics Engineering Student  
Embedded Systems Enthusiast | 30-Day Challenge  

---

✨ *“Every small project strengthens problem-solving and brings me closer to becoming a skilled Embedded Engineer.”*
