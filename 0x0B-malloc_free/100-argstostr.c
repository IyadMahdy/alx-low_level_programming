#include "main.h"

/**
 * argstostr - concatenate all arguments into a new string
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: NULL memory allocation fails, ac is 0 or av is NULL,
 * otherwise return a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, size = 0;
	char *str;

	if (!ac || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			size++;

	str = (char *) malloc(sizeof(char) * (size + ac + 1));

	if (!str)
		return (NULL);

	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[size] = av[i][j];
			size++;
		}
		str[size] = '\n';
		size++;
	}
	str[size] = '\0';

	return (str);
}
