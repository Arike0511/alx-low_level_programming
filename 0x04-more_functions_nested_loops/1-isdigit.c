#include "main.h"

/**
 * _isdigit - A function that check for a digit (0 through 9)
 * @c: digit
 * Return: 1 if c is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
