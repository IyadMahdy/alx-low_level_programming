#include "variadic_functions.h"

/**
 * print_all - Prints all
 * @format: Format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = ", ";
	int i, len = 0;
	char *str;

	va_start(args, format);

	while (format[len] && format)
		len++;

	i = 0;
	while (format[i] && format)
	{
		if (i == len - 1)
			sep = "";
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
	printf("\n");
	va_end(args);
}
