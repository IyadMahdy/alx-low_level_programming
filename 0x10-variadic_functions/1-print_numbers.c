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
	char *sep = seperator;
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (!seperator)
		sep = "";

	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(args, int), sep);
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
