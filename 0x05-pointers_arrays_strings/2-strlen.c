#include "main.h"

/**
 * _strlen - calculated the length of a string of characters
 * @s: pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}

	return (i);
}
