#include "function_pointers.h"

/**
 * array_iterator - executes another function on each element of an array
 *
 * @array: integer array
 * @size: size of array
 * @action: pointer to function to be executed on each element of array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
