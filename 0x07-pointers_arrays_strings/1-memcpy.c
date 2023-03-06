#include "main.h"

/**
 * _memcpy - copies @n bytes from memory area @src to memory area @dest
 *
 * @dest: Destination for @n bytes to be copied to from @src
 * @src: Source to copy from
 * @n: Number of bytes to be copied
 * Return: Pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
