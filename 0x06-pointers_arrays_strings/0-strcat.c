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
	int len1, len2, i;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	for (len2 = 0; src[len2] != '\0'; len2++)

	int len3 = (len1 + len2) - 2;

	dest[len3];

	for (i = 0; src[i] != '0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
