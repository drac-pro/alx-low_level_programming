#include "lists.h"

/**
 * pop_listint - deletes the head of a singly linked list
 *
 * @head: pointer to the head
 *
 * Return: the data store in the head
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int n;

	if (*head == NULL)
		return (0);
	n = current->n;
	*head = current->next;
	free(current);
	current = NULL;

	return (n);
}
