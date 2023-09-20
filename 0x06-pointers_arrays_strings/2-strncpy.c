#include "main.h"

/**
 * _strncpy - copy n chracters of a string into another string
 * @src: pointer to source string
 * @dest: pointer to destination string
 * @n: number of characters to be copied
 *
 * Return: a pointer to the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
