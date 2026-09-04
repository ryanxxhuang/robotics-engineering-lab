# Day 4 — C++ Debugging

Date: 2026-09-04

## C++ — LearnCpp Chapter 3

Status: **Complete**

Completed the official Chapter 3 sequence:

- 3.1 Syntax and semantic errors
- 3.2 The debugging process
- 3.3 A strategy for debugging
- 3.4 Basic debugging tactics
- 3.5 More debugging tactics
- 3.6 Using an integrated debugger: Stepping
- 3.7 Using an integrated debugger: Running and breakpoints
- 3.8 Using an integrated debugger: Watching variables
- 3.9 Using an integrated debugger: The call stack
- 3.10 Finding issues before they become problems
- Chapter 3 summary and quiz

## Concepts demonstrated

- Syntax errors are usually caught by the compiler.
- Semantic errors can compile successfully but produce incorrect results.
- A practical debugging workflow is:
  1. Reproduce the problem.
  2. Narrow the scope.
  3. Set a breakpoint.
  4. Step through the code.
  5. Watch variables and inspect the call stack.
  6. Fix the issue.
  7. Retest with multiple inputs.
- Step into enters a called function.
- Step over executes a called function without entering it in the debugger.
- Step out returns from the current function to its caller.
- `assert` checks assumptions during execution.
- `-Wall -Wextra` enables compiler warnings.
- `-Werror` treats warnings as errors.

## Debugging environment

The initial VS Code build task used `clang`, which caused C++ standard-library linker errors. Replacing it with `clang++` fixed the issue.

Verified build command:

```bash
clang++ -std=c++17 -g -O0 -Wall -Wextra -Werror main.cpp -o main
./main
```

Verified output:

```text
3
```

The debugger was also used to inspect:

- Breakpoints
- Variables
- Function stepping
- The call stack
- Source locations such as line 12, column 1 (`12:1`)

## DSA

Status: **Postponed**

Formal CS1332 implementation remains postponed while Python syntax becomes more automatic through LeetCode practice.

## Python and LeetCode

Status: **Pending for today**

The next study block will focus on Python fluency and one Easy LeetCode problem.

## Reflection

The main debugging lesson was that a build failure can occur before the debugger starts. The linker error showed that the C++ driver must be used for C++ programs:

```text
clang   -> C compiler driver
clang++ -> C++ compiler driver and linker
```

## Next target

- C++: LearnCpp Chapter 4 — Fundamental Data Types
- Python: continue practicing loops, indexing, and list operations
- LeetCode: complete one Easy problem independently
