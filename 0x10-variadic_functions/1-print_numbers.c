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

	va_start(args, n);
	if (!separator)
		sep = "";
	else
		sep = (char *) separator;

	printf("%d", va_arg(args, int));
	for (i = 0; i < n - 1; i++)
	{
		printf("%s%d", sep, va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
