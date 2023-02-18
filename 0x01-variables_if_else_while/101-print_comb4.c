#include <stdio.h>

/**
 * main - Start
 * Return: 0 if success
 */
int main(void)
{
	int num1 = 0, num2, num3;

	while (num1 <= 7)
	{
		num2 = num1 + 1;
		while (num2 <= 8)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				putchar('0' + num1);
				putchar('0' + num2);
				putchar('0' + num3);
				if (num1 != 7 || num2 != 8 || num3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
