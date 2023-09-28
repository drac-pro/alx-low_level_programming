#include "stdio.h"

int is_prime(int n, int div);
/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: number to be checked
 *
 * Return: 1 if number is prime number and 0 other wise
 */
int is_prime_number(int n)
{
	return (is_prime(n, n / 2));
}


/**
 * is_prime - checks if a number is a prime number
 *
 * @n: number to be checked
 * @div: divider to see if the number is divisible by any other number
 *
 * Return: 1 if number is prime number and 0 other wise
 */
int is_prime(int n, int div)
{
	if (n <= 1)
		return (0);
	if (div == 1)
		return (1);
	if (n % div != 0)
		is_prime(n, --div);
	else
		return (0);
}
