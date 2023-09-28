#include "main.h"

int _strlen_recursion(char *s);
int palindrome(char *s, int i, int len);
/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: pointer to string to be checked
 *
 * Return: 1 if sting is a palindrome and 0 is not.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = (_strlen_recursion(s) - 1);

	return (palindrome(s, i, len));
}

/**
 * _strlen_recursion - calculates the length of a string
 *
 * @s: pointer to string
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	/*base case*/
	if (*s == '\0')
		return (0);

	len++;
	return (len + _strlen_recursion(s + 1));
}

/**
 * palindrome - checks if a string is a palindrome
 *
 * @s: pointer to string to be checked
 * @i: initial point
 * @len: length of the string
 *
 * Return: 1 if sting is a palindrome and 0 is not.
 */
int palindrome(char *s, int i, int len)
{
	if (i >= len)
		return (1);
	if (s[i] == s[len])
		return (palindrome(s, i + 1, len - 1));
	return (0);
}
