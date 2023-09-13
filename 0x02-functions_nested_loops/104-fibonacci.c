#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (sucess))
 */
int main(void)
{
	long double fib, a = 1, b = 2;
	int i;

	/* Print out the fibonacci numbers up to the 50th term */
	for (i = 1; i <= 98; i++)
	{
		if (i == 98)
		{
		printf("%.0Lf\n", a);
		break;
		}
		printf("%.0Lf, ", a);
		fib = a + b;
		a = b;
		b = fib;
	}

	return (0);
}
