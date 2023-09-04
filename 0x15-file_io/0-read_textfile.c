#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: File name
 * @letters: Number of letters it should read and print
 *
 * Return: Actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	int fp;
	char *text;

	if (!filename || !letters)
		return (0);

	fp = open((char *)filename, O_RDONLY);
	if (fp == -1)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (!text)
	{
		close(fp);
		return (0);
	}

	count = read(fp, text, letters);
	if (count == -1)
	{
		free(text);
		close(fp);
		return (0);
	}
	count  = write(STDOUT_FILENO, text, count);
	free(text);
	close(fp);
	if (count == -1)
		return (0);
	return (count);
}
