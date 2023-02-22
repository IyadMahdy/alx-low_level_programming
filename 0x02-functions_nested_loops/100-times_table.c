#include "main.h"

/**
 * print_times_table - Prints the @n times table,
 * starting with zero
 * @n: number to print times table of
 */
void print_times_table(int n)
{
	int i, j, num1, num2, num3;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			num3 = (i * j) / 100
			num1 = (i * j) / 10;
			num2 = (i * j) % 10;

			if (j == 0)
			{
				if (num3 != 0)
					_putchar('0' + num3);
				if (num1 != 0)
					_putchar('0' + num1);
				_putchar('0' + num2);
				_putchar(',');
			}

			else if (j == n)
			{
				if ((i * j) < 100)
				{	
					_putchar(' ');
					if ((i * j) < 10)
						_putchar(' ');
				}
				if (num3 != 0)
					_putchar('0' + num3);
				if (num1 != 0)
					_putchar('0' + num1);
				_putchar('0' + num2);
			}

			else
			{
				if ((i * j) < 100)
				{
					_putchar(' ');
					if ((i * j) < 10)
						_putchar(' ');
				}
				if (num3 != 0)
					_putchar('0' + num3);
				if (num1 != 0)
					_putchar('0' + num1);
				_putchar('0' + num2);
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
