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
	size_t m, l, h;

	if (!array || size == 0)
		return (-1);

	m = sqrt((double)size);
	l = h = 0;

	while (array[h] < value && h < size)
	{
		printf("Value checked array[%ld] = [%d]\n", h, array[h]);
		l = h;
		h += m;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", l, h);
	h = h < size - 1 ? h : size - 1;
	for (; l <= h && l < size; l++)
	{
		printf("Value checked array[%ld] = [%d]\n", l, array[l]);
		if (value == array[l])
			return (l);
	}
	return (-1);
}
