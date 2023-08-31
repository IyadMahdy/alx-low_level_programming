#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: String of zeroes and ones
 *
 * Return: Converted number, or 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, pwr = 1;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
		if (b[i] != '1' && b[i] != '0')
			return (0);
	i--;
	for (; i >= 0; i--)
	{
		if (b[i] == '1')
			num += pwr;
		pwr *= 2;
	}
	return (num);
}
