#include "main.h"

/**
 * _pow_recursion - Returns power of two numbers
 *
 * @x: Integer to be raised to the power
 * @y: Power to raise the integer to
 * Return: Returns @x to the power @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
