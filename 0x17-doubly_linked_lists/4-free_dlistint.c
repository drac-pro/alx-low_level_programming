#include "lists.h"

/**
 * free_dlistint - free allocated space of a doubly linked list
 *
 * @head: Pointer to the head of the list
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (head)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
