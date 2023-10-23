#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a singly linked list
 *
 * @head: pointer to the head of the list
 * @n: element to be stored in this new node
 *
 * Return: pointer to the head of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	while (current && current->next)
		current = current->next;
	new_node->n = n;
	new_node->next = NULL;
	if (current)
		current->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
