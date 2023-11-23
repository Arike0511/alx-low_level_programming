#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int ant, ctbit = 0;
	unsigned long int exist;
	unsigned long int prem = n ^ m;

	for (ant = 63; ant >= 0;)
	{
		exist = prem >> ant;
		if (exist & 1)
		{
			ctbit++;
		}
		ant--;
	}

	return (ctbit);
}
