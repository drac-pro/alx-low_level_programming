#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 *
 * @head: pointer to the head node
 * @index: index of node
 *
 * Return: pointer to the node at that index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;
	if (i < index && !current)
		return (NULL);
	return (current);
}
