#include "main.h"

/**
 * print_binary_rec - Helps to print it in correct order
 * @n: Number
 *
 * Return: Nothing
 */
void print_binary_rec(unsigned long int n)
{
	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}

	print_binary_rec(n / 2);
	_putchar(n % 2 + '0');
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: Number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	print_binary_rec(n);
}
