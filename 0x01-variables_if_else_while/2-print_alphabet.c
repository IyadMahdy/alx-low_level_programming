#include <stdio.h>

/**
 * main - Starting Point
 * Return: 0 if successful and other otherwise
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
