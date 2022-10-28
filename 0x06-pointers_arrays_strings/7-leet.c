#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T are replaced by 7
 * Letters l and L are replaced by 1
 * @s: pointer to string.
 *
 * Return: pointer to s.
 */

char *leet(char *s)
{
	int i, j;
	char ll[] = "aAeEoOtTlL";
	char ln[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (ll[j] == s[i])
			{
				s[i] = ll[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}

