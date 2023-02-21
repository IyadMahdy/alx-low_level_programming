#include "main.h"

/**
 * print_last_digit - Prints last digit
 * @n: Number to be computed
 * Return: Last digit of number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = last_digit * -1;
	_putchar ('0' + last_digit);
	return (last_digit);
}
