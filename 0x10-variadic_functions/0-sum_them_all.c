#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list aptitude;
	unsigned int a, summing = 0;

	va_start(aptitude, n);

	for (a = 0; a < n; a++)
		summing += va_arg(aptitude, int);

	va_end(aptitude);

	return (summing);
}
