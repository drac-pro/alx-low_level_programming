#include "main.h"

/**
 * rev_string - reverses how a string is stored
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i, j;
	char tmp;

	while (s[len] != '\0')
		len++;
	i = 0;
	j = len - 1;
	for (; i < j;)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;

		i++;
		j--;
	}
}
