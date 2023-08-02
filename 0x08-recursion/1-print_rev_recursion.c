#include "main.h"

/**
 * _puts_rev_recursion - Prints String in reverse with Recursion
 * @s: String to be printed
 *
 * Return: Nothing
 */
void _puts_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_rev_recursion(s + 1);
	_putchar(s[0]);
}
