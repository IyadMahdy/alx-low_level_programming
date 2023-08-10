#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;

	ptr = malloc(sizeof(int) * len);

	if (!ptr)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}
