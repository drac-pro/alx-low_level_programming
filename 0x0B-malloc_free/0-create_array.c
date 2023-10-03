#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialize it with
 * a specific character
 *
 * @size: size of the array to be created
 * @c: the character to initialize the array with
 *
 * Return: pointer to the array and NULL is size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc((sizeof(char) * size) + 1);

	for (i = 0; i < size + 1; i++)
		ptr[i] = c;
	ptr[size + 1] = '\0';

	return (ptr);
}
