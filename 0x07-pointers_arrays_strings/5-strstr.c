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
	int i, j = 0, count;

	for (count = 0; haystack[count] != '\0'; i++)
	{
		i = count;
		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + count);
	}

	return (NULL);
}
