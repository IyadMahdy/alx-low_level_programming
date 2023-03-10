#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers from arguments
 *
 * @argc: Argument Count
 * @argv: Arguments
 * Return: Always 0 except if non digit in argument
 */
int main(int argc, char *argv[])
{
	int sum, count;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	count = 1;
	while (count < argc)
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
