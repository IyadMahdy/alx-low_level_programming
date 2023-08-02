#include "main.h"

/**
 * _prime - helps to iterate from 1 to n / 2
 * @x: same as n
 * @y: iterator
 *
 * Return: 1 if prime, -1 if not prime
 */
int _prime(int x, int y)
{
	if (x % y == 0)
		return (0);
	if (y > x / 2)
		return (1);
	return (_prime(x, y + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
