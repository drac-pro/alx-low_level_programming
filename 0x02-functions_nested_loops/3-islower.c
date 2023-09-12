#include "main.h"

/**
 * _islower - check if a letter is lower case
 *
 * @c: ascii character to be checked
 *
 * Return: 1 for lowercase and 0 for everything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
