#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: A pointer to a char that will be changed
 * @src: A pointer to a char that will be changed
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
