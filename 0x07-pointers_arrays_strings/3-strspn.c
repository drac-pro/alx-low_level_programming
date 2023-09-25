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
	int i;
	unsigned int n = 0;

	for (i = 0; (s[i] != '\0' && accept[i] != '\0'); i++)
	{
		if (s[i] != accept[i])
			break;
		else if (s[i] == accept[i])
		{
			n++;
			continue;
		}
	}

	return (n);
}
