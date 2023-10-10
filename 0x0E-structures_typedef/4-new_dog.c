#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new struct dog variable
 *
 * @name: pointer to name data item to be initialized
 * @age: age data item to be initialized
 * @owner: pointer to owner data item to be initialized
 *
 * Return: pointer to buffer variable of datatype dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
		return (NULL);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;

	return (ndog);
}
