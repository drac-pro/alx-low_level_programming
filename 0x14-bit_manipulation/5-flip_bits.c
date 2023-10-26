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
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count++;
		diff &= diff - 1;
	}
	return (count);
}
