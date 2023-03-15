#include <unistd.h>

/**
 * _putchar - putchar
 * @c: Character
 *
 * Return on succes 1 and on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
