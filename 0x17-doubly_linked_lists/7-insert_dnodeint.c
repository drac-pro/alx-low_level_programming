#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given positon in a
 *				singly linked list dlistint_t
 *
 * @h: pointer to the head of the list
 * @idx: index to insert new node at
 * @n: data(n) to be stored in new node
 *
 * Return: address of new node or NULL other wise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = new_node->prev = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; i <= idx - 1 && current; i++, current = current->next)
	{
		if (i < idx - 1 && !current)
			return (NULL);
	}
	new_node->next = current->next;
	new_node->prev = current;
	current->next = new_node;

	return (new_node);
}
