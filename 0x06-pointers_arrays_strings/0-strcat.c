#include "main.h"

/**
 * _strcat - concatinates two strings by joining src to dest
 * @src: pointer to source string
 * @dest: pointer to destination string
 *
 * Return: a pointer to the destination string which has been joined with src
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, j = 0;

	while (dest[len] != '\0')
		len++;

	while (src[j] != '\0')
	{
		dest[len] = src[j];
		len++;
		j++;
	}
	dest[len] = '\0';

	return (dest);
}
