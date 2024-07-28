# ft_printf

## Project Description

The `ft_printf` project is part of the School 42, designed to deepen your understanding of variadic functions, formatted output, and string manipulation in C. The goal of this project is to reimplement the standard `printf` function, handling a subset of its features.

## What It Does

The `ft_printf` function mimics the behavior of the standard `printf` function. It formats and prints a series of characters and values to the standard output, supporting various format specifiers.

## Implementation Details

- **Language**: The project is implemented in C.
- **Main Function**:
  - `int ft_printf(const char *format, ...)`: Parses the format string and prints the corresponding values based on the provided format specifiers.
- **Supported Format Specifiers**:
  - `%c`: Character
  - `%s`: String
  - `%p`: Pointer
  - `%d`/`%i`: Integer
  - `%u`: Unsigned integer
  - `%x`/`%X`: Hexadecimal number (lowercase/uppercase)
  - `%%`: Percent sign
- **Headers**:
  - `#include <stdarg.h>`: For handling variadic functions.
  - `#include <unistd.h>`: For write function.
  - `#include <stdlib.h>`: For memory allocation.
- **Helper Functions**: Various utility functions to handle different data types, format specifiers, and buffer management.

### How It Works

1. **Parsing the Format String**: The function iterates through the format string to identify format specifiers and plain text.
2. **Handling Format Specifiers**: For each format specifier, it retrieves the corresponding argument from the variadic list and formats it appropriately.
3. **Output**: Uses the `write` function to output the formatted string to the standard output.
4. **Memory Management**: Allocates memory dynamically as needed to handle strings and other data types.

---

This project provides a deep dive into handling variadic functions, implementing complex string formatting logic, and managing memory efficiently in C.
