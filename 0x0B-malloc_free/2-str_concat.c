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
	int len1, len2, size, i, j;
	char *ptr;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';

	for (len1 = 0; s1[len1] != '\0'; len1++)
	for (len2 = 0; s2[len2] != '\0'; len2++)

	size = len1 + len2 + 1;
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < len2; i++)
		ptr[len1 + i] = s2[j];

	ptr[size] = '\0';

	return (ptr);
}
