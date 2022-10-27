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
	int i, val;

	for (i = 0; s1[i] == s2[i] && s1 != '\0'; i++)
	{
	}

	val = s1[i] - s2[i];

	return (val);
}
