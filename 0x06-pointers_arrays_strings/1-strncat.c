#include "main.h"

/**
 * char *_strncat - a function that concatenates two strings.
 * @dest: A function parameter
 * @src: An input value
 * @n: integer by byte
 * Return: 0 (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
