#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: Argument Count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));

		if (i == n - 1)
			printf("\n");
		else
			printf("%s", separator);
	}

	va_end(ptr);
}
