#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int count = 1;
	while (count <= 10)
	{
		char c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		count++;
	}
	_putchar('\n');
}
