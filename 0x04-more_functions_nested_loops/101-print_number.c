#include "main.h"

/**
 * print_number - print a number
 *
 * @n: number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		i = n;
	}
	if (i / 10)
		print_number(n / 10);
	_putchar((unsigned int)(n % 10) + '0');
}
