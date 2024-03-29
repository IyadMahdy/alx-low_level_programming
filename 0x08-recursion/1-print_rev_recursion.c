#include "main.h"

/**
 * _print_rev_recursion - Prints String in reverse with Recursion
 * @s: String to be printed
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
