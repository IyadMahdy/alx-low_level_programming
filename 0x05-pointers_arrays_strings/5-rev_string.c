#include "main.h"

/**
 * rev_string - Reverses String
 * @s: Pointer to first character
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (*(s + index))
	{
		index++;
		len++;
	}

	for (index -= 1; index >= len / 2; index--)
	{
		tmp = *(s + index);
		*(s + index) = *(s + len - index - 1);
		*(s + len - index - 1) = tmp;
	}
}
