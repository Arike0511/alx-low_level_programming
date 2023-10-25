#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - A function that returns a prime number
 * @n: input value of n.
 * Return: Always (0) success.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (actual_prime(n, (n - 1)));
}

/**
 * actual_prime - a function that returns a prime number.
 * @n: input value of n
 * @i: iterator
 * Return: if true 1, otherwise 0.
 */

int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
