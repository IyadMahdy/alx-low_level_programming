#include "variadic_functions.h"

/**
 * print_strings - ...
 * @separator: ...
 * @n: ...
 *
 * Return: ...
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *sep, *str;
	va_list args;

	va_start(args, n);

	if (!separator)
		sep = "";
	else
		sep = (char *) separator;

	if (n > 0)
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(nil)";
		printf("%s", str);
	}
	for (i = 1; i < n; i++)
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(nil)";
		printf("%s%s", sep, str);
	}
	printf("\n");
	va_end(args);
}
