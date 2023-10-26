#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 *
 * @n: pointer to a number whose binary equivalent bit is to be set
 * @index: position of bit to be change to 1
 *
 * Return: 1 (success) or -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n |= 1 << index;
	return (1);
}
