#include <stdio.h>
#include "main.h"

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
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
