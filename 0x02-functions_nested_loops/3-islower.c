#include "main.h"

/**
 * _islower - check if a letter is lower case
 *
 * Return: void
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
