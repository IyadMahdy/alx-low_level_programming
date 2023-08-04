#include "main.h"

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int cents, count, tmp;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	count = 0;

	tmp = cents / 25;
	count += tmp;
	cents -= tmp * 25;
	tmp = cents / 10;
	count += tmp;
	cents -= tmp * 10;
	tmp = cents / 5;
	count += tmp;
	cents -= tmp * 5;
	tmp = cents / 2;
	count += tmp;
	cents -= tmp * 2;
	count += cents;

	printf("%d\n", count);
	return (0);
}
