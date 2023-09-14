#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: length of diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
	if (i == 1)
	{
		_putchar(92);
		_putchar('\n');
	}
	else
	{
	for (i = 2; i <= n; i++)
	{
	for (j = 1; j <= i - 1; j++)
	{
		_putchar(' ');
	}
	_putchar(92);
	_putchar('\n');
	}
	}
	}
}
