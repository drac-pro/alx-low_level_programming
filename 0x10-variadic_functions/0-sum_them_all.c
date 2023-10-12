#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all it's variable arguments
 *
 * @n: number of variable arguments
 *
 * Return: result of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 1;
	int sum = 0;
	va_list nums;

	if (n == 0)
		return (0);

	va_start(nums, n);
	while (i <= n)
	{
		sum += va_arg(nums, int);
		i++;
	}
	va_end(nums);

	return (sum);
}
