#include "dog.h"
#include <stdlib.h>

/**
 * cp - Copies string c into string s
 * @s: String to get
 * @c: String to copy
 *
 * Return: Nothing
 */
char *cp(char *s, char *c)
{
	int i;

	for (i = 0; c[i]; i++)
		s[i] = c[i];
	s[i++] = '\0';
	return (s);
}

/**
 * _len - Gets length of string
 * @s: String
 *
 * Return: length of string
 */
int _len(char *s)
{
	int i = 0;

	for (; *s; s++)
		i++;
	return (i);
}

/**
  * new_dog - ...
  * @name: ...
  * @age: ...
  * @owner: ...
  *
  * Return: ...
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (!name || !owner)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (_len(name) + 1));
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (_len(owner) + 1));
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = cp(new_dog->name, name);
	new_dog->owner = cp(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
