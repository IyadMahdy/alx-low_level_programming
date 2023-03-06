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
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}while(haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
