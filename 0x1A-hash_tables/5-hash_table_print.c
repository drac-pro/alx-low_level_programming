#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int i;
	int need_comma = 1;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		if (!current)
			continue;
		if (need_comma == 0)
			printf(", ");
		while (current)
		{
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			if (current != NULL)
				printf(", ");
		}
		need_comma = 0;
	}
	printf("}\n");
}
