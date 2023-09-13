#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (sucess))
 */
int main(void)
{
	unsigned long int fib, a = 1, b = 2;
	int i;

	/* Print out the fibonacci numbers up to the 50th term */
	for (i = 1; i <= 50; i++)
	{
		if (i == 50)
		{
		printf("%ld\n", a);
		break;
		}
		printf("%ld, ", a);
		fib = a + b;
		a = b;
		b = fib;
	}

	return (0);
}
