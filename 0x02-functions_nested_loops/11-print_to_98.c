#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers up to 98 from a given input
 *
 *@n: input to specify how numbers will be printed
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
	do {
	if (n == 98)
	{
		printf("%d\n", n);
		break;
	}
	else
		printf("%d, ", n);
	n++;
	} while (n <= 98);
	}

	else if (n > 98)
	{
	do {
	if (n == 98)
	{
		printf("%d\n", n);
		break;
	}
	else
		printf("%d, ", n);
	n--;
	} while (n >= 98);
	}

	else
		printf("98\n");
}
