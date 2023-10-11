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
	FILE *code;
	char ch;
	int n, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	n = atoi(argv[1]);

	code = fopen(__FILE__, "rb");
	if (code == NULL)
		return (0);
	for (i = 0; i < n; i++)
	{
		ch = fgetc(code);
		if (feof(code))
			break;
		printf("%02x ", (unsigned char)ch);
	}
	fclose(code);

	printf("\n");

	return (0);
}
