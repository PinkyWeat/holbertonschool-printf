#include "main.h"
#include <stddef.h>
/**
 * get_op_func - gets the correct function.
 * @s: function name.
 * Return: value.
 */
int printC (va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

int printS(va_list args)
{
	char *string;
	int len, i;

	string = va_arg(args, char *);
	len = strlen(string);

	if (string == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; string[i]; i++)
		{
			_putchar(string[i]);
		}
		return(len);
	}
}

int printP(va_list args)
{
	char *string;
	int i;

	string = va_arg(args, char*);
	i = 0;

	while (string[i])
	{
		if (string[i] == '%')
		{
			_putchar('%');
			return(0);
		}
	}
}
