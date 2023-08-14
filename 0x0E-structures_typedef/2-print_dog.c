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
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: 0\n");

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		 printf("Owner: (nil)\n");
}
