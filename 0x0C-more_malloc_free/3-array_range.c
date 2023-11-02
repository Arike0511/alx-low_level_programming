#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pointer;
	int a, sizell;

	if (min > max)
		return (NULL);

	sizell = max - min + 1;

	pointer = malloc(sizeof(int) * sizell);

	if (pointer == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		pointer[a] = min++;

	return (pointer);
}
