#include "main.h"

/**
 * times_table - Prints the 9 times table,
 * starting with zero
 */
void print_times_table(int n)
{
	int i, j, num1, num2;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			num1 = (i * j) / 10;
			num2 = (i * j) % 10;

			if (j == 0)
			{
				if (num1 != 0)
					_putchar('0' + num1);
				_putchar('0' + num2);
				_putchar(',');
			}

			else if (j == n)
			{
				_putchar(' ');
				if ((i * j) < 10)
					_putchar(' ');
				if (num1 != 0)
					_putchar('0' + num1);
				_putchar('0' + num2);
			}

			else
			{
				_putchar(' ');
				if ((i * j) < 10)
					_putchar(' ');
				if (num1 != 0)
					_putchar('0' + num1);
				_putchar('0' + num2);
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
