#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, counter = 0;

	/* format null? || string doesn't have % */
	if (!format || !strcmp(format,"%"))
		return (-1);
	/* starts */
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && (format[i + 1] == 0 || format[i + 1] == '%'))
		{
			_putchar('%');
			i++;
			counter++;
		}
		else if (format[i] == '%')
		{
			counter += aux(args, format[i + 1]);
			i++;
		}
		else
		{
			counter += 1;
			_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (counter);
}

int aux(va_list args, char c)
{
	int j = 0;
	list_t listita[] = {
		{ "c", printC },
		{ "s", printS },
		{ "%", printP }
	};
	while (j < 3)
	{
		if (*listita[j].id == c)
		{
			return (listita[j].f(args));
		}
		j++;
	}
	_putchar('%');
	_putchar(c);
	return (2);
}
