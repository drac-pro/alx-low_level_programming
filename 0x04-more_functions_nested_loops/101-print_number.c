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
		n *= -1;
		i = n;
		_putchar('-')
	}
	i /= 10;
	if (i != 0)
	print_number(i);
	_putchar((unsigned int)(n % 10) + '0');
}
