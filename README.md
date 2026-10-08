# C++ Module 01

Solutions for **42's C++ Module 01**, focused on memory allocation, references,
pointers, file streams, and pointers to member functions in C++98.

## Overview

This module introduces the practical differences between stack and heap
allocation, then applies those ideas to object lifetime, references, dynamic
arrays, non-owning relationships, file replacement, and dispatching behavior
through member-function pointers.

## Requirements

- A C++ compiler with C++98 support
- `make`
- Unix-like environment

Every exercise uses the following compiler settings:

```text
-Wall -Wextra -Werror -std=c++98
```

## Exercises

| Directory | Program | Topic | Main concept |
| --- | --- | --- | --- |
| `ex00` | `zombie` | Zombie allocation | Stack vs. heap lifetime |
| `ex01` | `zombie` | Zombie horde | Dynamic arrays and `delete[]` |
| `ex02` | `zombie` | References and pointers | Address and aliasing behavior |
| `ex03` | `Weapon` | Humans and weapons | References vs. nullable pointers |
| `ex04` | `output` | Sed-like replacement | File streams and string replacement |
| `ex05` | `Harl` | Harl complaints | Pointers to member functions |

## Build and Run

Each exercise is independent and has its own Makefile. Build it from the
exercise directory.

### `ex00` - Zombie

Creates a zombie on the heap with `newZombie` and creates a temporary zombie
with `randomChump`, demonstrating different object lifetimes.

```bash
cd ex00
make
./zombie
```

The test asks for a zombie name and then runs the stack-allocation example.

### `ex01` - Zombie Horde

Allocates an array of zombies with `new[]`, initializes every element, announces
the horde, and releases it with `delete[]`.

```bash
cd ex01
make
./zombie
```

### `ex02` - References and Pointers

Compares a string, a reference to that string, and a pointer to that string by
printing their values and addresses.

```bash
cd ex02
make
./zombie
```

### `ex03` - Weapon and Human

Demonstrates the difference between a permanent reference (`HumanA`) and an
optional pointer (`HumanB`) when associating a human with a weapon.

```bash
cd ex03
make
./Weapon
```

The test changes each weapon's type after the human is created, showing that
both objects observe the updated weapon state.

### `ex04` - File Replacement

Replaces the first occurrence of a search string on each input line and writes
the transformed content to a new file.

```bash
cd ex04
make
./output input.txt old_text new_text
```

The current implementation writes to a file named `lfile jdid` in the current
working directory and prints the resulting content. The input file must exist,
and the search string must not be empty.

### `ex05` - Harl

Uses an array of pointers to member functions to dispatch Harl's complaint
levels: `DEBUG`, `INFO`, `WARNING`, and `ERROR`.

```bash
cd ex05
make
./Harl
```

The current test calls the `INFO` level. Invalid levels produce an error
message.

## Makefile Commands

Run these commands from an exercise directory:

```bash
make          # Build the exercise
make clean    # Remove object files
make fclean   # Remove object files and the executable
make re       # Rebuild from scratch
```

To clean every exercise from the repository root:

```bash
for directory in ex00 ex01 ex02 ex03 ex04 ex05; do \
    make -C "$directory" fclean; \
done
```

## Project Structure

```text
.
├── ex00/
│   ├── Makefile
│   ├── Zombie.hpp
│   ├── main.cpp
│   ├── newZombie.cpp
│   ├── randomChump.cpp
│   └── zombie.cpp
├── ex01/
│   ├── Makefile
│   ├── Zombie.cpp
│   ├── Zombie.hpp
│   ├── main.cpp
│   └── zombieHorde.cpp
├── ex02/
│   ├── Makefile
│   └── main.cpp
├── ex03/
│   ├── HumanA.cpp
│   ├── HumanA.hpp
│   ├── HumanB.cpp
│   ├── HumanB.hpp
│   ├── Makefile
│   ├── Weapon.cpp
│   ├── Weapon.hpp
│   └── main.cpp
├── ex04/
│   ├── Makefile
│   └── main.cpp
├── ex05/
│   ├── Harl.cpp
│   ├── Harl.hpp
│   ├── Makefile
│   └── main.cpp
└── README.md
```

## C++98 Concepts

This module practices `new` and `delete`, `new[]` and `delete[]`, references,
pointers, constructors and destructors, stream-based file I/O, string
replacement, and pointers to member functions. It intentionally avoids C++11
and later language features.
