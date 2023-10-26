#include "main.h"

/**
 * clear_bit - sets the bit at a given index of a number to 0
 *
 * @n: pointer to the number
 * @index: bit position of the binary equivalence of the number to be cleared
 *
 * Return: 1 (success) or -1 other wise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index >= sizeof(*n) * 8)
		return (-1);
	mask = 1 << index;
	mask = ~mask;
	*n &= mask;
	return (1);
}
