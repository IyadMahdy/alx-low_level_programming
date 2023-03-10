#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers from arguments
 *
 * @argc: Argument Count
 * @argv: Arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	int sum, count;

	sum = 0;
	count = 1;
	while (argv[count])
	{
		if (atoi(argv[count]))
			sum += atoi(argv[count]);
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}

	printf("%d\n", sum);

	return (0);
}
