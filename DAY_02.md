# Day 2 — LearnCpp 1.1

## Goal

Understand statements, functions, the `main()` entry point, sequential execution, and basic C++ syntax errors.

## Completed concepts

- [x] A statement is a single instruction that causes the program to perform an action.
- [x] A function is a collection of statements that execute sequentially.
- [x] Every C++ program requires a `main()` function as its entry point.
- [x] Statements inside `main()` execute from top to bottom.
- [x] Most statements end with a semicolon.
- [x] A missing semicolon causes a syntax error.
- [x] `#include <iostream>` is a preprocessor directive, not a statement. Its purpose is analogous to Python's `import`, but it is processed before compilation.

## Implementation

File:

```text
projects/cpp-foundations/day2/main.cpp
```

Program output:

```text
[robot] booting
[robot] sensors ready
[robot] controller ready
```

## Build command

```bash
clang++ -std=c++17 -Wall -Wextra -Wconversion -Wsign-conversion -Werror -pedantic-errors main.cpp -o day2
```

## Syntax error experiment

The semicolon after the first `std::cout` statement was intentionally removed.

Compiler output:

```text
main.cpp:3:37: error: expected ';' after expression
```

The semicolon was restored, the program compiled successfully, and the executable produced the expected output.

## Key takeaways

- Statements are the basic executable units of a C++ program.
- `main()` is the required program entry point.
- The compiler enforces C++ syntax rules before producing an executable.
- Compiler diagnostics identify the source location and often suggest the expected correction.
- A successful compilation and a successful execution are separate events.

## Next lesson

LearnCpp 1.2 — Comments.
