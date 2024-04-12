#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: pointer to the head of the skip list to search
 * @value:  the value to search for
 *
 * Return: pointer on the first node where value is located otherwise NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (!list)
		return (NULL);

	current = express = list;

	while (express->express && express->n < value)
	{
		current = express;
		if (express->express)
		{
		express = express->express;
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		}
		else
		{
			while (express->next)
				express = express->next;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			current->index, express->index);

	while (current && current->index <= express->index)
	{
	printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
