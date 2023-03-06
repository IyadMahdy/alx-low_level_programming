#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: Pointer to the string
 * @c: Character to be located
 * Return: Pointer to the first occurence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	char *ptr;
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}

	if (s[i] == c)
	{
		ptr = &s[i];
	}

	return (ptr);
}
