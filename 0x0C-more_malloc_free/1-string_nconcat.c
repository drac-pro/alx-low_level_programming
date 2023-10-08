#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates a string with the first n bytes
 * of another string
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes of s2 to be concatenated
 *
 * Return: pointer to new allocated memory containing concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size, i, j, len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n < len2)
		size = len1 + n;
	else
		size = len1 + len2;
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < n && j < len2; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}
