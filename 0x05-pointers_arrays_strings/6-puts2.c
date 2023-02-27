#include "main.h"

/**
 * puts2 - Prints every other character starting with first
 * @str: First character
 */
void puts2(char *str)
{
	int c = 0, i;

	while (str[c])
		c++;
	for (i = 0; i < c; i += 2)
		_putchar(s[i]);
	_putchar('\n');
}
