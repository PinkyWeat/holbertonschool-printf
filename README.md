# C - \_printf

### Description

First Holberton-School group project.

Clone of C function **``printf``**. Writes the C string pointed by format to the standard output (stdout).

If format includes format specifiers (subsequences beginning with %), the additional arguments following format are formatted and inserted in the resulting string replacing their respective specifiers.

Specifiers:

| Type | Desc. |
| :---: |:-:|
|  %c | prints a character |
|  %s | prints a string |
|  %p | prints '%' |
|  %d | prints a decimal |
|  %i | prints an integer |

### Requirements

- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options **``-Wall -Werror -Wextra -pedantic -std=gnu89``**
- Code uses the Betty style.
- No global variables are allowed.
- No more than 5 functions per file.
- All prototypes of all functions are included in header file ``main.h``.

---
### Compilation & Testing

Function porototype

    int _printf(const char *format, ...);

Compilamos con: 

    gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

---
### Example

Print a string:

       int x = 0;

       char *string = "Otaku";

       x = _printf("I'am am an%s, string);

       printf("%s, x);

       return (0);

Print an integer:

	int x = 0;

	int prints = 420;

	x = _printf("It's:%i", prints);

	printf("%i", x);

	return(0);
---
### File Description

- **\_printf**  - contains function ``\_printf`` which gives the stdout according to format specifier.
- **\_putchar** - contains function ``\_putchar`` which prints a character to stdout.
- **get_op_func.c** - contains several functions that are selected according to format specifier.
- **main.h** -  header file which contains all function prototypes used for ``\_printf``.
- **man_3_printf** - manual of our ``\_printf``.

---
### Flowcharts

![](https://i.imgur.com/nXjRQfQ.png)

![](https://i.imgur.com/WOejQLl.png)

![](https://i.imgur.com/oM60hGt.png)

---
### Authors

Written by [Denisse Landau](https://www.linkedin.com/in/denisse-l-5844a5140/ "Denisse Landau") and [Alejandro Montenegro](www.linkedin.com/in/alejandro-montenegro-505233184 "Alejandro Montenegro")
