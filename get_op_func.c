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
	char *string = va_arg(args, char *);
	int len, i;

	len = strlen(string);
	if (string == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			if (string[i] == 0)
			{
				_putchar(40);
				_putchar(110);
				_putchar(117);
				_putchar(108);
				_putchar(108);
				_putchar(40);
			}
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
