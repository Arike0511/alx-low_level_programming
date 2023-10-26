#include "main.h"

/**
 *  _islower - A function that checks for lowercase character.
 * @c: The character to be checked
 * Return: 0 (Success) and 1 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
