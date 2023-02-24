#include "main.h"

/**
 * _isdigit - Checks for digit
 * @c: character to be checked
 *
 * Return: 1 if @c is digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
