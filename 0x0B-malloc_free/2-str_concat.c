#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int lin, cit;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lin = cit = 0;
	while (s1[lin] != '\0')
		lin++;
	while (s2[cit] != '\0')
		cit++;
	conct = malloc(sizeof(char) * (lin + cit + 1));
	if (conct == NULL)
	{
		return (NULL);
	}
	lin = cit = 0;

	while (s1[lin] != '\0')
	{
		conct[lin] = s1[lin];

		lin++;
	}
	while (s2[cit] != '\0')
	{
		conct[lin] = s2[cit];
		lin++, cit++;
	}

	conct[lin] = '\0';
	return (conct);
}
