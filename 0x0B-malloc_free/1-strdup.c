#include "main.h"
#include <stdlib.h>

/**
 * _strdup - that returns a pointer to a newly allocated space in memory
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *ar;
	unsigned int i, j;

	if (str == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	ar = (char *)malloc(sizeof(char) * (i + 1));

	if (ar == NULL)
		retutn (NULL);

	for (j = 0; j <= i; j++)
		ar[j] = str[j];

	return (ar);
}
