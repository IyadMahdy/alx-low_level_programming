#include <stdio.h>

/**
 * main - Start
 * Return: 0 is successful, other otherwise
 */
int main(void)
{
	char cLow = 'a';
	char cUp = 'A';

	while (cLow <= 'z')
	{
		putchar(cLow);
		cLow++;
	}
	while (cUp <= 'Z')
	{
		putchar(cUp);
		cUp++;
	}
	puchar('\n');

	return (0);
}
