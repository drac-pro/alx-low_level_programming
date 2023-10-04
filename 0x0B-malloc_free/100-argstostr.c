#include "main.h"
#include <stdlib.h>

/**
 * argstostr - cocatenates all arguments that are used when calling the program
 *
 * @ac: number of arguments passed
 * @av: pointer to an array of pointer that point to the arguments
 *
 * Return: pointer to allocated space in memory containing concatenated strings
 */
char *argstostr(int ac, char **av)
{
	int i, j, z = 0, size = 0;
	char *_argconcat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}
	size += ac++;

	_argconcat = malloc(sizeof(char) * size);

	if (_argconcat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, z++)
			_argconcat[z] = av[i][j];
		_argconcat[z] = '\n';
		z++;
	}
	_argconcat[z] = '\0';

	return (_argconcat);
}
