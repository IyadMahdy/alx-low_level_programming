#include "main.h"

/**
 * _strcpy - copies the string pointed at by @src
 * including \0 to the buffer pointed to by @dest
 *
 * @dest: destination
 * @src: souurce
 * Return: Pointer to the first character of copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';

	return (dest);
}
