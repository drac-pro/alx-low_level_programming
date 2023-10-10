#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the data items of the dog structure of an instance of it
 *
 * @d: pointer to the struct dog variable (instance of struct dog data type)
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	d->name == NULL ? printf("Name: (nil)") : printf("Name: %s\n", d->name);
	printf("Age: %d\n", d->age);
	d->owner == NULL ? printf("Name: (nil)") : printf("Name: %s\n", d->owner);
}
