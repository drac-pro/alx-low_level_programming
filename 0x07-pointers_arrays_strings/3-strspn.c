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
	unsigned int i;

	for (i = 0; s[i] != '\0' && accept[i] != '\0'; i++)
	{
		if (s[0] != accept[0])
			return (0);
		else if (s[i] == accept[i])
			continue;
		else if (s[i] != accept[i])
			break;
	}

	return (i++);
}
