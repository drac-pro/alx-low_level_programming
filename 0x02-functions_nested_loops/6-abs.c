#include "main.h"

/**
 * _abs - computes absolute value of a number
 *
 * @n: number to be computed
 *
 * Return: absolut value of the number
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else if (n > 0)
		return (n);
	else
		return (0);
}
