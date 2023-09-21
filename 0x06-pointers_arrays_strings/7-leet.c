#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer to the string to be encoded
 *
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	int i, j;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
		if (s[i] == let[j])
		{
			s[i] = num[j];
			break;
		}
	}
	}

	return (s);
}
