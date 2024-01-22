#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int liam = 0;
	int xing = 0;

	while (*(src + liam) != '\0')
	{
		liam++;
	}
	for ( ; xing < liam ; xing++)
	{
		dest[xing] = src[xing];
	}
	dest[liam] = '\0';
	return (dest);
}
