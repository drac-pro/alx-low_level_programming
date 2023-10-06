#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers containin values from min to max
 *
 * @min: minimum number in the array
 * @max: maximum number in the array
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *array, size, i, j;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		array[j] = i;
	return (array);
}
