#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 16;

	for (i = 0; i < 16; i++)
	{
		putchar(i < 10 ? i + '0' : 'a' + i - 10);
	}
	putchar('\n');

	return (0);
}
