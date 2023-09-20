#include "main.h"

/**
 * _strncat - concatinates two strings by joining part of src to dest
 * @src: pointer to source string
 * @dest: pointer to destination string
 * @n:number of characters of src to be concatenated
 *
 * Return: pointer to  concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, len1 = 0, j = 0;

	while (dest[len] != '\0')
		len++;
	while (src[len1] != '\0')
		len1++;

	while (j < n && j < len1)
	{
		dest[len] = src[j];
		len++;
		j++;
	}
	dest[len] = '\0';

	return (dest);
}
