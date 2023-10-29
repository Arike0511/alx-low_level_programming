#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: a integer swap.
 * @b: b integer swap.
 */

void swap_int(int *a, int *b)
{
	int m;
	int n;

	m = *a;
	n = *b;
	*a = n;
	*b = m;
}
