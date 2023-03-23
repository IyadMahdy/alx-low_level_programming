#include "main.h"

/**
 * print_name - Prints a name
 *
 * @name: Name to be printed
 * @f: Pointer to a function that prints string
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
