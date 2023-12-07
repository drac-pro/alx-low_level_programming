#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 *
 * @head: pointer to the head of the list
 * @n: value to be stored in new node
 *
 * Return: Pointer to the new node or NULL other wise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (*head);
}
