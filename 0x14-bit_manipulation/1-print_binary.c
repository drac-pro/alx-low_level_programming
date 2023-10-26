#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: unsigned number to be printed as binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}
	else
	{
		if (n > 0)
		{
			print_binary(n >> 1);
			_putchar((n & 1) + '0');
		}
	}
}
