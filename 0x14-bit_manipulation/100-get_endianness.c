#include "main.h"

/**
 * get_endianness - checks the endianness of a machine
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
