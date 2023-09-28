#include "main.h"

/**
 * _pow_recursion - calculates the a number raised to a certain power
 *
 * @x: number
 * @y: power to which number (x) is raised
 *
 * Return: result of calculation and -1 if power (y) == 0
 */
int _pow_recursion(int x, int y)
{
	int pow = 0;

	if (y < 0)
		return (-1);
	/*base case*/
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	y--;
	pow *= x;
	return (pow + _pow_recursion(x, y));
}
