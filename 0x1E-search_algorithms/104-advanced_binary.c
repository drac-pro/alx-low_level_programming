#include "search_algos.h"

int _binary_search(int *array, size_t l, size_t r, int value);
/**
 * advanced_binary - binary search that retains order
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (_binary_search(array, 0, size - 1, value));
}

/**
 * _binary_search - binary search helper for advanced_binary search
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
	size_t mid;

	if (l > r)
		return (-1);

	printf("Searching in array: ");
	for (mid = l; mid < r; mid++)
		printf("%d, ", array[mid]);
	printf("%d\n", array[mid]);

	mid = l + (r - l) / 2;

	if (array[mid] == value && (mid == l || array[mid - 1] != value))
		return (mid);
	if (array[mid] >= value)
		return (_binary_search(array, l, mid, value));
	return (_binary_search(array, mid + 1, r, value));
}
