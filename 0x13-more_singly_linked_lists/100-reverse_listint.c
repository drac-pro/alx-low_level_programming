#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 *
 * @head: pointer to the first node
 *
 * Return: updated head pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = NULL;

	while (*head)
	{
		current = (*head)->next;
		*head->next = prev;
		prev = head;
		*head = current;
	}
	*head = prev;

	return (*head);
}
