#include "lists.h"

/**
 * sum_listint - sums all data(n) in a singly linked list
 *
 * @head: pointer to the first node of the list
 *
 * Return: sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (!head)
		return (0);
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
