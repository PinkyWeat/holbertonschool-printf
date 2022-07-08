#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct list - analyze format.
 * @id: character we look for.
 * @f: function to be used.
 */
typedef struct list
{
	char *id;
	int (*f)(va_list args);
} list_t;

int _putchar(char c);

int _printf(const char *format, ...);

int aux(va_list args, char c);

int printC(va_list args);

int printS(va_list args);

int printP(va_list args);

int printN(va_list args);

int printN_aux(int n);

#endif
