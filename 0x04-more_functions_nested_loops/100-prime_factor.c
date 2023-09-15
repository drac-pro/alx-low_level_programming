#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 *
 * Return: 0 (sucess))
 */
int main(void)
{
	unsigned long i, num = 612852475143;

	/* finds the largest prime factor of num*/
	while (num % 2 == 0)
		num /= 2;
	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
			num /= i;
	}

	if (num > 2)
		printf("%lu\n", num);
	else
		printf("%lu\n", i - 2);

	return (0);
}
