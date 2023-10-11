#include "function_pointers.h"

/**
 * int_index - searches for an interger in an array of int
 *
 * @array: pointer to array
 * @size: size of the array
 * @cmp: pointer to function used to compare if the value in array matches
 *
 * Return: index where element is found in array or -1 other wise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
