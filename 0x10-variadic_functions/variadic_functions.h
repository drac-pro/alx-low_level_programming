#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct type_to_function - Struct type_f
 *
 * @type: The type
 * @f: The function associated
 */
typedef struct type_to_function
{
        char *type;
        void (*f)(va_list all);
} type_f;

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif /*VARIADIC_FUNCTIONS_H*/
