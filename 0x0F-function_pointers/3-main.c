#include "3-calc.h"

/**
 * main - Main
 * @argc: ...
 * @argv: ...
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*p)(int, int);
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	p = get_op_func(op);
	if (!p)
	{
		printf("Error\n");
		exit(99);
	}
	if (!num2 && (*op == '/' || *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", p(num1, num2));

	return (0);
}
