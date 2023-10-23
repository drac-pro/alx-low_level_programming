#include "lists.h"

/**
 * listint_len - calculates the number of elements in a singly linked list
 *
 * @h: pointer to the first element of the list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	unsigned int count = 0;

	while (current)
		count++, current = current->next;

	return (count);
}
