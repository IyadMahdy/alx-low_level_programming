#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's basic info
 *
 * @name: Name
 * @age: age
 * @owner: owner
 */
typdef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
