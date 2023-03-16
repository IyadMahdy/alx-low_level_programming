#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: Number of bytes to concatenate s1 with from s2
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0' && len2 != n)
		len2++;

	p = malloc(sizeof(char) * (len1 + len2) + 1);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	for (i = 0; i < len2; i++)
		p[len1 + i] = s2[i];

	p[len1 + len2] = '\0';
	return (p);
}
