#include "main.h"

/**
 * puts_half - prints the later half of a string
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, half_len, len = 0;

	while (str[len] != 0)
		len++;
	half_len = (len - 1) / 2;
	for (i = half_len - 1; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
