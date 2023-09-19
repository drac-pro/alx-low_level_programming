#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - entry point
 * Description: generate a valid random password.
 *
 * Return: 0 (success)
 */
int main(void)
{
	long long code;
	int i;
	char password[8];

	srand(time(0));

	for (i = 0; i < 8; i++)
	{
		code = (rand() % INT_MAX) + 48;
		if ((code < 0 && code >= CHAR_MIN) || (code >= 0 && code <= CHAR_MAX))
		{
		if (code == 32 || (code >=9 && code <= 13))
		{
			i--;
			continue;
		}
		password[i] = code;
		}
		else
		{
			if (code < 0)
				password[i] = (-code % CHAR_MAX);
			else
			{
			if (code == 32 || (code >=9 && code <= 13))
			{
				i--;
				continue;
			}
			password[i] = code % CHAR_MIN;
			}
		}
	}
	for (i = 0; i < 8; i++)
	{
		printf("%c", password[i]);
	}
	printf("\n");

	return 0;
}
