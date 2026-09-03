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

## Understanding check

Completed the Chapter 2 review questions. Important corrections identified during review:

- A `double` function should return a `double` value such as `12.6`.
- The correct average formula is `(a + b + c) / 3.0`; parentheses are required because of operator precedence.
- If a `.cpp` definition is not compiled and linked, the likely error is an undefined symbol/linker error.
- Header guards prevent repeated header inclusion but do not replace a function definition.

## Reflection

The main objective of today was to understand how functions organize a C++ program: data enters through parameters, computation returns a value, and `main()` coordinates the overall flow. This foundation directly supports future robotics modules such as sensor processing, filtering, planning, and control.

## Next step

Continue with LearnCpp Chapter 3 in order. Keep formal CS1332 DSA implementation postponed until the Python/LeetCode readiness checkpoint, while continuing the daily Python and Easy LeetCode practice.
