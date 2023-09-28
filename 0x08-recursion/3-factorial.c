#include "main.h"

/**
 * factorial - calculates the factorial of a number
 *
 * @n: number
 *
 * Return: the factorial of n (the number) or -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	/*base case*/
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
