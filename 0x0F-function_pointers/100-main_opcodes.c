#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main
 * @argc: ...
 * @argv: ...
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *opcode = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes - 1; i++)
	{
		printf("%02x ", opcode[i] & 0xff);
	}
	printf("%02x\n", opcode[i] & 0xff);

	return (0);
}
