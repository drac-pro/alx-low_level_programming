#include "main.h"

/**
 * wildcmp - compares if two strings are thesame
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: 1 if strings are thesame and 0 if they are not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		wildcmp(s1, ++s2);
	if (*s1 == *s2)
		wildcmp(s1 + 1, s2 + 2);
	if (s1[i] != s2[j])
		return (0);
	return (1);
}
