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
	if (argv[1] < 0)
	{
		printf("Error\n");
		exit(2);
	}

	int n, i, (*mptr)(int, char **);
	unsigned char opcode;

	n = atoi(argv[1]);
	mptr = &main;
	for (i = 0; i < n; i++, mptr++)
	{
		opcode = *(unsigned char *)mptr;
		printf("%02x ", opcode);
		if (i == n - 1)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
