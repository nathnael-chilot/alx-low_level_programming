#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of \ character
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, tab;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (tab = 0; tab < i; tab++)
			{
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
