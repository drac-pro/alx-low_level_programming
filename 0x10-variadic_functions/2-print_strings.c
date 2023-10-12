#include "variadic_functions.h"

/**
 * print_strings - print strings that are passed followed by a new line
 *
 * @separator: string which separates the strings to be printed
 * @n: number of variable arguments (strings)
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);
	for (i = 1; i <= n; i++)
	{
		if (va_arg(str, char *) == NULL)
			printf("nil");
		else
			printf("%s", va_arg(str, char *));
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
