#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list dlistint_t
 *
 * @h: pointer to the head of the doubly linked list
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t size;

	for (size = 0; current != NULL; current = current->next, size++)
		printf("%d\n", current->n);
	return (size);
}
