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
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
