#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Return: NULL if memory allocation fails,
 * otherwise a pointer to a the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int one = 0, two = 0;

	if (s1)
	while (s1[one++])
		;
	else
		s1 = "";
	if (s2)
	while (s2[two++])
		;
	else
		s2 = "";

	str = (char *) malloc((one + two + 1) * sizeof(char));

	if (!str)
		return (NULL);

	for (one = 0; s1[one]; one++)
		str[one] = s1[one];
	for (two = 0; s2[two]; two++)
		str[one + two] = s2[two];
	str[one + two] = '\0';

	return (str);
}
