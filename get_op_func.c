#include "main.h"
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
	char *string = va_arg(args, char *), *null = "(null)";
	int len, i;

	len = strlen(string);
	if (string == NULL)
	{
		for (i = 0; null[i]; i++)
			_putchar(null[i]);
		return (6);
	}
	else
	{
		for (i = 0; i < len; i++)
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
			return(1);
		}
	}
	return (0);
}
