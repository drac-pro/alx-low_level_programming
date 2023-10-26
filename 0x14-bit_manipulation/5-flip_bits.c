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
	return (__builtin_popcount(n ^ m));
}
