#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	list_t listita[] = {
		{ "c", printC },
		{ "s", printS },
		{ "%", printP }
	};
	int i = 0, j, counter = 0;

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
			j = 0;
			while (j < 3)
			{
				if (*listita[j].id == format[i + 1])
				{
					counter += listita[j].f(args);
					i++;
					break;
				}
				j++;
			}
			if (j == 3)
			{
				_putchar(format[i]);
				counter++;
			}
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
