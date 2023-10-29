#include "main.h"

/**
 *  _puts - puts a string followed by line, to stdout.
 *  @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
