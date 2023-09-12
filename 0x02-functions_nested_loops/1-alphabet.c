#include "main.h"

/**
 * function to print the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	/*using function _putchar() found in main.h*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
