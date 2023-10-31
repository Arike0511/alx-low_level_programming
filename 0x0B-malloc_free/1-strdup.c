#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ccc;
	int s, l = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	s = 0;

	while (str[s] != '\0')
		s++;
       
        ccc = malloc(sizeof(char) * (s + 1));

	if (ccc == NULL)
	{
		return (NULL);
	}

	for (l = 0; str[l]; l++)
	{
		ccc[l] = str[l];
	}
	return (ccc);
}
