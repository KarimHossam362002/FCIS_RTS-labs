# 🧠 Real-Time Systems — Hands-On Labs

This repository contains hands-on lab exercises for the **RTS (Real-Time Systems)** course.
Each lab demonstrates core real-time concepts such as **task scheduling**, **timing**, and **multitasking** using **FreeRTOS** and **Microchip Studio**.

---

## ⚙️ Labs (FreeRTOS on Arduino Uno)

### 🧩 Requirements

* **Proteus 7.0**
* **Microchip Studio** for implementation
* **Arduino Uno Environment**

---

## 🪛 How to Use This Repository

### 🔹 Step 1 — Clone the Repository

```bash
git clone https://github.com/KarimHossam362002/RTS-Handson.git
cd RTS-Handson
```

---

### 🔹 Step 2 — Extract Proteus Files

* Locate the file named **`Proteus 7 Professional.zip`** in the main folder.
* Right-click → **Extract All...**
* After extracting, open **`BIN/ISIS.EXE`** from the extracted folder to start **Proteus**.

---

### 🔹 Step 3 — Open the FreeRTOS Solution

Before running any lab, open the main **Microchip Studio** solution file:

```bash
ArduinoUnoFreertos_6_1.atsln
```

This will load all FreeRTOS-related lab projects in **Microchip Studio**, allowing you to build, modify, and test them easily.

---

### 🔹 Step 4 — Open Each Lab

Each lab folder (like `Lab1`, `Lab2`, etc.) contains:

* 🖼 **A picture of the hands-on question**
* ⚙️ **A Proteus hardware design** `.DSN` file
* 💻 **Source code** that implements the solution

To run a lab:

1. Open **Proteus** → `File → Open` → choose the `.DSN` file inside the lab folder.
2. Open the code files in **Microchip Studio** (or use the loaded solution).
3. Build and upload the code to your **Arduino Uno**, or simulate the system using **Proteus**.