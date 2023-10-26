#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: if c is a letter, lowercase or uppercase
 * Return: 1 (success) and 0 (success)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
