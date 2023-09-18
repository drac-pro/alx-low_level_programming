#include <stdio.h>
#include "main.h"

/**
 * print_array - print first n elements of an array
 * @a: pointer to the array
 * @n: number of elements to be printed
 *
 * Return: the length of the string
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
