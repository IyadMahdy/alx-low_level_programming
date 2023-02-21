#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints from @n to 98
 * @n: number to start printing from
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf(n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
			_putchar('\n');
		n++;
	}
}
