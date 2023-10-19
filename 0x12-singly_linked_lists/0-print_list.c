#include "lists.h"
#include <stdio.h>

/**
 * print_list - print the elements in a list list_t
 *
 * @h: pointer to list
 *
 * Return: number of elements printed
 */
size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++, h = h->next;
	}
	return (n);
}
