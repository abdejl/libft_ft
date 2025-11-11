# Libft (42 School Project)


<p align="center">
  <strong>My custom C library.</strong>
  <br />
  This project is the first at 42 and involves re-implementing a collection of standard C library functions,
  <br />
  as well as creating several useful utility functions.
</p>

---

## Overview

`Libft` is the foundational project of the 42 curriculum. The goal is to build a personal library of functions that will be reused in all subsequent C projects. This project reinforces C programming fundamentals, memory management, and data structures.

The library consists of three main parts:
1.  **Part 1 - Libc Functions:** Re-implementing common functions from standard C libraries like `<string.h>`, `<stdlib.h>`, and `<ctype.h>`.
2.  **Part 2 - Additional Functions:** Creating new utility functions that are not in the standard library but are extremely useful for future 42 projects (e.g., `ft_split`, `ft_itoa`).
3.  **Bonus - Linked List Functions:** A set of functions to create and manage singly linked lists.

## Implemented Functions

### Part 1: Standard C Library Functions

| Category | Functions |
| :--- | :--- |
| **Memory** | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| **String** | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| **Character** | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| **Conversion** | `ft_atoi` |
| **Allocation** | `ft_calloc` |

### Part 2: Additional Utility Functions

These functions provide useful utilities not found in the standard library.

* `ft_substr`: Extracts a substring from a string.
* `ft_strjoin`: Concatenates two strings into a new string.
* `ft_strtrim`: Trims a set of characters from the beginning and end of a string.
* `ft_split`: Splits a string into an array of substrings based on a delimiter.
* `ft_itoa`: Converts an integer into a string.
* `ft_strmapi`: Applies a function to each character of a string to create a new string.
* `ft_striteri`: Applies a function to each character of a string.
* `ft_putchar_fd`: Writes a character to a file descriptor.
* `ft_putstr_fd`: Writes a string to a file descriptor.
* `ft_putendl_fd`: Writes a string, followed by a newline, to a file descriptor.
* `ft_putnbr_fd`: Writes an integer to a file descriptor.

### Bonus Part: Linked List Functions

A set of functions to manage a singly linked list.

* `ft_lstnew`: Creates a new list element.
* `ft_lstadd_front`: Adds an element to the front of the list.
* `ft_lstsize`: Counts the number of elements in the list.
* `ft_lstlast`: Returns the last element of the list.
* `ft_lstadd_back`: Adds an element to the end of the list.
* `ft_lstdelone`: Frees the memory of a single element.
* `ft_lstclear`: Deletes and frees all elements of a list.
* `ft_lstiter`: Applies a function to the content of each element.
* `ft_lstmap`: Applies a function to each element, creating a new list.

## Getting Started

### Installation

1.  **Clone the repository:**
    ```sh
    git clone [https://github.com/abdejl/libft_ft.git](https://github.com/abdejl/libft_ft.git)
    ```

2.  **Navigate to the project directory:**
    ```sh
    cd libft_ft
    ```

### Compiling the Library

To compile the library, run the `make` command. This will create the static library file `libft.a`.

```sh
make
