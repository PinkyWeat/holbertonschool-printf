#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    	char *s = "hola";
	char c = '%';

	_printf("%s\n", s);
	_printf("%c\n", c);
	return (0);
}
