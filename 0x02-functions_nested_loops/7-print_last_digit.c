#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @n: number to be analyzed
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar((-n % 10) + '0');
		return (-n % 10);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}
