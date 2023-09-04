#include "main.h"

/**
 * main - Copies from one file to another
 * @argc: Argument count
 * @argv: Arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int ff, ft, i = 1024, j = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ff = open(argv[1], O_RDONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (i == 1024)
	{
		i = read(ff, buffer, 1024);
		if (i == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		j = write(ft, buffer, i);
		if (j < i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(ff) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff), exit(100);
	if (close(ft) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft), exit(100);
	return (0);
}
