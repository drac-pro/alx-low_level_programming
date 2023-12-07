#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at an index in a doubly linked list
 *
 * @head: pointer to the head of the list
 * @index: position of node to be deleted
 *
 * Return: 1 (SUCCESS) or -1 (FAILURE)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			(current->next)->prev = NULL;
		free(current);
		current = NULL;
		return (1);
	}
	for (i = 0; i < index && current; i++)
		current = current->next;
	if (i < index && !current)
		return (-1);
	(current->prev)->next = current->next;
	if (current->next)
		(current->next)->prev = current->prev;
	free(current);

	return (1);
}
