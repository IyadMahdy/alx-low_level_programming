#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		count = 0;
		while (count <= n)
		{
			_putchar('_');
			count++;
		}
	}
	_putchar('\n');
}
