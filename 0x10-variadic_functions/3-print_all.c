#include "variadic_functions.h"

void print_char(va_list all);
void print_int(va_list all);
void print_float(va_list all);
void print_str(va_list all);

/**
 * print_all - prints anything that is passed
 *
 * @format: const pointer to a const string which list type of arguments passed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *separate = "";
	int i = 0, n = 0;
	va_list all;
	type_f types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(all, format);
	while (format[n])
	{
		while (types[i].type != NULL)
		{
			if (*types[i].type == format[n])
			{
				printf("%s", separate);
				types[i].f(all);
				separate = ", ";
			}
			i++;
		}
		i = 0, n++;
	}
	printf("\n");
	va_end(all);
}

/**
 * print_char - prints a char
 *
 * @all: pointer to char
 *
 * Return: void
 */
void print_char(va_list all)
{
	printf("%c", va_arg(all, int));
}
/**
 * print_int - print an int
 *
 * @all: pointer to int
 *
 * Return: void
 */
void print_int(va_list all)
{
	printf("%d", va_arg(all, int));
}
/**
 * print_float - print a float
 *
 * @all: pointer to float
 *
 * Return: void
 */
void print_float(va_list all)
{
	printf("%f", va_arg(all, double));
}
/**
 * print_str - print a string
 *
 * @all: pointer to the string
 *
 * Return: void
 */
void print_str(va_list all)
{
	char *str = va_arg(all, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
