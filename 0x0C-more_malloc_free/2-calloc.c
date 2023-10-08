#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of ellements of the array
 * @size: size byte of each element of the array
 *
 * Return:a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, len;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	len = nmemb * size;
	array = malloc(len);
	if (array == NULL)
		return (NULL);
	for(i = 0; i < len; i++)
		array[i] = 0;
	return (array);
}
