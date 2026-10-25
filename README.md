# 🚦 Traffic Signal Simulation in C++

A lightweight, object-oriented C++ console application that simulates a multi-way traffic signal system cycling through **Red**, **Green**, and **Yellow** states with customizable timings and smooth execution delays.

---

## ✨ Features

* **Object-Oriented Design (OOP):** Built using a modular `TrafficSignal` class, allowing you to easily create and manage multiple independent signals with unique timing configurations.
* **Thread Timing & Delays:** Leverages C++ `<thread>` and `<chrono>` libraries to simulate real-world pacing and transition delays.
* **Customizable Cycles:** Allows users to dynamically input the number of simulation cycles they want to run at runtime.
* **Clean Console Output:** Formatted terminal logs for clear tracking of signal states and durations.

---

## 🛠️ Code Architecture

The program relies on a single class structure:

| Component | Description |
| :--- | :--- |
| **`TrafficSignal` Class** | Encapsulates signal properties (`name`, `redTime`, `greenTime`, `yellowTime`) and behavior. |
| **`showState()` Method** | Handles printing the current state of the signal along with its duration, including a built-in demo sleep delay. |
| **`runCycle()` Method** | Manages the sequential transition loop (`RED` $\rightarrow$ `GREEN` $\rightarrow$ `YELLOW`) for a specified number of iterations. |

---

## 🚀 Getting Started

### Prerequisites
To compile and run this project, you need:
* A C++ compiler supporting **C++11 or later** (e.g., `g++`, `clang`, or MSVC).

### Compilation & Execution

1. **Clone or save** the source code into a file named `traffic_signal.cpp`.
2. **Open your terminal or command prompt** in the directory containing the file.
3. **Compile the code** using your compiler:
   ```bash
   g++ -std=c++11 traffic_signal.cpp -o traffic_signal
