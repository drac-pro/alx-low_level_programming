#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers using the
 *		Jump search algorithm.
 *
 * @list: pointer to the head of the list to search
 * @size: the number of nodes in list
 * @value: the value to search for
 *
 * Return: pointer to the first node where value is located otherwise NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *l = NULL, *r = list;
	size_t step, i;

	if (!list || size == 0)
		return (NULL);

	step = sqrt(size);
	while (r && r->index + 1 < size && r->n < value)
	{
		l = r;
		for (i = 0; i < step && r->next; i++)
			r = r->next;
		printf("Value checked at index [%lu] = [%d]\n", r->index, r->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", l->index, r->index);

	while (l && l->index <= r->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", l->index, l->n);
		if (l->n == value)
			return (l);
		l = l->next;
	}
	return (NULL);
}
