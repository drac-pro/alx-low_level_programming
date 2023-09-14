#include "main.h"

/**
 * print_triangle - print a triangle on the screen
 *
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	if (size == 1)
	{
		_putchar(35);
		_putchar('\n');
	}
	else
	{
	for (i = 1; i <= size; i++)
	{
	for (j = size - i; j >= 1; --j)
	{
		_putchar(' ');
	}
	for (z = 1; z <= i; z++)
	{
		_putchar(35);
	}
	_putchar('\n');
	}
	}
	}
}

