#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: pointer to the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(str[i]);
		str++;
	}

	_putchar('\n');
}
