#include "main.h"

/**
 * _puts2 - prints every other character of a string starting from first
 * @str: pointer to the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[len] != '\0')
		len++;
	while(i <= len - 1)
	{
		if (i % 2 != 0)
			continue;
		_putchar(str[i]);
		i++;
	}
}
