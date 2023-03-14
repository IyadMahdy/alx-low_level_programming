#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: First String
 * @s2: Second String
 * Return: Pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int size1, size2, i;

	size1 = 0;
	size2 = 0;
	if (s1 != NULL)
	{
		while (s1[size1] != '\0')
		{
			size1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[size2] != '\0')
		{
			size2++;
		}
	}

	str = (char *) malloc((size1 + size2) * sizeof(char) + 1);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		str[size1 + i] = s2[i];
	}

	str[size1 + size2] = '\0';
	return (str);
}
