#include <stdio.h>

/**
 * main - Start
 * Return: 0 if success
 */
int main(void)
{
	int num1, num2, num3, num4;

	num3 = 0;
	while (num3 <= 9)
	{
		num4 = 0;
		while (num4 <= 9)
		{
			num1 = num3;
			while (num1 <= 9)
			{
				if (num1 == num3)
					num2 = num4+1;
				else
					num2 = 0;
				while (num2 <= 9)
				{
					putchar('0' + num3);
					putchar('0' + num4);
					putchar(' ');
					putchar('0' + num1);
					putchar('0' + num2);
					if (num1 != 9 || num2 != 9 || num3 != 9 || num4 != 8)
					{
						putchar(',');
						putchar(' ');
					}
					num2++;
				}
				num1++;
			}
			num4++;
		}
		num3++;
	}
	putchar('\n');
	return (0);
}
