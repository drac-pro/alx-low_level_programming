#include "lists.h"

/**
 * list_len - calculate the number of elements in a linked list
 *
 * @h: pointer to the first element of the linked list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
