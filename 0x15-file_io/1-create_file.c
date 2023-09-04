#include "main.h"

/**
 * create_file - creates a file.
 * @filename: File Name
 * @text_content: string to write in file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	char *text;
	int fp;

	if (!filename)
		return (-1);

	fp = open((char *)filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);

	if (!text_content)
		tect_content = "";

	write(fp, text_content, sizeof(text_content) - 1);

	return (1);
}
