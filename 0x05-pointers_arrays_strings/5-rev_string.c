#include "main.h"

/**
 * rev_string - reverses how a string is stored
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len, i;
	char tmp;

	for (len = 0; s[0] != '\0'; len++)
	{
	}
	for (i = 0; i <= len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
	}
}
