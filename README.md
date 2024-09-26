Libft
Libft is a personal C library that implements a collection of useful functions for string manipulation, memory management, and linked lists. It is a custom implementation of standard C functions designed to facilitate learning and practicing programming in C.

Features
Libft includes functions for:

String Manipulation:

ft_strlen: Calculates the length of a string.
ft_strcpy: Copies one string to another.
ft_strcmp: Compares two strings.
Memory Management:

ft_memset: Fills a block of memory with a specified value.
ft_memcpy: Copies a block of memory from one location to another.
ft_memchr: Searches for a character in a block of memory.
Linked Lists:

ft_lstnew: Creates a new list node.
ft_lstadd_front: Adds a node to the front of the list.
ft_lstadd_back: Adds a node to the end of the list.
Installation
To use Libft in your project, follow these steps:

Clone the Repository:

bash
Copiar código
git clone https://github.com/your_username/libft.git
Compile the Library:

Navigate to the project directory and run:

bash
Copiar código
cd libft
make
This will generate a libft.a file that you can link to your project.

Include in Your Project:

In your code, include the Libft header file and link the libft.a file when compiling your project.

Usage
To use the functions from Libft, include the header file in your code:

c
Copiar código
#include "libft.h"
And link your project with the library when compiling:

bash
Copiar código
gcc -o my_program my_program.c -L/path/to/libft -lft
Feel free to customize any sections to better fit your specific implementation or any additional features you might have!
