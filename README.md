# Assignment 1 - Circular Buffer Implementation

## Overview

This project implements a Circular Buffer in C as part of the Embedded Systems course.
The goal is to understand how data can be stored and accessed efficiently using a fixed-size buffer.

## Objectives

* Implement a circular buffer from scratch (no built-in structures)
* Practice handling data insertion and removal
* Understand buffer overflow and underflow conditions
* Work with head and tail pointers

## Implementation Details

The buffer is implemented using:

* A fixed-size array
* Two indices:

  * **head** → points to the next read position
  * **tail** → points to the next write position
* A counter to track the number of stored elements

Circular behavior is achieved using the modulo operation when moving pointers.

## Program Flow

1. The program reads a name from standard input
2. The string `"CE-ESY"` is appended to the name
3. Each character is written into the circular buffer
4. The data is read back from the buffer
5. The result is printed to the console
6. The program ensures the buffer is empty at the end

## Edge Cases Handled

* **Buffer Overflow**: occurs when trying to write to a full buffer
* **Buffer Underflow**: occurs when trying to read from an empty buffer

## File Structure

* `prog.c` → main source file containing the full implementation
* `README.md` → project description

## How to Compile and Run

Compile:

```
gcc prog.c -o prog
```

Run:

```
./prog
```

## Notes

* The buffer size is intentionally small to test overflow behavior
* All operations are implemented manually without using external libraries or data structures
* The code is designed to be simple, clear, and easy to follow
