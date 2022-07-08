#include "main.h"
/**
 * _printf - prints.
 * @format: content type.
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, counter = 0;

	/* format null? || string doesn't have % */
	if (!format || !strcmp(format, "%"))
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
/**
 * aux - looks for type to print.
 * @args: what type to print.
 * @c: char that compared.
 * Return: number of chars printed.
 */
int aux(va_list args, char c)
{
	int j = 0;
	list_t listita[] = {
		{ "c", printC },
		{ "s", printS },
		{ "%", printP },
		{ "d", printN },
		{ "i", printN }
	};
	while (j < 5)
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
