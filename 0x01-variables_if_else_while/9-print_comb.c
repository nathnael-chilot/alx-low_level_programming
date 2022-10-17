#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if success
 *
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
		
		if (n == 9)
		{
			continue;
		}

		putchar(',');

		putchar(' ');

	}

		putchar('\n');

		return (0);
}
