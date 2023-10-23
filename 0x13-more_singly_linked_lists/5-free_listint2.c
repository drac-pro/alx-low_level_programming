#include "lists.h"

/**
 * free_listint2 - free a singly linked list and sets head to NULL
 *
 * @head: pointer to the first element of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current)
	{
		*head = current->next;
		free(current);
		current = *head;
	}
}
