#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if success
 *
 */

int main (void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}

	putchar('\n');

	return (0);

}
