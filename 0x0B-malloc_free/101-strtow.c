#include "main.h"
#include <stdlib.h>

int number_of_words(char *s);
void free_space(char **s, int row);
/**
 * strtow - splits a string into words
 *
 * @str: pointer to string to be slipt
 *
 * Return: a pointer to a two dimensional array containing the words
 */
char **strtow(char *str)
{
	int j = 0, z, len = 0, size;
	char **words, *_word;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	size = number_of_words(str);
	if (size == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (size + 1));
	if (words == NULL)
		return (NULL);
	for (; *str != '\0' && j < size;)
	{
		if (*str == ' ')
			str++;
		else
		{
			_word = str;
			for (; *str != ' ' && *str != '\0';)
			{
				len++;
				str++;
			}
			words[j] = malloc(sizeof(char) * (len + 1));
			if (words[j] == NULL)
			{
				free_space(words, j);
				return (NULL);
			}
			for (z = 0; *_word != ' ' && *_word != '\0'; z++)
			{
				words[j][z] = *_word;
				_word++;
			}
			words[j][z] = '\0';
			str++, len = 0, j++;
		}
	}
	return (words);
}
/**
 * number_of_words - finds number of words in a string.
 *
 * @s: pointer to the string
 *
 * Return: the number of words in the string
 */
int number_of_words(char *s)
{
	int i, num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == ' ')
			s++;
		else
		{
			for (; s[i] != ' ' && s[i] != '\0'; i++)
				s++;
			num++;
		}
	}
	return (num);
}

/**
 * free_space - free allocated memory containing a two dimensional array
 *
 * @s: pointer to allocated memory containing two dimentional array
 * @row: number of rows of the two dimensional array
 *
 * Return: void
 */
void free_space(char **s, int row)
{
	int i;

	for (i = 0; i < row; i++)
		free(s[i]);
	free(s);
}
