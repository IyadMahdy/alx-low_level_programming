#include "main.h"

/**
 * _strlen - Returns length of string
 * @s:  Pointer to first character of string
 * Return: Length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s++))
		length++;
	return (length);
}
