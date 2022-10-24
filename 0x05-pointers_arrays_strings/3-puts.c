#include "main.h"

/**
 * _puts - prints a string
 * @str: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void _puts(char *str)
{
	char *ch;
	int n;

	ch = str;

	for (n = 0; ch[n]; n++)
	{
		_putchar(ch[n]);
	}

	_putchar('\n');
}
