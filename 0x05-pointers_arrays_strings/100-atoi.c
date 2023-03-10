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
		if (neg % 2 == 0)
		{
			converted += (s[k] - 48);
			if (k != (i + j - 1))
				converted *= 10;
		}
		else
		{
			converted -= (s[k] - 48);
			if (k != (i + j - 1))
				converted *= 10;
		}
	}
	return (converted);
}
