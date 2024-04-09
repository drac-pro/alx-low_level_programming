#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using
 *		the Jump search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int m = sqrt(size), l, h;

	if (!array || size == 0)
		return (-1);
	l = h = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", h, array[h]);
		if (value == array[h])
			return (h);
		l = h;
		h = l + m;
	} while (array[h] < value && h < (int)size);
	printf("Value found between indexes [%d] and [%d]\n", l, h);

	for (; l <= h && l < (int)size; l++)
	{
		printf("Value checked array[%d] = [%d]\n", l, array[l]);

	}
	return (-1);
}
