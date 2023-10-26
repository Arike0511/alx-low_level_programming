#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion -  a function that returns the natural square root.
 * @n: input value n.
 * Return: Always 0 (success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion -  a function that returns the natural square root.
 * @n: input value n;
 * @i: input value i;
 * Return: Always 0 (success)
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
	if (i * 1 > n)
	{
		return (-1);
	}
	if (i * 1 == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
