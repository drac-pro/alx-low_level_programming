#include "main.h"

/**
 * _isalpha - check a character is a letter
 *
 * @c: ascii character to be checked
 *
 * Return: 1 for letter and 0 for everything else
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
