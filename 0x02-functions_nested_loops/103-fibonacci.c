#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (sucess))
 */
int main(void)
{
	int fib, a = 1, b = 2, i, sum;

	for (i = 1;; i++)
	{
		if (a > 4000000)
			break;
		if ((a % 2) == 0)
			sum += a;
		fib = a + b;
		a = b;
		b = fib;
	}

	printf("%d\n", sum);

	return (0);
}
