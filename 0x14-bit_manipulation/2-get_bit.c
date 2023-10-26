#include "main.h"

/**
 * get_bit - returns the bit at an index in a binary equivalence of a number
 *
 * @n: unsigned number to be converted to binary
 * @index: index of a binary digit
 *
 * Return: binary digit or -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
