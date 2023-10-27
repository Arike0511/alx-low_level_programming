#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int konstant;

	while (*s)
	{
		for (konstant = 0; accept[konstant]; konstant++)
		{
		if (*s == accept[konstant])
		return (s);
		}
	s++;
	}
	return ('\0');
}
