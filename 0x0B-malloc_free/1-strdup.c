#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to be copied
 * Return: Pointer to copied string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}

	s = (char *) malloc(size * sizeof(char) + 1);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}

	s[i] = '\0';
	return (s);
}
