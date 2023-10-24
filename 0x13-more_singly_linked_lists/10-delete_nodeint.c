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
	listint_t *current, *prev = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		prev = NULL;
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (!prev)
			break;
		prev = prev->next;
		if (prev->next && i == index - 1)
		{
			current = prev->next;
			prev->next = current->next;
			free(current);
			current = NULL;
			return (1);
		}
	}

	return (-1);
}
