#include "hash_tables.h"
#include <stdio.h>

/**
 * shash_table_create - creates a hash table.
 *
 * @size: size of the hash table array
 *
 * Return: pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}
/**
 * shash_table_set - adds an element to the hash table In case of collision,
 *		add the new node at the beginning of the list
 *
 * @ht: pointer to hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *current;
	char *value_dup;
	unsigned long int index;

	if (!key || !ht || *key == '\0' || !value)
		return (0);
	value_dup = strdup(value);
	if (!value_dup)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value_dup;
			return (1);
		}
		current = current->next;
	}
	new = malloc(sizeof(shash_node_t));
	if (!new)
	{
		free(value_dup);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(value_dup);
		free(new);
		return (0);
	}
	new->value = value_dup;
	new->next = ht->array[index];
	ht->array[index] = new;
	if (ht->shead == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		new->sprev = NULL;
		new->snext = NULL;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
	current = ht->shead;
	while (current->snext != NULL && strcmp(current->snext->key, key) < 0)
		current = current->snext;
	new->sprev = current;
	new->snext = current->snext;
	if (current->snext == NULL)
		ht->stail = new;
	else
		current->snext->sprev = new;
	current->next = new;
	}
	return (1);
}
/**
 * shash_table_get -  retrieves a value associated with a key.
 *
 * @ht: the shash table
 * @key: the key
 *
 * Return:  value associated with the key or NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	current = ht->array[index];
	if (!current)
		return (NULL);
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
/**
 * shash_table_print - prints a shash table via sorted list.
 *
 * @ht: the hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = NULL;

	if (!ht)
		return;
	current = ht->shead;
	printf("{");
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current)
			printf(", ");
	}
	printf("}\n");
}
/**
* shash_table_print_rev - prints a shash table via sorted list in reverse.
*
* @ht: the hash table
*
* Return: void
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = NULL;

	if (!ht)
		return;
	current = ht->stail;
	printf("{");
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a hash table.
 *
 * @ht: the hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current = NULL, *next = NULL;

	if (!ht)
		return;
	current = ht->shead;
	while (current)
	{
		next = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}
	free(ht->array);
	free(ht);
}
