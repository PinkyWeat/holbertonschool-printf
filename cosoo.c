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

	/* format null? */
	if (!format || !strcmp(format,"%"))
		return (-1);

	/* starts */
	va_start(args, format);

	while (format[i])
	{
	j = 0;
	if (format[i] == "%" && (format[i + 1] == 0 || format[i + 1] == '%'))
	{
		_putchar("%");
		i++;
		counter++;
	if (format[i] == *form_types[j].identifier)
				{
					listita[j].f(args);
				}
				j++;
			}
			i++;
		}
	}
}
