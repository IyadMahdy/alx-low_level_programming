#include "main.h"

/**
 * _sqrt - Makes possible to evaluate from 1 to n
 * @x: same number as n
 * @y: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	if (y * y > x)
		return (-1);
	return (_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
