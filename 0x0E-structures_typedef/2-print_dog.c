#include <stdio.h>
#include <stdlib.h>
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
	if (d != NULL)
	{
	d->name ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	printf("Age: %f\n", d->age);
	d->owner ? printf("Name: %s\n", d->owner) : printf("Name: (nil)");
	}
}
