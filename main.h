#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);

int _printf(const char *format, ...);

typedef struct list
{
	char *id;
	void (*f)(va_list args);
} list_t;

int printC(va_list args);

int printS(va_list args);

int printP(va_list args);

#endif
