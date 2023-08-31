#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: Number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 1ul;
	char c = '0';
	int flag = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}
	num = num << 63;
	while (num)
	{
		if (n & num)
		{
			c = '1';
			flag = 1;
		}
		else
			c = '0';
		if (flag)
			_putchar(c);
		num = num >> 1;
	}
}
