#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if success
 *
 */

int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdidgit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}

	else if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	}

	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}

	return (0);
}
