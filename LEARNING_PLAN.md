# Learning Plan

## Project purpose

This repository records Ryan's long-term preparation for robotics software, autonomy, Physical AI, and software engineering roles.

The plan must remain sequential, sustainable, and evidence-based. The goal is not to collect passive course completions, but to build the ability to explain, implement, test, and debug.

## Current study day

Current status: **Day 4 complete**

The next study day is Day 5.

## Fixed daily structure

The long-term daily routine has four components:

1. C++ — study LearnCpp in the official order
2. DSA — study Georgia Tech CS1332 in sequence
3. Python — review only the Python needed for LeetCode and interviews
4. LeetCode — solve one Easy problem

## Current phase: Python interview fluency

Formal CS1332 implementation is temporarily postponed while Python syntax becomes comfortable enough that it does not interrupt algorithmic thinking.

During this phase:

- Continue C++ LearnCpp in strict official order.
- Use small Easy LeetCode problems to practice Python syntax.
- Complete one LeetCode problem per study day.
- Review Python through actual coding rather than reading the entire Python tutorial.
- Do not treat LeetCode as a complete replacement for a Python course.
- Keep the workload sustainable and focus on understanding rather than problem count.

LeetCode has two purposes:

1. Build data-structures-and-algorithms problem-solving ability.
2. Build practical familiarity and confidence with Python syntax.

## Python topics to build through LeetCode

The review sequence is:

1. Variables, types, conditions, loops, functions, and return values
2. Lists, indexing, append, mutation, and traversal
3. Strings, slicing, split, and join
4. Dictionaries, sets, counting, and membership
5. enumerate, range, zip, and nested loops
6. Stack and queue syntax using Python collections
7. Sorting, lambda, and `key=`
8. Recursion syntax
9. Edge cases, exceptions, and clean function structure
10. Interview-style synthesis

Target: approximately 10–15 Easy problems before formally starting CS1332 implementation. This is a readiness checkpoint, not a rigid quota.

## Formal CS1332 phase

After the Python readiness checkpoint, resume CS1332 in order:

1. Arrays and ArrayLists
2. Recursion
3. LinkedLists
4. Stacks, Queues, and Deques
5. Binary Trees and Binary Search Trees
6. AVL and other balanced trees
7. Heaps and Priority Queues
8. HashMaps and collision handling
9. Sorting and searching
10. Graph representations and traversals
11. Minimum spanning trees and shortest paths
12. String algorithms and pattern matching
13. Dynamic programming

For each CS1332 topic:

- Learn the concept from the CS1332 course.
- Reimplement the core structure or algorithm in Python.
- Reimplement it in C++ when the relevant C++ foundation is ready.
- Analyze time and space complexity.
- Test normal cases and edge cases.
- Record the design tradeoffs and common failure modes.

## Language roles

- Python: primary language for LeetCode and coding interviews.
- C++: primary language for robotics, ROS 2, performance, memory, and systems engineering.
- CS1332 implementations: ultimately completed in both Python and C++.
- Original Java implementations from the course are not the final portfolio language.

## Current C++ progress

- LearnCpp Chapter 0: complete
- LearnCpp Chapter 1: complete
- LearnCpp Chapter 2: complete
- LearnCpp Chapter 3: complete
- Next C++ lesson: LearnCpp Chapter 4 — Fundamental Data Types
- C++ compiler: Apple Clang
- C++ standard used in the current project: C++17
- Build tools: CMake and Git
- Debug build: `clang++ -std=c++17 -g -O0 -Wall -Wextra -Werror`

## Day 2 Python and LeetCode record

### #1480 — Running Sum of 1d Array

Completed with guidance.

Practiced:

- Accumulator pattern
- List traversal
- `append()`
- Returning a new list
- O(n) time and O(n) extra space

### #1672 — Richest Customer Wealth

Attempted as a guided Python syntax exercise.

The algorithmic direction was understood, but the implementation exposed gaps in:

- Direct iteration over nested lists
- Variable scope and resetting state
- Maximum tracking
- List methods versus built-in functions

This is recorded as practice, not an independent completion.

### #1295 — Find Numbers with Even Number of Digits

Completed independently.

Practiced:

- `for`
- `if`
- Counter variables
- `str()`
- `len()`
- Modulo operator

## Day record rules

Every study day should record:

- The correct Day number
- C++ lesson and completion status
- DSA topic or explicit postponement
- Python syntax reviewed
- LeetCode problem, number, language, and completion status
- Complexity analysis
- What was difficult
- What was completed independently
- The next study target

Do not claim a problem was independently solved if substantial code guidance was required.
