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

	va_start(nums, n);
	for (i = 1; i <= n, i++)
	{
		if (i == n)
			printf("%d\n", va_args(num, int));
		else
		{
			if (separator == NULL)
				printf("%d", va_arg(nums, int));
			else
				printf("%d%s", va_args(nums, int), *separator);
		}
	}
	va_end(nums);
}
