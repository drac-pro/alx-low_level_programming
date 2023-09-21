#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: pointer to the string to be encoded
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char nor[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j < 52; j++)
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
