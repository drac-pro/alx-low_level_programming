#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: pointer to a place in memory that has concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int size = 0, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[2]; i++)
		size++;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		ptr[i] = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
		ptr[j + i] = *(s2 + j);

	ptr[size] = '\0';

	return (ptr);
}
