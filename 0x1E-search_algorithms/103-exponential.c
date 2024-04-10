#include "search_algos.h"

int _binary_search(int *array, size_t l, size_t r, int value);
/**
 * exponential_search - searches for a value in a sorted array of integers
 *			using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, r;

	if (!array || size == 0)
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	else
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}

	r = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, r);
	return (_binary_search(array, i / 2, r, value));
}

/**
 * _binary_search - binary search helper for exponential search
 *
 * @array: pointer to the first element of the array to search
 * @l: left bound index of sub array
 * @r: right bound index of sub array
 * @value: the value to search for
 *
 * Return: first index where value is located otherwise -1
 */
int _binary_search(int *array, size_t l, size_t r, int value)
{
	size_t i, mid;

	while (l <= r)
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
