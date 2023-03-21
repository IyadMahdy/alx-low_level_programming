#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  prints a struct dog
 *
 * @d: Pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "nil";
	if (d->age == NULL)
		d->age = 0;
	if (d->owner == NULL)
		d->owner = "nil;

	if (age == 0)
		printf("Name: %s\nAge: nil\nOwner: %s\n", d->name, d->owner);
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
