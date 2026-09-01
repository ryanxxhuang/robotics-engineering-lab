# Day 2 — LearnCpp Chapter 1

## Goal

Complete LearnCpp Chapter 1 and build a reliable mental model of basic C++ program structure, variables, input/output, expressions, initialization, and compilation diagnostics.

## Completed scope

- [x] 1.1 Statements and the structure of a C++ program
- [x] 1.2 Comments
- [x] 1.3 Objects and variables
- [x] 1.4 Variable assignment and initialization
- [x] 1.5 std::cout, std::cin, and std::endl
- [x] 1.6 Uninitialized variables and undefined behavior
- [x] 1.7 Keywords and naming identifiers
- [x] 1.8 Whitespace and basic formatting
- [x] 1.9 Literals and operators
- [x] 1.10 Expressions
- [x] 1.11 Developing the first program
- [x] Chapter 1 summary exercise

## Core concepts

### Program structure and syntax

- A statement is an instruction that performs an action.
- A function is a named collection of statements.
- Every executable C++ program requires a `main()` function as its entry point.
- Statements inside `main()` execute sequentially from top to bottom.
- Most statements end with a semicolon.
- A missing semicolon causes a syntax error.
- `#include <iostream>` is a preprocessor directive. It provides declarations for standard input/output facilities and is conceptually similar to Python's `import`, although the compilation mechanisms are different.

### Comments and formatting

- `//` starts a single-line comment.
- `/* ... */` creates a block comment.
- Comments are ignored by the compiler and exist for human readers.
- Whitespace usually does not change program behavior, but whitespace inside a string literal is data.
- Consistent indentation and spacing improve readability and reduce maintenance errors.

### Objects, variables, initialization, and assignment

- An object is a region of memory used to store data.
- A variable is a named object whose value can change.
- `int` stores integral values, while `double` stores floating-point values.
- `int x{};` value-initializes `x` to zero.
- `int x;` creates an automatic local variable without initializing its value.
- Initialization gives an object its initial value when it is created.
- Assignment changes the value of an existing object after creation.
- A variable can be initialized once and assigned new values many times.

### Input and output

- `std::cout` writes to standard output.
- `std::cin` reads from standard input.
- As a beginner analogy, `std::cout` is similar to Python's `print`, and `std::cin` is similar to Python's `input`.
- More precisely, C++ uses streams: `<<` inserts data into an output stream and `>>` extracts data from an input stream.
- `'\\n'` adds a newline. `std::endl` adds a newline and flushes the output stream.

### Undefined behavior

Reading an uninitialized automatic variable can cause undefined behavior. The C++ standard does not specify one reliable result. The program may appear to work, print an unpredictable value, fail, or behave differently across compilers, machines, build settings, or executions.

The strict compiler flags caught this case:

```text
uninitialized.cpp:5:19: error: variable 'x' is uninitialized when used here [-Werror,-Wuninitialized]
```

`-Werror` promotes detected warnings to errors, but compiler flags cannot guarantee that every instance of undefined behavior will be detected. The safe practice is to initialize variables before use.

### Identifiers and keywords

- Identifiers may contain letters, digits, and underscores, but cannot start with a digit.
- C++ is case-sensitive.
- Keywords such as `return` cannot be used as identifiers.
- Names such as `lidar_points`, `batteryVoltage`, and `elapsed_time_seconds` are valid and readable.
- Names such as `3d_map` and `battery-voltage` are invalid.
- Names beginning with an underscore can be valid, but leading-underscore conventions should generally be avoided because some forms are reserved by the implementation.

### Literals, operators, and expressions

- A literal is a value written directly in source code, such as `10`, `12.6`, or `"robot"`.
- Operators perform actions such as addition, subtraction, multiplication, division, assignment, insertion, and extraction.
- Arithmetic operators follow precedence and associativity rules similar to ordinary arithmetic.
- An expression produces a value or causes an operation.
- `x = 5` is an assignment expression: it changes `x` to 5 and also has a resulting value.
- `std::cout << x + y` combines an arithmetic expression with stream insertion.

## Implementations

The following files were created or used during the lesson:

