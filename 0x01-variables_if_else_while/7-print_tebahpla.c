#include <stdio.h>

/**
 * main - Starting Point
 * Return: 0 if successful and other otherwise
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
