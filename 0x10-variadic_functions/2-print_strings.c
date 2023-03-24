#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: string to be printed between the strings
 * @n: Argument count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (separator == NULL)
		separator = "";

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ptr, char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);
		if (i == n - 1)
			break;
		printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
