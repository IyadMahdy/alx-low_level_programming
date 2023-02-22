#include "main.h"

/**
 * times_table - Prints the 9 times table,
 * starting with zero
 */
void times_table(void)
{
	int i, j, num1, num2;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
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

			else if (j == 9)
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
