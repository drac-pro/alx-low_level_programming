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
	int i, len1 = 0, len2 = 0;
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	while (name[len1])
		len1++;
	while (owner[len2])
		len2++;

	ndog->name = malloc(sizeof(ndog->name) * len1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		ndog->name[i] = name[i];

	ndog->age = age;

	ndog->owner = malloc(sizeof(ndog->owner) * len2);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		ndog->owner[i] == owner[i];

	return (ndog);
}
