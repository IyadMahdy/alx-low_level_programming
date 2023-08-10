#include "main.h"

/**
*string_nconcat - Concatenates two strings using at
*most an inputted number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int len, i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (len = 0; s1[len]; len++)
		;

	str = malloc(sizeof(char) * (len + n + 1));

	if (!str)
		return (NULL);

	for (i = 0; i < len; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';

	return (str);
}
