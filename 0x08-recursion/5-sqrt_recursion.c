#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number
 *
 * @n: number
 *
 * Return: the result or -1 if na dont have a square root
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}


/**
 * square_root - calculates the square root of a number
 *
 * @n: number
 * @i: increamenter
 *
 * Return: the result or -1 if na dont have a square root
 */

int square_root(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) > n)
		return (-1);
	return (square_root(n, ++i));
}
