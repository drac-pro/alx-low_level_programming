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
	while (*haystack != *needle && *haystack != '\0')
		haystack++;
	if (*haystack == '\0')
		return (NULL);
	while (*haystack == *needle && *needle != '\0')
	{
		haystack++;
		needle++;
	}
	if (*needle == '\0')
		return (haystack);
	return (NULL);
}
