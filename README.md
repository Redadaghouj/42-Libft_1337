# Libft_1337

Libft is a foundational project in the 42 curriculum that involves creating a library of essential C functions. These functions replicate or enhance standard C library functions, providing a deeper understanding of memory management, data structures, and basic algorithm design in C.

## Overview

This project covers the creation of a custom C library, `libft`, with a collection of commonly used functions from the C standard library and additional utilities. Completing this project helps solidify an understanding of core programming concepts like pointers, memory allocation, and string manipulation.

## Contents

The library includes:
- **Memory Manipulation**: Functions for memory allocation, initialization, and copying.
- **String Manipulation**: Functions for string handling such as `strlen`, `strdup`, `strjoin`, etc.
- **Character Checks and Conversions**: Functions like `isalpha`, `isdigit`, `toupper`, etc.
- **Linked List Operations**: Bonus functions that implement singly linked lists (if applicable).

## Getting Started

### Prerequisites

To compile and use this library, you need:
- A C compiler (GCC or Clang recommended)
- `make` utility

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/Redadaghouj/Libft_1337.git
   ```
2. Navigate to the directory:
   ```bash
   cd Libft_1337
   ```
3. Compile the library:
   ```bash
   make
   ```

This command will generate a `libft.a` file that you can link with other projects.

### Usage

Include `libft.h` in your project:
```c
#include "libft.h"
```

When compiling, link the `libft.a` library:
```bash
gcc your_program.c -L. -lft -o your_program
```

## Project Structure

- **src/**: Contains the source files for the library functions.
- **includes/**: Contains the header file `libft.h`.
- **Makefile**: Automates the compilation process.

## Bonus Part

The bonus part includes additional linked list manipulation functions if completed. Functions in this section allow for the creation, addition, and deletion of nodes in a linked list, enhancing the flexibility and usability of `libft`.

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.

## Contact

For any questions or feedback, feel free to reach out:
- GitHub: [@Redadaghouj](https://github.com/Redadaghouj)
