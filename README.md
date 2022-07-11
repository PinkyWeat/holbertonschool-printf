# C - printf for Holberton-sama

##Description

First Holberton-School group project.

Una funcion printf con los siguientes formatos:

| Type | Desc. |
| :---: |:-:|
|  %c | prints a character |
|  %s | prints a string |
|  %p | prints '%' |
|  %d | prints a decimal |
|  %i | prints an integer |

###Requirements

Tener un compilador,  por ejemplo **gcc**

---
###Compilation & Testing

Function porototype

    int _printf(const char *format, ...);

Compilamos con: 

    gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

---
###Example

Print a string:

       int x = 0;

       char *string = "Otaku";

       x = _printf("I'am an%s0, string);

       printf("%d0, x);

       return (0);

---
###Authors

Denisse Landau - Alejandro Montenegro
