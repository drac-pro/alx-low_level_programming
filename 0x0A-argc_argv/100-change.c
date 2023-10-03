#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints the minimum number of coins to make change for
 * an amount of money
 *
 * @argc: number of command line argument used when calling the program
 * @argv: point to the arguments that where used
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int num, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	if (atoi(argv[1]) < 0)
		printf("0\n"), exit(EXIT_SUCCESS);

	num = atoi(argv[1]);

	for (; num >= 25; i++)
		num -= 25;
	for (; num >= 10; i++)
		num -= 10;
	for (; num >= 5; i++)
		num -= 5;
	for (; num >= 2; i++)
		num -= 2;
	if (num == 1)
		i++;

	printf("%d\n", i);

	return (0);
}
