#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers.
 * Return: 0 (Success)
 */

void more_numbers(void)
{
	char numbers[20] = "01234567891011121314";
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 20; j++)
		{
			_putchar(numbers[j]);
		}
		_putchar('\n');
	}
}
