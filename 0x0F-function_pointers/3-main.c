#include "3-calc.h"

/**
 * main - carries out simple calculation on two integers
 * Description: does some mathematical calculations on the arguments that are
 *		passed when the program is called. The third argument decides which
 *		operation eill be performed while the 2 and 4 arguments are the numbers
 *
 * @argc: number of arguments passed to main
 * @argv: pointer to the arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc = get_op_func(argv[2]);
	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", calc(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
