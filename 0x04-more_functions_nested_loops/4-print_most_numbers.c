#include "main.h"
#include <stdio.h>

/**
 * print_most_functions - print from 0 to 9 except 2 and 4
 */
void print_most_functions(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		if (!(c == 2 || c == 4))
			putchar(c);
		c++;
	}
	putchar('\n');
}
