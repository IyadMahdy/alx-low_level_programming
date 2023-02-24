#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: number of times to print \
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int count, i;

		count = 0;
		while (count < n)
		{
			for (i = 0; i <= count; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
	else
		_putchar('\n');
}
