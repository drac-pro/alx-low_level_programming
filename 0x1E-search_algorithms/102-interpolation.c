#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *			using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (!array || size == 0)
		return (-1);

	while (high > low)
	{
		pos = low
			+ (((double)(high - low) / (array[high] - array[low]))
					* (value - array[low]));
		printf("Value checked array[%ld]", pos);
		if (pos < size)
			printf(" = [%d]\n", array[pos]);
		else
		{
			printf(" is out of range\n");
			break;
		}

		if (value == array[pos])
			return (pos);

		if (array[pos] > value)
			high = --pos;
		else
			low = ++pos;
	}
	return (-1);
}
