#include "main.h"

/**
 * print_square - print a square using # character
 *
 * @size: determines the size of the square
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
