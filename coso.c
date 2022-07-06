int _printf(const char *format, ...)
{
	va_list pepe;
	estructura listita[] = {
		{ "c", coso1 },
		{ "s", coso2 },
		{ "%", coso3 }
	};
	unsigned int PEPE1, PEPE2;

	PEPE1 = 0;
	PEPE2 = 0;

	va_start(pepe, format);

	while (format != NULL && format[PEPE1])
	{													
		PEPE2 = 0;
		while (PEPE1 < 3)
		{
			if (format[PEPE1] == "%")												
			{
				if (format[PEPE1] == *form_types[PEPE2].identifier)
				{
					form_types[PEPE2].f(separator, args);
				}
				PEPE2++;
			}
			PEPE1++;
		}
	}
}

void coso1(va_list pepe)
{
	printf("%s", char);
}
