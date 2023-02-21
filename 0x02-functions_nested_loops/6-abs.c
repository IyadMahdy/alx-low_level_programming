#include "main.h"

/**
 * _abs - Absolute of and Integer
 * @n: Integer to be absoluted
 *
 * Return: Absolute Value of Number
 */
int _abs(int n)
{
	int abs;

	if (n < 0)
		abs = -1 * n;
	else
		abs = n;
	return (abs);
}
