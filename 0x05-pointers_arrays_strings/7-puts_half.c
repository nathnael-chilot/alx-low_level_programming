#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: A pointer to an int that will be changed
 *
 * Return: void which means it is correct
 */

void puts_half(char *str)
{
	int i, last;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	last = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar (str[i]);
	}

	_putchar ('\n');
}

