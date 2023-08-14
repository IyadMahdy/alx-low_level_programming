#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints dog variable
 * @d: Pointer to variable
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name)
		printf("Name: %s", d->name);
	else
		printf("Name: (nil)");

	if (d->age)
		printf("Age: %f", d->age);
	else
		printf("Age: (nil)");

	if (d->owner)
		printf("Owner: %s", d->owner);
	else
		 printf("Owner: (nil)");
}
