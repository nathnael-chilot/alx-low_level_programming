#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int number1, number2;

	for (number1 = 0; number1 < 10; number1++)
	{
		for (number2 = 0; number2 <= 14; number2++)
		{
			if (number2 > 9)
			{
				_putchar((number2 / 10) + '0');
			}
			_putchar((number2 % 10) + '0');
		}
		_putchar(10);
	}
}
