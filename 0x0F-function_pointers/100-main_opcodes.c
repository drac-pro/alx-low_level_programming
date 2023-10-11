#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the opcode of the current program
 *
 * @argc: number of aguments when program is called
 * @argv: pointer to the arguments passed
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	int n, i, (*mptr)(int, char **) = main;
	unsigned char opcode;

	for (i = 0; i < n; i++)
	{
		opcode = *(unsigned char *)mptr;
		printf("%.2x", opcode);
		if (i == n - 1)
			continue;
		printf(" ");
		mptr++;
	}
	printf("\n");

	return (0);
}
