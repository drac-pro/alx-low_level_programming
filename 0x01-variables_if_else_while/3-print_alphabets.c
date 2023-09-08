#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch, up_ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		for (up_ch = 'A'; up_ch <= 'Z'; up_ch++)
		{
			putchar(up_ch);
		}
	}
	putchar('\n');

	return (0);
}
