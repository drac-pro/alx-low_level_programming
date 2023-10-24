#include "lists.h"

listint_t *find_loop(listint_t *head);
/**
 * free_listint_safe - frees a linked list that can contain a loop
 *
 * @h: pointer to the first node of the linked list
 *
 * Return: size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = NULL, *loop_start = NULL;
	unsigned int count = 0;

	if (*h == NULL)
		return (0);
	loop_start = find_loop(*h);
	while (*h && *h != loop_start)
	{
		current = (*h)->next;
		free(*h);
		count++;
		*h = current;
	}
	if (loop_start && *h == loop_start)
	{
		*h = loop_start->next;
		while (*h != loop_start)
		{
			current = (*h)->next;
			free(*h);
			count++;
			*h = current;
		}
		free(loop_start);
		count++;
	}
	loop_start = NULL, *h = NULL, current = NULL;

	return (count);
}
/**
 * find_loop - find the start of a loop in a linked list
 *
 * @head: pointer to the first node of the list
 *
 * Return: pointer to the node where loop starts
 */
listint_t *find_loop(listint_t *head)
{
	listint_t *start = head, *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			while (start != slow)
				start = start->next, slow = slow->next;
			break;
		}
	}
	if (!fast)
		return (NULL);

	return (start);
}
