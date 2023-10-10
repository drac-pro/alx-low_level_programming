#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free a memory area containing a varible with type dog
 *
 * @d: pointer to memory area
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
