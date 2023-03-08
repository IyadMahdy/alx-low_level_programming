#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 *
 * @s: Pointer to the first character of that string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
