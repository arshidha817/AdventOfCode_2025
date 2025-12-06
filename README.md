# Advent of Code 2025 Solutions 

This repository contains my personal solutions for the **Advent of Code 2025** programming challenge, written primarily in C++.

---

## About Advent of Code

Advent of Code (AoC) is an annual, month-long coding challenge that provides a short programming puzzle every day from December 1st to 12th (was previously till Dec 25th). Each puzzle consists of two parts. The first part's answer unlocke the second part.

---
## Repository Structure and File Naming

This repository uses clear naming conventions for both the source code and the input data.

### 1. Source Code Files (Solutions)
   
The solution files follow the format: **'aoc[Day].[Part].cpp'**
   
* **`[Day]`**: The day number (e.g., `1`, `2`, `5`).
* **`[Part]`**: The part of the puzzle solved, either `1` or `2`.
* **`.cpp`**: The file extension, indicating the C++ language.

| Example | Puzzle Solved |
| :--- | :--- |
| `aoc1.1.cpp` | Day 1, Part 1 |
| `aoc5.2.cpp` | Day 5, Part 2 |

### 2. Input Data Files

Each day's input data is saved in a dedicated file using the format: **`aoc[Day]_input.txt`**

* **`[Day]`**: The day number (e.g., `1`, `2`, `5`).
* **`[Part]`**: The part of the puzzle solved, either `1` or `2`.
* **`.cpp`**: The file extension, indicating the C++ language.

| Example | Puzzle Solved |
| :--- | :--- |
| `aoc1.1.cpp` | Day 1, Part 1 |
| `aoc5.2.cpp` | Day 5, Part 2 |

### 2. Input Data Files

Each day's input data is saved in a dedicated file using the format: **`aoc[Day]_input.txt`**

* **`[Day]`**: The day number (e.g., `1`, `2`, `5`).
* **`[Part]`**: The part of the puzzle solved, either `1` or `2`.
* **`.cpp`**: The file extension, indicating the C++ language.

| Example | Puzzle Solved |
| :--- | :--- |
| `aoc1.1.cpp` | Day 1, Part 1 |
| `aoc5.2.cpp` | Day 5, Part 2 |

### 2. Input Data Files

Each day's input data is saved in a dedicated file using the format: **`aoc[Day]_input.txt`**

* **`[Day]`**: The day number (e.g., `5`).

| Example | Contents |
| :--- | :--- |
| `aoc5_input.txt` | Contains the entire puzzle input text for Day 5. |

---

## ⚙️ How to Compile and Run Solutions (Using Input Redirection)

This project uses **Input Redirection (`<`)** for fast and reliable data feeding. You can run these commands from the **VS Code Terminal**, **Windows Command Prompt (`cmd`)**, or **Git Bash**.

### 1. Compilation

You need to compile the specific solution file using `g++` to create an executable (e.g., `a.exe`).

```bash
g++ -o a.exe aoc5.2.cpp
