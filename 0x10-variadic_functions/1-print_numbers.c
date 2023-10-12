#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: string to be printed between the numbers
 * @n: number of variable arguments (numbers)
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	if (n == 0)
		return;

	va_start(nums, n);
	for (i = 1; i <= n; i++)
	{
		if (i == n)
			printf("%lf\n", va_arg(nums, double));
		else if (separator == NULL)
			printf("%lf", va_arg(nums, double));
		else
			printf("%lf%s", va_arg(nums, double), separator);
	}
	va_end(nums);
}
