#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index in a linked list
 *
 * @head: pointer to the first node
 * @index: index of node to be deleted
 *
 * Return: 1 (success) or -1 (failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *prev = *head;
	unsigned int i;

	if (!head)
		return (1);
	else if (index == 1)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (!current)
			return (-1);
		if (current && i == index - 1)
		{
			prev->next = current->next;
			free(current);
			current = NULL;
			return (1);
		}
		prev = current;
		current = current->next;
	}

	return (-1);
}
