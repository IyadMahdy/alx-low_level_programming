#include "main.h"

/**
 * fill - Fills the array with words
 * @arr: Array
 * @str: string to get words from
 * @words: number of words
 *
 * Return: 1 if succes, 0 if not
 */
int fill(char **arr, char *str, int words)
{
	char *ptr = str;
	int c;

	do {
		while (*ptr == ' ')
			++ptr;
		if (!*ptr)
			break;
		for (str = ptr++; *ptr && *ptr != ' '; ++ptr)
			;
		arr[words] = (char *) malloc(sizeof(char) * (ptr - str + 1));
		if (!arr[words])
		{
			while (words >  0)
				free(arr[--words]);
			free(arr);
			return (0);
		}
		for (c = 0; str < ptr; ++c, ++str)
			arr[words][c] = *str;
		arr[words][c] = '\0';
	} while (++words, *ptr);
	arr[words] = NULL;
	return (1);
}

/**
 * strtow - splits string into words
 * @str: string
 *
 * Return: a pointer to arr of strings
 */
char **strtow(char *str)
{
	char **arr;
	char *ptr = str;
	int words = 0;

	if (!(str && *str))
		return (NULL);
	do {
		while (*ptr == ' ')
			++ptr;
		if (!*ptr)
			break;
		while (*(++ptr) && *ptr != ' ')
			;
	} while (++words, *ptr);

	if (!words)
		return (NULL);
	arr = (char **) malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);

	if (fill(arr, str, 0))
		return (arr);
	return (NULL);
}
