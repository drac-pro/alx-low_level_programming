#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, ldig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldig = n % 10;

	if (ldig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldig);
	}
	else if (ldig == 0)
	{
		printf("Last digit of %d is %d and is 0", n, ldig);
	}
	else if (ldig < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldig);
	}

	return (0);
}
