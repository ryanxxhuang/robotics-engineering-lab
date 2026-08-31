# Day 1 — LearnCpp Chapter 0

## Goal

Establish a clean C++ development workflow and complete LearnCpp Chapter 0 in sequence before moving to C++ syntax and data structures.

## Completed lessons

- [x] 0.1 Introduction to these tutorials
- [x] 0.2 Introduction to programs and programming languages
- [x] 0.3 Introduction to C/C++
- [x] 0.4 Introduction to C++ development
- [x] 0.5 Introduction to the compiler, linker, and libraries
- [x] 0.6 Installing an Integrated Development Environment
- [x] 0.7 Compiling your first program
- [x] 0.8 A few common C++ problems
- [x] 0.9 Build configurations
- [x] 0.10 Compiler extensions
- [x] 0.11 Warning and error levels
- [x] 0.12 Choosing a language standard
- [x] 0.13 Checking the language standard

## Verified environment

- Compiler: Apple Clang
- Compiler target: arm64
- Build tool: CMake 4.4.3
- Version control: Git
- Language standard: C++17

## Verification

The first program was compiled and executed successfully:

```text
Hello, World!
```

The language-standard verification program produced:

```text
__cplusplus = 201703
```

This confirms that the compiler is using C++17.

## Compiler flags practiced

```bash
clang++ -std=c++17 -Wall -Wextra -Wconversion -Wsign-conversion -Werror -pedantic-errors main.cpp -o hello
```

## Key takeaways

- The compiler checks source code and produces object code.
- The linker combines object files and libraries into an executable.
- Build means compiling and linking; execution is a separate step.
- Debug builds support development and debugging; release builds support distribution and performance testing.
- Compiler extensions can reduce portability, so they should be disabled.
- Warnings should be fixed rather than ignored.
- A program normally has one `main()` entry point.
- `__cplusplus = 201703` identifies C++17.

## Artifacts

- `projects/cpp-foundations/day1/main.cpp`
- `projects/cpp-foundations/day1/standard.cpp`

## Next lesson

LearnCpp 1.1 — Statements and the Structure of a Program.
