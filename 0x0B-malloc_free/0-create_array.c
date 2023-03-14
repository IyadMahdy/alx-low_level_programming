#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size
 * @c: character to be initialized with
 * Return: pointer to array of chars, NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size == 0)
	{
		return ('\0');
	}

	p = (char *) malloc(size * sizeof(char));
	if (p == '\0')
	{
		free (p);
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
