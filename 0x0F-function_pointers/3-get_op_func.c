#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - checks if a string is a valid mathematical operator
 *
 * @s: string to be checked
 *
 * Return: a pointer to a function corresponding to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (0);
}
