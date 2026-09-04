# Day 3 — C++ LearnCpp Chapter 2

**Date:** 2026-09-03  
**Status:** Completed

## Daily plan

1. C++ foundations
2. DSA review (formal CS1332 implementation remains postponed during the Python/LeetCode fluency phase)
3. Python review for LeetCode interviews
4. One Easy LeetCode problem

## C++ progress

Completed LearnCpp Chapter 2 in the official sequence:

- 2.1 Introduction to functions
- 2.2 Function return values
- 2.3 Void functions
- 2.4 Function parameters and arguments
- 2.5 Local scope
- 2.6 Why functions are useful and how to use them effectively
- 2.7 Forward declarations and definitions
- 2.8 Programs with multiple code files
- 2.9 Naming collisions and namespaces
- 2.10 Introduction to the preprocessor
- 2.11 Header files
- 2.12 Header guards
- 2.13 How to design your first programs
- Chapter 2 summary and quiz

## Key concepts learned

- A function call executes a function; the caller invokes the callee.
- A non-void function returns a value to its caller.
- A `void` function does not return a value, but it may use bare `return;` to exit early.
- Parameters are variables declared in a function definition; arguments are the actual values supplied in a function call.
- Function parameters and local variables are limited to their function's local scope.
- A declaration tells the compiler that a function exists; a definition contains the function body.
- Multiple `.cpp` files can be compiled into object files and linked into one executable.
- A linker error can occur when a declaration is visible but the corresponding definition is not linked.
- Namespaces prevent naming collisions; `std::cout` uses the `std` namespace.
- Preprocessor directives such as `#include` are processed before compilation.
- Header files commonly expose declarations; header guards prevent repeated inclusion.
- `main()` should coordinate program flow while focused functions perform individual responsibilities.

## Final implementation

Goal: calculate the average of three sensor readings.

```cpp
#include <iostream>

double calculate_average(double sensor1,
                         double sensor2,
                         double sensor3)
{
    return (sensor1 + sensor2 + sensor3) / 3.0;
}

int main()
{
    double average{ calculate_average(10.0, 12.0, 11.0) };

    std::cout << "Average: " << average << '\\n';

    return 0;
}
```

Expected output:

```
Average: 11
```

Compiled successfully with:

```bash
clang++ -std=c++17 -Wall -Wextra -Wconversion \
-Wsign-conversion -Werror -pedantic-errors main.cpp -o average
```

## Python and LeetCode progress

Python is being strengthened through LeetCode practice, with emphasis on loop syntax, indexing, nested lists, `enumerate()`, list methods, and conditionals.

### Completed

- **#1470 — Shuffle the Array:** completed with guided syntax correction; practiced `range(n)`, list indexing, and `append()`.
- **#1431 — Kids With the Greatest Number of Candies:** completed with guided correction; practiced `for value in list`, `len()`, `range()`, `max()`, and Boolean results.
- **#1920 — Build Array from Permutation:** independently written and completed; practiced nested indexing such as `nums[nums[i]]`.
- **#1380 — Lucky Numbers in a Matrix:** completed with guided correction; practiced two-dimensional lists, row/column indexing, nested loops, `min()`, `max()`, and indentation.
- **#1572 — Matrix Diagonal Sum:** independently completed after one indentation correction; practiced diagonal indexing, `n // 2`, odd/even checks, and avoiding duplicate center counting.

### In progress

- **#832 — Flipping an Image:** first stage completed by reversing each row with `row[::-1]`; value inversion (`0 ↔ 1`) remained in progress at the end of the study session.

### Practice attempted but not recorded as completed

- **#1365 — How Many Numbers Are Smaller Than the Current Number**
- **#1512 — Number of Good Pairs**

These were introduced as practice exercises, but no final independent completion was confirmed.

## Reflection

The main objective of today was to understand how functions organize a C++ program: data enters through parameters, computation returns a value, and `main()` coordinates the overall flow. This foundation directly supports future robotics modules such as sensor processing, filtering, planning, and control.

LeetCode practice is also being used intentionally to build Python syntax fluency. The main current gap is not algorithmic reasoning, but translating correct logic into Python syntax—especially choosing between values, indexes, and nested iteration.

## Next step

Continue with LearnCpp Chapter 3 in order. Keep formal CS1332 DSA implementation postponed until the Python/LeetCode readiness checkpoint, while continuing Python practice and Easy LeetCode problems.
