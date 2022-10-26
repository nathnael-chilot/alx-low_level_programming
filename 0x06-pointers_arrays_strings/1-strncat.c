#include "main.h"

/**
 * _strncat - function that concatenates two strings. it will use
 * at most n bytes from src. src does not need to be null terminated.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 * @n: number of bytes to be concatenated.
 *
 * Return: pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, j;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}

	dest[len] = '\0';
	return (dest);
}

