#include "main.h"

/**
 * _puts_recursion - prints a string to standard output followed by a new line
 *
 * @s: pointer to string to be printed
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	/*base case*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[0]);
	_puts_recursion(s - 1);
}
