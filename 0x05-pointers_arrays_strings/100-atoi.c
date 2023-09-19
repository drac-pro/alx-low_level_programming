#include "main.h"

/**
 * _atoi - converts a string to an interger
 * @s: pointer to the string to be converted
 *
 * Return: returns the integer.
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1, i = 1;

	while (*s)
	{

	if (*s == 45)
		sign *= -1;

	while (*s >= '0' && *s <= '9')
	{
		i = 1;
		num = (*s - 48) + num * 10;
		s++;
	}
	if (i == 1)
		break;
	s++;
	}

	return (num * sign);
}
