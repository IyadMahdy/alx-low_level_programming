#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

char *_strcpy(char *dest, char *src);

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
	int name_l, owner_l;

	name_l = 0;
	while (name[name_l] != '\0')
		name_l++;

	owner_l = 0;
	while (owner[owner_l] != '\0')
		owner_l++;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * name_l);

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->age = age;

	d->owner = malloc(sizeof(char) * owner_l);

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = _strcpy(d->name, name);
	d->owner = _strcpy(d->owner, owner);
	d->age = age;

	return (d);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
