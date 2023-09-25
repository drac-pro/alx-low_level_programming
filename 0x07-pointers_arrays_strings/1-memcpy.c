#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to destination  memory area
 * @src: pointer to source memory area
 * @n: number of bytes of memory area dest to be copied
 *
 * Return: pointer to destinatio memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
