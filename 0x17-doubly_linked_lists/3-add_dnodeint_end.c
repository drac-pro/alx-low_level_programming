#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 *
 * @head: pointer to the head of the list
 * @n: value to be stored in new node
 *
 * Return: address of the new ellement
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	for (; current != NULL && current->next != NULL; current = current->next)
		;
	new_node->prev = current;
	current->next = new_node;

	return (new_node);
}
