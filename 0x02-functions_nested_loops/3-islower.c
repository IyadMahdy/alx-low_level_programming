#include "main.h"

/**
 * _islower - Checks for lowercase Character
 * @c: character to be checked
 *
 * Return: 1 if @c is lowercase 0 otherwise
 */
int _islower(int c)
{
	char character = c;

	if (character >= 97 && character <= 122)
		return (1);
	else
		return (0);
}
