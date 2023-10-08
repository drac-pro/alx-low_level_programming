#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_num(int n);
void print_str(char *str);
int is_digit(char *str);
char *remove_zero(char *str);
/**
 * main - multiply two numbers and print the result, the numbers are passed
 * when the program is called
 *
 * @argc: number of arguments passed
 * @argv: pointer to arguments passed
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	unsigned long int num;

	if (argv[1][0] == '0')
		argv[1] = remove_zero(argv[1]);
	if (argv[2][0] == '0')
		argv[2] = remove_zero(argv[2]);
	if (argc != 3)
	{
		print_str("Error\n");
		exit(98);
	}
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		print_str("Error\n");
		exit(98);
	}

	num = atoi(argv[1]) * atoi(argv[2]);
	print_num(num);
	_putchar('\n');
	return (0);
}
/**
 * print_num - print a number
 *
 * @n: number to be printed
 *
 * Return: void
 */
void print_num(int n)
{
	unsigned long int i = n;

	if (n < 0)
	{
		n *= -1;
		i = n;
		_putchar('-');
	}
	i /= 10;
	if (i != 0)
		print_num(i);
	_putchar((unsigned long int)n % 10 + '0');
}
/**
 * print_str - print a srting using putchar
 *
 * @str: pointer to the string
 *
 * Return: void
 */
void print_str(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}

/**
 * is_digit - check if a string has only digits
 *
 * @str: pointer to srting
 *
 * Return: 0 if false and 1 if true
 */
int is_digit(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}

	return (1);
}
/**
 * remove_zero - remove leading zeros from a string
 *
 * @str: pointer to the string
 *
 * Return: pointer to next non zero character 
 */
char *remove_zero(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}
