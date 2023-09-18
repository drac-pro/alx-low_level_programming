#include "main.h"

/**
 * _atoi - converts a string to an interger
 * @s: pointer to the string to be converted
 *
 * Return: returns the integer.
 */
int _atoi(char *s)
{
	int len = 0, a = 0, i;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		a = (int)(s[i] - 48) + a * 10;
	}

	return (a);
}
