#include "main.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 *
 * @name: Name to be printed
 * @f: Pointer to a function that prints string
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
