#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: 0 if thesame and the difference if otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && (s[i] != '\0' || s2[i] != '\0'))
		i++;

	if (s1[i] > s2[i])
		return ((int)s1[i] - (int)s2[i]);
	else if (s1[i] < s2[i])
		return ((int)s1[i] - (int)s2[i]);
	else
		return (0);
}
