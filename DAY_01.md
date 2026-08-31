# Day 1 — Pure Pursuit Controller Engineering

## Objective

Implement a reusable Pure Pursuit controller in C++, then validate it with tests and a reproducible CMake build.

## Required behavior

The controller should:

- Select a valid lookahead waypoint
- Transform the waypoint from world coordinates into the vehicle frame
- Compute the steering command from geometric curvature
- Enforce a maximum steering angle
- Normalize angular error where needed
- Stop safely when no valid waypoint exists
- Handle straight, left-turn, and right-turn paths

## Suggested interfaces

```cpp
struct Pose2D {
    double x;
    double y;
    double yaw;
};

struct Waypoint {
    double x;
    double y;
    double speed;
};

struct ControlCommand {
    double steering;
    double speed;
};
```

## Validation checklist

- [ ] C++ implementation compiles with CMake
- [ ] Straight path produces steering near zero
- [ ] Left-turn path produces the correct steering direction
- [ ] Right-turn path produces the correct steering direction
- [ ] Empty or invalid path commands a safe stop
- [ ] Tests run with ctest
- [ ] README or notes explain the coordinate transformation and formula
- [ ] Failure and debugging notes are recorded

## Expected commands

```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build
```

## Completion evidence

Add the implementation under projects/pure_pursuit/ and record the test output, design decisions, and next ROS 2 integration step in this file or a linked project README.
