*This project has been created as part of the 42 curriculum by bmekonne.*

# push_swap

## Description

This is a C project that implements the `push_swap` sorting algorithm challenge: given a list of integers, produce a sequence of stack operations that sorts them using two stacks and a limited set of operations. The project demonstrates fundamental data structure manipulation, algorithm optimization, and efficient sorting techniques using only specific allowed operations (push, swap, rotate, and reverse rotate).

The goal is to sort the input numbers in ascending order on stack A using only two stacks (A and B) with the minimum number of operations possible. This implementation uses the **Turk Algorithm**, an optimized approach that efficiently handles the pushing, rotating, and positioning of elements to minimize the total number of operations required.

## Instructions

### Requirements

- A POSIX-compatible environment (Linux/macOS)
- `gcc` or another C compiler
- `make` (project includes a `Makefile`)

### Compilation & Execution

#### Building the main program:

```bash
make
```

This produces the `push_swap` executable in the project root.

#### Running the program:

```bash
./push_swap 3 2 1 6 5 4
```

The program prints the sequence of operations (one per line) that sorts the stack in ascending order.

## Examples

Simple usage example with a small set of integers:

```bash
./push_swap 3 2 1 6 5 4
```

Sample output (each line is an operation):

```
pb
pb
rb
pb
ra
sa
pa
ra
pa
pa
rra
```

This is a small example; operation counts will vary with input size and order.

### Repository Structure

- `main.c`, `push_swap.h` — program entry point and core definitions
- `stack_init.c`, `stack_utilis.c`, `split.c`, `error_handler.c` — stack management and utilities
- `operation/` — implementations of stack operations (`op_push.c`, `op_swap.c`, `rotate.c`, `rev_rotate.c`)
- `Sort/` — sorting algorithm implementations (`Sort_Stack.c`, `Sort_Three.c`, `init_a_to_b.c`, `int_b_to_a.c`)

## Resources

### Documentation & References

- [Stack Data Structure](https://en.wikipedia.org/wiki/Stack_(abstract_data_type)) — Fundamental concepts
- [Sorting Algorithms Overview](https://en.wikipedia.org/wiki/Sorting_algorithm) — Algorithm design patterns
- [C Programming Language Reference](https://en.wikipedia.org/wiki/C_(programming_language)) — C syntax and standard library
- [Turk Algorithm](https://medium.com/@ayogun/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a) — Optimized stack-based sorting approach

### Tutorials & Articles

- [Algorithm Optimization Techniques](https://www.geeksforgeeks.org/sorting-algorithms/) — Understanding time complexity
- [C Programming Best Practices](https://en.wikipedia.org/wiki/C_(programming_language)) — Writing efficient C code

### AI Usage

- **Algorithm Implementation**: Suggestions for sorting algorithm logic, stack operation implementations, and optimization strategies
- **Debugging & Testing**: Code review suggestions and error handling patterns

AI was particularly helpful in accelerating the implementation of repetitive operations, while the core algorithm design and optimization decisions were made by the developer.
