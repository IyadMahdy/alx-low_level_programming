#include "function_pointers.h"

/**
 * print_name - Prints Name
 * @name: Name
 * @f: Pointer to function that prints
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
