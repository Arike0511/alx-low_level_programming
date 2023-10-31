#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array -  a function that creates an array of chars.
 * Return: NUll, if size = 0; pointer to the array if it fails
 * @size: value
 * @c: char value
 */

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int a;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			string[a] = c;
		}
		return (string);
	}
}
