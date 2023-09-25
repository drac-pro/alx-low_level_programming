#include "main.h"

/**
 * print_chessboard - prints thr ellements of a two dimensional array
 *
 * @a: pointer to the two dimensional array
 *
 * return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; a[i][j] != '\0'; j++)
	{
		_putchar(a[i][j]);
	}
	_putchar('\n');
	}
}
