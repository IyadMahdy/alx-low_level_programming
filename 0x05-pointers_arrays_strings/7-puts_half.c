#include "main.h"

/**
 * puts_half - Prints half a string
 * @str: Pointer to first char
 */
void puts_half(char *str)
{
	int n, len = 0;

	while (str[len])
		len++;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	for (; n < len; n++)
		_putchar(str[n]);
	_putchar('\n');
}
