#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 *
 * @name: Name of new dog
 * @age: Age of new dog
 * @owner: Owner of new dog
 *
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_cpy = name, *owner_cpy = owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name_cpy;
	d->age = age;
	d->owner = owner_cpy;

	return (d);
}
