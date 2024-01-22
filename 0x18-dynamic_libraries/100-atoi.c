#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int siged = 1, a = 0;
	unsigned int resnig = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
			siged *= -1;
		a++;
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		resnig = (resnig * 10) + (s[a] - '0');
		a++;
	}

	resnig *= siged;
	return (resnig);
}
