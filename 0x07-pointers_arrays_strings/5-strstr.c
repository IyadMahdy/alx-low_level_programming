#include "main.h"

/**
 * _strstr - Locates a substring
 *
 * @haystack: string to search for substring in
 * @needle: substring to search in
 * Return: pointer to the beginning of the substring
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int length, i;
	char *tmp;

	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			tmp = haystack;
			for (i = 0; needle[i]; i++)
			{
				if (*tmp != needle[i])
				{
					break;
				}
				else if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				tmp++;
			}
		}
		haystack++;
	}
	return ('\0');
}
