#include "main.h"

int _sqrt(int num, int root);
/**
 * _sqrt_recursion - Returns natural
 * square root of a number
 *
 * @n: Number to get square root of
 * Return: Square root of @n,
 * -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Evaluates from 1 to n to calculate root
 *
 * @num: same as n
 * @root: iterates from 1 to n
 * Return: 1 on success and -1 on error
 */
int _sqrt(int num, int root)
{
	if (root * root > num)
		return (-1);
	if (root * root == num)
		return (root);
	else
		return (_sqrt(num, root + 1));
}
