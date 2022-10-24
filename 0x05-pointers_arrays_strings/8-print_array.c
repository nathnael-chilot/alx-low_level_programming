#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: A pointer to an int that will be updated/ changed
 * @n: return value n
 *
 * Return: void which ,means our answer is correct
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n")
}