```text
projects/cpp-foundations/day2/main.cpp
projects/cpp-foundations/day2/operators.cpp
projects/cpp-foundations/day2/uninitialized.cpp
projects/cpp-foundations/day2/safe_initialization.cpp
projects/cpp-foundations/day2/first_program.cpp
projects/cpp-foundations/day2/chapter1_summary.cpp
```

### Day 2 robot program

Output:

```text
[robot] booting
[robot] sensors ready
[robot] controller ready
```

### Variable update program

Output:

```text
Initial Lidar pointers: 720
Initial battery voltage: 12.6
Initial robot state: 0
Updated Lidar pointers: 1080
Updated battery voltage: 11.8
Updated robot state: 1
```

### Operators exercise

The program was compiled and executed successfully. The observed results included:

```text
7
2
14
20
5
x is now 5
```

### First input/output program

After correcting the output labels to use the input variable instead of hardcoding `4`, input `10` produced:

```text
Enter an integer: 10
Double 10 is: 20
Triple 10 is: 30
```

### Chapter 1 summary exercise

The program reads two integers and prints their sum and difference. With input `10` and `5`, it produced:

```text
Enter an integer: 10
Enter another integer: 5
10 + 5 is 15
10 - 5 is 5
```

## Build command

All exercises were checked with:

```bash
clang++ -std=c++17 -Wall -Wextra -Wconversion -Wsign-conversion -Werror -pedantic-errors source.cpp -o program
```

The output filename must match the executable name used at runtime. For example:

```bash
clang++ chapter1_summary.cpp -o chapter1_summary
./chapter1_summary
```

## Final self-check

1. Initialization gives an object its initial value at creation. Assignment changes the value of an existing object afterward; assignment can happen repeatedly.
2. Undefined behavior has no guaranteed result. It can produce an incorrect value, appear to work, crash, or vary with the compiler, machine, build configuration, or execution.

## Result

LearnCpp Chapter 1 is complete. Day 2 established the foundations needed for later control flow, functions, data structures, and robotics-oriented C++ programs.

## Next lesson

LearnCpp Chapter 2 — Functions and Files.


## Python and LeetCode practice

Today also began the Python and LeetCode track. Python will be the primary language for LeetCode and coding interviews, while C++ remains the primary language for robotics engineering and systems work.

### Python warm-up

Reviewed and practiced:

- Variables and basic types
- Lists and indexing
- `for` loops
- Functions
- `print()` versus `return`
- Accumulator variables
- Nested lists and nested loops
- Basic edge-case awareness

### LeetCode problems

#### #1480 — Running Sum of 1d Array

Status: Completed with guidance.

Concepts practiced:

- Accumulator pattern
- Iterating through a list
- `list.append()`
- Returning a new list
- Time complexity: O(n)
- Extra space complexity: O(n)

#### #1672 — Richest Customer Wealth

Status: Attempted as a guided Python syntax exercise.

The algorithmic direction was understood: use nested loops to calculate each customer's total and track the maximum. The main difficulties were translating the logic into Python syntax, including direct iteration over nested lists, variable scope, maximum tracking, and the difference between list methods and built-in functions. This problem is not counted as an independent completion.

#### #1295 — Find Numbers with Even Number of Digits

Status: Completed independently.

Concepts practiced:

- `for` loop
- `if` condition
- Counter variable
- `str()`
- `len()`
- Modulo operator `%`

### Learning strategy

LeetCode will serve two purposes:

1. Build data-structures-and-algorithms problem-solving ability
2. Build practical familiarity and confidence with Python syntax

The current approach is to learn Python syntax through small, progressively harder Easy problems rather than completing a separate Python review course first.

## Daily study routine

The standard daily routine is now:

1. C++ — continue LearnCpp in the official order
2. DSA — review Georgia Tech CS1332 in sequence
3. Python — review only the syntax needed for that day's LeetCode problem
4. LeetCode — solve one Easy problem

## Next study session

DSA will begin next study day with CS1332 Arrays and ArrayLists. The study will cover array access, traversal, ArrayList operations, resizing, and complexity analysis, stopping before Recursion.
