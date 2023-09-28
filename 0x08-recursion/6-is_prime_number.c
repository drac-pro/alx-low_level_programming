#include "main.h"

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
	if (n <= 1 || n % div == 0)
		return (0);
	else if (n % div != 0 && div != 2)
		is_prime(n, div - 1);
	return (1);
}
