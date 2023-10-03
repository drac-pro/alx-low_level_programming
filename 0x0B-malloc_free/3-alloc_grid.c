#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a two dimensional pointer
 *
 * @width: the width of the two dimensional array
 * @height: lenght of the two dimensional array
 *
 * Return: a point to a two dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int **dim2, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	dim2 = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		dim2[i] = calloc(width, sizeof(int));
	if (dim2 == NULL)
		return (NULL);

	return (dim2);
}
