#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a singly linked list at
 *				a given position
 *
 * @head: pointer to the first node
 * @idx: index where new node should be added
 * @n: data element to be stored in new node
 *
 * Return: pointer to new node or NULL other wise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	for (i = 0; i < idx - 1; i++)
	{
		if (!current)
			return (NULL);
		current = current->next;
	}
	if (!current)
		return (NULL);
	new_node->next = current->next;
	current->next = new_node;
	new_node->n = n;

	return (new_node);
}
