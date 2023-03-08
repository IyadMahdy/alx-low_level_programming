#include "main.h"


/**
 * _prime - Makes possible to evaluate from 2 to n
 *
 * @num: Same as n
 * @count: Iterates from 2 to n
 *
 * Return: 1 on success, -1 if error
 */
int _prime(int num, int count)
{
	if (num == count)
		return (1);
	if (num % count == 0)
		return (0)
	return(_prime(num, count + 1));
}
/**
 * is_prime_number - Checks for prime number
 *
 * @n: Number to be checked
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
