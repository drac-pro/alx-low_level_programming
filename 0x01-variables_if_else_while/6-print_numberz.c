#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		int ascii_num = i + 48;

		putchar(ascii_num);
		i++;
	}
	putchar('\n');

	return (0);
}
