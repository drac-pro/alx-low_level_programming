#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: print sum of all positive arguments passed to the program
 *
 * @argc: number of command line argument used when calling the program
 * @argv: point to the arguments that where used
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
		printf("0\n"), exit(EXIT_SUCCESS);

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				printf("Error\n"), exit(EXIT_SUCCESS);
		}
		if (atoi(argv[i]) >= 0)
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
