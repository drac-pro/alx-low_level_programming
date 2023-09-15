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
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	else
	{
		if (n > 9)
			_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}
