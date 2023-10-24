#include "lists.h"
#include <stdio.h>

const listint_t *find_loop_start(const listint_t *head, const listint_t *meet);
size_t loop_len(const listint_t *head, const listint_t *start);
/**
 * print_listint_safe - print the contents of a singly linked list
 *
 * @head: pointer to the first node of the list
 *
 * Return: number of elements in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *slow = head, *fast = head;
	const listint_t *loop_start = NULL;
	unsigned int i, count = 0;

	if (!head)
		return (0);
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			loop_start = find_loop_start(head, slow);
			count = loop_len(head, loop_start);
			break;
		}
	}
	if (loop_start)
	{
		for (i = 0; i < count; i++)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			current = current->next;
		}
		printf("-> [%p] %d\n", (void *)loop_start, loop_start->n);
	}
	else
	{
		for (; current != NULL; count++)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			current = current->next;
		}
	}
	return (count);
}
/**
 * find_loop_start - find the start of a loop in a linked list
 *
 * @head: pointer to the first node of the list
 * @meet: pointer to node where fast and slow pointers met
 *
 * Return: pointer to the node where loop starts
 */
const listint_t *find_loop_start(const listint_t *head, const listint_t *meet)
{
	const listint_t *start = head;

	while (start != meet)
		start = start->next, meet = meet->next;
	return (start);
}
/**
 * loop_len - calculates the number of nodes in a linked list with a loop
 *
 * @head: pointer to first node of linked list
 * @start: pointer to the start of the loop
 *
 * Return: number of nodes in the linked list
 */
size_t loop_len(const listint_t *head, const listint_t *start)
{
	const listint_t *current = head;
	unsigned int len = 0;

	for (; current != start; len++)
		current = current->next;
	do {
		len++;
		start = start->next;
	} while (current != start);
	return (len);
}
