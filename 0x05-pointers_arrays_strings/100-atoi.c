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
	int sign = 1, i = 0; j = 0;

	while (s[j])
	{

	if (s[j] == '-')
		sign *= -1;

	while (s[j] >= '0' && s[j] <= '9')
	{
		i = 1;
		num = (s[j] - 48) + num * 10;
		j++;
	}
	if (i == 1)
		break;
	j++;
	}

	return (num * sign);
}
