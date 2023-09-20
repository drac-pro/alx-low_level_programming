#include "main.h"

/**
 * reverse_array - reverses n elements of an array
 * @a: pointer to array
 * @n:number of array ellements to be reversed
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;

		i++;
		j--;
	}
}
