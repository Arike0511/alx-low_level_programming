#include "main.h"

/**
 * print_numbers -  a function that prints the numbers.
 * Return: 0 (success)
 */

void print_numbers(void)
{
	int numbers[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(numbers[i]);
	}
	_putchar('\n');
}
