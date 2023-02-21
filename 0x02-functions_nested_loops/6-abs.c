#include "main.h"

/**
 * _abs - Absolute of and Integer
 * @n: Integer to be absoluted
 *
 * Return: Absolute Value of Number
 */
int _abs(int n)
{
	int absolute;

	if (n < 0)
		absolute = -1 * n;
	else
		absolute = n;
	return (absolute);
}
