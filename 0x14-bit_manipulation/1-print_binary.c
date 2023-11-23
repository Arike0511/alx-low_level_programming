#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int no;
	unsigned int abs;

	no = 1;
	for (abs = 1; abs <= power; abs++)
	{
		no *= base;
	}
	return (no);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int sep, checked;
	char fg;

	fg = 0;
	sep = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (sep != 0)
	{
		checked = n & sep;
		if (checked == sep)
		{
			fg = 1;
			_putchar('1');
		}
		else if (fg == 1 || sep == 1)
		{
			_putchar('0');
		}
		sep >>= 1;
	}
}
