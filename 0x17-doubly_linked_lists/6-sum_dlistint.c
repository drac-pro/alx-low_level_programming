#include "lists.h"

/**
 * sum_dlistint - sums all data(n) in a doubly linked list dlistint_t
 *
 * @head: pointer to head node of the doubly linked list
 *
 * Return: result of of the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int result = 0;

	for (; current != NULL; current = current->next)
		result += current->n;
	return (result);
}
