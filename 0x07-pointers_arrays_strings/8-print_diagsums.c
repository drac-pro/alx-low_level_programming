#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: pointer to the square matrix array
 * @size: dimension of the square matrix
 *
 * return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0, j = 0; i < size, j < size; i++, j++)
		sum1 += a[i * size + j];
	for (i = size - 1, j = 0; i >= 0, j < size; i--, j++)
		sum2 += a[i * size + j];
	printf("%d, %d\n", sum1, sum2);
}
