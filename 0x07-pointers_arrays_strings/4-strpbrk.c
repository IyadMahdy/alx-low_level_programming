#include "main.h"

/**
 * _strpbrk - Locates first occurence of @accept in string @s
 *
 * @s: string to be searched in
 * @accept: bytes to search for
 * Return: Pointer to byte in @s that matches bytes in @accept
 * or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
