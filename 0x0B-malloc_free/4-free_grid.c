#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free allocated memory containing a two dimensional array
 *
 * @grid: pointer to allocated memory containing two dimentional array
 * @height: number of rows of the two dimensional array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
