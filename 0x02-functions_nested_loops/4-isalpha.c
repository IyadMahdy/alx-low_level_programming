#include "main.h"

/**
 * _isalpha - Checks for Alphabetical Character
 * @c: character to be checked
 *
 * Return: 1 if @c is alphabetical character 0 otherwise
 */
int _isalpha(int c)
{
	char character = c;

	if ((character >= 97 && character <= 122) || (character >= 65 && character <= 90))
		return (1);
	else
		return (0);
}
