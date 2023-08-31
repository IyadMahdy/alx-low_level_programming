#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number
 * @index: Index starting from 0
 *
 * Return: 1 if worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1ul;

	if (index > 63 || !n)
		return (-1);
	while (index)
	{
		mask = mask << 1;
		index--;
	}
	*n = (*n) | mask;
	return (1);
}
