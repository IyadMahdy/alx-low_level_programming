#include "main.h"

/**
 * puts2 - Prints every other character starting with first
 * @str: First character
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c])
	{
		_putchar(str[c]);
		c += 2;
	}
	_putchar('\n');
}
