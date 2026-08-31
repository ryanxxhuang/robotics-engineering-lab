# Day 1 — C++ and DSA Foundation Reset

## Why this is Day 1

Python is already a working skill. The next foundation to strengthen is C++, because robotics software requires performance-aware code, memory understanding, STL fluency, and the ability to read and modify existing C++ systems.

Georgia Tech CS1332 will be reviewed in full before starting serious LeetCode practice. The review will not be passive: each major data structure and algorithm will be reimplemented in C++, tested, and connected to robotics use cases where appropriate.

## Today’s target

Build a clean C++ workspace and complete the first fundamentals module:

- Compile and run a C++ program from the terminal
- Understand variables, primitive types, operators, conditionals, and loops
- Write functions with values, references, and const references
- Use `std::string` and `std::vector`
- Read input and produce formatted output
- Explain stack-like local storage versus dynamically managed objects at a basic level
- State Big-O complexity for simple loops and vector operations

## Work plan — approximately 3 hours

### 1. Environment and build — 20 minutes

Create a small CMake project under `projects/cpp-foundations/` with:

- `CMakeLists.txt`
- `src/main.cpp`
- `tests/`
- `README.md`

The program must compile with:

```bash
cmake -S projects/cpp-foundations -B projects/cpp-foundations/build
cmake --build projects/cpp-foundations/build
```

### 2. C++ fundamentals — 80 minutes

Implement small functions for:

- Maximum and minimum of a vector
- Average of a vector
- Reversing a vector in place
- Counting values that satisfy a condition
- Normalizing an angle into a chosen interval

For every function, record:

- Input and output types
- Whether arguments are copied or passed by reference
- Time complexity
- Space complexity
- One edge case

### 3. CS1332 bridge — 45 minutes

Review the purpose and interfaces of:

- Arrays and dynamic arrays
- Linked lists
- Stacks and queues
- Big-O analysis

Do not try to finish the entire CS1332 course today. Today’s goal is to establish the review method: concept → C++ implementation → tests → complexity → common failure cases.

### 4. Verification — 30 minutes

Add tests for:

- Empty vector
- One-element vector
- Normal input
- Duplicate values
- Negative values
- Boundary angle values

Run:

```bash
ctest --test-dir projects/cpp-foundations/build --output-on-failure
```

### 5. Learning record — 20 minutes

Add a short note containing:

- Three C++ ideas that were unfamiliar or easy to confuse
- Two differences between Java implementations from CS1332 and C++ implementations
- One example where copying a vector would be less efficient than passing a const reference
- One question to revisit tomorrow

## Review sequence after Day 1

1. C++ syntax, references, pointers, classes, and STL
2. Complexity analysis and correctness reasoning
3. Linear data structures
4. Recursion, searching, sorting, and heaps
5. Trees, AVL trees, and balanced trees
6. Hash tables
7. Strings and pattern matching
8. Graph representations and traversals
9. Minimum spanning trees and related graph algorithms
10. LeetCode patterns in C++

## Completion checklist

- [ ] CMake project builds successfully
- [ ] At least five C++ functions are implemented
- [ ] Tests cover empty, normal, duplicate, negative, and boundary cases
- [ ] Complexity is recorded for every function
- [ ] CS1332 review notes are written
- [ ] A Git commit records the completed work

## Definition of done

Day 1 is complete when the code can be built and tested from a clean terminal command, and the learner can explain the difference between passing a vector by value, by reference, and by const reference.
