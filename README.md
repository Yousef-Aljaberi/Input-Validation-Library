<div align="center">

# 🛡️ clsInputValidate — Robust C++ Validation Library

### Developed by **Yousif Aljaberi**

**A clean, header-only C++ utility designed to bulletproof your console applications against invalid user inputs and handle range verifications effortlessly.**

![C++](https://img.shields.io/badge/Language-C%2B%2B11-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Type](https://img.shields.io/badge/Design-Header--Only-orange?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Production--Ready-brightgreen?style=for-the-badge)

[Overview](#overview) • [Key Features](#key-features) • [Quick Code Preview](#quick-code-preview) • [API Reference](#api-reference) • [Getting Started](#getting-started) • [Connect With Me](#connect-with-me)

---

</div>

## Overview

Handling console inputs in C++ often leads to infinite loops or application crashes when users enter letters instead of numbers, or values outside the permissible domain.

**`clsInputValidate`** is a standalone, purely static class built to eliminate input vulnerabilities. It cleans the input stream automatically (`std::cin.clear()` and `std::cin.ignore()`) and provides overloaded range-checking functions for numbers and dates.

---

## Key Features

* **Stream-Safe Input Readers:** Reads numeric values (`int`, `double`) with automatic error recovery against character mismatch and stream pollution.
* **Numeric Boundary Checks:** Overloaded range checks for `short`, `int`, `float`, and `double`.
* **Restricted Range Readers:** Forces terminal users to stay within a specified range `[From, To]` with custom error messages.
* **Date Range & Integrity Checks:** Seamlessly checks whether a target date falls between two chronological dates (with automatic chronological swapping) and validates calendar dates via `clsDate`.
* **Zero-Instance Architecture:** 100% static methods—no dynamic allocation or object lifecycle needed.

---

## Quick Code Preview

```cpp
#include <iostream>
#include "clsInputValidate.h"

int main()
{
    // 1. Read a valid integer without worrying about string input crashes
    std::cout << "Please enter your age: ";
    int age = clsInputValidate::ReadIntNumber("Invalid input! Please enter a real number: ");

    // 2. Enforce a specific range
    std::cout << "Choose a menu option [1 - 5]: ";
    int option = clsInputValidate::ReadIntNumberBetween(1, 5, "Error: Value must be between 1 and 5! Try again: ");

    // 3. Quick range verification
    if (clsInputValidate::IsNumberBetween(option, 1, 3))
    {
        std::cout << "Standard operation selected.\n";
    }

    return 0;
}
```

---

## API Reference

<details open>
<summary><b>Safe Input Reading</b></summary>
<br>

| Method | Return Type | Description |
| :--- | :---: | :--- |
| `ReadIntNumber(ErrorMessage)` | `int` | Reads an integer; safely clears stream and loops until valid input is given. |
| `ReadIntNumberBetween(From, To, ErrorMessage)` | `int` | Combines input extraction with boundaries checking. |
| `ReadDblNumber(ErrorMessage)` | `double` | Reads floating-point numbers defensively without stream failure. |
| `ReadDblNumberBetween(From, To, ErrorMessage)` | `double` | Extracts a `double` within `[From, To]` interval. |

</details>

<details>
<summary><b>Numeric Range Checks</b></summary>
<br>

Supports direct range boundaries checking across numeric primitives:

* `IsNumberBetween(short Number, short From, short To)`
* `IsNumberBetween(int Number, int From, int To)`
* `IsNumberBetween(double Number, double From, double To)`
* `IsNumberBetween(float Number, float From, float To)`

```cpp
bool inRange = clsInputValidate::IsNumberBetween(grade, 0.0, 100.0);
```

</details>

<details>
<summary><b>Date Validation</b></summary>
<br>

Requires `clsDate` dependency:

* `IsValideDate(Date)` — Verifies calendar integrity (leap years, month days).
* `IsDateBetween(Date, Date1, Date2)` — Automatically ensures `Date1 <= Date2` by swapping if needed, then determines if `Date` lies within the interval.

</details>

---

## Getting Started

1. Place `clsInputValidate.h` and your `clsDate.h` file into your project directory.
2. Include the library where validation is needed:
```cpp
#include "clsInputValidate.h"
```
3. Call validation functions directly:
```cpp
int choice = clsInputValidate::ReadIntNumberBetween(1, 10);
```

---

## Connect With Me

<div align="left">
  <a href="https://github.com/Yousef-Aljaberi" target="_blank">
    <img src="https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white" alt="GitHub Profile" />
  </a>
  &nbsp;
  <a href="https://www.linkedin.com/in/yousif-aljaberi-004278408/" target="_blank">
    <img src="https://img.shields.io/badge/LinkedIn-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white" alt="LinkedIn Profile" />
  </a>
</div>
