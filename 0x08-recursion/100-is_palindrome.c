#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * checker - Checks with two pointers if string is palindrome
 * @s: String to be checked
 * @x: First pointer
 * @y: Second pointer
 *
 * Return: 1 if palindrome, 0 if not
 */
int checker(char *s, int x, int y)
{
	if (s[x] != s[y])
		return (0);
	if (x >= y)
		return (1);
	return (checker(s, x + 1, y - 1));
}
/**
 * is_palindrome - Checks if string is palindrome
 * @s: String to be checked
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (checker(s, 0, len - 1));
}
