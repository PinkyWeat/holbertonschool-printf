int _printf(const char *format, ...)
{
	va_list args;
	estructura listita[] = {
		{ "c", printC },
		{ "s", printS },
		{ "%", printP }
	};
	unsigned int i = 0, j;

	va_start(args, format);

	while (format != NULL && format[i])
	{													
		j = 0;
		while (i < 3)
		{
			if (format[i] == "%")												
			{
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

void coso1(va_list pepe)
{
	printf("%s", char);
}
