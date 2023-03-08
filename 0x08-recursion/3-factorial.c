#include "main.h"

/**
 * factorial - Returns factorial of number
 *
 * @n: Number to calculate factorial of
 * Return: Factorial of number,
 * -1 if number less than zero
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
