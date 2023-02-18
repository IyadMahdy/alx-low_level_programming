#include <stdio.h>

/**
 * main - Starting Point
 * Return: 0 if successful and other otherwise
 */
int main(void)
{
	int n = 0;
	char c = 'a';

	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
