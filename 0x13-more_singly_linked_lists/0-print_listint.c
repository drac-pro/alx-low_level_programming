#include "lists.h"

/**
 * print_listint - print all elements of a singly linked list
 *
 * @h: pointer to the head of the list
 *
 * Return: number of elements printed
 */
size_t print_listint(const listint_t *h)
{
	listint_t *current = h;
	unsigned int count = 0;

	while (current)
	{
		printf("%d\n", current->n);
		count++, current = current->next;
	}

	return (count);
}
