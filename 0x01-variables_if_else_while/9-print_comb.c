#include <stdio.h>

/**
 * main - Start
 * Return: 0 if successful, others otherwise
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
