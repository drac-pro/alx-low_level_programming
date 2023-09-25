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

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
		sum1 += a[i][j];
		break;
	}
	}
	printf("%d, ", sum1);

	for (i = size - 1; i >= 0; i--)
	{
	for (j = 0; j < size; j++)
	{
		sum2 += a[i][j];
		break;
	}
	}
	printf("%d\n", sum2);
}
