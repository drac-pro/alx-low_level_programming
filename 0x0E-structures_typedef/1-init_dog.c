#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes the dog structure
 *
 * @d: pointer to a struct dog variable
 * @name: pointer to the name string
 * @age: pointer to the age
 * @owner: pointer to owner string
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
