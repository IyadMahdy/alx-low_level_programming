#include "main.h"

/**
 * _strspn - Gets length of a prefix substring
 *
 * @s: Pointer to the string
 * @accept: substring to be checked
 * Return: Length of substring in string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, length;

	length = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (length);
			}
		}
		s++;
	}
	return (length);
}
