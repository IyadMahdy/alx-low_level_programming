#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: First Number
 * @m: Second Number
 *
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num, mask = 1ul, count = 0;
	int i;

	num = n ^ m;
	for (i = 0; i < 64; i++)
	{
		if (mask & num)
			count++;
		mask = mask << 1;
	}
	return (count);
}
