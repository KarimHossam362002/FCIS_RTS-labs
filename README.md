# 🧠 Real-Time Systems — Hands-On Labs

This repository contains hands-on lab exercises for the **RTS (Real-Time Systems)** course.  
Each lab demonstrates core real-time concepts such as task scheduling, timing, and multitasking using **FreeRTOS** and **Microchip Studio**.

---

## ⚙️ Lab 1 — Two Tasks Blinking (FreeRTOS on Arduino Uno)

### 🧩 Requirements
- [Proteus 7.0 (Download here)](https://drive.google.com/drive/folders/1lHVFO2CAMMShs6c67-NfvHm77NXbY0Db)
- Microchip Studio for implementation
- Arduino Uno microcontroller

---

### 🧰 Setup Instructions
1. **Import the FreeRTOS Library**
   - Copy the folder named `ArduinoUnoFreertos` into your project directory.
   - This folder contains the FreeRTOS source files required for compilation.
   - Obtain this folder from the college lab files.

2. **Include FreeRTOS in your code**
   ```c
   #include "FreeRTOS.h"
   #include "task.h"
