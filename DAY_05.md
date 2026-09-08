# Day 5 — LearnCpp Chapter 4 Summary and Quiz

Date: 2026-09-08

## C++ — complete

Completed LearnCpp Chapter 4 Summary and Quiz in the official sequence after finishing Chapter 4.1–4.12.

### Question 1 — Fundamental data types

Reviewed how to select types based on value, range, precision, and memory size:

- `int`: age and textbook page count
- `bool`: yes/no state
- `double`: pi and general floating-point precision
- `float`: floating-point value when memory size matters
- `std::int32_t`: a count in the millions
- `std::int16_t`: a year when memory size matters
- `char`: a menu option represented by one character

### Question 2 — Calculator

Implemented a calculator that:

- Reads two `double` values with `getDouble()`
- Reads an operator with `getOperator()`
- Uses `printResult()` to process `+`, `-`, `*`, and `/`
- Uses `switch` and `case`
- Uses `void` with early `return;` for an invalid operator
- Uses function declarations before `main()` and definitions after `main()`

Key implementation lesson:

- `main()` controls the program flow.
- Each helper function has one responsibility.
- A `double` function must return a `double`; a `void` function may use `return;` only to exit early.

## DSA

Formal CS1332 implementation remains postponed while Python syntax becomes more automatic.

## Python and LeetCode

The C++ summary was completed first. The Python review and today's LeetCode problem are pending and will be recorded after completion.

## Next target

Start today's LeetCode Easy problem with focused Python practice, then update this record with the problem number, solution status, and complexity.
