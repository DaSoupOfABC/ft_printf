# ft_printf

## 📌 Project Overview

**`ft_printf`** is a recreation of the standard C `printf` function as part of the 42 School curriculum.  
This project aims to deepen understanding of variadic functions, parsing, and formatted output handling in C.

The implementation supports a subset of format specifiers and is built from scratch, without using any of the standard library’s printf-like functions.

---

## ✅ Supported Format Specifiers

The project handles the following conversion specifiers:

| Specifier | Description              |
|-----------|--------------------------|
| `%c`      | Print a single character |
| `%s`      | Print a string           |
| `%p`      | Print a pointer address  |
| `%d` / `%i` | Print a signed integer |
| `%u`      | Print an unsigned integer|
| `%x`      | Print a lowercase hex    |
| `%X`      | Print an uppercase hex   |
| `%%`      | Print a percent sign     |

---

## 🗂️ File Structure

```
Main/
│
├── Makefile
├── README.md
├── ft_printf.c         # Main logic for format parsing and dispatching
├── ft_printf.h         # Header file with declarations and includes
├── ft_printf.utils.c   # Utility functions (e.g. write, number conversion)
│
└── Conv_Files/
    ├── ft_print_ptr.c  # Handling `%p`
    ├── ft_print_u.c    # Handling `%u`
    └── ft_print_x.c    # Handling `%x` and `%X`
```

---

## 🔧 Compilation

To compile the project, simply run:

```bash
make
```

This will generate the `libftprintf.a` static library.

---

## 🧪 Usage Example

To use `ft_printf` in your own project:

```c
#include "ft_printf.h"

int main(void)
{
    int count = ft_printf("Hello %s! Number: %d\n", "world", 42);
    ft_printf("Printed %d characters.\n", count);
    return 0;
}
```

Compile it like this:

```bash
gcc main.c libftprintf.a -I.
```

---

## 🚀 Features

- Custom implementation of core formatted output
- Manual parsing and formatting of input string
- Compatible with standard `printf`-style usage

---

## 🏫 42 Project Requirements

- No usage of `printf`, `sprintf`, or similar functions
- Strict adherence to C89 (ISO C90) standards
- Must handle memory and error cases cleanly
- Function prototype: `int ft_printf(const char *format, ...);`

---

## ✍️ Author

Made with ❤️ for 42 School  
[Your Name or GitHub handle here]

---
