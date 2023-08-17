#include "variadic_functions.h"

/**
 * print_all - Prints all
 * @format: Format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = ", ";
	int i;
	char *str;

	va_start(args, format);

	i = 0;
	while (format[i] && format)
	{
		if (!format[i + 1])
			sep = "\n";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), sep);
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		i++;
	}
	va_end(args);
}
