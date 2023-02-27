#include "main.h"

/**
 * rev_string - Reverses String
 * @s: Pointer to first character
 */
void rev_string(char *s)
{
	int c = 0, a = 0, count = 0;

	while (*(s + c) != '\0')
		c++;
	char string[c + 1];
	c -= 1;
	while (*(s + a) != '\0')
	{
		string[a] = *(s + a);
		a++;
	}
	while (count <= a)
	{
		*(s + ) = string[c];
		c--;
		count++;
	}
}
