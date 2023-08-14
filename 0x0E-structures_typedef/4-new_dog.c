#include "dog.h"

/**
 * cp - Copies string c into string s
 * @s: String to get
 * @c: String to copy
 *
 * Return: Nothing
 */
void cp(char *s, char *c)
{
	int i;

	for (i = 0; c[i]; i++)
		s[i] = c[i];
	i++;
	s[i] = '\0';

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
	int i;

	for (i = 0; s[i]; i++)
		;
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
	dog_t *new;

	if (!name || !owner)
		return (NULL);
	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);

	new->name = malloc(sizeof(char) * (_len(name) + 1));
	if (!new->name)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(sizeof(char) * (_len(owner) + 1));
	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	cp(new->name, name);
	cp(new->owner, owner);
	new->age = age;

	return (new);
}
