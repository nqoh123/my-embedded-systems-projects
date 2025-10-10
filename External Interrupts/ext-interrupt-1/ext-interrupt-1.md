# 🌟 8051 External Interrupt 1 (INT1) Project

## 🧠 Project Overview
This project demonstrates how to use **External Interrupt 1 (INT1)** on the **8051 microcontroller** to control a set of LEDs using a **push button**.  

- On startup, **LED1** (connected to **P2.0**) glows **by default**.  
- When the **push button** (connected to **P3.3 / INT1**) is **pressed**, the **other LEDs (LED2–LED4)** blink in a sequence.  
- When the **button is released**, the system returns to its **normal state**, showing only LED1 ON again.  

This project is ideal for understanding **real-time interrupt handling** in embedded systems.

---

## ⚙️ Hardware Connections

| Component | Pin | Description |
|------------|-----|-------------|
| LED1 | P2.0 | Default ON LED |
| LED2 | P2.1 | Blinks during interrupt |
| LED3 | P2.2 | Blinks during interrupt |
| LED4 | P2.3 | Blinks during interrupt |
| Push Button | P3.3 (INT1) | External Interrupt 1 input |

**Note:**
- Connect one terminal of the push button to **P3.3 (INT1)**.
- Connect the other terminal to **GND**.
- No pull-down resistor is needed since Port 3 pins have **internal pull-ups**.

---

## 🧩 Software & Tools

- **Keil µVision IDE** – for writing and compiling C code  
- **AT89C51 / 8051 Microcontroller**  
- **Proteus Design Suite** *(optional, for circuit simulation)*

---

⚡ Explanation of External Interrupt 1 (INT1)

The 8051 microcontroller supports two external hardware interrupts:

INT0 → Pin P3.2

INT1 → Pin P3.3

These interrupts allow the microcontroller to pause its main program and execute a specific task immediately when an external event (like a button press) occurs.

🧭 How INT1 Works

The interrupt can be triggered either by level (low) or by edge (falling edge) depending on the IT1 bit in the TCON register.

IT1 = 0 → Level-triggered (active low signal)

IT1 = 1 → Edge-triggered (triggered on 1 → 0 transition)

In this project:

IT1 = 1;


This means the interrupt triggers only once per button press when the signal changes from HIGH to LOW, avoiding repeated triggers.

When the interrupt occurs:

The 8051 automatically jumps to the ISR (Interrupt Service Routine) located at vector address 0x0013.

The ISR (void ext_int1(void) interrupt 2) runs immediately.

After completing, control returns to the main program automatically.

🔬 Program Flow

Initialization:

Enable global interrupts (EA = 1)

Enable external interrupt 1 (EX1 = 1)

Set falling-edge mode (IT1 = 1)

Default Operation:

LED1 (P2.0) remains ON.

Others remain OFF.

On Button Press (Interrupt Occurs):

ISR triggers and sets the flag button_pressed = 1.

LEDs 2–4 blink in sequence.

On Button Release:

Main loop detects release and resets flag.

System returns to normal mode.

📊 Key Learning Points

Configure external interrupts on 8051.

Use non-blocking ISRs for smoother main loop execution.

Understand edge-triggered interrupt operation.

Combine hardware and software for real-time control.

🧠 Applications

Event-based embedded systems

Real-time input detection (buttons, sensors, etc.)

Power-saving microcontroller designs

Smart automation systems

🧰 Author

Nqobile Predict Maseko
🎓 B.Tech in Electrical and Electronics Engineering
💡 Passionate about Embedded Systems, IoT, and Semiconductor Industry