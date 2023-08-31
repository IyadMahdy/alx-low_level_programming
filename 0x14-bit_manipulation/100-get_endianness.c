#include "main.h"

/**
 * get_endianness - Checks endianness
 *
 * Return: 0 if big endian, 1 if little
 */
int get_endianness(void)
{
	int num = 0x0001;
	char *ptr;

	ptr = (char *) &num;

	if (ptr[0])
		return (1);
	return (0);

}
