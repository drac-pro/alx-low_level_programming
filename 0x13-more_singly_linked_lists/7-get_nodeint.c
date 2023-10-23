#include "lists.h"

/**
 * get_nodeint_at_index - looks for a node at a particular index in a list
 *
 * @head: pointer to the first element of the list
 * @index: index of the node
 *
 * Return: pointer to the node at that index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (!current)
			return (NULL);
		current = current->next;
	}
	if (!current)
		return (NULL);

	return (current);
}
