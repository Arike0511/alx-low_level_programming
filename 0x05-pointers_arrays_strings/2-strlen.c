#include "main.h"
#include <string.h>

/**
 * _strlen - A function that returns the length of a string.
 * @s: char type with variable s
 * Return: n.
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
