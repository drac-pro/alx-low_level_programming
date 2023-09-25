#include <stdio.h>
#include "main.h"

/**
 * _strpbrk  - locates the first occurance in a string s of any of the bytes in
 * the string accept
 *
 * @s: pointer to the string to be searched
 * @accept: pointer to string to be found.
 *
 * Return: pointer to first occurrance of any byte of accept in s and
 * NULL if c is not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
			return (s + i);
	}
	}

	return (NULL);
}
