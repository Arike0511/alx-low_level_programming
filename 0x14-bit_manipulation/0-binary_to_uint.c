#include "main.h"

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int.
 * @b: Pointing to a string of 0 and 1 chars.
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int floor;
	unsigned int no;

	no = 0;
	if (!b)
	{
		return (0);
	}
	for (floor = 0; b[floor] != '\0'; floor++)
	{
		if (b[floor] != '0' && b[floor] != '1')
		{
			return (0);
		}
	}

	for (floor = 0; b[floor] != '\0'; floor++)
	{
		no <<= 1;
		if (b[floor] == '1')
			no += 1;
	}
	return (no);
}
