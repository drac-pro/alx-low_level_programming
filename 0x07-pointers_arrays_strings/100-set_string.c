#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer to string pointer to be set
 * @to: pointer to string to be used to set
 *
 * return: void
 */
void set_string(char **s, char *to)
{
	while (*to != '\0')
	{
		**s = *to;
		s++;
		to++;
	}
	**s = '\0';
}
