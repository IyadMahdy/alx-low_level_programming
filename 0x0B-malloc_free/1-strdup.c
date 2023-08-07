#include "main.h"

/**
 * _strdup - create a new array containing a copy of the given string
 * @str: a pointer to the string to copy
 *
 * Return: NULL if str is NULL or if memory allocation fails,
 * otherwise a return a pointer to the new copy
 */
char *_strdup(char *str)
{
	int i = 0;
	char *ptr;

	if (!str)
		return (NULL);

	while (str[i])
		i++;

	ptr = (char *) malloc(i * sizeof(char));

	if (!ptr)
		return (NULL);

	while (i--)
		ptr[i] = str[i];

	return (ptr);
}
