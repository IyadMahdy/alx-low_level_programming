#include "variadic_functions.h"

/**
 * print_numbers - Prints Numbers
 * @separator: Seperator
 * @n: Number of integers passed
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int i;
	va_list args;

	if (!separator)
		sep = "";
	else
		sep = (char *) separator;

	va_start(args, n);
	if (n > 0)
		printf("%d", va_arg(args, int));
	for (i = 1; i < n; i++)
	{
		printf("%s%d", sep, va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
