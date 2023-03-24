#include "variadic_functions.h"

/**
 * sum_them_all - Returns Sum of all arguments
 *
 * @n: Number of arguments
 * Return: Sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	unsigned int i;
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);

}
