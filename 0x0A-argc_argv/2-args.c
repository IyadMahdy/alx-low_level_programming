#include <stdio.h>

/**
 * main - Prints All Arguments
 *
 * @argc: Argument count
 * @argv: Arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}

	return (0);
}
