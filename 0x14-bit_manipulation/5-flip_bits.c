#include "main.h"

/**
 * flip_bits - calculates the number of bits that needs to be flip to get from
 *		one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff, count = 0;

	if (n == m)
		return (0);
	diff = n ^ m;
	while (diff != 0)
	{
		if ((diff & 1) == 1)
			count++;
		diff >>= 1;
	}
	return (count);
}
