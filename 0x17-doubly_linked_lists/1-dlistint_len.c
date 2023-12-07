#include "lists.h"

/**
 * dlistint_len - finds number of elements in a double linked list
 *
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t len;

	for (len = 0; current != NULL; current = current->next, len++)
		;
	return (len);
}
