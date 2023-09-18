#include "main.h"

/**
 * print_rev - print a ctring in reverse
 * @s: pointer to the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len, i;
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
