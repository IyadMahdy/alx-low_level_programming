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
	if (argc > 0)
	{
		for (int i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
