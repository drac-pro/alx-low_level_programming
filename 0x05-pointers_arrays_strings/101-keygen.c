#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - entry point
 * Description: generate a valid random password.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, random_index, length = 8;	
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";

	srand(time(0));

	for (i = 0; i < length; i++)
	{
		random_index = rand() % (sizeof(charset) - 1);
		printf("%c", charset[random_index]);
	}
	printf("\n");
	
	return 0;
}

