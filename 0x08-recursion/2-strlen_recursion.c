#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 *
 * @s: pointer to string
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	/*base case*/
	if (*s == '\0')
		return (0);

	len++;
	return (len + _strlen_recursion(s + 1));
}
