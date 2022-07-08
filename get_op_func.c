#include "main.h"
/**
 * printC - prints chars.
 * @args: number of chars.
 * Return: number of chars printed.
 */
int printC(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
/**
 * printS - prints a string.
 * @args: number of args.
 * Return: number of characters printed.
 */
int printS(va_list args)
{
	char *string = va_arg(args, char *), *null = "(null)";
	int len, i;

	if (string == NULL)
	{
		for (i = 0; null[i]; i++)
			_putchar(null[i]);
		return (6);
	}
	else
	{
		len = strlen(string);
		for (i = 0; i < len; i++)
		{
			_putchar(string[i]);
		}
		return (len);
	}
}
/**
 * printP - prints a module (%).
 * @args: num of args.
 * Return: number of chars printed.
 */
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
			return (1);
		}
	}
	return (0);
}
/**
 * printN - calls aux func to print nums.
 * @args: args to print.
 * Return: nums of printed chars. 
 */
int printN(va_list args)
{
	int n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		return (printN_aux(-n) + 1);
	}
	else
	{
		return (printN_aux(n));
	}
}
/**
 * printN_aux - aux func to print nums.
 * @n: nums to print.
 * Return: prints num + counter for chars.
 */
int printN_aux(unsigned int n)
{
	int c = 0;

	if (n / 10 != 0)
	{
		c = printN_aux(n / 10);
	}
	return (_putchar((n % 10) + '0') + c);
}
