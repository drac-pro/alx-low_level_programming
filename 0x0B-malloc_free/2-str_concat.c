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
	int size, len1 = 0, len2 = 0, i = 0, j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}

	while (s2[j] != '\0')
	{
		len2++;
		j++;
	}

	size = len1 + len2;
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		ptr[i + j] = s2[j];

	ptr[size] = '\0';

	return (ptr);
}
