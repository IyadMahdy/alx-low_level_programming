#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: Number
 * @index: index starting from 0
 *
 * Return: value of the bit at index index,
 * -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int checker = 1ul;

	if (index > 63)
		return (-1);
	while (index)
	{
		checker = checker << 1;
		index--;
	}
	return ((checker & n) ? 1 : 0);

}
