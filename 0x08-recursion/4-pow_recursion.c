#include "main.h"

/**
 * _pow_recursion - a function that returns the
 *  value of x raised to the power of y
 *  @x: base of the number
 *  @y: power
 *  Return: y < 0 ? -1 : 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (x * _pow_recursion(x, (y - 1)));

	return (0);
}
