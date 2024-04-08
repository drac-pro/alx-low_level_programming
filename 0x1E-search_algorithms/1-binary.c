#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 *		the Binary search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i, mid, l = 0, r = size - 1;

	if (!array)
		return (-1);
	while (l < r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		mid = (l + r) / 2;
		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
