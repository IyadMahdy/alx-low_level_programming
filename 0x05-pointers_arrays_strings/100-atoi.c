#include "main.h"

/**
 * _atoi - converts a string to integer
 * @s: pointer to the first character of a string
 *
 * Return: Integer value of string
 */
int _atoi(char *s)
{
	int len = 0, i, j = 0, k, converted = 0, neg = 0;

	while (s[len])
		len++;

	for (i = 0; i < len; i++)
	{
		if (s[i] == 45)
			neg++;
		if (s[i] >= 48 && s[i] <= 57)
		{
			while (s[j + i] >= 48 && s[j + i] <= 57)
				j++;
			break;
		}
	}

	for (k = i; k < (i + j); k++)
	{
		coverted += (s[k] - 48);
		converted *= 10;
	}
	converted /= 10;

	if (neg % 2 == 0)
		return (converted);
	else
		return (converted * -1);
}
