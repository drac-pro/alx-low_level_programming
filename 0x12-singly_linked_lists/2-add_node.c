#include "lists.h"
#include <string.h>

/**
 * add_node - adds a neww node at the beginning of a linked list
 *
 * @head: pointer to the head pointer of the list
 * @str: string to be duplicated and saved in new node
 *
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	while (str[len])
		len++;
	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = len;
	*head = new_node;

	return (*head);
}
