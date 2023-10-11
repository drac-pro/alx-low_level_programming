#include "function_pointers.h"

/**
 * print_name - print a name
 *
 * @name: pointer to the name
 * @f: pointer to the function to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
