#include "main.h"

/**
 * print_alphabet_x10 - Prints times the alphabet, in lowercase.
 *
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <+ 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
	return (0);
}
