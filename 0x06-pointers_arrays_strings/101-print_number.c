#include "main.h"

/**
 * print_number - prints an integer. 
 * only using the putchar function.
 * @n: integer to be printed.
 *
 * Return: void.
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
