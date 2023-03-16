#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum
 * @max: maximum
 * Return: Pointer to the array
 */
int *array_range(int min, int max)
{
	int length = max - min + 1, i;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * length);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		p[i] = min + i;
	return (p);
}
