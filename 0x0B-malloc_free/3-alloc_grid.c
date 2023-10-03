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

	if (dim2 == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		dim2[i] = malloc(sizeof(int) * width);
		if (dim2[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(dim2[i]);
			free(dim2);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			dim[i][j] = 0;

	return (dim2);
}
