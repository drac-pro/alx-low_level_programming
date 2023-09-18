#include "main.h"

/**
 * rev_string - reverses how a string is stored
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len, i, j;
	char tmp;

	for (len = 0; s[0] != '\0'; len++)
	{
	}
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
