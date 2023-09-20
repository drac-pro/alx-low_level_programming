#include "main.h"

/**
 * string_toupper - converts lowercase letters to uppercase
 * @s: pointer to the string
 *
 * Return: pointer to converted string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}

	return (s);
}
