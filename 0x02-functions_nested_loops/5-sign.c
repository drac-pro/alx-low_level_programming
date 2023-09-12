#include "main.h"

/**
 * print_sign - check a number's sign
 *
 * @n: number to be checked
 *
 * Return: 1 for positive, 0 for 0 and return -1 for nagative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
