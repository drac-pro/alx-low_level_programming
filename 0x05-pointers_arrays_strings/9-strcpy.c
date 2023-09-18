#include "main.h"

/**
 * _strcpy - copies a string into another string
 * @src: pointer to source string
 * @dest: pointer to destination string
 *
 * Return: a pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';

	return (dest);
}
