#include "3-calc.h"

/**
 * op_add - adds two intergers
 *
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: result of the addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract 2nd integer from 1sr integer
 *
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - nulltiply two integers
 *
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide an integer by another
 *
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - find the remainder when two numbers are divided
 *
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: result of the mod operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
