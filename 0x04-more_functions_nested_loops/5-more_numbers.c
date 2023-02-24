#include "main.h"

/**
 * more_numbers - prints from 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i;
	char num1, num2;

	i = 0;
	while (i < 10)
	{
		num1 = '0';
		while (num1 <= '1')
		{
			num2 = '0';
			while (num2 <= '9')
			{
				if (num1 == '1' && num2 == '5')
					break;
				if (num1 != '0')
					_putchar(num1);
				_putchar(num2);
				num2++;
			}
			num1++;
		}

		_putchar('\n');
		i++;
	}
}
