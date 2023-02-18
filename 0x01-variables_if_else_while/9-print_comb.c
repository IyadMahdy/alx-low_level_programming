#include <stdio.h>

/**
 * main - Start
 * Return: 0 if successful, others otherwise
 */
int main(void)
{
	int num = 1;

	putchar('0');
	while (num <= 9)
	{
		putchar(',');
		putchar(' ');
		putchar('0' + num);
		num++;
	}

	return (0);
}
