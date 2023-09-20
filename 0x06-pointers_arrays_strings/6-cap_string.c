#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: pointer to the string
 *
 * Return: pointer to capitalized string
 */
char *cap_string(char *s)
{
	int i = 0, j, n;
	int spec[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125}

	if (s[i] >= 97 && s[i] <= 122)
		s[i] -= 32;
	for (i = 1; s[i] != '\0'; i++)
	{
	n = i - 1;

	for (j = 0; j < 13; j++)
	{
		if ((s[n] == spec[j]) && (s[i] >= 97 && s[i] <= 122))
		{
			s[i] -= 32;
			break;
		}
	}
	}

	return (s);
}
