#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of chars of 1s and 0s
 *
 * Return: the converted number or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i;

	if (!b)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		num <<= 1;
		num += b[i] - '0';
		i++;
	}
	if (b[i] != '\0')
		return (0);
	return (num);
}
