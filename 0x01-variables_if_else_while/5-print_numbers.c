#include <stdio.h>

/**
 * main - Start
 * Return: 0 if successful, others otherwise
 */
int main(void)
{
	int num = 0;
	
	while(num <= 9)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');

	return (0);
}
