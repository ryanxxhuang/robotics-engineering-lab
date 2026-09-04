# Day 4 — C++ Debugging and Python Data Structures

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

## Python data structures reviewed

- `list`: ordered collection that allows duplicates; commonly used as Python's array.
- `set`: unique, unordered values; useful for deduplication and membership checks.
- `dict`: key-value mapping; useful for lookup tables and frequency counting.
- `tuple`: ordered, immutable collection.
- `append`: adds one object as one list element.
- `extend`: adds elements from another iterable into a list.
- `list(seen)`: converts a set into a list.

## LeetCode

Completed with guided practice:

### #349 — Intersection of Two Arrays

- Used nested loops to compare values from two lists.
- Used a `set` to keep only unique intersection values.
- Converted the final set to a list with `list(seen)`.

### #771 — Jewels and Stones

- Iterated through a string with `for stone in stones`.
- Used a `set` for jewel membership checks.
- Counted matching characters with a counter.

### #905 — Sort Array By Parity

- Used `value % 2 == 0` to identify even values.
- Used `append` to separate even and odd values.
- Used `extend` to combine the odd values after the even values.
- Completed an `O(n)` solution.

## Reflection

The main Python lesson was choosing a data structure based on the task:

- Preserve order and duplicates: `list`
- Remove duplicates or check existence: `set`
- Map keys to values or count occurrences: `dict`
- Store fixed data together: `tuple`

The user noticed that algorithmic logic is often clear, while Python container syntax and method behavior require more repetition.

## Next target

- C++: LearnCpp Chapter 4 — Fundamental Data Types
- Python: begin focused review of `dict`
- LeetCode: solve one Easy problem using dictionary lookup or counting
- DSA: remain postponed until Python syntax is more automatic
