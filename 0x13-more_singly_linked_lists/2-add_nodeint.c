#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a singly linked list
 *
 * @head: pointer to the head of a singly linked list
 * @n: element to be stored in this new node
 *
 * Return: pointer to the new head or NULL other wise.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;

	return (*head);
}
