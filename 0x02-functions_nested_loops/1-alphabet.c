#include "main.h"

/**
 * print_alphabet_x10 - Prints times the alphabet, in lowercase.
 *
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
