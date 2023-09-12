#include "main.h"

/**
 * function to print the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	/*using function _putchar() found in main.h*/
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');

	return (0);
}
