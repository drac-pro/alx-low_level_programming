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
	int sign = 1;

	while (*s == ' ')
		s++;

	if (*s == '-' || *s == '+')
	{
		if (*s == +)
			continue;
		sign *= -1;
		s++;
	}

	while (*s)
	{
		if (*s < '0' || *s > '9')
			continue;
		num = (int)(*s - 48) + num * 10;
		s++;
	}

	return (num * sign);
}
