#include "lists.h"

/**
 * find_listint_loop - finds loop in a linked list
 *
 * @head: pointer to first node of the list
 *
 * Return: pointer to node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			while (head != slow)
				head = head->next, slow = slow->next;
			break;
		}
	}
	if (!fast)
		return (NULL);

	return (head);
}
