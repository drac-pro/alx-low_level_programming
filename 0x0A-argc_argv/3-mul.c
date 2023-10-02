#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: multiplies two numbers that are passed as arguments to our
 * program and print the result
 *
 * @argc: number of command line argument used when calling the program
 * @argv: point to the arguments that where used
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
