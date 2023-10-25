#include "main.h"

/**
 * factorial -a function that returns the factorial of a given number
 * @n:integer
 *Return: -1 to indicate an error and zero to indicate sucess
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
