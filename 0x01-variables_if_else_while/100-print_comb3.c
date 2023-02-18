#include <stdio.h>

/**
 * main - Start
 * Return: 0 if success
 */
int main(void)
{
	int num1 = 0, num2;

	while (num1 <= 8)
	{
		num2 = num1 + 1;
		while (num2 <= 9)
		{
			putchar('0' + num1);
			putchar('0' + num2);
			if (num1 != 8 || num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
