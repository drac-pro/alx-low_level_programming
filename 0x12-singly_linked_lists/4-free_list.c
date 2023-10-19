#include "lists.h"

/**
 * free_list - free the space allocated in memory for a linked list
 *
 * @head: pointer to the first node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
