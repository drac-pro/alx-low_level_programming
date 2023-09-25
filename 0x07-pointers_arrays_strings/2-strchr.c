#include "main.h"

/**
 * _strchr - locates the first occurrance of a character in a string
 *
 * @s: pointer to the string
 * @c: character to be found
 *
 * Return: pointer to first occurrance of c and NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] = '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
		else
			return (NULL);
	}
}
