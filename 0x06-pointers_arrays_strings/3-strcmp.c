#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 *
 * Return: value less than 0 if string is less than the other.
 * value greater than 0 if string is greater than the other.
 * 0 if strings are equal.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while(1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else 
			i++;
	}
	return (diff);
}

