#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node to a linked list at the end
 *
 * @head: pointer to the last element of the list
 * @str: string to be copied into the node
 *
 * Return: return pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	unsigned int len = 0;

	current = *head;
	while (current && current->next)
		current = current->next;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	while (str[len])
		len++;
	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->len = len;
	if (current)
		current->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
