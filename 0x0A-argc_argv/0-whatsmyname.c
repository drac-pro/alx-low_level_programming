#include <stdio.h>

/**
 * main - Entry point
 * Description: print the name of the c program
 *
 * @argc: number of command line argument used when calling the program
 * @argv: point to the arguments that where used
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
