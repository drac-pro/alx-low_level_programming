#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to with
 * a constant byte
 *
 * @s: pointer to memory area.
 * @b: constant byte to be filled
 * @n: number of bytes of memory area where b will be filled into
 *
 * Return: pointer to memory area that has been filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n && s[i] != '\0'; i++)
		s[i] = b;

	return (s);
}
