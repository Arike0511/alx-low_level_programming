#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int absolute;
	char *bn;

	absolute = 1;
	bn = (char *)&absolute;
	return (*bn);
}
