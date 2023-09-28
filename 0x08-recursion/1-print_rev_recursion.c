#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string to be printed
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	/*base case*/
	if (i == 0)
	{
		_putchar(s[i]);
		_putchar('\n');
		return;
	}

	_putchar(s[i - 1]);
	_print_rev_recursion(s - 2);
}
