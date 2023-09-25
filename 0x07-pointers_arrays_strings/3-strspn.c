#include "main.h"

/**
 * _strspn - calculates the number of bytes in the initial segment of string s
 * which consist only of bytes from another string accept
 *
 * @s: pointer to the first string to be calculated
 * @accept: pointer to string containing bytes to be checked
 *
 * Return: number of bytes in initial section of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			n++;
			break;
		}
	}
	if (s[i] != accept[j])
		return (n);
	}

	return (n);
}
