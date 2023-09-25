#include <stdio.h>
#include "main"

/**
 * _strstr - finds the first occurrence of the substring needle in
 * the string haystack
 *
 * @haystack: pointer to the string to be searched
 * @needle: pointer to substring
 *
 * Return: pointer to first occurance of substringneedle in string haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;

	while ((haystack[i] != needle[0]) && (haystack[i] != '\0'))
		i++;

	for (; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
		if (haystack[i] != needle[0])
			return (NULL);
		break;
	}
	}

	return (haystack + i);
}

