#include "main.h"

/**
 * print_alphabet_x10 - Prints times the alphabet, in lowercase.
 *
 */

void print_alphabet_x10(void)
{
	char ch;

	for (ch = 'a'; ch <+ 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
