#include "main.h"

/**
 * word_count - Gets Number of Words
 * @str: String
 *
 * Return: Number of Words
 */
int word_count(char *str)
{
	int i = 0, word = 0;

	while (str[i])
	{
		while (str[i] == 32)
			i++;
		if (!str[i])
			break;
		word++;
	}
	return (word);
}

/**
 * fill - Fills the array
 * @arr: Array
 *
 * Return: 0 if fail, 1 if success
 */
int fill(char **arr, char *str)
{
	char *w;
	int i, j, c, count;

	for (i = 0, j = 0; str[i]; i++)
	{
		if (str[i] == 32)
			i++;
		else
		{
			w = str;
			c = 0;
			count = 0;
			for (; str[i] != 32 && str[i]; i++)
				c++;
			arr[j] = malloc((c + 1) * sizeof(char));
			if (!arr[j])
			{
				for (; j > 0;)
					free(arr[--j]);
				free(arr);
				return (0);
			}
			while (*w != 32 && *w)
			{
				arr[j][count] = *w;
				w++;
				count++;
			}
			arr[j][count] = '\0';
			j++;
		}
	}
	return (1);
}

/**
 * strtow - split a string into words
 * @str: a pointer to the string to split
 *
 * Return: NULL if memory allocation fails or if str is NULL or empty (""),
 * otherwise return a pointer to the array of words terminated by a NULL
 */
char **strtow(char *str)
{
	char **arr;
	char *w;
	int i, j, words, c, count;

	if (str == NULL || str == "")
		return (NULL);
	words = word_count(str);
	if (!words)
		return (NULL);
	arr = (char **) malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (fill(arr, str))
		return (arr);
	return (NULL);
}
