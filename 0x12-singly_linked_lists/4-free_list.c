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
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
